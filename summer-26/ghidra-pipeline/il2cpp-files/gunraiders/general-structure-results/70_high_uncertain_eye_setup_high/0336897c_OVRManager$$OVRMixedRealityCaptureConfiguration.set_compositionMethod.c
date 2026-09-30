/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_compositionMethod
ENTRY_POINT: 0336897c
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


void OVRManager__OVRMixedRealityCaptureConfiguration_set_compositionMethod(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong uVar6;
  
  lVar2 = FUN_03378a24();
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar6 = 0;
      uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (unaff_x19 == 0)
        goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        iVar4 = (int)*(undefined8 *)(lVar2 + 0x20 + uVar6 * 8);
        if ((int)uVar1 <= iVar4) {
          if ((iVar4 - 7U < 6) || (iVar4 - 0x10U < 2)) {
            lVar5 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar5 == 0)
            goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
            if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_03368a2c;
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
          }
          else {
            lVar5 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar5 == 0)
            goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
            }
            else {
LAB_03368a2c:
              FUN_02d5004c();
            }
          }
        }
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
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


