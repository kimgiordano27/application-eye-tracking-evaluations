/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift
ENTRY_POINT: 03368990
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift(void)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong uVar5;
  
  if (unaff_x22 != 0) {
    if (0 < (int)*(ulong *)(unaff_x22 + 0x18)) {
      uVar5 = 0;
      uVar2 = *(ulong *)(unaff_x22 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (unaff_x19 == 0)
        goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        iVar3 = (int)*(undefined8 *)(unaff_x22 + 0x20 + uVar5 * 8);
        if ((int)uVar1 <= iVar3) {
          if ((iVar3 - 7U < 6) || (iVar3 - 0x10U < 2)) {
            lVar4 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar4 == 0)
            goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
            if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_03368a2c;
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
          }
          else {
            lVar4 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar4 == 0)
            goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
            }
            else {
LAB_03368a2c:
              FUN_02d5004c();
            }
          }
        }
        uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(unaff_x22 + 0x18));
    }
    if (unaff_x19 != 0) {
      FUN_02d51a80();
      return;
    }
  }
OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


