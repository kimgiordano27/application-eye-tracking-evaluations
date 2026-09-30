/*
FUNCTION_NAME: OVRPlugin$$GetSystemKeyboardDescription
ENTRY_POINT: 0368b748
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetSystemKeyboardDescription
          (float param_1,float param_2,float param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s12;
  
  if (param_3 <= param_1) {
    param_3 = param_1;
  }
  fVar4 = unaff_s12;
  if (param_2 <= unaff_s12) {
    fVar4 = param_2;
  }
  fVar6 = (float)((ulong)param_4 >> 0x20);
  if (unaff_s12 <= param_2) {
    unaff_s12 = param_2;
  }
  if (param_3 <= fVar4) {
    param_3 = fVar4;
  }
  fVar4 = (float)param_4;
  if (fVar6 <= (float)param_4) {
    fVar4 = fVar6;
  }
  if (unaff_s12 <= fVar4) {
    fVar4 = unaff_s12;
  }
  if ((fVar4 < 0.0) || (fVar4 < param_3)) {
    uVar1 = 0;
    *(float *)(unaff_x19 + 3) = fVar4;
  }
  else {
    *(float *)(unaff_x19 + 3) = param_3;
    if ((unaff_s8 <= 0.0) || (param_3 <= unaff_s8)) {
      fVar5 = 1.0;
      fVar6 = fVar5;
      if (param_3 < 0.0) {
        fVar6 = -1.0;
      }
      if (fVar4 < 0.0) {
        fVar5 = -1.0;
      }
      fVar2 = param_3;
      if (fVar6 != fVar5) {
        fVar2 = fVar4;
        if (fVar4 <= param_3) {
          fVar2 = param_3;
        }
        *(float *)(unaff_x19 + 3) = fVar2;
      }
      fVar4 = (float)((ulong)*unaff_x21 >> 0x20) +
              (float)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20) * fVar2;
      fVar6 = *(float *)(unaff_x21 + 1) + *(float *)((long)unaff_x21 + 0x14) * fVar2;
      *unaff_x19 = CONCAT44(fVar4,(float)*unaff_x21 +
                                  (float)*(undefined8 *)((long)unaff_x21 + 0xc) * fVar2);
      *(float *)(unaff_x19 + 1) = fVar6;
      uVar3 = FUN_0368b530();
      uVar1 = 1;
      *(undefined4 *)((long)unaff_x19 + 0xc) = uVar3;
      *(float *)(unaff_x19 + 2) = fVar4;
      *(float *)((long)unaff_x19 + 0x14) = fVar6;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


