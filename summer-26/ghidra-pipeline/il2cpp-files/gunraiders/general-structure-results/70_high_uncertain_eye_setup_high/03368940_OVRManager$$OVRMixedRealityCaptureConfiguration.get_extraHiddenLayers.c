/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers
ENTRY_POINT: 03368940
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


void OVRManager__OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers
               (long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *in_x9;
  int iVar4;
  long lVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x23;
  long *plVar8;
  ulong uVar9;
  
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  uVar7 = *in_x9;
  plVar8 = *(long **)(unaff_x23 + 0xb18);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar7 = FUN_032e04b8(uVar7,0);
  if (*(int *)(*plVar8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*plVar8);
  }
  lVar2 = FUN_03378a24(uVar7,0);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar9 = 0;
      uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (unaff_x19 == 0)
        goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        iVar4 = (int)*(undefined8 *)(lVar2 + 0x20 + uVar9 * 8);
        if ((int)uVar1 <= iVar4) {
          if ((iVar4 - 7U < 6) || (iVar4 - 0x10U < 2)) {
            lVar5 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar5 == 0)
            goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
            if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_03368a2c;
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
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
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar2 + 0x18));
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


