/*
FUNCTION_NAME: Sirenix.Serialization.StringSerializer$$ReadValue
ENTRY_POINT: 03824770
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_19;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_StringSerializer__ReadValue(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x22;
  
  FUN_037a6ee0();
  puVar1 = PTR_DAT_046985c8;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    *(undefined8 *)(unaff_x19 + 0x20) = param_1;
    thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x20),param_1);
    uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
    FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_046985e0;
    if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
      thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x28),uVar2);
      uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
      FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_046985f8;
      if (2 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
        thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x30),uVar2);
        uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
        FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
        puVar1 = PTR_DAT_04698610;
        if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
          thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x38),uVar2);
          uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
          FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
          puVar1 = PTR_DAT_046985b0;
          if (4 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
            thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x40),uVar2);
            uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
            FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
            puVar1 = PTR_DAT_04698618;
            if (5 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
              thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x48),uVar2);
              uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
              FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
              puVar1 = PTR_DAT_046985d8;
              if (6 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
                thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x50),uVar2);
                uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
                puVar1 = PTR_DAT_04698608;
                if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
                  thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x58),uVar2);
                  uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                  FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
                  puVar1 = PTR_DAT_046985a0;
                  if (8 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
                    thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x60),uVar2);
                    uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                    FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
                    puVar1 = PTR_DAT_046985a8;
                    if (9 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
                      thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x68),uVar2);
                      uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                      FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
                      puVar1 = PTR_DAT_046985c0;
                      if (10 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
                        thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x70),uVar2);
                        uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                        FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
                        puVar1 = PTR_DAT_04698598;
                        if (0xb < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x78) = uVar2;
                          thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x78),uVar2);
                          uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                          FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
                          puVar1 = PTR_DAT_046985d0;
                          if (0xc < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x80) = uVar2;
                            thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x80),uVar2);
                            uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                            FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
                            puVar1 = PTR_DAT_046985e8;
                            if (0xd < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
                              thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x88),uVar2);
                              uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                              FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
                              puVar1 = PTR_DAT_046985b8;
                              if (0xe < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
                                thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x90),uVar2);
                                uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                                FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
                                puVar1 = PTR_DAT_046985f0;
                                if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff0) != 0) {
                                  *(undefined8 *)(unaff_x19 + 0x98) = uVar2;
                                  thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x98),uVar2);
                                  uVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12)
                                  ;
                                  FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
                                  puVar1 = PTR_DAT_04698620;
                                  if (0x10 < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
                                    thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0xa0),uVar2);
                                    uVar2 = RootMotion_Dynamics_Muscle__get_colliders
                                                      (*unaff_x22,0x12);
                                    FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
                                    puVar1 = PTR_DAT_04698628;
                                    if (0x11 < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
                                      thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0xa8),uVar2);
                                      uVar2 = RootMotion_Dynamics_Muscle__get_colliders
                                                        (*unaff_x22,0x12);
                                      FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
                                      puVar1 = PTR_DAT_04698600;
                                      if (0x12 < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
                                        thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0xb0),uVar2);
                                        uVar2 = RootMotion_Dynamics_Muscle__get_colliders
                                                          (*unaff_x22,0x12);
                                        FUN_037a6ee0(uVar2,*(undefined8 *)puVar1,0);
                                        puVar1 = PTR_DAT_046925a0;
                                        if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0xb8) = uVar2;
                                          thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0xb8),uVar2)
                                          ;
                                          **(long **)(*(long *)puVar1 + 0xb8) = unaff_x19;
                                          thunk_FUN_020ccb58(*(undefined8 *)(*(long *)puVar1 + 0xb8)
                                                            );
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
                    /* WARNING: Subroutine does not return */
  FUN_02061554();
}


