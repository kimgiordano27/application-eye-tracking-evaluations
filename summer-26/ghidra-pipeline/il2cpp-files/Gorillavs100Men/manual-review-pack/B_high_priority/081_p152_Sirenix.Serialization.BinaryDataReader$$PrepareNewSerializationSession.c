/*
FUNCTION_NAME: Sirenix.Serialization.BinaryDataReader$$PrepareNewSerializationSession
ENTRY_POINT: 037d74c4
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_BinaryDataReader__PrepareNewSerializationSession(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar4;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  *(undefined8 *)(unaff_x21 + 0x38) = *param_1;
  thunk_FUN_020ccb58((undefined8 *)(unaff_x21 + 0x38));
  puVar2 = PTR_DAT_04695a88;
  if (4 < *(uint *)(unaff_x21 + 0x18)) {
    *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)PTR_DAT_04695a88;
    thunk_FUN_020ccb58((undefined8 *)(unaff_x20 + 0x40));
    if (5 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)PTR_DAT_04695ad0;
      thunk_FUN_020ccb58((undefined8 *)(unaff_x20 + 0x48));
      if (6 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)PTR_DAT_046959f8;
        thunk_FUN_020ccb58((undefined8 *)(unaff_x20 + 0x50));
        if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff8) != 0) {
          *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)PTR_DAT_046959f0;
          thunk_FUN_020ccb58((undefined8 *)(unaff_x20 + 0x58));
          if (8 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined8 *)(unaff_x20 + 0x60) = *(undefined8 *)PTR_DAT_04695b50;
            thunk_FUN_020ccb58((undefined8 *)(unaff_x20 + 0x60));
            if (9 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)PTR_DAT_04695a70;
              thunk_FUN_020ccb58((undefined8 *)(unaff_x20 + 0x68));
              if (10 < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)PTR_DAT_046959b0;
                thunk_FUN_020ccb58((undefined8 *)(unaff_x20 + 0x70));
                if (0xb < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)PTR_DAT_04695a48;
                  thunk_FUN_020ccb58((undefined8 *)(unaff_x20 + 0x78));
                  puVar1 = StringLiteral_8735;
                  if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined8 *)(unaff_x20 + 0x80) =
                         **(undefined8 **)(*(long *)(StringLiteral_8735 + 0x90) + 0xb8);
                    thunk_FUN_020ccb58();
                    *(long *)(unaff_x19 + 0x68) = unaff_x20;
                    thunk_FUN_020ccb58();
                    lVar3 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x22,0xd);
                    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0206154c();
                    }
                    if (*(int *)(lVar3 + 0x18) != 0) {
                      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_04695978;
                      thunk_FUN_020ccb58((undefined8 *)(lVar3 + 0x20));
                      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_04695988;
                        thunk_FUN_020ccb58((undefined8 *)(lVar3 + 0x28));
                        if (2 < *(uint *)(lVar3 + 0x18)) {
                          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_046959c8;
                          thunk_FUN_020ccb58((undefined8 *)(lVar3 + 0x30));
                          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)PTR_DAT_04695ae0;
                            thunk_FUN_020ccb58((undefined8 *)(lVar3 + 0x38));
                            if (4 < *(uint *)(lVar3 + 0x18)) {
                              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)puVar2;
                              thunk_FUN_020ccb58((undefined8 *)(lVar3 + 0x40));
                              if (5 < *(uint *)(lVar3 + 0x18)) {
                                *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)PTR_DAT_046959d0;
                                thunk_FUN_020ccb58((undefined8 *)(lVar3 + 0x48));
                                if (6 < *(uint *)(lVar3 + 0x18)) {
                                  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_04695a28;
                                  thunk_FUN_020ccb58((undefined8 *)(lVar3 + 0x50));
                                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                                    *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)PTR_DAT_04695a60;
                                    thunk_FUN_020ccb58((undefined8 *)(lVar3 + 0x58));
                                    if (8 < *(uint *)(lVar3 + 0x18)) {
                                      *(undefined8 *)(lVar3 + 0x60) =
                                           *(undefined8 *)PTR_DAT_046959d8;
                                      thunk_FUN_020ccb58((undefined8 *)(lVar3 + 0x60));
                                      if (9 < *(uint *)(lVar3 + 0x18)) {
                                        *(undefined8 *)(lVar3 + 0x68) =
                                             *(undefined8 *)PTR_DAT_04695ae8;
                                        thunk_FUN_020ccb58((undefined8 *)(lVar3 + 0x68));
                                        if (10 < *(uint *)(lVar3 + 0x18)) {
                                          *(undefined8 *)(lVar3 + 0x70) =
                                               *(undefined8 *)PTR_DAT_046959e0;
                                          thunk_FUN_020ccb58((undefined8 *)(lVar3 + 0x70));
                                          if (0xb < *(uint *)(lVar3 + 0x18)) {
                                            *(undefined8 *)(lVar3 + 0x78) =
                                                 *(undefined8 *)PTR_DAT_04695ad8;
                                            thunk_FUN_020ccb58((undefined8 *)(lVar3 + 0x78));
                                            if (0xc < *(uint *)(lVar3 + 0x18)) {
                                              *(undefined8 *)(lVar3 + 0x80) =
                                                   **(undefined8 **)
                                                     (*(long *)(puVar1 + 0x90) + 0xb8);
                                              thunk_FUN_020ccb58();
                                              plVar4 = (long *)(unaff_x19 + 0x70);
                                              *plVar4 = lVar3;
                                              thunk_FUN_020ccb58(plVar4,lVar3);
                                              *(undefined8 *)(unaff_x19 + 0x78) =
                                                   *(undefined8 *)(unaff_x19 + 0x68);
                                              thunk_FUN_020ccb58();
                                              *(long *)(unaff_x19 + 0x80) = *plVar4;
                                              thunk_FUN_020ccb58();
                                              *(undefined8 *)(unaff_x19 + 0x88) =
                                                   *(undefined8 *)(unaff_x19 + 0x68);
                                              thunk_FUN_020ccb58();
                                              lVar3 = *unaff_x23;
                                              *(undefined1 *)(unaff_x19 + 0x98) = 0;
                                              **(long **)(lVar3 + 0xb8) = unaff_x19;
                                              thunk_FUN_020ccb58(*(undefined8 *)(*unaff_x23 + 0xb8))
                                              ;
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
                    /* WARNING: Subroutine does not return */
  FUN_02061554();
}


