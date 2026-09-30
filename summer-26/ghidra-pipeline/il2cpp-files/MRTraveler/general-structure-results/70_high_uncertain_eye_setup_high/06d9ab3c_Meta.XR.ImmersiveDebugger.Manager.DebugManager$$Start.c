/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$Start
ENTRY_POINT: 06d9ab3c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__Start(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(undefined8 *)(unaff_x20 + 0x20) = param_1;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x20 + 0x20),param_1);
    uVar3 = FUN_03c8f97c(*unaff_x24,2);
    if (1 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
      thunk_FUN_03d233cc();
      *(long *)(unaff_x19 + 0x128) = unaff_x20;
      thunk_FUN_03d233cc(unaff_x19 + 0x128);
      lVar4 = FUN_03c8f97c(*unaff_x25,2);
      uVar3 = FUN_03c8f97c(*unaff_x24,2);
      if (lVar4 == 0) goto LAB_06d9b2f8;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20),uVar3);
        uVar3 = FUN_03c8f97c(*unaff_x24,2);
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x28) = uVar3;
          thunk_FUN_03d233cc();
          *(long *)(unaff_x19 + 0x130) = lVar4;
          thunk_FUN_03d233cc(unaff_x19 + 0x130,lVar4);
          lVar4 = FUN_03c8f97c(*unaff_x25,2);
          uVar3 = FUN_03c8f97c(*unaff_x24,2);
          if (lVar4 == 0) goto LAB_06d9b2f8;
          if (*(int *)(lVar4 + 0x18) != 0) {
            *(undefined8 *)(lVar4 + 0x20) = uVar3;
            thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20),uVar3);
            uVar3 = FUN_03c8f97c(*unaff_x24,2);
            if (1 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x28) = uVar3;
              thunk_FUN_03d233cc();
              *(long *)(unaff_x19 + 0x138) = lVar4;
              thunk_FUN_03d233cc(unaff_x19 + 0x138,lVar4);
              lVar4 = FUN_03c8f97c(*unaff_x23,2);
              uVar3 = FUN_03c8f97c(*unaff_x26,2);
              if (lVar4 == 0) goto LAB_06d9b2f8;
              if (*(int *)(lVar4 + 0x18) != 0) {
                *(undefined8 *)(lVar4 + 0x20) = uVar3;
                thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20),uVar3);
                uVar3 = FUN_03c8f97c(*unaff_x26,2);
                if (1 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x28) = uVar3;
                  thunk_FUN_03d233cc();
                  *(long *)(unaff_x19 + 0x140) = lVar4;
                  thunk_FUN_03d233cc(unaff_x19 + 0x140,lVar4);
                  lVar4 = FUN_03c8f97c(*unaff_x25,2);
                  uVar3 = FUN_03c8f97c(*unaff_x24,2);
                  if (lVar4 == 0) goto LAB_06d9b2f8;
                  if (*(int *)(lVar4 + 0x18) != 0) {
                    *(undefined8 *)(lVar4 + 0x20) = uVar3;
                    thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20),uVar3);
                    uVar3 = FUN_03c8f97c(*unaff_x24,2);
                    puVar2 = PTR_DAT_08e8fb80;
                    puVar1 = PTR_DAT_08e68ce0;
                    if (1 < *(uint *)(lVar4 + 0x18)) {
                      *(undefined8 *)(lVar4 + 0x28) = uVar3;
                      thunk_FUN_03d233cc();
                      *(long *)(unaff_x19 + 0x148) = lVar4;
                      thunk_FUN_03d233cc(unaff_x19 + 0x148,lVar4);
                      uVar3 = FUN_03c8f97c(*(undefined8 *)puVar1,0x240);
                      *(undefined8 *)(unaff_x19 + 0x160) = uVar3;
                      thunk_FUN_03d233cc(unaff_x19 + 0x160);
                      uVar3 = FUN_03c8f97c(*(undefined8 *)puVar1,0x240);
                      *(undefined8 *)(unaff_x19 + 0x168) = uVar3;
                      thunk_FUN_03d233cc(unaff_x19 + 0x168);
                      uVar3 = FUN_03c8f97c(*(undefined8 *)puVar1,0x240);
                      *(undefined8 *)(unaff_x19 + 0x170) = uVar3;
                      thunk_FUN_03d233cc(unaff_x19 + 0x170);
                      lVar4 = FUN_03c8f97c(*(undefined8 *)puVar2,2);
                      lVar5 = FUN_03c8f97c(*unaff_x25,4);
                      uVar3 = FUN_03c8f97c(*unaff_x24,0xd);
                      if (lVar5 == 0) goto LAB_06d9b2f8;
                      if (*(int *)(lVar5 + 0x18) != 0) {
                        *(undefined8 *)(lVar5 + 0x20) = uVar3;
                        thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar3);
                        uVar3 = FUN_03c8f97c(*unaff_x24,0xd);
                        if (1 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x28) = uVar3;
                          thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x28),uVar3);
                          uVar3 = FUN_03c8f97c(*unaff_x24,0xd);
                          if (2 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x30) = uVar3;
                            thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x30),uVar3);
                            uVar3 = FUN_03c8f97c(*unaff_x24,0x17);
                            if (3 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x38) = uVar3;
                              thunk_FUN_03d233cc();
                              if (lVar4 == 0) {
LAB_06d9b2f8:
                    /* WARNING: Subroutine does not return */
                                FUN_03c8fb30();
                              }
                              if (*(int *)(lVar4 + 0x18) != 0) {
                                *(long *)(lVar4 + 0x20) = lVar5;
                                thunk_FUN_03d233cc((long *)(lVar4 + 0x20),lVar5);
                                lVar5 = FUN_03c8f97c(*unaff_x25,4);
                                uVar3 = FUN_03c8f97c(*unaff_x24,0xd);
                                if (lVar5 == 0) goto LAB_06d9b2f8;
                                if (*(int *)(lVar5 + 0x18) != 0) {
                                  *(undefined8 *)(lVar5 + 0x20) = uVar3;
                                  thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar3);
                                  uVar3 = FUN_03c8f97c(*unaff_x24,0xd);
                                  if (1 < *(uint *)(lVar5 + 0x18)) {
                                    *(undefined8 *)(lVar5 + 0x28) = uVar3;
                                    thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x28),uVar3);
                                    uVar3 = FUN_03c8f97c(*unaff_x24,0xd);
                                    if (2 < *(uint *)(lVar5 + 0x18)) {
                                      *(undefined8 *)(lVar5 + 0x30) = uVar3;
                                      thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x30),uVar3);
                                      uVar3 = FUN_03c8f97c(*unaff_x24,0x17);
                                      if (3 < *(uint *)(lVar5 + 0x18)) {
                                        *(undefined8 *)(lVar5 + 0x38) = uVar3;
                                        thunk_FUN_03d233cc();
                                        if (1 < *(uint *)(lVar4 + 0x18)) {
                                          *(long *)(lVar4 + 0x28) = lVar5;
                                          thunk_FUN_03d233cc((long *)(lVar4 + 0x28),lVar5);
                                          *(long *)(unaff_x19 + 0x180) = lVar4;
                                          thunk_FUN_03d233cc(unaff_x19 + 0x180,lVar4);
                                          lVar4 = FUN_03c8f97c(*unaff_x23,2);
                                          uVar3 = FUN_03c8f97c(*unaff_x26,0x243);
                                          if (lVar4 == 0) goto LAB_06d9b2f8;
                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                            *(undefined8 *)(lVar4 + 0x20) = uVar3;
                                            thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20),uVar3);
                                            uVar3 = FUN_03c8f97c(*unaff_x26,0x243);
                                            puVar1 = PTR_DAT_08e8fb88;
                                            if (1 < *(uint *)(lVar4 + 0x18)) {
                                              *(undefined8 *)(lVar4 + 0x28) = uVar3;
                                              thunk_FUN_03d233cc();
                                              *(long *)(unaff_x19 + 0x188) = lVar4;
                                              thunk_FUN_03d233cc(unaff_x19 + 0x188,lVar4);
                                              uVar3 = FUN_03c8f97c(*unaff_x26,0x240);
                                              *(undefined8 *)(unaff_x19 + 400) = uVar3;
                                              thunk_FUN_03d233cc(unaff_x19 + 400);
                                              uVar3 = FUN_03c8f97c(*unaff_x26,0x20);
                                              *(undefined8 *)(unaff_x19 + 0x198) = uVar3;
                                              thunk_FUN_03d233cc(unaff_x19 + 0x198);
                                              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                                thunk_FUN_03cd7500();
                                              }
                                              FUN_06d9e1e8();
                                              lVar4 = FUN_03c8f97c(*(undefined8 *)puVar2,2);
                                              lVar5 = FUN_03c8f97c(*unaff_x25,2);
                                              uVar3 = FUN_03c8f97c(*unaff_x24,3);
                                              if (lVar5 == 0) goto LAB_06d9b2f8;
                                              if (*(int *)(lVar5 + 0x18) != 0) {
                                                *(undefined8 *)(lVar5 + 0x20) = uVar3;
                                                thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),
                                                                   uVar3);
                                                uVar3 = FUN_03c8f97c(*unaff_x24,3);
                                                if (1 < *(uint *)(lVar5 + 0x18)) {
                                                  *(undefined8 *)(lVar5 + 0x28) = uVar3;
                                                  thunk_FUN_03d233cc();
                                                  if (lVar4 == 0) goto LAB_06d9b2f8;
                                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                                    *(long *)(lVar4 + 0x20) = lVar5;
                                                    thunk_FUN_03d233cc((long *)(lVar4 + 0x20),lVar5)
                                                    ;
                                                    lVar5 = FUN_03c8f97c(*unaff_x25,2);
                                                    uVar3 = FUN_03c8f97c(*unaff_x24,3);
                                                    if (lVar5 == 0) goto LAB_06d9b2f8;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = uVar3;
                                                      thunk_FUN_03d233cc((undefined8 *)
                                                                         (lVar5 + 0x20),uVar3);
                                                      uVar3 = FUN_03c8f97c(*unaff_x24,3);
                                                      if (1 < *(uint *)(lVar5 + 0x18)) {
                                                        *(undefined8 *)(lVar5 + 0x28) = uVar3;
                                                        thunk_FUN_03d233cc();
                                                        puVar1 = PTR_DAT_08e8fb90;
                                                        if (1 < *(uint *)(lVar4 + 0x18)) {
                                                          *(long *)(lVar4 + 0x28) = lVar5;
                                                          thunk_FUN_03d233cc((long *)(lVar4 + 0x28),
                                                                             lVar5);
                                                          *(long *)(unaff_x19 + 0x118) = lVar4;
                                                          thunk_FUN_03d233cc(unaff_x19 + 0x118,lVar4
                                                                            );
                                                          lVar4 = FUN_03c8f97c(*(undefined8 *)puVar1
                                                                               ,2);
                                                          lVar5 = FUN_03c8f97c(*unaff_x23,2);
                                                          uVar3 = FUN_03c8f97c(*unaff_x26,3);
                                                          if (lVar5 == 0) goto LAB_06d9b2f8;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar5 + 0x20) = uVar3;
                                                            thunk_FUN_03d233cc((undefined8 *)
                                                                               (lVar5 + 0x20),uVar3)
                                                            ;
                                                            uVar3 = FUN_03c8f97c(*unaff_x26,3);
                                                            if (1 < *(uint *)(lVar5 + 0x18)) {
                                                              *(undefined8 *)(lVar5 + 0x28) = uVar3;
                                                              thunk_FUN_03d233cc();
                                                              if (lVar4 == 0) goto LAB_06d9b2f8;
                                                              if (*(int *)(lVar4 + 0x18) != 0) {
                                                                *(long *)(lVar4 + 0x20) = lVar5;
                                                                thunk_FUN_03d233cc((long *)(lVar4 + 
                                                  0x20),lVar5);
                                                  lVar5 = FUN_03c8f97c(*unaff_x23,2);
                                                  uVar3 = FUN_03c8f97c(*unaff_x26,3);
                                                  if (lVar5 == 0) goto LAB_06d9b2f8;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar3;
                                                    thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),
                                                                       uVar3);
                                                    uVar3 = FUN_03c8f97c(*unaff_x26,3);
                                                    if (1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(undefined8 *)(lVar5 + 0x28) = uVar3;
                                                      thunk_FUN_03d233cc();
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(long *)(lVar4 + 0x28) = lVar5;
                                                        thunk_FUN_03d233cc((long *)(lVar4 + 0x28),
                                                                           lVar5);
                                                        *(long *)(unaff_x19 + 0x120) = lVar4;
                                                        thunk_FUN_03d233cc(unaff_x19 + 0x120,lVar4);
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
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


