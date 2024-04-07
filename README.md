# EdgeForge
IOT Framework for edge devices (Nodes) written in C++. A framework to simplify the setup of any IOT related project.

## Project structure
```bash
├─ include                      # Public headers
├─ lib                          # Library structure
│   ├─ include                  # Internal Headers
│   │  ├─ **/*.h
│   ├─ src                      # Internal Source
│   │  ├─ **/*.cpp
├─ LICENSE                      # Apache License
├─ README.md                    # This file
└─ .gitignore
```


## ToDo
This list specifies all ideas for the `EdgeForge` project. Feel free to suggest any topics to integrate in the Discussions tab!
- Data structure
    - [ ] Sensor Objects
        - [ ] Multiple datatypes
        - [ ] Custom fields
        - [ ] Events
    - [ ] Actuator Objects
        - [ ] Input definitions
        - [ ] Output events
        - [ ] Custom fields
- Structure management
    - [ ] Device configuration
    - [ ] Event tirggers
    - [ ] Object linking (I/O)
    - [ ] Remote device linking
- [ ] Data publisher
    - [ ] Data parsing
        - [ ] JSON
        - [ ] YAML
        - [ ] Comma seperated
        - [ ] ... (TBD)
    - [ ] Publishing
        - [ ] HTTP
        - [ ] HTTPS
        - [ ] MQTT
        - [ ] Cloud
            - [ ] Azure
            - [ ] AWS
