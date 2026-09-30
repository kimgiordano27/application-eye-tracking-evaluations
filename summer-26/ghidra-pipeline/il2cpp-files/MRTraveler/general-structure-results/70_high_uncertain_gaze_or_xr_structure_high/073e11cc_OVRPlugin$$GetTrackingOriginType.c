/*
FUNCTION_NAME: OVRPlugin$$GetTrackingOriginType
ENTRY_POINT: 073e11cc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__GetTrackingOriginType
                (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float unaff_s11;
  float fVar9;
  float unaff_s12;
  float fVar10;
  float fVar11;
  float unaff_s14;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  fStack0000000000000014 = unaff_s12;
  fVar4 = (float)FUN_085d2264(0);
  fVar8 = (unaff_s9 * param_3 + fStack000000000000000c * param_4 + unaff_s11 * param_2) -
          in_stack_00000010 * fVar4;
  fVar9 = (in_stack_00000010 * param_2 + unaff_s9 * param_4 + unaff_s11 * fVar4) -
          fStack000000000000000c * param_3;
  fVar6 = (fStack000000000000000c * fVar4 + in_stack_00000010 * param_4 + unaff_s11 * param_3) -
          unaff_s9 * param_2;
  fVar4 = ((unaff_s11 * param_4 - unaff_s9 * fVar4) - fStack000000000000000c * param_2) -
          in_stack_00000010 * param_3;
  if (DAT_09410146 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_09410146 = '\x01';
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar10 = fVar8;
  fVar11 = fVar6;
  fStack0000000000000008 =
       (float)FUN_085d2bd4(fVar9,fVar8,fVar6,fVar4,*(undefined4 *)(lVar2 + 0x48),
                           *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_09410ea2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_09410ea2 = '\x01';
  }
  puVar1 = PTR_DAT_08e722b0;
  fVar7 = unaff_s14 * unaff_s14 +
          fStack0000000000000014 * fStack0000000000000014 + unaff_s10 * unaff_s10;
  if (**(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) <= fVar7) {
    fVar5 = unaff_s14 * fVar11 +
            fStack0000000000000014 * fStack0000000000000008 + unaff_s10 * fVar10;
    fStack0000000000000008 = fStack0000000000000008 - (fStack0000000000000014 * fVar5) / fVar7;
    fVar10 = fVar10 - (unaff_s10 * fVar5) / fVar7;
    fVar11 = fVar11 - (unaff_s14 * fVar5) / fVar7;
  }
  if (*(char *)(unaff_x21 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x21 + 0xb4) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar5 = SQRT(fVar11 * fVar11 + fStack0000000000000008 * fStack0000000000000008 + fVar10 * fVar10);
  if (fVar5 <= in_stack_00000018._4_4_) {
    if (*(char *)(unaff_x23 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x23 + 0xff5) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000008 = *pfVar3;
    fStack0000000000000004 = pfVar3[1];
    fVar11 = pfVar3[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar5;
    fStack0000000000000004 = fVar10 / fVar5;
    fVar11 = fVar11 / fVar5;
  }
  if (DAT_09410146 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_09410146 = '\x01';
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar10 = (float)FUN_085d2bd4(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                               uStack00000000000000ac,*(undefined4 *)(lVar2 + 0x48),
                               *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_09410ea2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_09410ea2 = '\x01';
  }
  if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar7) {
    fVar5 = unaff_s14 * fStack00000000000000a8 +
            fStack0000000000000014 * fVar10 + unaff_s10 * fStack00000000000000a4;
    fVar10 = fVar10 - (fStack0000000000000014 * fVar5) / fVar7;
    fStack00000000000000a4 = fStack00000000000000a4 - (unaff_s10 * fVar5) / fVar7;
    fStack00000000000000a8 = fStack00000000000000a8 - (unaff_s14 * fVar5) / fVar7;
  }
  if (*(char *)(unaff_x21 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x21 + 0xb4) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar7 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar10 * fVar10 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar7 <= in_stack_00000018._4_4_) {
    if (*(char *)(unaff_x23 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x23 + 0xff5) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar10 = *pfVar3;
    fStack00000000000000a4 = pfVar3[1];
    fStack00000000000000a8 = pfVar3[2];
  }
  else {
    fVar10 = fVar10 / fVar7;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar7;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar7;
  }
  fVar7 = (float)FUN_085d2264(fStack0000000000000008,fStack0000000000000004,fVar11,fVar10,
                              fStack00000000000000a4,fStack00000000000000a8,0);
  return (fVar6 * fStack0000000000000004 + fVar9 * fVar10 + fVar4 * fVar7) - fVar8 * fVar11;
}


