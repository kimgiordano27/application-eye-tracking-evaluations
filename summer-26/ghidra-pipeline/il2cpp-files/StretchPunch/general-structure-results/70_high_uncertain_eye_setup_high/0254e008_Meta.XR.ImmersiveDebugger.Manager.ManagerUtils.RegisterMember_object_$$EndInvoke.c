/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ManagerUtils.RegisterMember<object>$$EndInvoke
ENTRY_POINT: 0254e008
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<object>__EndInvoke
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_01e10808();
  if (unaff_x21 != 0) {
    lVar3 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
        thunk_FUN_01e10808();
      }
      else {
        FUN_03198f70();
      }
      if ((*(byte *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
        FUN_01dde7f8();
      }
      lVar3 = thunk_FUN_01de27b8();
      FUN_02ab3ef0(lVar3,*(undefined8 *)(*(long *)(*unaff_x20 + 0xc0) + 0x20));
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)StringLiteral_2181;
        thunk_FUN_01e10808();
        lVar4 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            plVar2 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
            *plVar2 = lVar3;
            thunk_FUN_01e10808(plVar2,lVar3);
          }
          else {
            FUN_03198f70();
          }
          if ((*(byte *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
            FUN_01dde7f8();
          }
          lVar3 = thunk_FUN_01de27b8();
          FUN_02ab3ef0(lVar3,*(undefined8 *)(*(long *)(*unaff_x20 + 0xc0) + 0x20));
          if (lVar3 != 0) {
            *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)StringLiteral_2187;
            thunk_FUN_01e10808();
            lVar4 = *(long *)(unaff_x21 + 0x10);
            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar1 = *(uint *)(unaff_x21 + 0x18);
              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                plVar2 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                *plVar2 = lVar3;
                thunk_FUN_01e10808(plVar2,lVar3);
              }
              else {
                FUN_03198f70();
              }
              if ((*(byte *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
                FUN_01dde7f8();
              }
              lVar3 = thunk_FUN_01de27b8();
              FUN_02ab3ef0(lVar3,*(undefined8 *)(*(long *)(*unaff_x20 + 0xc0) + 0x20));
              if (lVar3 != 0) {
                *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)StringLiteral_2185;
                thunk_FUN_01e10808();
                lVar4 = *(long *)(unaff_x21 + 0x10);
                *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar1 = *(uint *)(unaff_x21 + 0x18);
                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                    plVar2 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar2 = lVar3;
                    thunk_FUN_01e10808(plVar2,lVar3);
                  }
                  else {
                    FUN_03198f70();
                  }
                  if ((*(byte *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x18) + 0x135) & 1) == 0)
                  {
                    FUN_01dde7f8();
                  }
                  lVar3 = thunk_FUN_01de27b8();
                  FUN_02ab3ef0(lVar3,*(undefined8 *)(*(long *)(*unaff_x20 + 0xc0) + 0x20));
                  if (lVar3 != 0) {
                    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)StringLiteral_2186;
                    thunk_FUN_01e10808();
                    lVar4 = *(long *)(unaff_x21 + 0x10);
                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                    if (lVar4 != 0) {
                      uVar1 = *(uint *)(unaff_x21 + 0x18);
                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                        plVar2 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar2 = lVar3;
                        thunk_FUN_01e10808(plVar2,lVar3);
                      }
                      else {
                        FUN_03198f70();
                      }
                      if ((*(byte *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x18) + 0x135) & 1) ==
                          0) {
                        FUN_01dde7f8();
                      }
                      lVar3 = thunk_FUN_01de27b8();
                      FUN_02ab3ef0(lVar3,*(undefined8 *)(*(long *)(*unaff_x20 + 0xc0) + 0x20));
                      if (lVar3 != 0) {
                        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)StringLiteral_2183;
                        thunk_FUN_01e10808();
                        lVar4 = *(long *)(unaff_x21 + 0x10);
                        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                        if (lVar4 != 0) {
                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                            plVar2 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar2 = lVar3;
                            thunk_FUN_01e10808(plVar2,lVar3);
                          }
                          else {
                            FUN_03198f70();
                          }
                          if ((*(byte *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x18) + 0x135) & 1
                              ) == 0) {
                            FUN_01dde7f8();
                          }
                          lVar3 = thunk_FUN_01de27b8();
                          FUN_02ab3ef0(lVar3,*(undefined8 *)(*(long *)(*unaff_x20 + 0xc0) + 0x20));
                          if (lVar3 != 0) {
                            *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)StringLiteral_2184;
                            thunk_FUN_01e10808();
                            lVar4 = *(long *)(unaff_x21 + 0x10);
                            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                            if (lVar4 != 0) {
                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                plVar2 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar2 = lVar3;
                                thunk_FUN_01e10808(plVar2,lVar3);
                              }
                              else {
                                FUN_03198f70();
                              }
                              *(long *)(unaff_x19 + 0x18) = unaff_x21;
                              thunk_FUN_01e10808((long *)(unaff_x19 + 0x18));
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
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


