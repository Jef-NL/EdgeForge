# EdgeForge
IOT Framework for edge devices (Nodes) written in C++. A framework to simplify the setup of any IOT related project.

## Project structure
```bash
├─ include                      # Public headers
│   ├─ **/*.h
├─ lib                          # Library structure
│   ├─ include                  # Internal Headers
│   │  ├─ **/*.h
│   ├─ src                      # Internal Source
│   │  ├─ CMakeLists.txt        # Internal Source links
│   │  ├─ **/*.cpp
├─ LICENSE                      # Apache License
├─ README.md                    # This file
├─ CMakeLists.txt               # CMake build file
└─ .gitignore
```


## ToDo
This list specifies all ideas for the `EdgeForge` project. Feel free to suggest any topics to integrate in the Discussions tab!
- Data structure
    - [ ] Sensor Objects
        - [ ] Multiple data types
        - [ ] Custom fields
        - [ ] Events
    - [ ] Actuator Objects
        - [ ] Input definitions
        - [ ] Output events
        - [ ] Custom fields
- Structure management
    - [ ] Device configuration
    - [ ] Event triggers
    - [ ] Object linking (I/O)
    - [ ] Remote device linking
- [ ] Data publisher
    - [ ] Measurement triggers
    - [ ] Data parsing
        - [ ] JSON
        - [ ] YAML
        - [ ] Comma separated
        - [ ] ... (TBD)
    - [ ] Publishing
        - [ ] HTTP
        - [ ] HTTPS
        - [ ] MQTT
        - [ ] Cloud
            - [ ] Azure
            - [ ] AWS
- Testing
    - [ ] Unit tests
    - [ ] Integration tests
    - [ ] Demo projects
