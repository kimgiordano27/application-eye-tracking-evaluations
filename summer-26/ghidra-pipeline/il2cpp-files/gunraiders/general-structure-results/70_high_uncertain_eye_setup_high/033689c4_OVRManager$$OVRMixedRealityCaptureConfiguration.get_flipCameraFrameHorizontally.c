/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally
ENTRY_POINT: 033689c4
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


void OVRManager__OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally(void)

{
  uint uVar1;
  int iVar2;
  undefined8 in_x10;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x25;
  
  do {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    iVar2 = (int)in_x10;
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
  } while( true );
}


