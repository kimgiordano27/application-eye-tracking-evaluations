/*
FUNCTION_NAME: OVRPlugin.FovfPair$$set_Item
ENTRY_POINT: 076d9d50
PROGRAM: m3ar-libil2cpp.so
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
OVRPlugin_FovfPair__set_Item(undefined1 param_1 [16],undefined8 param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  undefined8 unaff_d10;
  ulong unaff_d11;
  float fVar9;
  float unaff_s12;
  
  fVar2 = (float)unaff_d10 * ((param_1._0_4_ + (float)param_2) - (float)*unaff_x20);
  fVar4 = (float)((ulong)unaff_d10 >> 0x20) *
          ((param_1._4_4_ + (float)((ulong)param_2 >> 0x20)) - (float)((ulong)*unaff_x20 >> 0x20));
  fVar7 = unaff_s9 * ((param_3 + param_4) - *(float *)(unaff_x20 + 1));
  fVar9 = (float)(unaff_d11 >> 0x20);
  uVar6 = CONCAT44(fVar4,fVar2) ^
          (CONCAT44(fVar4,fVar2) ^ unaff_d11) &
          CONCAT44(-(uint)(fVar9 < fVar4),-(uint)((float)unaff_d11 < fVar2));
  fVar8 = (float)(uVar6 >> 0x20);
  fVar5 = (float)uVar6;
  if (fVar5 <= fVar8) {
    fVar5 = fVar8;
  }
  uVar6 = CONCAT44(fVar4,fVar2) ^
          (CONCAT44(fVar4,fVar2) ^ unaff_d11) &
          CONCAT44(-(uint)(fVar4 < fVar9),-(uint)(fVar2 < (float)unaff_d11));
  fVar2 = unaff_s12;
  if (fVar7 <= unaff_s12) {
    fVar2 = fVar7;
  }
  if (unaff_s12 <= fVar7) {
    unaff_s12 = fVar7;
  }
  fVar4 = (float)(uVar6 >> 0x20);
  if (fVar5 <= fVar2) {
    fVar5 = fVar2;
  }
  fVar2 = (float)uVar6;
  if (fVar4 <= fVar2) {
    fVar2 = fVar4;
  }
  if (unaff_s12 <= fVar2) {
    fVar2 = unaff_s12;
  }
  if ((fVar2 < 0.0) || (fVar2 < fVar5)) {
    uVar1 = 0;
    *(float *)(unaff_x19 + 3) = fVar2;
  }
  else {
    *(float *)(unaff_x19 + 3) = fVar5;
    if ((unaff_s8 <= 0.0) || (fVar5 <= unaff_s8)) {
      fVar8 = -1.0;
      fVar4 = fVar8;
      if (0.0 <= fVar5) {
        fVar4 = 1.0;
      }
      if (0.0 <= fVar2) {
        fVar8 = 1.0;
      }
      fVar7 = fVar5;
      if (fVar4 != fVar8) {
        fVar7 = fVar2;
        if (fVar2 <= fVar5) {
          fVar7 = fVar5;
        }
        *(float *)(unaff_x19 + 3) = fVar7;
      }
      fVar5 = (float)((ulong)*unaff_x20 >> 0x20) +
              (float)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20) * fVar7;
      fVar2 = *(float *)(unaff_x20 + 1) + *(float *)((long)unaff_x20 + 0x14) * fVar7;
      *unaff_x19 = CONCAT44(fVar5,(float)*unaff_x20 +
                                  (float)*(undefined8 *)((long)unaff_x20 + 0xc) * fVar7);
      *(float *)(unaff_x19 + 1) = fVar2;
      uVar3 = FUN_076d9b6c();
      uVar1 = 1;
      *(undefined4 *)((long)unaff_x19 + 0xc) = uVar3;
      *(float *)(unaff_x19 + 2) = fVar5;
      *(float *)((long)unaff_x19 + 0x14) = fVar2;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


