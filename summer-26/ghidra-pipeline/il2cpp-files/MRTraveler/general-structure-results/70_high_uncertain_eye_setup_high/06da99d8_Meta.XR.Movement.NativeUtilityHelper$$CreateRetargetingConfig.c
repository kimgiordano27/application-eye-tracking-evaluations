/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityHelper$$CreateRetargetingConfig
ENTRY_POINT: 06da99d8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Movement_NativeUtilityHelper__CreateRetargetingConfig(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  FUN_0701f51c(param_1,*unaff_x27,0);
  if (2 < *(uint *)(unaff_x22 + -0x10)) {
    *(undefined8 *)(unaff_x20 + 0x30) = param_1;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x20 + 0x30),param_1);
    puVar1 = PTR_DAT_08e8fe50;
    if (unaff_x19 == 0) {
LAB_06daa268:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(int *)(unaff_x19 + 0x18) != 0) {
      *(long *)(unaff_x19 + 0x20) = unaff_x20;
      thunk_FUN_03d233cc();
      lVar5 = FUN_03c8f97c(*unaff_x26,3);
      uVar6 = FUN_03c8f97c(*unaff_x25,4);
      FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_08e8ff38;
      if (lVar5 == 0) goto LAB_06daa268;
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = uVar6;
        thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar6);
        uVar6 = FUN_03c8f97c(*unaff_x25,4);
        FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
        puVar1 = PTR_DAT_08e8fec8;
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) = uVar6;
          thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x28),uVar6);
          uVar6 = FUN_03c8f97c(*unaff_x25,4);
          FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) = uVar6;
            thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x30),uVar6);
            if (1 < *(uint *)(unaff_x19 + 0x18)) {
              *(long *)(unaff_x19 + 0x28) = lVar5;
              thunk_FUN_03d233cc((long *)(unaff_x19 + 0x28),lVar5);
              lVar5 = FUN_03c8f97c(*unaff_x26,3);
              lVar7 = FUN_03c8f97c(*unaff_x25,4);
              if (lVar7 == 0) goto LAB_06daa268;
              if ((*(int *)(lVar7 + 0x18) != 0) &&
                 (*(undefined4 *)(lVar7 + 0x20) = 0xb, *(int *)(lVar7 + 0x18) != 1)) {
                *(undefined4 *)(lVar7 + 0x24) = 10;
                if (lVar5 == 0) goto LAB_06daa268;
                if (*(int *)(lVar5 + 0x18) != 0) {
                  *(long *)(lVar5 + 0x20) = lVar7;
                  thunk_FUN_03d233cc();
                  lVar7 = FUN_03c8f97c(*unaff_x25,4);
                  if (lVar7 == 0) goto LAB_06daa268;
                  if ((*(int *)(lVar7 + 0x18) != 0) &&
                     (*(undefined4 *)(lVar7 + 0x20) = 0x12, *(int *)(lVar7 + 0x18) != 1)) {
                    *(undefined4 *)(lVar7 + 0x24) = 0x12;
                    if (1 < *(uint *)(lVar5 + 0x18)) {
                      *(long *)(lVar5 + 0x28) = lVar7;
                      thunk_FUN_03d233cc();
                      lVar7 = FUN_03c8f97c(*unaff_x25,4);
                      if (lVar7 == 0) goto LAB_06daa268;
                      if ((*(int *)(lVar7 + 0x18) != 0) &&
                         (*(undefined4 *)(lVar7 + 0x20) = 0xf, *(int *)(lVar7 + 0x18) != 1)) {
                        *(undefined4 *)(lVar7 + 0x24) = 0x12;
                        if (2 < *(uint *)(lVar5 + 0x18)) {
                          *(long *)(lVar5 + 0x30) = lVar7;
                          thunk_FUN_03d233cc();
                          puVar1 = PTR_DAT_08e8fed0;
                          if (2 < *(uint *)(unaff_x19 + 0x18)) {
                            *(long *)(unaff_x19 + 0x30) = lVar5;
                            thunk_FUN_03d233cc((long *)(unaff_x19 + 0x30),lVar5);
                            lVar5 = FUN_03c8f97c(*unaff_x26,3);
                            uVar6 = FUN_03c8f97c(*unaff_x25,4);
                            FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
                            puVar1 = PTR_DAT_08e8fe98;
                            if (lVar5 == 0) goto LAB_06daa268;
                            if (*(int *)(lVar5 + 0x18) != 0) {
                              *(undefined8 *)(lVar5 + 0x20) = uVar6;
                              thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar6);
                              uVar6 = FUN_03c8f97c(*unaff_x25,4);
                              FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
                              puVar1 = PTR_DAT_08e8fe30;
                              if (1 < *(uint *)(lVar5 + 0x18)) {
                                *(undefined8 *)(lVar5 + 0x28) = uVar6;
                                thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x28),uVar6);
                                uVar6 = FUN_03c8f97c(*unaff_x25,4);
                                FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
                                if (2 < *(uint *)(lVar5 + 0x18)) {
                                  *(undefined8 *)(lVar5 + 0x30) = uVar6;
                                  thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x30),uVar6);
                                  puVar1 = PTR_DAT_08e8fe78;
                                  if (3 < *(uint *)(unaff_x19 + 0x18)) {
                                    *(long *)(unaff_x19 + 0x38) = lVar5;
                                    thunk_FUN_03d233cc((long *)(unaff_x19 + 0x38),lVar5);
                                    lVar5 = FUN_03c8f97c(*unaff_x26,3);
                                    uVar6 = FUN_03c8f97c(*unaff_x25,4);
                                    FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
                                    puVar1 = PTR_DAT_08e8ff20;
                                    if (lVar5 == 0) goto LAB_06daa268;
                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                      *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                      thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar6);
                                      uVar6 = FUN_03c8f97c(*unaff_x25,4);
                                      FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
                                      puVar1 = PTR_DAT_08e8fe60;
                                      if (1 < *(uint *)(lVar5 + 0x18)) {
                                        *(undefined8 *)(lVar5 + 0x28) = uVar6;
                                        thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x28),uVar6);
                                        uVar6 = FUN_03c8f97c(*unaff_x25,4);
                                        FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
                                        if (2 < *(uint *)(lVar5 + 0x18)) {
                                          *(undefined8 *)(lVar5 + 0x30) = uVar6;
                                          thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x30),uVar6);
                                          puVar1 = PTR_DAT_08e8fe70;
                                          if (4 < *(uint *)(unaff_x19 + 0x18)) {
                                            *(long *)(unaff_x19 + 0x40) = lVar5;
                                            thunk_FUN_03d233cc((long *)(unaff_x19 + 0x40),lVar5);
                                            lVar5 = FUN_03c8f97c(*unaff_x26,3);
                                            uVar6 = FUN_03c8f97c(*unaff_x25,4);
                                            FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
                                            puVar1 = PTR_DAT_08e8ff30;
                                            if (lVar5 == 0) goto LAB_06daa268;
                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                              *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                              thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x20),uVar6)
                                              ;
                                              uVar6 = FUN_03c8f97c(*unaff_x25,4);
                                              FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
                                              puVar1 = PTR_DAT_08e8fed8;
                                              if (1 < *(uint *)(lVar5 + 0x18)) {
                                                *(undefined8 *)(lVar5 + 0x28) = uVar6;
                                                thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x28),
                                                                   uVar6);
                                                uVar6 = FUN_03c8f97c(*unaff_x25,4);
                                                FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
                                                if (2 < *(uint *)(lVar5 + 0x18)) {
                                                  *(undefined8 *)(lVar5 + 0x30) = uVar6;
                                                  thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x30),
                                                                     uVar6);
                                                  puVar4 = PTR_DAT_08e8ff48;
                                                  puVar3 = PTR_DAT_08e8fe80;
                                                  puVar2 = PTR_DAT_08e8fe28;
                                                  puVar1 = PTR_DAT_08e8fb60;
                                                  if (5 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(long *)(unaff_x19 + 0x48) = lVar5;
                                                    thunk_FUN_03d233cc((long *)(unaff_x19 + 0x48),
                                                                       lVar5);
                                                    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) =
                                                         unaff_x19;
                                                    thunk_FUN_03d233cc();
                                                    uVar6 = FUN_03c8f97c(*unaff_x25,0x16);
                                                    FUN_0701f51c(uVar6,*(undefined8 *)puVar3,0);
                                                    puVar8 = (undefined8 *)
                                                             (*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                                    *puVar8 = uVar6;
                                                    thunk_FUN_03d233cc(puVar8,uVar6);
                                                    uVar6 = FUN_03c8f97c(*unaff_x24,0x40);
                                                    FUN_0701f51c(uVar6,*(undefined8 *)puVar2,0);
                                                    puVar8 = (undefined8 *)
                                                             (*(long *)(*unaff_x23 + 0xb8) + 0x30);
                                                    *puVar8 = uVar6;
                                                    thunk_FUN_03d233cc(puVar8,uVar6);
                                                    lVar5 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
                                                    uVar6 = FUN_03c8f97c(*unaff_x24,7);
                                                    FUN_0701f51c(uVar6,*(undefined8 *)puVar4,0);
                                                    puVar2 = PTR_DAT_08e8ff40;
                                                    if (lVar5 == 0) goto LAB_06daa268;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                      thunk_FUN_03d233cc((undefined8 *)
                                                                         (lVar5 + 0x20),uVar6);
                                                      uVar6 = FUN_03c8f97c(*unaff_x24,7);
                                                      FUN_0701f51c(uVar6,*(undefined8 *)puVar2,0);
                                                      puVar3 = PTR_DAT_08e8fe38;
                                                      puVar2 = PTR_DAT_08e8fb90;
                                                      if (1 < *(uint *)(lVar5 + 0x18)) {
                                                        *(undefined8 *)(lVar5 + 0x28) = uVar6;
                                                        thunk_FUN_03d233cc((undefined8 *)
                                                                           (lVar5 + 0x28),uVar6);
                                                        plVar9 = (long *)(*(long *)(*unaff_x23 +
                                                                                   0xb8) + 0x38);
                                                        *plVar9 = lVar5;
                                                        thunk_FUN_03d233cc(plVar9,lVar5);
                                                        lVar5 = FUN_03c8f97c(*(undefined8 *)puVar2,2
                                                                            );
                                                        lVar7 = FUN_03c8f97c(*(undefined8 *)puVar1,2
                                                                            );
                                                        uVar6 = FUN_03c8f97c(*unaff_x24,0x20);
                                                        FUN_0701f51c(uVar6,*(undefined8 *)puVar3,0);
                                                        puVar2 = PTR_DAT_08e8fec0;
                                                        if (lVar7 == 0) goto LAB_06daa268;
                                                        if (*(int *)(lVar7 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar7 + 0x20) = uVar6;
                                                          thunk_FUN_03d233cc((undefined8 *)
                                                                             (lVar7 + 0x20),uVar6);
                                                          uVar6 = FUN_03c8f97c(*unaff_x24,0x20);
                                                          FUN_0701f51c(uVar6,*(undefined8 *)puVar2,0
                                                                      );
                                                          if (1 < *(uint *)(lVar7 + 0x18)) {
                                                            *(undefined8 *)(lVar7 + 0x28) = uVar6;
                                                            thunk_FUN_03d233cc((undefined8 *)
                                                                               (lVar7 + 0x28),uVar6)
                                                            ;
                                                            puVar2 = PTR_DAT_08e8feb8;
                                                            if (lVar5 == 0) goto LAB_06daa268;
                                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                                              *(long *)(lVar5 + 0x20) = lVar7;
                                                              thunk_FUN_03d233cc((long *)(lVar5 + 
                                                  0x20),lVar7);
                                                  lVar7 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
                                                  uVar6 = FUN_03c8f97c(*unaff_x24,0x20);
                                                  FUN_0701f51c(uVar6,*(undefined8 *)puVar2,0);
                                                  puVar1 = PTR_DAT_08e8ff18;
                                                  if (lVar7 == 0) goto LAB_06daa268;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x20) = uVar6;
                                                    thunk_FUN_03d233cc((undefined8 *)(lVar7 + 0x20),
                                                                       uVar6);
                                                    uVar6 = FUN_03c8f97c(*unaff_x24,0x20);
                                                    FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
                                                    if (1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x28) = uVar6;
                                                      thunk_FUN_03d233cc((undefined8 *)
                                                                         (lVar7 + 0x28),uVar6);
                                                      puVar2 = PTR_DAT_08e8feb0;
                                                      puVar1 = PTR_DAT_08e8fea8;
                                                      if (1 < *(uint *)(lVar5 + 0x18)) {
                                                        *(long *)(lVar5 + 0x28) = lVar7;
                                                        thunk_FUN_03d233cc((long *)(lVar5 + 0x28),
                                                                           lVar7);
                                                        plVar9 = (long *)(*(long *)(*unaff_x23 +
                                                                                   0xb8) + 0x40);
                                                        *plVar9 = lVar5;
                                                        thunk_FUN_03d233cc(plVar9,lVar5);
                                                        uVar6 = FUN_03c8f97c(*unaff_x24,8);
                                                        FUN_0701f51c(uVar6,*(undefined8 *)puVar2,0);
                                                        puVar8 = (undefined8 *)
                                                                 (*(long *)(*unaff_x23 + 0xb8) +
                                                                 0x48);
                                                        *puVar8 = uVar6;
                                                        thunk_FUN_03d233cc(puVar8,uVar6);
                                                        uVar6 = FUN_03c8f97c(*unaff_x24,8);
                                                        FUN_0701f51c(uVar6,*(undefined8 *)puVar1,0);
                                                        puVar8 = (undefined8 *)
                                                                 (*(long *)(*unaff_x23 + 0xb8) +
                                                                 0x50);
                                                        *puVar8 = uVar6;
                                                        thunk_FUN_03d233cc(puVar8,uVar6);
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
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


