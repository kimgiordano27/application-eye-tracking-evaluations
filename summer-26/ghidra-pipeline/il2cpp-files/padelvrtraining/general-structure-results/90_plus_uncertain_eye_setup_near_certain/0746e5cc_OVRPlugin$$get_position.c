/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 0746e5cc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_position(float param_1,float param_2)

{
  float *pfVar1;
  float *unaff_x19;
  long *unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar6;
  float unaff_s11;
  float fVar7;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
  float fVar8;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 in_stack_00000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  fVar5 = unaff_s8 * unaff_s8 + param_1 + param_2;
  fVar2 = SQRT(fVar5);
  fStack0000000000000024 = unaff_s15;
  fStack0000000000000028 = unaff_s11;
  fStack000000000000002c = unaff_s10;
  if (fVar2 <= DAT_0191476c) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
  }
  else {
    fVar6 = unaff_s9 / fVar2;
    fVar7 = unaff_s14 / fVar2;
    fVar8 = unaff_s8 / fVar2;
  }
  if (DAT_098373f2 == '\0') {
    fStack000000000000000c = unaff_s9;
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    DAT_098373f2 = '\x01';
    unaff_s9 = fStack000000000000000c;
  }
  fVar3 = fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7;
  if (**(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) <= fVar3) {
    fVar4 = (unaff_s12 - fStack000000000000002c) * fVar8 +
            (in_stack_00000010._4_4_ - fStack0000000000000024) * fVar6 +
            (fStack0000000000000018 - fStack0000000000000028) * fVar7;
    fVar6 = (fVar6 * fVar4) / fVar3;
    fVar7 = (fVar7 * fVar4) / fVar3;
    fVar3 = (fVar8 * fVar4) / fVar3;
  }
  else {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  if (unaff_s8 * fVar3 + unaff_s9 * fVar6 + unaff_s14 * fVar7 <= 0.0) {
    fVar7 = 0.0;
    fStack000000000000001c = fStack0000000000000024;
  }
  else {
    fVar8 = fVar6 * fVar6 + fVar7 * fVar7 + fVar3 * fVar3;
    fVar7 = 1.0;
    if (fVar8 < fVar5) {
      if (DAT_098362cc == '\0') {
        FUN_03d2d2b0(0x3f800000,fStack000000000000001c,in_stack_00000020,PTR_DAT_091a1008);
        DAT_098362cc = '\x01';
      }
      if ((*(int *)(*unaff_x20 + 0xe0) == 0) && (thunk_FUN_03db619c(), DAT_098362cc == '\0')) {
        FUN_03d2d2b0(PTR_DAT_091a1008);
        DAT_098362cc = '\x01';
      }
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      fStack000000000000001c = fStack0000000000000024 + fVar6;
      fVar7 = SQRT(fVar8) / fVar2;
    }
  }
  *unaff_x19 = fVar7;
  return fStack000000000000001c;
}


