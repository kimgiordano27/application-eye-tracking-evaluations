/*
FUNCTION_NAME: RootMotion.Dynamics.PuppetMaster$$AddPropMuscle
ENTRY_POINT: 05075f7c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


void RootMotion_Dynamics_PuppetMaster__AddPropMuscle(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  puVar1 = Unity_Properties_TypeConverter<ushort,_object>_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x108) = unaff_x20;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x108);
  uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
  uVar2 = thunk_FUN_02b79644(*unaff_x25);
  FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
  puVar1 = Unity_Properties_TypeConverter<ushort,_sbyte>_TypeInfo;
  if (0x1e < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x110,uVar2);
    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
    uVar2 = thunk_FUN_02b79644(*unaff_x25);
    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
    puVar1 = Unity_Properties_TypeConverter<ushort,_float>_TypeInfo;
    if ((*(uint *)(unaff_x19 + 0x18) & 0xffffffe0) != 0) {
      *(undefined8 *)(unaff_x19 + 0x118) = uVar2;
      thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar2);
      uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
      uVar2 = thunk_FUN_02b79644(*unaff_x25);
      FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
      puVar1 = Unity_Properties_TypeConverter<ushort,_string>_TypeInfo;
      if (0x20 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x120) = uVar2;
        thunk_FUN_02bb0e9c(unaff_x19 + 0x120,uVar2);
        uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
        uVar2 = thunk_FUN_02b79644(*unaff_x25);
        FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
        puVar1 = Unity_Properties_TypeConverter<ushort,_uint>_TypeInfo;
        if (0x21 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x128) = uVar2;
          thunk_FUN_02bb0e9c(unaff_x19 + 0x128,uVar2);
          uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
          uVar2 = thunk_FUN_02b79644(*unaff_x25);
          FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
          puVar1 = Unity_Properties_TypeConverter<ushort,_ulong>_TypeInfo;
          if (0x22 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x130) = uVar2;
            thunk_FUN_02bb0e9c(unaff_x19 + 0x130,uVar2);
            uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
            uVar2 = thunk_FUN_02b79644(*unaff_x25);
            FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
            puVar1 = Unity_Properties_TypeConverter<uint,_bool>_TypeInfo;
            if (0x23 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x138) = uVar2;
              thunk_FUN_02bb0e9c(unaff_x19 + 0x138,uVar2);
              uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
              uVar2 = thunk_FUN_02b79644(*unaff_x25);
              FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
              puVar1 = Unity_Properties_TypeConverter<uint,_byte>_TypeInfo;
              if (0x24 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x140) = uVar2;
                thunk_FUN_02bb0e9c(unaff_x19 + 0x140,uVar2);
                uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                uVar2 = thunk_FUN_02b79644(*unaff_x25);
                FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                puVar1 = Unity_Properties_TypeConverter<uint,_char>_TypeInfo;
                if (0x25 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x148) = uVar2;
                  thunk_FUN_02bb0e9c(unaff_x19 + 0x148,uVar2);
                  uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                  uVar2 = thunk_FUN_02b79644(*unaff_x25);
                  FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                  puVar1 = Unity_Properties_TypeConverter<uint,_double>_TypeInfo;
                  if (0x26 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x150) = uVar2;
                    thunk_FUN_02bb0e9c(unaff_x19 + 0x150,uVar2);
                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                    puVar1 = Unity_Properties_TypeConverter<uint,_int>_TypeInfo;
                    if (0x27 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x158) = uVar2;
                      thunk_FUN_02bb0e9c(unaff_x19 + 0x158,uVar2);
                      uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                      uVar2 = thunk_FUN_02b79644(*unaff_x25);
                      FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                      puVar1 = Unity_Properties_TypeConverter<uint,_long>_TypeInfo;
                      if (0x28 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x160) = uVar2;
                        thunk_FUN_02bb0e9c(unaff_x19 + 0x160,uVar2);
                        uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                        uVar2 = thunk_FUN_02b79644(*unaff_x25);
                        FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                        puVar1 = Unity_Properties_TypeConverter<uint,_object>_TypeInfo;
                        if (0x29 < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x168) = uVar2;
                          thunk_FUN_02bb0e9c(unaff_x19 + 0x168,uVar2);
                          uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                          uVar2 = thunk_FUN_02b79644(*unaff_x25);
                          FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                          puVar1 = Unity_Properties_TypeConverter<uint,_sbyte>_TypeInfo;
                          if (0x2a < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x170) = uVar2;
                            thunk_FUN_02bb0e9c(unaff_x19 + 0x170,uVar2);
                            uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                            uVar2 = thunk_FUN_02b79644(*unaff_x25);
                            FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                            puVar1 = Unity_Properties_TypeConverter<uint,_float>_TypeInfo;
                            if (0x2b < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x178) = uVar2;
                              thunk_FUN_02bb0e9c(unaff_x19 + 0x178,uVar2);
                              uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                              uVar2 = thunk_FUN_02b79644(*unaff_x25);
                              FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                              puVar1 = Unity_Properties_TypeConverter<uint,_string>_TypeInfo;
                              if (0x2c < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0x180) = uVar2;
                                thunk_FUN_02bb0e9c(unaff_x19 + 0x180,uVar2);
                                uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                                puVar1 = Unity_Properties_TypeConverter<uint,_ushort>_TypeInfo;
                                if (0x2d < *(uint *)(unaff_x19 + 0x18)) {
                                  *(undefined8 *)(unaff_x19 + 0x188) = uVar2;
                                  thunk_FUN_02bb0e9c(unaff_x19 + 0x188,uVar2);
                                  uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                  uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                  FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                                  puVar1 = Unity_Properties_TypeConverter<uint,_ulong>_TypeInfo;
                                  if (0x2e < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 400) = uVar2;
                                    thunk_FUN_02bb0e9c(unaff_x19 + 400,uVar2);
                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                                    puVar1 = Unity_Properties_TypeConverter<ulong,_bool>_TypeInfo;
                                    if (0x2f < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0x198) = uVar2;
                                      thunk_FUN_02bb0e9c(unaff_x19 + 0x198,uVar2);
                                      uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                      uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                      FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                                      puVar1 = Unity_Properties_TypeConverter<ulong,_byte>_TypeInfo;
                                      if (0x30 < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0x1a0) = uVar2;
                                        thunk_FUN_02bb0e9c(unaff_x19 + 0x1a0,uVar2);
                                        uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                        uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                        FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                                        puVar1 = 
                                        Unity_Properties_TypeConverter<ulong,_double>_TypeInfo;
                                        if (0x31 < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0x1a8) = uVar2;
                                          thunk_FUN_02bb0e9c(unaff_x19 + 0x1a8,uVar2);
                                          uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                          uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                          FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                                          puVar1 = 
                                          Unity_Properties_TypeConverter<ulong,_short>_TypeInfo;
                                          if (0x32 < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0x1b0) = uVar2;
                                            thunk_FUN_02bb0e9c(unaff_x19 + 0x1b0,uVar2);
                                            uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                            uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                            FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                                            puVar1 = 
                                            Unity_Properties_TypeConverter<ulong,_int>_TypeInfo;
                                            if (0x33 < *(uint *)(unaff_x19 + 0x18)) {
                                              *(undefined8 *)(unaff_x19 + 0x1b8) = uVar2;
                                              thunk_FUN_02bb0e9c(unaff_x19 + 0x1b8,uVar2);
                                              uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                              uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                              FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                                              puVar1 = 
                                              Unity_Properties_TypeConverter<ulong,_long>_TypeInfo;
                                              if (0x34 < *(uint *)(unaff_x19 + 0x18)) {
                                                *(undefined8 *)(unaff_x19 + 0x1c0) = uVar2;
                                                thunk_FUN_02bb0e9c(unaff_x19 + 0x1c0,uVar2);
                                                uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                                                puVar1 = 
                                                Unity_Properties_TypeConverter<ulong,_object>_TypeInfo
                                                ;
                                                if (0x35 < *(uint *)(unaff_x19 + 0x18)) {
                                                  *(undefined8 *)(unaff_x19 + 0x1c8) = uVar2;
                                                  thunk_FUN_02bb0e9c(unaff_x19 + 0x1c8,uVar2);
                                                  uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                  uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0);
                                                  puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_sbyte>_TypeInfo
                                                  ;
                                                  if (0x36 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1d0) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x1d0,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_float>_TypeInfo
                                                  ;
                                                  if (0x37 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1d8) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x1d8,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_string>_TypeInfo
                                                  ;
                                                  if (0x38 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1e0) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x1e0,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_ushort>_TypeInfo
                                                  ;
                                                  if (0x39 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1e8) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x1e8,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_uint>_TypeInfo
                                                  ;
                                                  if (0x3a < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1f0) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x1f0,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<InputActionState_GlobalState>_TypeInfo
                                                  ;
                                                  if (0x3b < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1f8) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x1f8,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<InputUser_GlobalState>_TypeInfo
                                                  ;
                                                  if (0x3c < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x200) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x200,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<Touch_GlobalState>_TypeInfo
                                                  ;
                                                  if (0x3d < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x208) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x208,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_UIElements_UQueryState<VisualElement>_TypeInfo
                                                  ;
                                                  if (0x3e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x210) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x210,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<ActivateEventArgs>_TypeInfo
                                                  ;
                                                  if ((*(uint *)(unaff_x19 + 0x18) & 0xffffffc0) !=
                                                      0) {
                                                    *(undefined8 *)(unaff_x19 + 0x218) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x218,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<AutoGun>_TypeInfo;
                                                  if (0x40 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x220) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x220,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<bool>_TypeInfo;
                                                  if (0x41 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x228) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x228,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<Color>_TypeInfo;
                                                  if (0x42 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x230) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x230,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<CommandBuffer>_TypeInfo
                                                  ;
                                                  if (0x43 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x238) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x238,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<Component>_TypeInfo
                                                  ;
                                                  if (0x44 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x240) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x240,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<DeactivateEventArgs>_TypeInfo
                                                  ;
                                                  if (0x45 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x248) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x248,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<DismemberPart>_TypeInfo
                                                  ;
                                                  if (0x46 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x250) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x250,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<FocusEnterEventArgs>_TypeInfo
                                                  ;
                                                  if (0x47 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 600) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 600,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<FocusExitEventArgs>_TypeInfo
                                                  ;
                                                  if (0x48 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x260) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x260,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<Guid>_TypeInfo;
                                                  if (0x49 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x268) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x268,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<Hand>_TypeInfo;
                                                  if (0x4a < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x270) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x270,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<HoverEnterEventArgs>_TypeInfo
                                                  ;
                                                  if (0x4b < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x278) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x278,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<HoverExitEventArgs>_TypeInfo
                                                  ;
                                                  if (0x4c < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x280) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x280,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<int>_TypeInfo;
                                                  if (0x4d < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x288) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x288,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<MRUKAnchor>_TypeInfo
                                                  ;
                                                  if (0x4e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x290) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x290,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<MessageEventArgs>_TypeInfo
                                                  ;
                                                  if (0x4f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x298) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x298,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<PerformanceChangeNotification>_TypeInfo
                                                  ;
                                                  if (0x50 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x2a0) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x2a0,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<Pose>_TypeInfo;
                                                  if (0x51 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x2a8) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x2a8,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<SelectEnterEventArgs>_TypeInfo
                                                  ;
                                                  if (0x52 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x2b0) = uVar2;
                                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x2b0,uVar2);
                                                    uVar5 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar2 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_050851b0(uVar2,uVar5,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = PTR_DAT_0632dac8;
                                                    if (0x53 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x2b8) = uVar2;
                                                      thunk_FUN_02bb0e9c(unaff_x19 + 0x2b8,uVar2);
                                                      lVar3 = *(long *)(*unaff_x23 + 0xb8);
                                                      *(long *)(lVar3 + 0x20b8) = unaff_x19;
                                                      thunk_FUN_02bb0e9c(lVar3 + 0x20b8);
                                                      lVar4 = *unaff_x23;
                                                      memset((void *)(*(long *)(lVar4 + 0xb8) +
                                                                     0x20c0),0,0x118);
                                                      memset((void *)(*(long *)(lVar4 + 0xb8) +
                                                                     0x21d8),0,0x138);
                                                      lVar3 = *(long *)(lVar4 + 0xb8);
                                                      uVar2 = *(undefined8 *)puVar1;
                                                      *(undefined8 *)(lVar3 + 0x2350) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2318) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2310) = 0;
                                                      *(undefined8 *)(lVar3 + 9000) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2320) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2338) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2330) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2348) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2340) = 0;
                                                      lVar3 = *(long *)(lVar4 + 0xb8);
                                                      *(undefined8 *)(lVar3 + 0x2360) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2358) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2370) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2368) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2380) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2378) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2390) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2388) = 0;
                                                      *(undefined8 *)(lVar3 + 0x23a0) = 0;
                                                      *(undefined8 *)(lVar3 + 0x2398) = 0;
                                                      *(undefined4 *)
                                                       (*(long *)(lVar4 + 0xb8) + 0x23a8) =
                                                           0xffffffff;
                                                      uVar2 = thunk_FUN_02b79644(uVar2);
                                                      FUN_04d9a624(uVar2,0,0,0,0);
                                                      lVar3 = *(long *)(*unaff_x23 + 0xb8);
                                                      *(undefined8 *)(lVar3 + 0x23b0) = uVar2;
                                                      thunk_FUN_02bb0e9c(lVar3 + 0x23b0,uVar2);
                                                      return;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


