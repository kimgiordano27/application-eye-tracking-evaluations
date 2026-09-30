/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$OnDisable
ENTRY_POINT: 06d9aedc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__OnDisable(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  uVar2 = FUN_03c8f97c(param_1);
  if (unaff_x21 == 0) goto LAB_06d9b2f8;
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    *(undefined8 *)(unaff_x21 + 0x20) = uVar2;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x21 + 0x20),uVar2);
    uVar2 = FUN_03c8f97c(*unaff_x24,0xd);
    if (1 < *(uint *)(unaff_x21 + 0x18)) {
      *(undefined8 *)(unaff_x21 + 0x28) = uVar2;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x21 + 0x28),uVar2);
      uVar2 = FUN_03c8f97c(*unaff_x24,0xd);
      if (2 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined8 *)(unaff_x21 + 0x30) = uVar2;
        thunk_FUN_03d233cc((undefined8 *)(unaff_x21 + 0x30),uVar2);
        uVar2 = FUN_03c8f97c(*unaff_x24,0x17);
        if (3 < *(uint *)(unaff_x21 + 0x18)) {
          *(undefined8 *)(unaff_x21 + 0x38) = uVar2;
          thunk_FUN_03d233cc();
          if (1 < *(uint *)(unaff_x20 + 0x18)) {
            *(long *)(unaff_x20 + 0x28) = unaff_x21;
            thunk_FUN_03d233cc();
            *(long *)(unaff_x19 + 0x180) = unaff_x20;
            thunk_FUN_03d233cc(unaff_x19 + 0x180);
            lVar3 = FUN_03c8f97c(*unaff_x23,2);
            uVar2 = FUN_03c8f97c(*unaff_x26,0x243);
            if (lVar3 == 0) goto LAB_06d9b2f8;
            if (*(int *)(lVar3 + 0x18) != 0) {
              *(undefined8 *)(lVar3 + 0x20) = uVar2;
              thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x20),uVar2);
              uVar2 = FUN_03c8f97c(*unaff_x26,0x243);
              puVar1 = PTR_DAT_08e8fb88;
              if (1 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x28) = uVar2;
                thunk_FUN_03d233cc();
                *(long *)(unaff_x19 + 0x188) = lVar3;
                thunk_FUN_03d233cc(unaff_x19 + 0x188,lVar3);
                uVar2 = FUN_03c8f97c(*unaff_x26,0x240);
                *(undefined8 *)(unaff_x19 + 400) = uVar2;
                thunk_FUN_03d233cc(unaff_x19 + 400);
                uVar2 = FUN_03c8f97c(*unaff_x26,0x20);
                *(undefined8 *)(unaff_x19 + 0x198) = uVar2;
                thunk_FUN_03d233cc(unaff_x19 + 0x198);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                FUN_06d9e1e8();
                lVar3 = FUN_03c8f97c(*unaff_x27,2);
                lVar4 = FUN_03c8f97c(*unaff_x25,2);
                uVar2 = FUN_03c8f97c(*unaff_x24,3);
                if (lVar4 == 0) goto LAB_06d9b2f8;
                if (*(int *)(lVar4 + 0x18) != 0) {
                  *(undefined8 *)(lVar4 + 0x20) = uVar2;
                  thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20),uVar2);
                  uVar2 = FUN_03c8f97c(*unaff_x24,3);
                  if (1 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x28) = uVar2;
                    thunk_FUN_03d233cc();
                    if (lVar3 == 0) {
LAB_06d9b2f8:
                    /* WARNING: Subroutine does not return */
                      FUN_03c8fb30();
                    }
                    if (*(int *)(lVar3 + 0x18) != 0) {
                      *(long *)(lVar3 + 0x20) = lVar4;
                      thunk_FUN_03d233cc((long *)(lVar3 + 0x20),lVar4);
                      lVar4 = FUN_03c8f97c(*unaff_x25,2);
                      uVar2 = FUN_03c8f97c(*unaff_x24,3);
                      if (lVar4 == 0) goto LAB_06d9b2f8;
                      if (*(int *)(lVar4 + 0x18) != 0) {
                        *(undefined8 *)(lVar4 + 0x20) = uVar2;
                        thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20),uVar2);
                        uVar2 = FUN_03c8f97c(*unaff_x24,3);
                        if (1 < *(uint *)(lVar4 + 0x18)) {
                          *(undefined8 *)(lVar4 + 0x28) = uVar2;
                          thunk_FUN_03d233cc();
                          puVar1 = PTR_DAT_08e8fb90;
                          if (1 < *(uint *)(lVar3 + 0x18)) {
                            *(long *)(lVar3 + 0x28) = lVar4;
                            thunk_FUN_03d233cc((long *)(lVar3 + 0x28),lVar4);
                            *(long *)(unaff_x19 + 0x118) = lVar3;
                            thunk_FUN_03d233cc(unaff_x19 + 0x118,lVar3);
                            lVar3 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
                            lVar4 = FUN_03c8f97c(*unaff_x23,2);
                            uVar2 = FUN_03c8f97c(*unaff_x26,3);
                            if (lVar4 == 0) goto LAB_06d9b2f8;
                            if (*(int *)(lVar4 + 0x18) != 0) {
                              *(undefined8 *)(lVar4 + 0x20) = uVar2;
                              thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20),uVar2);
                              uVar2 = FUN_03c8f97c(*unaff_x26,3);
                              if (1 < *(uint *)(lVar4 + 0x18)) {
                                *(undefined8 *)(lVar4 + 0x28) = uVar2;
                                thunk_FUN_03d233cc();
                                if (lVar3 == 0) goto LAB_06d9b2f8;
                                if (*(int *)(lVar3 + 0x18) != 0) {
                                  *(long *)(lVar3 + 0x20) = lVar4;
                                  thunk_FUN_03d233cc((long *)(lVar3 + 0x20),lVar4);
                                  lVar4 = FUN_03c8f97c(*unaff_x23,2);
                                  uVar2 = FUN_03c8f97c(*unaff_x26,3);
                                  if (lVar4 == 0) goto LAB_06d9b2f8;
                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                    *(undefined8 *)(lVar4 + 0x20) = uVar2;
                                    thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x20),uVar2);
                                    uVar2 = FUN_03c8f97c(*unaff_x26,3);
                                    if (1 < *(uint *)(lVar4 + 0x18)) {
                                      *(undefined8 *)(lVar4 + 0x28) = uVar2;
                                      thunk_FUN_03d233cc();
                                      if (1 < *(uint *)(lVar3 + 0x18)) {
                                        *(long *)(lVar3 + 0x28) = lVar4;
                                        thunk_FUN_03d233cc((long *)(lVar3 + 0x28),lVar4);
                                        *(long *)(unaff_x19 + 0x120) = lVar3;
                                        thunk_FUN_03d233cc(unaff_x19 + 0x120,lVar3);
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


