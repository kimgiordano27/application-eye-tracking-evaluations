/*
FUNCTION_NAME: Sirenix.Serialization.SingleSerializer$$WriteValue
ENTRY_POINT: 03824670
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_21;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_SingleSerializer__WriteValue(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_020612a4();
  FUN_020612a4(PTR_DAT_046985b0);
  FUN_020612a4(PTR_DAT_046985b8);
  FUN_020612a4(PTR_DAT_046985c0);
  FUN_020612a4(PTR_DAT_046985c8);
  FUN_020612a4(PTR_DAT_04698590);
  FUN_020612a4(PTR_DAT_046985d0);
  FUN_020612a4(PTR_DAT_046985d8);
  FUN_020612a4(PTR_DAT_046985e0);
  FUN_020612a4(PTR_DAT_046985e8);
  FUN_020612a4(PTR_DAT_046985f0);
  FUN_020612a4(PTR_DAT_046985f8);
  FUN_020612a4(PTR_DAT_04698600);
  FUN_020612a4(PTR_DAT_04698608);
  FUN_020612a4(PTR_DAT_04698610);
  FUN_020612a4(PTR_DAT_04698618);
  FUN_020612a4(PTR_DAT_04698620);
  FUN_020612a4(PTR_DAT_04698628);
  *(undefined1 *)(unaff_x19 + 0x6fd) = 1;
  lVar2 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x21,0x14);
  uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
  FUN_037a6ee0(uVar3,*unaff_x20,0);
  puVar1 = PTR_DAT_046985c8;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x20),uVar3);
    uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
    FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_046985e0;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x28),uVar3);
      uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
      FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_046985f8;
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = uVar3;
        thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x30),uVar3);
        uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
        FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
        puVar1 = PTR_DAT_04698610;
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar2 + 0x38) = uVar3;
          thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x38),uVar3);
          uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
          FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
          puVar1 = PTR_DAT_046985b0;
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) = uVar3;
            thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x40),uVar3);
            uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
            FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
            puVar1 = PTR_DAT_04698618;
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = uVar3;
              thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x48),uVar3);
              uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
              FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
              puVar1 = PTR_DAT_046985d8;
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) = uVar3;
                thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x50),uVar3);
                uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
                puVar1 = PTR_DAT_04698608;
                if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(lVar2 + 0x58) = uVar3;
                  thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x58),uVar3);
                  uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                  FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
                  puVar1 = PTR_DAT_046985a0;
                  if (8 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x60) = uVar3;
                    thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x60),uVar3);
                    uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                    FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
                    puVar1 = PTR_DAT_046985a8;
                    if (9 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x68) = uVar3;
                      thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x68),uVar3);
                      uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                      FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
                      puVar1 = PTR_DAT_046985c0;
                      if (10 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x70) = uVar3;
                        thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x70),uVar3);
                        uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                        FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
                        puVar1 = PTR_DAT_04698598;
                        if (0xb < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x78) = uVar3;
                          thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x78),uVar3);
                          uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                          FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
                          puVar1 = PTR_DAT_046985d0;
                          if (0xc < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x80) = uVar3;
                            thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x80),uVar3);
                            uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                            FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
                            puVar1 = PTR_DAT_046985e8;
                            if (0xd < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x88) = uVar3;
                              thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x88),uVar3);
                              uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                              FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
                              puVar1 = PTR_DAT_046985b8;
                              if (0xe < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x90) = uVar3;
                                thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x90),uVar3);
                                uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12);
                                FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
                                puVar1 = PTR_DAT_046985f0;
                                if ((*(uint *)(lVar2 + 0x18) & 0xfffffff0) != 0) {
                                  *(undefined8 *)(lVar2 + 0x98) = uVar3;
                                  thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0x98),uVar3);
                                  uVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0x12)
                                  ;
                                  FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
                                  puVar1 = PTR_DAT_04698620;
                                  if (0x10 < *(uint *)(lVar2 + 0x18)) {
                                    *(undefined8 *)(lVar2 + 0xa0) = uVar3;
                                    thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0xa0),uVar3);
                                    uVar3 = RootMotion_Dynamics_Muscle__get_colliders
                                                      (*unaff_x22,0x12);
                                    FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
                                    puVar1 = PTR_DAT_04698628;
                                    if (0x11 < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0xa8) = uVar3;
                                      thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0xa8),uVar3);
                                      uVar3 = RootMotion_Dynamics_Muscle__get_colliders
                                                        (*unaff_x22,0x12);
                                      FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
                                      puVar1 = PTR_DAT_04698600;
                                      if (0x12 < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0xb0) = uVar3;
                                        thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0xb0),uVar3);
                                        uVar3 = RootMotion_Dynamics_Muscle__get_colliders
                                                          (*unaff_x22,0x12);
                                        FUN_037a6ee0(uVar3,*(undefined8 *)puVar1,0);
                                        puVar1 = PTR_DAT_046925a0;
                                        if (0x13 < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0xb8) = uVar3;
                                          thunk_FUN_020ccb58((undefined8 *)(lVar2 + 0xb8),uVar3);
                                          **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
                                          thunk_FUN_020ccb58(*(undefined8 *)(*(long *)puVar1 + 0xb8)
                                                             ,lVar2);
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


