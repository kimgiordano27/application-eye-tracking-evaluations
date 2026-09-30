/*
FUNCTION_NAME: OVRManager$$get_pluginVersion
ENTRY_POINT: 05ba86b0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_pluginVersion(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(char *)(param_3 + 0xdd) == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(param_3 + 0x4c);
  }
  fVar3 = *(float *)(param_3 + 0x48);
  if (*(char *)(param_3 + 0x40) == '\0') {
    param_2 = *(float *)(param_3 + 0x44);
  }
  else {
    FUN_05baa5d4(param_3);
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_05ba8740;
    fVar1 = param_2;
    FUN_069e6fbc(*(long *)(param_3 + 0x28),0);
    param_2 = param_2 - fVar1;
  }
  if (*(long *)(param_3 + 0x20) != 0) {
    fVar1 = (float)FUN_05ba4ee4(*(long *)(param_3 + 0x20),0);
    if (*(long *)(param_3 + 0x20) != 0) {
      param_2 = fVar3 + fVar2 + param_2;
      if (param_2 <= fVar1 + fVar1) {
        param_2 = fVar1 + fVar1;
      }
      FUN_05ba51b0(param_2,*(long *)(param_3 + 0x20),0);
      return;
    }
  }
LAB_05ba8740:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


