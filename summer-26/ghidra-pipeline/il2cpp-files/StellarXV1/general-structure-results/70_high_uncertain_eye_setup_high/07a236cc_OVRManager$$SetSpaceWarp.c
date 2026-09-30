/*
FUNCTION_NAME: OVRManager$$SetSpaceWarp
ENTRY_POINT: 07a236cc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetSpaceWarp(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_50 = 0;
  fVar2 = -*(float *)(param_2 + 0x20);
  if (0.0 <= param_1) {
    fVar2 = *(float *)(param_2 + 0x20);
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_089b9180(0,fVar2 * DAT_01aed080,0,0);
  if (*(long *)(param_2 + 0x30) != 0) {
    FUN_07a13554(&local_70,*(undefined4 *)(*(long *)(param_2 + 0x30) + 0x10),3,0);
    lVar1 = *(long *)(param_2 + 0x38);
    if (lVar1 != 0) {
      local_20 = local_50;
      uStack_38 = uStack_68;
      local_40 = local_70;
      uStack_28 = uStack_58;
      uStack_30 = uStack_60;
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),&local_40,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


