/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionCreate
ENTRY_POINT: 060a09dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float Meta_XR_MetaXRFeature__OnSessionCreate(void)

{
  float *pfVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float fVar6;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  float fVar8;
  float unaff_s11;
  float unaff_s12;
  float fVar9;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar10;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000058;
  
  fVar3 = unaff_s8 * unaff_s8 + unaff_s15 * unaff_s15 + unaff_s10 * unaff_s10;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar3) {
    fVar4 = unaff_s12 * unaff_s8 + unaff_s11 * unaff_s15 + unaff_s14 * unaff_s10;
    unaff_s11 = unaff_s11 - (unaff_s15 * fVar4) / fVar3;
    unaff_s14 = unaff_s14 - (unaff_s10 * fVar4) / fVar3;
    unaff_s12 = unaff_s12 - (unaff_s8 * fVar4) / fVar3;
  }
  if (DAT_07ed76b7 == '\0') {
    FUN_03642964(PTR_DAT_079f4df0);
    DAT_07ed76b7 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar3 = SQRT(unaff_s12 * unaff_s12 + unaff_s11 * unaff_s11 + unaff_s14 * unaff_s14);
  if (fVar3 <= DAT_01651354) {
    if (DAT_07ed76b5 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b5 = '\x01';
    }
    pfVar1 = *(float **)(*unaff_x22 + 0xb8);
    fVar4 = *pfVar1;
    fVar10 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  else {
    fVar4 = unaff_s11 / fVar3;
    fVar10 = unaff_s14 / fVar3;
    fVar3 = unaff_s12 / fVar3;
  }
  if (*(char *)(unaff_x23 + 0x6b6) == '\0') {
    FUN_03642964(PTR_DAT_079f4dc0);
    *(undefined1 *)(unaff_x23 + 0x6b6) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar9 = *(float *)(lVar2 + 0x18);
  fVar6 = *(float *)(lVar2 + 0x1c);
  fVar7 = *(float *)(lVar2 + 0x20);
  if (*(char *)(unaff_x21 + 0xc9c) == '\0') {
    FUN_03642964(PTR_DAT_079f4df8);
    *(undefined1 *)(unaff_x21 + 0xc9c) = 1;
  }
  fVar5 = fVar7 * fVar7 + fVar9 * fVar9 + fVar6 * fVar6;
  fVar8 = unaff_s9;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar5) {
    fVar8 = unaff_s13 * fVar7 + in_stack_00000058._4_4_ * fVar9 + unaff_s9 * fVar6;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - (fVar9 * fVar8) / fVar5;
    unaff_s13 = unaff_s13 - (fVar7 * fVar8) / fVar5;
    fVar8 = unaff_s9 - (fVar6 * fVar8) / fVar5;
  }
  fVar7 = fVar3 * fVar3;
  fVar6 = fVar7 + fVar10 * fVar10 + fVar4 * fVar4;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar6) {
    fVar9 = fVar3 * unaff_s13 + fVar4 * in_stack_00000058._4_4_ + fVar10 * fVar8;
    fVar7 = (fVar4 * fVar9) / fVar6;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - fVar7;
    fVar8 = fVar8 - (fVar10 * fVar9) / fVar6;
    unaff_s13 = unaff_s13 - (fVar3 * fVar9) / fVar6;
  }
  fStack000000000000000c = fStack000000000000000c * unaff_s13;
  if (fStack000000000000000c +
      in_stack_00000000._4_4_ * in_stack_00000058._4_4_ + fStack0000000000000008 * fVar8 <= 0.0) {
    if (DAT_07ed76b5 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b5 = '\x01';
    }
    in_stack_00000058._4_4_ = **(float **)(*unaff_x22 + 0xb8);
  }
  if (*(char *)(unaff_x23 + 0x6b6) == '\0') {
    FUN_03642964(PTR_DAT_079f4dc0);
    *(undefined1 *)(unaff_x23 + 0x6b6) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar4 = *(float *)(lVar2 + 0x18);
  fVar6 = *(float *)(lVar2 + 0x1c);
  fVar10 = *(float *)(lVar2 + 0x20);
  fVar3 = (float)FUN_07250fcc();
  if (*(char *)(unaff_x21 + 0xc9c) == '\0') {
    FUN_03642964(PTR_DAT_079f4df8);
    *(undefined1 *)(unaff_x21 + 0xc9c) = 1;
  }
  fVar9 = fVar7 * fVar7 + fVar3 * fVar3 + fStack000000000000000c * fStack000000000000000c;
  fVar4 = unaff_s9 * fVar4;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar9) {
    fVar4 = fVar4 - (fVar3 * (unaff_s9 * fVar10 * fVar7 +
                             fVar4 * fVar3 + unaff_s9 * fVar6 * fStack000000000000000c)) / fVar9;
  }
  return in_stack_00000058._4_4_ + fVar4;
}


