/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$OnPointerClick
ENTRY_POINT: 0144d5cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__OnPointerClick(void)

{
  uint uVar1;
  uint uVar2;
  int in_w8;
  long lVar3;
  int in_w9;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  
  if (in_w8 < in_w9) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined4 *)(unaff_x19 + 0x10) = 2;
    return 1;
  }
  lVar3 = *(long *)(unaff_x19 + 0x90);
  if (lVar3 == 0) {
LAB_0144d820:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x30);
  if ((uVar1 - in_w9 < *(uint *)(lVar3 + 0x18)) && (uVar1 < *(uint *)(lVar3 + 0x18))) {
    lVar4 = *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_0144d820;
    uVar2 = *(uint *)(unaff_x19 + 0x2c);
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
      lVar3 = *(long *)(lVar3 + (long)(int)(uVar1 - in_w9) * 8 + 0x20);
      if (lVar3 == 0) goto LAB_0144d820;
      uVar1 = uVar2 - *(int *)(unaff_x19 + 0xa0);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar2 * 0x10;
        uVar5 = *(undefined8 *)(lVar4 + 0x20);
        lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
        *(undefined8 *)(lVar3 + 0x20) = uVar5;
        lVar3 = *(long *)(unaff_x19 + 0x90);
        if (lVar3 == 0) goto LAB_0144d820;
        uVar2 = (*(int *)(unaff_x19 + 0x9c) + *(int *)(unaff_x19 + 0x30)) - 1;
        uVar1 = uVar2 + *(int *)(unaff_x19 + 0xa4);
        if ((uVar1 < *(uint *)(lVar3 + 0x18)) && (uVar2 < *(uint *)(lVar3 + 0x18))) {
          lVar4 = *(long *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
          if (lVar4 == 0) goto LAB_0144d820;
          uVar2 = *(uint *)(unaff_x19 + 0x2c);
          if (uVar2 < *(uint *)(lVar4 + 0x18)) {
            lVar3 = *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
            if (lVar3 == 0) goto LAB_0144d820;
            uVar1 = uVar2 - *(int *)(unaff_x19 + 0xa0);
            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
              lVar4 = lVar4 + (long)(int)uVar2 * 0x10;
              uVar5 = *(undefined8 *)(lVar4 + 0x20);
              lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
              *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
              *(undefined8 *)(lVar3 + 0x20) = uVar5;
              lVar3 = *(long *)(unaff_x19 + 0x90);
              if (lVar3 == 0) goto LAB_0144d820;
              uVar2 = (*(int *)(unaff_x19 + 0x9c) + *(int *)(unaff_x19 + 0x30)) - 1;
              uVar1 = uVar2 + *(int *)(unaff_x19 + 0xa4);
              if ((uVar1 < *(uint *)(lVar3 + 0x18)) && (uVar2 < *(uint *)(lVar3 + 0x18))) {
                lVar4 = *(long *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
                if (lVar4 == 0) goto LAB_0144d820;
                uVar2 = (*(int *)(unaff_x19 + 0x98) + *(int *)(unaff_x19 + 0x2c)) - 1;
                if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                  lVar3 = *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                  if (lVar3 == 0) goto LAB_0144d820;
                  uVar1 = uVar2 + *(int *)(unaff_x19 + 0xa0);
                  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                    lVar4 = lVar4 + (long)(int)uVar2 * 0x10;
                    uVar5 = *(undefined8 *)(lVar4 + 0x20);
                    lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
                    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
                    *(undefined8 *)(lVar3 + 0x20) = uVar5;
                    lVar3 = *(long *)(unaff_x19 + 0x90);
                    if (lVar3 == 0) goto LAB_0144d820;
                    uVar1 = *(uint *)(unaff_x19 + 0x30);
                    uVar2 = uVar1 - *(int *)(unaff_x19 + 0xa4);
                    if ((uVar2 < *(uint *)(lVar3 + 0x18)) && (uVar1 < *(uint *)(lVar3 + 0x18))) {
                      lVar4 = *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                      if (lVar4 == 0) goto LAB_0144d820;
                      uVar1 = (*(int *)(unaff_x19 + 0x98) + *(int *)(unaff_x19 + 0x2c)) - 1;
                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                        lVar3 = *(long *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
                        if (lVar3 == 0) goto LAB_0144d820;
                        uVar2 = uVar1 + *(int *)(unaff_x19 + 0xa0);
                        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                          lVar4 = lVar4 + (long)(int)uVar1 * 0x10;
                          uVar5 = *(undefined8 *)(lVar4 + 0x20);
                          lVar3 = lVar3 + (long)(int)uVar2 * 0x10;
                          *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
                          *(undefined8 *)(lVar3 + 0x20) = uVar5;
                          *(undefined8 *)(unaff_x19 + 0x18) = 0;
                          *(undefined4 *)(unaff_x19 + 0x10) = 1;
                          return 1;
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
  FUN_00da5194();
}


