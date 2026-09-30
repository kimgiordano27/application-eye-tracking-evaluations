/*
FUNCTION_NAME: OVRPlugin.LayerDesc$$ToString
ENTRY_POINT: 076d9df8
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_LayerDesc__ToString(float param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  
  if (param_1 <= unaff_s8) {
    fVar4 = -1.0;
    fVar5 = fVar4;
    if (0.0 <= param_1) {
      fVar5 = 1.0;
    }
    if (0.0 <= param_2) {
      fVar4 = 1.0;
    }
    fVar2 = param_1;
    if (fVar5 != fVar4) {
      fVar2 = param_2;
      if (param_2 <= param_1) {
        fVar2 = param_1;
      }
      *(float *)(unaff_x19 + 3) = fVar2;
    }
    fVar5 = (float)((ulong)*unaff_x20 >> 0x20) +
            (float)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20) * fVar2;
    fVar4 = *(float *)(unaff_x20 + 1) + *(float *)((long)unaff_x20 + 0x14) * fVar2;
    *unaff_x19 = CONCAT44(fVar5,(float)*unaff_x20 +
                                (float)*(undefined8 *)((long)unaff_x20 + 0xc) * fVar2);
    *(float *)(unaff_x19 + 1) = fVar4;
    uVar3 = FUN_076d9b6c();
    uVar1 = 1;
    *(undefined4 *)((long)unaff_x19 + 0xc) = uVar3;
    *(float *)(unaff_x19 + 2) = fVar5;
    *(float *)((long)unaff_x19 + 0x14) = fVar4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


