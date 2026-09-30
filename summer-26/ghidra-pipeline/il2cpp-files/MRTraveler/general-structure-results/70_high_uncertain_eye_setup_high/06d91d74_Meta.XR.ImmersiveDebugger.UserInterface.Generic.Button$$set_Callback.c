/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$set_Callback
ENTRY_POINT: 06d91d74
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__set_Callback(void)

{
  ulong uVar1;
  uint in_w8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 in_s3;
  float unaff_s8;
  
  do {
    do {
      if (in_w8 <= unaff_w25)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__OnHoverChanged;
      lVar3 = *(long *)(unaff_x20 + (long)(int)unaff_w25 * 8 + 0x20);
      if (lVar3 == 0) goto LAB_06d91e0c;
      if (*(int *)(lVar3 + 0x24) == *(int *)(unaff_x24 + 0x10)) {
        uVar2 = *(undefined8 *)(unaff_x24 + 0x20);
        *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(unaff_x24 + 0x28);
        *(undefined8 *)(lVar3 + 0x28) = uVar2;
        fVar5 = *(float *)(unaff_x24 + 0x30) * unaff_s8;
        fVar6 = *(float *)(unaff_x24 + 0x34) * unaff_s8;
        uVar4 = FUN_085d262c(*(float *)(unaff_x24 + 0x2c) * unaff_s8,0);
        *(undefined4 *)(lVar3 + 0x34) = uVar4;
        *(float *)(lVar3 + 0x38) = fVar5;
        *(float *)(lVar3 + 0x3c) = fVar6;
        *(undefined4 *)(lVar3 + 0x40) = in_s3;
      }
      in_w8 = *(uint *)(unaff_x20 + 0x18);
      unaff_w25 = unaff_w25 + 1;
    } while ((int)unaff_w25 < (int)in_w8);
    do {
      do {
        unaff_w22 = unaff_w22 + 1;
        if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w22) {
          return;
        }
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) {
Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__OnHoverChanged:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        unaff_x24 = *(long *)(unaff_x21 + (long)(int)unaff_w22 * 8 + 0x20);
        if (unaff_x24 == 0) {
LAB_06d91e0c:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar2 = *(undefined8 *)(unaff_x24 + 0x18);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar1 = FUN_085decd4(uVar2,0,0);
      } while ((uVar1 & 1) != 0);
      unaff_x20 = *(long *)(unaff_x19 + 0x58);
      if (unaff_x20 == 0) goto LAB_06d91e0c;
      in_w8 = *(uint *)(unaff_x20 + 0x18);
    } while ((int)in_w8 < 1);
    unaff_w25 = 0;
  } while( true );
}


