/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetRightControllerTransformDelegate$$BeginInvoke
ENTRY_POINT: 06d9182c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetRightControllerTransformDelegate__BeginInvoke
               (void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar11;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  FUN_069a0c14();
  if (unaff_x21 != 0) {
    uVar5 = FUN_085875ac();
    lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
    if (lVar10 != 0) {
      lVar11 = *unaff_x20;
      uVar4 = FUN_069a0c14(lVar10,0x3f,*unaff_x25);
      if (lVar11 != 0) {
        uVar6 = FUN_085875ac(lVar11,uVar4,0);
        uVar7 = thunk_FUN_03cf5234(*unaff_x26);
        FUN_06d926d0(uVar7,uVar5,uVar6,0x3e,0x3f);
        lVar10 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar2 = *(uint *)(unaff_x19 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
            puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
            *puVar8 = uVar7;
            thunk_FUN_03d233cc(puVar8,uVar7);
          }
          else {
            FUN_05212cf4();
          }
          lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
          if (lVar10 != 0) {
            lVar11 = *unaff_x20;
            uVar4 = FUN_069a0c14(lVar10,0x2d,*unaff_x25);
            if (lVar11 != 0) {
              uVar5 = FUN_085875ac(lVar11,uVar4,0);
              lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
              if (lVar10 != 0) {
                lVar11 = *unaff_x20;
                uVar4 = FUN_069a0c14(lVar10,0x42,*unaff_x25);
                if (lVar11 != 0) {
                  uVar6 = FUN_085875ac(lVar11,uVar4,0);
                  uVar7 = thunk_FUN_03cf5234(*unaff_x26);
                  FUN_06d926d0(uVar7,uVar5,uVar6,0x2d,0x42);
                  lVar10 = *(long *)(unaff_x19 + 0x10);
                  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                  if (lVar10 != 0) {
                    uVar2 = *(uint *)(unaff_x19 + 0x18);
                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                      puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                      *puVar8 = uVar7;
                      thunk_FUN_03d233cc(puVar8,uVar7);
                    }
                    else {
                      FUN_05212cf4();
                    }
                    lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
                    if (lVar10 != 0) {
                      lVar11 = *unaff_x20;
                      uVar4 = FUN_069a0c14(lVar10,0x42,*unaff_x25);
                      if (lVar11 != 0) {
                        uVar5 = FUN_085875ac(lVar11,uVar4,0);
                        lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
                        if (lVar10 != 0) {
                          lVar11 = *unaff_x20;
                          uVar4 = FUN_069a0c14(lVar10,0x43,*unaff_x25);
                          if (lVar11 != 0) {
                            uVar6 = FUN_085875ac(lVar11,uVar4,0);
                            uVar7 = thunk_FUN_03cf5234(*unaff_x26);
                            FUN_06d926d0(uVar7,uVar5,uVar6,0x42,0x43);
                            lVar10 = *(long *)(unaff_x19 + 0x10);
                            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                            if (lVar10 != 0) {
                              uVar2 = *(uint *)(unaff_x19 + 0x18);
                              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                                puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                                *puVar8 = uVar7;
                                thunk_FUN_03d233cc(puVar8,uVar7);
                              }
                              else {
                                FUN_05212cf4();
                              }
                              lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
                              if (lVar10 != 0) {
                                lVar11 = *unaff_x20;
                                uVar4 = FUN_069a0c14(lVar10,0x43,*unaff_x25);
                                if (lVar11 != 0) {
                                  uVar5 = FUN_085875ac(lVar11,uVar4,0);
                                  lVar10 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
                                  if (lVar10 != 0) {
                                    lVar11 = *unaff_x20;
                                    uVar4 = FUN_069a0c14(lVar10,0x44,*unaff_x25);
                                    if (lVar11 != 0) {
                                      uVar6 = FUN_085875ac(lVar11,uVar4,0);
                                      uVar7 = thunk_FUN_03cf5234(*unaff_x26);
                                      FUN_06d926d0(uVar7,uVar5,uVar6,0x43,0x44);
                                      lVar10 = *(long *)(unaff_x19 + 0x10);
                                      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                                      if (lVar10 != 0) {
                                        uVar2 = *(uint *)(unaff_x19 + 0x18);
                                        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                                          puVar8 = (undefined8 *)
                                                   (lVar10 + (long)(int)uVar2 * 8 + 0x20);
                                          *puVar8 = uVar7;
                                          thunk_FUN_03d233cc(puVar8,uVar7);
                                        }
                                        else {
                                          FUN_05212cf4();
                                        }
                                        puVar3 = PTR_DAT_08e68f00;
                                        iVar1 = *(int *)(unaff_x19 + 0x18);
joined_r0x06d91be8:
                                        iVar1 = iVar1 + -1;
                                        if (iVar1 < 0) {
                                          return;
                                        }
                                        lVar10 = FUN_05212a24();
                                        if (lVar10 != 0) {
                                          lVar11 = *(long *)puVar3;
                                          uVar5 = *(undefined8 *)(lVar10 + 0x10);
                                          if (*(int *)(lVar11 + 0xe0) == 0) {
                                            thunk_FUN_03cd7500(lVar11);
                                          }
                                          uVar9 = FUN_085dfaac(uVar5,0,0);
                                          if ((uVar9 & 1) != 0) goto LAB_06d91c84;
                                          lVar10 = FUN_05212a24();
                                          if (lVar10 != 0) goto code_r0x06d91c58;
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
  FUN_03c8fb30();
code_r0x06d91c58:
  lVar11 = *(long *)puVar3;
  uVar5 = *(undefined8 *)(lVar10 + 0x18);
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar11);
  }
  uVar9 = FUN_085dfaac(uVar5,0,0);
  if ((uVar9 & 1) != 0) {
LAB_06d91c84:
    FUN_052143ec();
  }
  goto joined_r0x06d91be8;
}


