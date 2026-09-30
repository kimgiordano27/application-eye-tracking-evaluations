/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest
ENTRY_POINT: 0336899c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest
               (ulong param_1)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  int iVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong uVar4;
  
  if (in_NG == in_OV) {
    uVar4 = 0;
    param_1 = param_1 & 0xffffffff;
    do {
      if (param_1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      if (unaff_x19 == 0)
      goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      iVar2 = (int)*(undefined8 *)(unaff_x22 + 0x20 + uVar4 * 8);
      if ((int)uVar1 <= iVar2) {
        if ((iVar2 - 7U < 6) || (iVar2 - 0x10U < 2)) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar3 == 0)
          goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
          if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_03368a2c;
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar3 == 0)
          goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
          }
          else {
LAB_03368a2c:
            FUN_02d5004c();
          }
        }
      }
      param_1 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x22 + 0x18));
  }
  if (unaff_x19 != 0) {
    FUN_02d51a80();
    return;
  }
OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


