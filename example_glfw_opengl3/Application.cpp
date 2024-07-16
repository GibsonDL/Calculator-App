#include "Application.h"
#include "imgui.h"
#include <vector>
#include <cmath>
#include <iostream>
#include <utility>
#include <string>
using namespace std;

double num1,num2;

namespace MyApp
{
    void RenderUI()
    {
        ImGui::Begin("Settings");
        ImGui::Text("Calculator");

        //Calculator testing
        static double one = 1.0;
        static double two = 2.0;

        vector<pair<float, float>> numberPositions = {
            {100.0f, 20.0f}, // Position for button 1
            {151.0f, 20.0f},
            {202.0f, 20.0f},
            {100.0f, 71.0f},
            {151.0f, 71.0f},
            {202.0f, 71.0f},
            {100.0f, 122.0f},
            {151.0f, 122.0f},
            {202.0f, 122.0f},

        };
        // Loop through each position and draw a button there
        for (size_t i = 0; i < numberPositions.size(); ++i)
        {
            // Set the cursor to the desired position
            ImGui::SetCursorPos(ImVec2(numberPositions[i].first, numberPositions[i].second));

            // Create a button at this position
            ImGui::Button(std::to_string(i + 1).c_str(), ImVec2(50, 50)); // Button label is its index + 1
        }


        char op[6] = { '0', '+', '-', '*', '/', '='};

        vector<pair<float, float>> buttonPositions =
            {{151.0f,173.0f},
            {253.0f,20.0f},
            {253.0f,71.0f},
            {253.0f,122.0f},
            {253.0f,173.0f},
            {253.0f,224.0f}

        };

        // Loop through each position and draw a button there
        for (size_t i = 0; i < buttonPositions.size(); ++i) {
            // Set the cursor to the desired position
            ImGui::SetCursorPos(ImVec2(buttonPositions[i].first, buttonPositions[i].second));

            if (i < sizeof(op)/sizeof(op[0])) {
                string opLabel(1, op[i]);

                // Check if the button is pressed
                if (ImGui::Button(opLabel.c_str(), ImVec2(50, 50))) {
                    // Button press detected, perform an action
                    cout << "Button " << opLabel << " was clicked" << endl;
                    // Here, you can call any function you want to execute on button press
                    // For example: PerformOperation(op[i]);
                    cin >> num1;
                    switch (op[i]){

                    case '+':
                        break;


                    }
                }
            }
        }



        ImGui::End();

       // ImGui::ShowDemoWindow();
           // static int clicked = 0;
            //if (ImGui::Button("Button"))
            //    clicked++;
           // if (clicked & 1)
           // {
          //      ImGui::SameLine();
          //      ImGui::Text("Thanks for clicking me!");
          //  }
        }

    }


