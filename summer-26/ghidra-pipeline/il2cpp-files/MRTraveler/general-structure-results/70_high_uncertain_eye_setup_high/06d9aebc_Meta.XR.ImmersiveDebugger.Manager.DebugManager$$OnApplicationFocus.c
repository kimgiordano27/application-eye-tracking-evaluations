/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$OnApplicationFocus
ENTRY_POINT: 06d9aebc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__OnApplicationFocus(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  thunk_FUN_03d233cc();
  lVar2 = FUN_03c8f97c(*unaff_x25,4);
  uVar3 = FUN_03c8f97c(*unaff_x24,0xd);
  if (lVar2 == 0) goto LAB_06d9b2f8;
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x20),uVar3);
    uVar3 = FUN_03c8f97c(*unaff_x24,0xd);
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x28),uVar3);
      uVar3 = FUN_03c8f97c(*unaff_x24,0xd);
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = uVar3;
        thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x30),uVar3);
        uVar3 = FUN_03c8f97c(*unaff_x24,0x17);
        if (3 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = uVar3;
          thunk_FUN_03d233cc();
          if (1 < *(uint *)(unaff_x20 + 0x18)) {
            *(long *)(unaff_x20 + 0x28) = lVar2;
            thunk_FUN_03d233cc((long *)(unaff_x20 + 0x28),lVar2);
            *(long *)(unaff_x19 + 0x180) = unaff_x20;
            thunk_FUN_03d233cc(unaff_x19 + 0x180);
            lVar2 = FUN_03c8f97c(*unaff_x23,2);
            uVar3 = FUN_03c8f97c(*unaff_x26,0x243);
            if (lVar2 == 0) goto LAB_06d9b2f8;
            if (*(int *)(lVar2 + 0x18) != 0) {
              *(undefined8 *)(lVar2 + 0x20) = uVar3;
              thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x20),uVar3);
              uVar3 = FUN_03c8f97c(*unaff_x26,0x243);
              puVar1 = PTR_DAT_08e8fb88;
              if (1 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x28) = uVar3;
                thunk_FUN_03d233cc();
                *(long *)(unaff_x19 + 0x188) = lVar2;
                thunk_FUN_03d233cc(unaff_x19 + 0x188,lVar2);
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
                lVar2 = FUN_03c8f97c(*unaff_x27,2);
                lVar4 = FUN_03c8f97c(*unaff_x25,2);
                uVar3 = FUN_03c8f97c(*unaff_x24,3);
                if (lVar4 == 0) goto LAB_06d9b2f8;
                if (*(int *)(lVar4 + 0x18) != 0) {
                  *(undefined8 *)(lVar4 + 0x20) = uVar3;
                  thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20),uVar3);
                  uVar3 = FUN_03c8f97c(*unaff_x24,3);
                  if (1 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x28) = uVar3;
                    thunk_FUN_03d233cc();
                    if (lVar2 == 0) {
LAB_06d9b2f8:
                    /* WARNING: Subroutine does not return */
                      FUN_03c8fb30();
                    }
                    if (*(int *)(lVar2 + 0x18) != 0) {
                      *(long *)(lVar2 + 0x20) = lVar4;
                      thunk_FUN_03d233cc((long *)(lVar2 + 0x20),lVar4);
                      lVar4 = FUN_03c8f97c(*unaff_x25,2);
                      uVar3 = FUN_03c8f97c(*unaff_x24,3);
                      if (lVar4 == 0) goto LAB_06d9b2f8;
                      if (*(int *)(lVar4 + 0x18) != 0) {
                        *(undefined8 *)(lVar4 + 0x20) = uVar3;
                        thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20),uVar3);
                        uVar3 = FUN_03c8f97c(*unaff_x24,3);
                        if (1 < *(uint *)(lVar4 + 0x18)) {
                          *(undefined8 *)(lVar4 + 0x28) = uVar3;
                          thunk_FUN_03d233cc();
                          puVar1 = PTR_DAT_08e8fb90;
                          if (1 < *(uint *)(lVar2 + 0x18)) {
                            *(long *)(lVar2 + 0x28) = lVar4;
                            thunk_FUN_03d233cc((long *)(lVar2 + 0x28),lVar4);
                            *(long *)(unaff_x19 + 0x118) = lVar2;
                            thunk_FUN_03d233cc(unaff_x19 + 0x118,lVar2);
                            lVar2 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
                            lVar4 = FUN_03c8f97c(*unaff_x23,2);
                            uVar3 = FUN_03c8f97c(*unaff_x26,3);
                            if (lVar4 == 0) goto LAB_06d9b2f8;
                            if (*(int *)(lVar4 + 0x18) != 0) {
                              *(undefined8 *)(lVar4 + 0x20) = uVar3;
                              thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20),uVar3);
                              uVar3 = FUN_03c8f97c(*unaff_x26,3);
                              if (1 < *(uint *)(lVar4 + 0x18)) {
                                *(undefined8 *)(lVar4 + 0x28) = uVar3;
                                thunk_FUN_03d233cc();
                                if (lVar2 == 0) goto LAB_06d9b2f8;
                                if (*(int *)(lVar2 + 0x18) != 0) {
                                  *(long *)(lVar2 + 0x20) = lVar4;
                                  thunk_FUN_03d233cc((long *)(lVar2 + 0x20),lVar4);
                                  lVar4 = FUN_03c8f97c(*unaff_x23,2);
                                  uVar3 = FUN_03c8f97c(*unaff_x26,3);
                                  if (lVar4 == 0) goto LAB_06d9b2f8;
                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                    *(undefined8 *)(lVar4 + 0x20) = uVar3;
                                    thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20),uVar3);
                                    uVar3 = FUN_03c8f97c(*unaff_x26,3);
                                    if (1 < *(uint *)(lVar4 + 0x18)) {
                                      *(undefined8 *)(lVar4 + 0x28) = uVar3;
                                      thunk_FUN_03d233cc();
                                      if (1 < *(uint *)(lVar2 + 0x18)) {
                                        *(long *)(lVar2 + 0x28) = lVar4;
                                        thunk_FUN_03d233cc((long *)(lVar2 + 0x28),lVar4);
                                        *(long *)(unaff_x19 + 0x120) = lVar2;
                                        thunk_FUN_03d233cc(unaff_x19 + 0x120,lVar2);
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
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


