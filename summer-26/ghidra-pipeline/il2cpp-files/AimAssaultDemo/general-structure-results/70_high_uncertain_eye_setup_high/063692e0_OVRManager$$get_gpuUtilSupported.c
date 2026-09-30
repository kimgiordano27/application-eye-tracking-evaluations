/*
FUNCTION_NAME: OVRManager$$get_gpuUtilSupported
ENTRY_POINT: 063692e0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__get_gpuUtilSupported(undefined8 param_1)

{
  uint uVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int unaff_w19;
  long unaff_x20;
  
  if (!in_ZR && in_NG == in_OV) {
    FUN_049cec24(param_1,unaff_w19,*(undefined8 *)PTR_DAT_07db5720);
  }
  uVar2 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType();
  lVar4 = *(long *)(unaff_x20 + 0x30);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (unaff_w19 < (int)uVar1) {
      FUN_049cec78(lVar4,unaff_w19,uVar2,*(undefined8 *)PTR_DAT_07db5728);
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar6 = *(long *)PTR_DAT_07db5710;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 != 0) {
      if (*(uint *)(lVar5 + 0x18) <= uVar1) {
        FUN_049ceef4(lVar4,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        return;
      }
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      puVar3 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_037aeb94(puVar3,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


