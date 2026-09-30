/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$OnPointerClick
ENTRY_POINT: 06d91d7c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__OnPointerClick(void)

{
  uint uVar1;
  undefined1 in_CY;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  undefined8 *unaff_x26;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 in_s3;
  float unaff_s8;
  
  while (!(bool)in_CY) {
    lVar4 = *(long *)(unaff_x20 + (long)(int)unaff_w25 * 8 + 0x20);
    if (lVar4 == 0) {
LAB_06d91e0c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(int *)(lVar4 + 0x24) == *(int *)(unaff_x24 + 0x10)) {
      uVar3 = *unaff_x26;
      *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(unaff_x26 + 1);
      *(undefined8 *)(lVar4 + 0x28) = uVar3;
      fVar6 = *(float *)(unaff_x24 + 0x30) * unaff_s8;
      fVar7 = *(float *)(unaff_x24 + 0x34) * unaff_s8;
      uVar5 = FUN_085d262c(*(float *)(unaff_x24 + 0x2c) * unaff_s8,0);
      *(undefined4 *)(lVar4 + 0x34) = uVar5;
      *(float *)(lVar4 + 0x38) = fVar6;
      *(float *)(lVar4 + 0x3c) = fVar7;
      *(undefined4 *)(lVar4 + 0x40) = in_s3;
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    unaff_w25 = unaff_w25 + 1;
    if ((int)uVar1 <= (int)unaff_w25) {
      do {
        do {
          unaff_w22 = unaff_w22 + 1;
          if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w22) {
            return;
          }
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
          goto 
          Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__OnHoverChanged;
          unaff_x24 = *(long *)(unaff_x21 + (long)(int)unaff_w22 * 8 + 0x20);
          if (unaff_x24 == 0) goto LAB_06d91e0c;
          uVar3 = *(undefined8 *)(unaff_x24 + 0x18);
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar2 = FUN_085decd4(uVar3,0,0);
        } while ((uVar2 & 1) != 0);
        unaff_x20 = *(long *)(unaff_x19 + 0x58);
        if (unaff_x20 == 0) goto LAB_06d91e0c;
        uVar1 = *(uint *)(unaff_x20 + 0x18);
      } while ((int)uVar1 < 1);
      unaff_w25 = 0;
      unaff_x26 = (undefined8 *)(unaff_x24 + 0x20);
    }
    in_CY = uVar1 <= unaff_w25;
  }
Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__OnHoverChanged:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


