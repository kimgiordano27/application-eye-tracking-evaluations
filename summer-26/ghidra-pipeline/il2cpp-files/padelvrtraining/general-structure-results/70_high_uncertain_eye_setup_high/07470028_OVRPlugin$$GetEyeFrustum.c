/*
FUNCTION_NAME: OVRPlugin$$GetEyeFrustum
ENTRY_POINT: 07470028
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetEyeFrustum(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  float *pfVar2;
  ulong *unaff_x19;
  float *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s8;
  float fVar17;
  float unaff_s9;
  float unaff_s15;
  float fVar18;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 in_stack_000000a8;
  
  if (*(char *)(unaff_x24 + 0x37d) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    *(undefined1 *)(unaff_x24 + 0x37d) = 1;
  }
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar3 = SQRT(unaff_s9 * unaff_s9 + unaff_s15 * unaff_s15 + unaff_s8 * unaff_s8);
  if (fVar3 <= DAT_0191476c) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x23 + 0xb8);
    fVar10 = *pfVar2;
    fVar13 = pfVar2[1];
    fVar3 = pfVar2[2];
  }
  else {
    fVar10 = unaff_s15 / fVar3;
    fVar13 = unaff_s8 / fVar3;
    fVar3 = unaff_s9 / fVar3;
  }
  puVar1 = PTR_DAT_091f9220;
  fVar4 = *unaff_x22;
  fVar5 = unaff_x22[1];
  fVar6 = unaff_x22[2];
  fVar7 = unaff_x22[3];
  fVar8 = unaff_x22[4];
  fVar9 = unaff_x22[5];
  fVar11 = fVar10 * fVar4;
  fVar14 = fVar13 * fVar5;
  fVar18 = fVar3 * fVar6;
  fVar17 = fVar3 * fVar9 + fVar10 * fVar7 + fVar13 * fVar8;
  if (DAT_098363dc == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    DAT_098363dc = '\x01';
    fVar4 = *unaff_x22;
    fVar5 = unaff_x22[1];
    fVar6 = unaff_x22[2];
    fVar7 = unaff_x22[3];
    fVar8 = unaff_x22[4];
    fVar9 = unaff_x22[5];
  }
  fVar15 = ABS(fVar17);
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar16 = **(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) * 8.0;
  fVar12 = fVar15 * DAT_01914a48;
  if (fVar15 * DAT_01914a48 <= fVar16) {
    fVar12 = fVar16;
  }
  fVar15 = 0.0;
  if (fVar12 <= ABS(0.0 - fVar17)) {
    fVar15 = ((param_3 * fVar3 + param_1 * fVar10 + param_2 * fVar13) - (fVar18 + fVar11 + fVar14))
             / fVar17;
  }
  FUN_0747045c(fVar4 + fVar7 * fVar15,fVar5 + fVar8 * fVar15,fVar6 + fVar15 * fVar9);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_08a5b7d0(0,0,0,&stack0x00000040,0);
  FUN_074702ac();
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return 1;
}


