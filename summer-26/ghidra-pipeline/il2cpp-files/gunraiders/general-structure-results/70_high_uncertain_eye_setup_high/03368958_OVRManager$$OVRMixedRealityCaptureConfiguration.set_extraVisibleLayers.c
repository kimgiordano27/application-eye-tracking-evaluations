/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers
ENTRY_POINT: 03368958
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


void OVRManager__OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x23;
  ulong uVar7;
  
  uVar2 = FUN_032e04b8();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*unaff_x23);
  }
  lVar3 = FUN_03378a24(uVar2,0);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar7 = 0;
      uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (unaff_x19 == 0)
        goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        iVar5 = (int)*(undefined8 *)(lVar3 + 0x20 + uVar7 * 8);
        if ((int)uVar1 <= iVar5) {
          if ((iVar5 - 7U < 6) || (iVar5 - 0x10U < 2)) {
            lVar6 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar6 == 0)
            goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
            if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_03368a2c;
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
          }
          else {
            lVar6 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar6 == 0)
            goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
            }
            else {
LAB_03368a2c:
              FUN_02d5004c();
            }
          }
        }
        uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar3 + 0x18));
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


