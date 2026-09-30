/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 073e12f4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__SetTrackingCalibratedOrigin(float *param_1)

{
  long lVar1;
  float *pfVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_s3;
  float in_s4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  if (*param_1 <= unaff_s8) {
    fVar3 = unaff_s14 * unaff_s13 + in_s4 * unaff_s15 + in_s3 * unaff_s12;
    unaff_s15 = unaff_s15 - (in_s4 * fVar3) / unaff_s8;
    unaff_s12 = unaff_s12 - (in_s3 * fVar3) / unaff_s8;
    unaff_s13 = unaff_s13 - (unaff_s14 * fVar3) / unaff_s8;
  }
  if (*(char *)(unaff_x21 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x21 + 0xb4) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar3 = SQRT(unaff_s13 * unaff_s13 + unaff_s15 * unaff_s15 + unaff_s12 * unaff_s12);
  fStack000000000000000c = unaff_s9;
  if (fVar3 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x23 + 0xff5) = 1;
    }
    pfVar2 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000008 = *pfVar2;
    fStack0000000000000004 = pfVar2[1];
    fVar3 = pfVar2[2];
  }
  else {
    fStack0000000000000008 = unaff_s15 / fVar3;
    fStack0000000000000004 = unaff_s12 / fVar3;
    fVar3 = unaff_s13 / fVar3;
  }
  if (*(char *)(unaff_x19 + 0x146) == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    *(undefined1 *)(unaff_x19 + 0x146) = 1;
  }
  lVar1 = *(long *)(*unaff_x22 + 0xb8);
  fVar4 = (float)FUN_085d2bd4(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar1 + 0x48),
                              *(undefined4 *)(lVar1 + 0x4c),*(undefined4 *)(lVar1 + 0x50),0);
  if (*(char *)(unaff_x20 + 0xea2) == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    *(undefined1 *)(unaff_x20 + 0xea2) = 1;
  }
  if (**(float **)(*unaff_x25 + 0xb8) <= unaff_s8) {
    fVar5 = unaff_s14 * fStack00000000000000a8 +
            fStack0000000000000014 * fVar4 + fStack0000000000000018 * fStack00000000000000a4;
    fVar4 = fVar4 - (fStack0000000000000014 * fVar5) / unaff_s8;
    fStack00000000000000a4 = fStack00000000000000a4 - (fStack0000000000000018 * fVar5) / unaff_s8;
    fStack00000000000000a8 = fStack00000000000000a8 - (unaff_s14 * fVar5) / unaff_s8;
  }
  if (*(char *)(unaff_x21 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x21 + 0xb4) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar5 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar4 * fVar4 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar5 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x23 + 0xff5) = 1;
    }
    pfVar2 = *(float **)(*unaff_x22 + 0xb8);
    fVar4 = *pfVar2;
    fStack00000000000000a4 = pfVar2[1];
    fStack00000000000000a8 = pfVar2[2];
  }
  else {
    fVar4 = fVar4 / fVar5;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar5;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar5;
  }
  fVar5 = (float)FUN_085d2264(fStack0000000000000008,fStack0000000000000004,fVar3,fVar4,
                              fStack00000000000000a4,fStack00000000000000a8,0);
  return (fStack0000000000000010 * fStack0000000000000004 + unaff_s11 * fVar4 + unaff_s10 * fVar5) -
         fStack000000000000000c * fVar3;
}


