# Trading-App

Welcome to the Trading App prototype! This application provides users with real-time data for various company stocks, allowing them to make informed decisions on buying and selling. If the stock price meets the user's criteria, the app will send a signal to buy or sell stocks according to the user's specified limit. Additionally, users can obtain the cost of the stock based on the current price when a signal is sent.

[Documentation on building Trading App in C++](https://iq.opengenus.org/trading-application-in-cpp/) step by step.
![Screenshot](./output.png)

## Table of Contents

- [Trading-App](#trading-app)
  - [Table of Contents](#table-of-contents)
  - [Purpose of Implementation](#purpose-of-implementation)
  - [Project Implementation](#project-implementation)
    - [Project Structure](#project-structure)
  - [Built With](#built-with)
  - [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
  - [Authors 👤](#authors-)
    - [Sachin Kumar Singh](#sachin-kumar-singh)

## Purpose of Implementation

The purpose of implementing the Trading App is to offer users a powerful tool that facilitates real-time stock trading decisions. This application is designed to empower users with the following key functionalities:

- Real-time Data Monitoring: The app continuously tracks stock prices in real-time, ensuring users have access to up-to-the-minute market information.

- Signal Generation: Based on user-defined criteria, the app generates signals to either buy or sell stocks when specific conditions are met. This feature assists users in making timely trading decisions.

- Cost Calculation: Users can easily determine the cost of stocks at the moment when a signal is generated, aiding them in assessing potential profit or loss.

## Project Implementation

This section provides an overview of the implementation of the trading application and how the source code is organized.

### Project Structure

The trading application is organized into several files, each serving a specific purpose. Here's an overview of the project structure:

## Built With

This application is primarily built using C++ STL (Standard Template Library).

## Getting Started

To get started with the Trading App, follow these steps:

1. Download or clone this repository using the following command:
   ```
   git clone https://github.com/jet-black-ninja/tradingApp.git

   ```

2. Navigate to the project folder.

3. Compile the application using Visual Studio Code with the following command:
   ```
   g++ -o "output/output file name" main.cpp curl_functions.cpp functions.cpp -lcurl -ljsoncpp
   ```

4. Run the compiled application using the following command:
   ```
   ./output/output file
   ```
5. **Shortcut for running and compiling:**
Alternatively, you can use the shortcut script to simplify the compiling and running process.

Run: ``` ./compile-and-run.sh  ```

### Prerequisites

Before running the Trading App, make sure you have the following prerequisites installed:

- **curl library:** Install the curl library for making HTTP requests.

- **JsonCpp library:** Install the JsonCpp library for JSON parsing and manipulation in C++.

- **API Key:** Sign up at Twelve Data to obtain your own API key. Place your API key in the `config.json` file.

## Authors 👤

### Sachin Kumar Singh

- [GitHub](https://github.com/jet-black-ninja)
- [LinkedIn](https://www.linkedin.com/in/sachin-kumar-singh-133717c/)