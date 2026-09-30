/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 073e1280
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__GetTrackingCalibratedOrigin(undefined1 param_1 [16],float param_2)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float fVar6;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar7;
  float unaff_s14;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  fVar7 = unaff_s8;
  fStack0000000000000008 = (float)FUN_085d2bd4(0);
  if (DAT_09410ea2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_09410ea2 = '\x01';
  }
  puVar1 = PTR_DAT_08e722b0;
  fVar6 = unaff_s14 * unaff_s14 +
          in_stack_00000010._4_4_ * in_stack_00000010._4_4_ +
          fStack0000000000000018 * fStack0000000000000018;
  if (**(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) <= fVar6) {
    fVar4 = unaff_s14 * fVar7 +
            in_stack_00000010._4_4_ * fStack0000000000000008 + fStack0000000000000018 * param_2;
    fStack0000000000000008 = fStack0000000000000008 - (in_stack_00000010._4_4_ * fVar4) / fVar6;
    param_2 = param_2 - (fStack0000000000000018 * fVar4) / fVar6;
    fVar7 = fVar7 - (unaff_s14 * fVar4) / fVar6;
  }
  if (*(char *)(unaff_x21 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x21 + 0xb4) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar4 = SQRT(fVar7 * fVar7 + fStack0000000000000008 * fStack0000000000000008 + param_2 * param_2);
  fStack000000000000000c = unaff_s9;
  if (fVar4 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x23 + 0xff5) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000008 = *pfVar3;
    fStack0000000000000004 = pfVar3[1];
    fVar7 = pfVar3[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar4;
    fStack0000000000000004 = param_2 / fVar4;
    fVar7 = fVar7 / fVar4;
  }
  if (*(char *)(unaff_x19 + 0x146) == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    *(undefined1 *)(unaff_x19 + 0x146) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar4 = (float)FUN_085d2bd4(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar2 + 0x48),
                              *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_09410ea2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_09410ea2 = '\x01';
  }
  if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar6) {
    fVar5 = unaff_s14 * fStack00000000000000a8 +
            in_stack_00000010._4_4_ * fVar4 + fStack0000000000000018 * fStack00000000000000a4;
    fVar4 = fVar4 - (in_stack_00000010._4_4_ * fVar5) / fVar6;
    fStack00000000000000a4 = fStack00000000000000a4 - (fStack0000000000000018 * fVar5) / fVar6;
    fStack00000000000000a8 = fStack00000000000000a8 - (unaff_s14 * fVar5) / fVar6;
  }
  if (*(char *)(unaff_x21 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x21 + 0xb4) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar6 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar4 * fVar4 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar6 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x23 + 0xff5) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar4 = *pfVar3;
    fStack00000000000000a4 = pfVar3[1];
    fStack00000000000000a8 = pfVar3[2];
  }
  else {
    fVar4 = fVar4 / fVar6;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar6;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar6;
  }
  fVar6 = (float)FUN_085d2264(fStack0000000000000008,fStack0000000000000004,fVar7,fVar4,
                              fStack00000000000000a4,fStack00000000000000a8,0);
  return (unaff_s8 * fStack0000000000000004 + unaff_s11 * fVar4 + unaff_s10 * fVar6) -
         fStack000000000000000c * fVar7;
}


