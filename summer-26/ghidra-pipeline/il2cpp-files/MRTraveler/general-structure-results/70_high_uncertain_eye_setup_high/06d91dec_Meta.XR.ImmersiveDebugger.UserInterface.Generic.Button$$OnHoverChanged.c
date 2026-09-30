/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$OnHoverChanged
ENTRY_POINT: 06d91dec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__OnHoverChanged(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  ulong uVar2;
  uint in_w8;
  long unaff_x19;
  undefined8 uVar3;
  long lVar4;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 in_s3;
  float unaff_s8;
  
  do {
    if (in_NG == in_OV) {
      return;
    }
    if (in_w8 <= unaff_w22) {
Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__OnHoverChanged:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar5 = *(long *)(unaff_x21 + (long)(int)unaff_w22 * 8 + 0x20);
    if (lVar5 == 0) {
LAB_06d91e0c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_085decd4(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      lVar4 = *(long *)(unaff_x19 + 0x58);
      if (lVar4 == 0) goto LAB_06d91e0c;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        uVar6 = 0;
        do {
          if (uVar1 <= uVar6)
          goto 
          Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__OnHoverChanged;
          lVar7 = *(long *)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_06d91e0c;
          if (*(int *)(lVar7 + 0x24) == *(int *)(lVar5 + 0x10)) {
            uVar3 = *(undefined8 *)(lVar5 + 0x20);
            *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(lVar5 + 0x28);
            *(undefined8 *)(lVar7 + 0x28) = uVar3;
            fVar9 = *(float *)(lVar5 + 0x30) * unaff_s8;
            fVar10 = *(float *)(lVar5 + 0x34) * unaff_s8;
            uVar8 = FUN_085d262c(*(float *)(lVar5 + 0x2c) * unaff_s8,0);
            *(undefined4 *)(lVar7 + 0x34) = uVar8;
            *(float *)(lVar7 + 0x38) = fVar9;
            *(float *)(lVar7 + 0x3c) = fVar10;
            *(undefined4 *)(lVar7 + 0x40) = in_s3;
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar1);
      }
    }
    in_w8 = *(uint *)(unaff_x21 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    in_OV = SBORROW4(unaff_w22,in_w8);
    in_NG = (int)(unaff_w22 - in_w8) < 0;
  } while( true );
}


