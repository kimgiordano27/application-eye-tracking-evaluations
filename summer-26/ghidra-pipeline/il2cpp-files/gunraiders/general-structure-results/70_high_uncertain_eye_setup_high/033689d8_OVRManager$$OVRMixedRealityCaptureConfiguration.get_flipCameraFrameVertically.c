/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically
ENTRY_POINT: 033689d8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically(long param_1)

{
  uint uVar1;
  undefined8 in_x10;
  long lVar2;
  uint in_w11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x25;
  
  do {
    uVar1 = (uint)param_1;
    if ((in_w11 < 6) || ((int)in_x10 - 0x10U < 2)) {
      lVar2 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar2 == 0)
      goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
      if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_03368a2c;
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar2 + param_1 * 8 + 0x20) = unaff_x21;
    }
    else {
      lVar2 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar2 == 0) {
OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar2 + param_1 * 8 + 0x20) = unaff_x20;
      }
      else {
LAB_03368a2c:
        FUN_02d5004c();
      }
    }
    do {
      unaff_x23 = unaff_x23 + 1;
      if ((long)(int)*(uint *)(unaff_x22 + 0x18) <= (long)unaff_x23) {
        if (unaff_x19 != 0) {
          FUN_02d51a80();
          return;
        }
        goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      if (unaff_x19 == 0)
      goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
      in_x10 = *(undefined8 *)(unaff_x25 + unaff_x23 * 8);
      param_1 = (long)*(int *)(unaff_x19 + 0x18);
    } while ((int)in_x10 < *(int *)(unaff_x19 + 0x18));
    in_w11 = (int)in_x10 - 7;
  } while( true );
}


