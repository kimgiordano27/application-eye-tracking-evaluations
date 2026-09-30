/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcInputVideoBufferType
ENTRY_POINT: 076db098
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcInputVideoBufferType
               (undefined1 param_1 [16],undefined8 param_2,undefined1 param_3 [16],
               undefined8 param_4)

{
  bool bVar1;
  long unaff_x19;
  long *unaff_x22;
  long unaff_x24;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000010 = param_2;
  uStack0000000000000020 = param_4;
  FUN_0403162c();
  *(undefined1 *)(unaff_x24 + 0xe18) = 1;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar6 = (float)uStack0000000000000020;
  fVar3 = (float)uStack0000000000000010;
  fVar5 = SQRT(unaff_s8 * unaff_s8 + fVar6 * fVar6 + fVar3 * fVar3);
  if (fVar5 <= fStack0000000000000008) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    uVar2 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    fVar4 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
  }
  else {
    fVar4 = unaff_s8 / fVar5;
    uVar2 = CONCAT44(fVar3 / fVar5,fVar6 / fVar5);
  }
  *(undefined8 *)(unaff_x19 + 0xc) = uVar2;
  *(float *)(unaff_x19 + 0x14) = fVar4;
  if (fStack000000000000000c <= 0.0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(float *)(unaff_x19 + 0x18) <= fStack000000000000000c;
  }
  return bVar1;
}


