/*
FUNCTION_NAME: OVRPlugin.OVRP_1_93_0$$ovrp_IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 05d5190c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_possible_biometrics_hits_2
*/


void OVRPlugin_OVRP_1_93_0__ovrp_IsWideMotionModeHandPosesEnabled(uint param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((DAT_07398bc3 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f99248);
    DAT_07398bc3 = 1;
  }
  puVar1 = PTR_DAT_06f99248;
  if (param_1 != 0) {
    iVar3 = 1;
    do {
      lVar2 = FUN_05d515d8();
      if (lVar2 == 0) {
        return;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_05d516ac(lVar2);
      lVar2 = (long)iVar3;
      iVar3 = iVar3 + 1;
    } while (lVar2 < (long)(ulong)param_1);
  }
  return;
}


