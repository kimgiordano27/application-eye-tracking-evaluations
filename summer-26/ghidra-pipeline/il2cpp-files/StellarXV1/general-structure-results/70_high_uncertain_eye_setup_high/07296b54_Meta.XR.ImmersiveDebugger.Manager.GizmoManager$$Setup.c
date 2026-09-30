/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$Setup
ENTRY_POINT: 07296b54
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


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__Setup(undefined8 param_1)

{
  undefined *puVar1;
  bool in_ZR;
  bool in_CY;
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
  
  if (in_CY && !in_ZR) {
    *(undefined8 *)(unaff_x21 + 0x30) = param_1;
    thunk_FUN_040ec700((undefined8 *)(unaff_x21 + 0x30),param_1);
    uVar2 = FUN_04077674(*unaff_x24,0x17);
    if ((*(uint *)(unaff_x21 + 0x18) & 0xfffffffc) != 0) {
      *(undefined8 *)(unaff_x21 + 0x38) = uVar2;
      thunk_FUN_040ec700();
      if (unaff_x20 == 0) {
LAB_07296fe4:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(unaff_x20 + 0x18) != 0) {
        *(long *)(unaff_x20 + 0x20) = unaff_x21;
        thunk_FUN_040ec700();
        lVar3 = FUN_04077674(*unaff_x25,4);
        uVar2 = FUN_04077674(*unaff_x24,0xd);
        if (lVar3 == 0) goto LAB_07296fe4;
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x20) = uVar2;
          thunk_FUN_040ec700((undefined8 *)(lVar3 + 0x20),uVar2);
          uVar2 = FUN_04077674(*unaff_x24,0xd);
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar3 + 0x28) = uVar2;
            thunk_FUN_040ec700((undefined8 *)(lVar3 + 0x28),uVar2);
            uVar2 = FUN_04077674(*unaff_x24,0xd);
            if (2 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x30) = uVar2;
              thunk_FUN_040ec700((undefined8 *)(lVar3 + 0x30),uVar2);
              uVar2 = FUN_04077674(*unaff_x24,0x17);
              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar3 + 0x38) = uVar2;
                thunk_FUN_040ec700();
                if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffe) != 0) {
                  *(long *)(unaff_x20 + 0x28) = lVar3;
                  thunk_FUN_040ec700((long *)(unaff_x20 + 0x28),lVar3);
                  *(long *)(unaff_x19 + 0x180) = unaff_x20;
                  thunk_FUN_040ec700(unaff_x19 + 0x180);
                  lVar3 = FUN_04077674(*unaff_x23,2);
                  uVar2 = FUN_04077674(*unaff_x26,0x243);
                  if (lVar3 == 0) goto LAB_07296fe4;
                  if (*(int *)(lVar3 + 0x18) != 0) {
                    *(undefined8 *)(lVar3 + 0x20) = uVar2;
                    thunk_FUN_040ec700((undefined8 *)(lVar3 + 0x20),uVar2);
                    uVar2 = FUN_04077674(*unaff_x26,0x243);
                    puVar1 = PTR_DAT_092c2230;
                    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                      *(undefined8 *)(lVar3 + 0x28) = uVar2;
                      thunk_FUN_040ec700();
                      *(long *)(unaff_x19 + 0x188) = lVar3;
                      thunk_FUN_040ec700(unaff_x19 + 0x188,lVar3);
                      uVar2 = FUN_04077674(*unaff_x26,0x240);
                      *(undefined8 *)(unaff_x19 + 400) = uVar2;
                      thunk_FUN_040ec700(unaff_x19 + 400,uVar2);
                      uVar2 = FUN_04077674(*unaff_x26,0x20);
                      *(undefined8 *)(unaff_x19 + 0x198) = uVar2;
                      thunk_FUN_040ec700(unaff_x19 + 0x198,uVar2);
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        thunk_FUN_040d65a8();
                      }
                      FUN_07299f6c();
                      lVar3 = FUN_04077674(*unaff_x27,2);
                      lVar4 = FUN_04077674(*unaff_x25,2);
                      uVar2 = FUN_04077674(*unaff_x24,3);
                      if (lVar4 == 0) goto LAB_07296fe4;
                      if (*(int *)(lVar4 + 0x18) != 0) {
                        *(undefined8 *)(lVar4 + 0x20) = uVar2;
                        thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x20),uVar2);
                        uVar2 = FUN_04077674(*unaff_x24,3);
                        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar4 + 0x28) = uVar2;
                          thunk_FUN_040ec700();
                          if (lVar3 == 0) goto LAB_07296fe4;
                          if (*(int *)(lVar3 + 0x18) != 0) {
                            *(long *)(lVar3 + 0x20) = lVar4;
                            thunk_FUN_040ec700((long *)(lVar3 + 0x20),lVar4);
                            lVar4 = FUN_04077674(*unaff_x25,2);
                            uVar2 = FUN_04077674(*unaff_x24,3);
                            if (lVar4 == 0) goto LAB_07296fe4;
                            if (*(int *)(lVar4 + 0x18) != 0) {
                              *(undefined8 *)(lVar4 + 0x20) = uVar2;
                              thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x20),uVar2);
                              uVar2 = FUN_04077674(*unaff_x24,3);
                              if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                                *(undefined8 *)(lVar4 + 0x28) = uVar2;
                                thunk_FUN_040ec700();
                                puVar1 = PTR_DAT_092c2238;
                                if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                                  *(long *)(lVar3 + 0x28) = lVar4;
                                  thunk_FUN_040ec700((long *)(lVar3 + 0x28),lVar4);
                                  *(long *)(unaff_x19 + 0x118) = lVar3;
                                  thunk_FUN_040ec700(unaff_x19 + 0x118,lVar3);
                                  lVar3 = FUN_04077674(*(undefined8 *)puVar1,2);
                                  lVar4 = FUN_04077674(*unaff_x23,2);
                                  uVar2 = FUN_04077674(*unaff_x26,3);
                                  if (lVar4 == 0) goto LAB_07296fe4;
                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                    *(undefined8 *)(lVar4 + 0x20) = uVar2;
                                    thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x20),uVar2);
                                    uVar2 = FUN_04077674(*unaff_x26,3);
                                    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                                      *(undefined8 *)(lVar4 + 0x28) = uVar2;
                                      thunk_FUN_040ec700();
                                      if (lVar3 == 0) goto LAB_07296fe4;
                                      if (*(int *)(lVar3 + 0x18) != 0) {
                                        *(long *)(lVar3 + 0x20) = lVar4;
                                        thunk_FUN_040ec700((long *)(lVar3 + 0x20),lVar4);
                                        lVar4 = FUN_04077674(*unaff_x23,2);
                                        uVar2 = FUN_04077674(*unaff_x26,3);
                                        if (lVar4 == 0) goto LAB_07296fe4;
                                        if (*(int *)(lVar4 + 0x18) != 0) {
                                          *(undefined8 *)(lVar4 + 0x20) = uVar2;
                                          thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x20),uVar2);
                                          uVar2 = FUN_04077674(*unaff_x26,3);
                                          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                                            *(undefined8 *)(lVar4 + 0x28) = uVar2;
                                            thunk_FUN_040ec700();
                                            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                                              *(long *)(lVar3 + 0x28) = lVar4;
                                              thunk_FUN_040ec700((long *)(lVar3 + 0x28),lVar4);
                                              *(long *)(unaff_x19 + 0x120) = lVar3;
                                              thunk_FUN_040ec700(unaff_x19 + 0x120,lVar3);
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
  FUN_04077838();
}


