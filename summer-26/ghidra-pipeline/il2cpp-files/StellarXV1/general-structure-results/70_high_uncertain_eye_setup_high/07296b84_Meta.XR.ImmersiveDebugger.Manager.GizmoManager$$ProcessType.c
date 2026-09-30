/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$ProcessType
ENTRY_POINT: 07296b84
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__ProcessType(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  *(undefined8 *)(unaff_x21 + 0x38) = param_1;
  thunk_FUN_040ec700();
  if (unaff_x20 != 0) {
    if (*(int *)(unaff_x20 + 0x18) != 0) {
      *(long *)(unaff_x20 + 0x20) = unaff_x21;
      thunk_FUN_040ec700();
      lVar2 = FUN_04077674(*unaff_x25,4);
      uVar3 = FUN_04077674(*unaff_x24,0xd);
      if (lVar2 == 0) goto LAB_07296fe4;
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = uVar3;
        thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x20),uVar3);
        uVar3 = FUN_04077674(*unaff_x24,0xd);
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar2 + 0x28) = uVar3;
          thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x28),uVar3);
          uVar3 = FUN_04077674(*unaff_x24,0xd);
          if (2 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x30) = uVar3;
            thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x30),uVar3);
            uVar3 = FUN_04077674(*unaff_x24,0x17);
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar2 + 0x38) = uVar3;
              thunk_FUN_040ec700();
              if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffe) != 0) {
                *(long *)(unaff_x20 + 0x28) = lVar2;
                thunk_FUN_040ec700((long *)(unaff_x20 + 0x28),lVar2);
                *(long *)(unaff_x19 + 0x180) = unaff_x20;
                thunk_FUN_040ec700(unaff_x19 + 0x180);
                lVar2 = FUN_04077674(*unaff_x23,2);
                uVar3 = FUN_04077674(*unaff_x26,0x243);
                if (lVar2 == 0) goto LAB_07296fe4;
                if (*(int *)(lVar2 + 0x18) != 0) {
                  *(undefined8 *)(lVar2 + 0x20) = uVar3;
                  thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x20),uVar3);
                  uVar3 = FUN_04077674(*unaff_x26,0x243);
                  puVar1 = PTR_DAT_092c2230;
                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined8 *)(lVar2 + 0x28) = uVar3;
                    thunk_FUN_040ec700();
                    *(long *)(unaff_x19 + 0x188) = lVar2;
                    thunk_FUN_040ec700(unaff_x19 + 0x188,lVar2);
                    uVar3 = FUN_04077674(*unaff_x26,0x240);
                    *(undefined8 *)(unaff_x19 + 400) = uVar3;
                    thunk_FUN_040ec700(unaff_x19 + 400,uVar3);
                    uVar3 = FUN_04077674(*unaff_x26,0x20);
                    *(undefined8 *)(unaff_x19 + 0x198) = uVar3;
                    thunk_FUN_040ec700(unaff_x19 + 0x198,uVar3);
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    FUN_07299f6c();
                    lVar2 = FUN_04077674(*unaff_x27,2);
                    lVar4 = FUN_04077674(*unaff_x25,2);
                    uVar3 = FUN_04077674(*unaff_x24,3);
                    if (lVar4 == 0) goto LAB_07296fe4;
                    if (*(int *)(lVar4 + 0x18) != 0) {
                      *(undefined8 *)(lVar4 + 0x20) = uVar3;
                      thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x20),uVar3);
                      uVar3 = FUN_04077674(*unaff_x24,3);
                      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                        *(undefined8 *)(lVar4 + 0x28) = uVar3;
                        thunk_FUN_040ec700();
                        if (lVar2 == 0) goto LAB_07296fe4;
                        if (*(int *)(lVar2 + 0x18) != 0) {
                          *(long *)(lVar2 + 0x20) = lVar4;
                          thunk_FUN_040ec700((long *)(lVar2 + 0x20),lVar4);
                          lVar4 = FUN_04077674(*unaff_x25,2);
                          uVar3 = FUN_04077674(*unaff_x24,3);
                          if (lVar4 == 0) goto LAB_07296fe4;
                          if (*(int *)(lVar4 + 0x18) != 0) {
                            *(undefined8 *)(lVar4 + 0x20) = uVar3;
                            thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x20),uVar3);
                            uVar3 = FUN_04077674(*unaff_x24,3);
                            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                              *(undefined8 *)(lVar4 + 0x28) = uVar3;
                              thunk_FUN_040ec700();
                              puVar1 = PTR_DAT_092c2238;
                              if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
                                *(long *)(lVar2 + 0x28) = lVar4;
                                thunk_FUN_040ec700((long *)(lVar2 + 0x28),lVar4);
                                *(long *)(unaff_x19 + 0x118) = lVar2;
                                thunk_FUN_040ec700(unaff_x19 + 0x118,lVar2);
                                lVar2 = FUN_04077674(*(undefined8 *)puVar1,2);
                                lVar4 = FUN_04077674(*unaff_x23,2);
                                uVar3 = FUN_04077674(*unaff_x26,3);
                                if (lVar4 == 0) goto LAB_07296fe4;
                                if (*(int *)(lVar4 + 0x18) != 0) {
                                  *(undefined8 *)(lVar4 + 0x20) = uVar3;
                                  thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x20),uVar3);
                                  uVar3 = FUN_04077674(*unaff_x26,3);
                                  if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                                    *(undefined8 *)(lVar4 + 0x28) = uVar3;
                                    thunk_FUN_040ec700();
                                    if (lVar2 == 0) goto LAB_07296fe4;
                                    if (*(int *)(lVar2 + 0x18) != 0) {
                                      *(long *)(lVar2 + 0x20) = lVar4;
                                      thunk_FUN_040ec700((long *)(lVar2 + 0x20),lVar4);
                                      lVar4 = FUN_04077674(*unaff_x23,2);
                                      uVar3 = FUN_04077674(*unaff_x26,3);
                                      if (lVar4 == 0) goto LAB_07296fe4;
                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                        *(undefined8 *)(lVar4 + 0x20) = uVar3;
                                        thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x20),uVar3);
                                        uVar3 = FUN_04077674(*unaff_x26,3);
                                        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                                          *(undefined8 *)(lVar4 + 0x28) = uVar3;
                                          thunk_FUN_040ec700();
                                          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
                                            *(long *)(lVar2 + 0x28) = lVar4;
                                            thunk_FUN_040ec700((long *)(lVar2 + 0x28),lVar4);
                                            *(long *)(unaff_x19 + 0x120) = lVar2;
                                            thunk_FUN_040ec700(unaff_x19 + 0x120,lVar2);
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
    FUN_04077838();
  }
LAB_07296fe4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


