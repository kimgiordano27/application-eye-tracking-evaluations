/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 06968000
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__EncodeMrcFrame(undefined1 param_1 [16],float param_2,float param_3)

{
  bool bVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  
  fVar3 = param_2;
  fVar4 = param_3;
  fVar2 = (float)FUN_07cac280();
  if (DAT_08974e27 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974e27 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (*(float *)(unaff_x19 + 0x24) <= 0.0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(float *)(unaff_x19 + 0x24) <= *(float *)(unaff_x19 + 0x54);
  }
  if (*(char *)(unaff_x19 + 0x28) == '\0') {
    if (*(float *)(unaff_x19 + 0x20) <
        SQRT((param_3 - fVar4) * (param_3 - fVar4) +
             (unaff_s8 - fVar2) * (unaff_s8 - fVar2) + (param_2 - fVar3) * (param_2 - fVar3))) {
      bVar1 = true;
    }
    if ((bVar1) || (*(char *)(unaff_x19 + 0x38) != '\0')) {
      FUN_07c9e6b0(0,DAT_015c5990);
    }
  }
  *(float *)(unaff_x19 + 0x54) = *(float *)(unaff_x19 + 0x54) + 1.0;
  return;
}


