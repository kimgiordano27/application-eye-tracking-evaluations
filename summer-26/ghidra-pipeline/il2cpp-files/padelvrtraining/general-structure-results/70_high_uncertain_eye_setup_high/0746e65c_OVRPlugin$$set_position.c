/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 0746e65c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__set_position(void)

{
  float *pfVar1;
  float *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  float fVar2;
  float in_s4;
  float unaff_s8;
  float fVar3;
  float unaff_s9;
  float unaff_s10;
  float fVar4;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
  float fVar5;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  fStack000000000000000c = unaff_s9;
  FUN_03d2d2b0();
  *(undefined1 *)(unaff_x21 + 0x3f2) = 1;
  fVar2 = unaff_s15 * unaff_s15 + unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11;
  if (**(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) <= fVar2) {
    fVar3 = (unaff_s12 - fStack000000000000002c) * unaff_s15 +
            (fStack0000000000000014 - fStack0000000000000024) * unaff_s10 +
            (fStack0000000000000018 - fStack0000000000000028) * unaff_s11;
    fVar4 = (unaff_s10 * fVar3) / fVar2;
    fVar5 = (unaff_s11 * fVar3) / fVar2;
    fVar2 = (unaff_s15 * fVar3) / fVar2;
  }
  else {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar4 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar2 = pfVar1[2];
  }
  if (unaff_s8 * fVar2 + fStack000000000000000c * fVar4 + unaff_s14 * fVar5 <= 0.0) {
    fVar2 = 0.0;
    fStack000000000000001c = fStack0000000000000024;
  }
  else {
    fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar2 * fVar2;
    fVar2 = 1.0;
    if (fVar3 < in_s4) {
      if (DAT_098362cc == '\0') {
        FUN_03d2d2b0(0x3f800000,fStack000000000000001c,uStack0000000000000020,PTR_DAT_091a1008);
        DAT_098362cc = '\x01';
      }
      if ((*(int *)(*unaff_x20 + 0xe0) == 0) && (thunk_FUN_03db619c(), DAT_098362cc == '\0')) {
        FUN_03d2d2b0(PTR_DAT_091a1008);
        DAT_098362cc = '\x01';
      }
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      fStack000000000000001c = fStack0000000000000024 + fVar4;
      fVar2 = SQRT(fVar3) / fStack0000000000000010;
    }
  }
  *unaff_x19 = fVar2;
  return fStack000000000000001c;
}


