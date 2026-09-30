/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally
ENTRY_POINT: 033689cc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally(long param_1)

{
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  uint uVar2;
  int iVar3;
  undefined8 in_x10;
  long lVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x25;
  
  do {
    if ((bool)in_ZR || in_NG != in_OV) {
      uVar2 = (uint)param_1;
      if (((int)in_x10 - 7U < 6) || ((int)in_x10 - 0x10U < 2)) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar4 == 0)
        goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
        if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_03368a2c;
        *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar4 + param_1 * 8 + 0x20) = unaff_x21;
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar4 == 0)
        goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar4 + param_1 * 8 + 0x20) = unaff_x20;
        }
        else {
LAB_03368a2c:
          FUN_02d5004c();
        }
      }
    }
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x22 + 0x18) <= (long)unaff_x23) {
      if (unaff_x19 != 0) {
        FUN_02d51a80();
        return;
      }
OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    if (unaff_x19 == 0)
    goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
    in_x10 = *(undefined8 *)(unaff_x25 + unaff_x23 * 8);
    iVar1 = *(int *)(unaff_x19 + 0x18);
    param_1 = (long)iVar1;
    iVar3 = (int)in_x10;
    in_OV = SBORROW4(iVar1,iVar3);
    in_NG = iVar1 - iVar3 < 0;
    in_ZR = iVar1 == iVar3;
  } while( true );
}


