/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequency
ENTRY_POINT: 07c7ada0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_systemDisplayFrequency(float param_1)

{
  undefined *puVar1;
  ulong *unaff_x19;
  float *unaff_x22;
  float fVar2;
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
  float unaff_s8;
  float fVar15;
  float unaff_s9;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar16;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 in_stack_000000a8;
  
  puVar1 = PTR_DAT_09f25358;
  fVar8 = unaff_s15 / param_1;
  fVar11 = unaff_s8 / param_1;
  param_1 = unaff_s9 / param_1;
  fVar2 = *unaff_x22;
  fVar3 = unaff_x22[1];
  fVar4 = unaff_x22[2];
  fVar5 = unaff_x22[3];
  fVar6 = unaff_x22[4];
  fVar7 = unaff_x22[5];
  fVar9 = fVar8 * fVar2;
  fVar12 = fVar11 * fVar3;
  fVar16 = param_1 * fVar4;
  fVar15 = param_1 * fVar7 + fVar8 * fVar5 + fVar11 * fVar6;
  if (DAT_0a51c24f == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a51c24f = '\x01';
    fVar2 = *unaff_x22;
    fVar3 = unaff_x22[1];
    fVar4 = unaff_x22[2];
    fVar5 = unaff_x22[3];
    fVar6 = unaff_x22[4];
    fVar7 = unaff_x22[5];
  }
  fVar13 = ABS(fVar15);
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar14 = **(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) * 8.0;
  fVar10 = fVar13 * DAT_01c762f8;
  if (fVar13 * DAT_01c762f8 <= fVar14) {
    fVar10 = fVar14;
  }
  fVar13 = 0.0;
  if (fVar10 <= ABS(0.0 - fVar15)) {
    fVar13 = ((unaff_s14 * param_1 + unaff_s12 * fVar8 + unaff_s13 * fVar11) -
             (fVar16 + fVar9 + fVar12)) / fVar15;
  }
  FUN_07c7b16c(fVar2 + fVar5 * fVar13,fVar3 + fVar6 * fVar13,fVar4 + fVar13 * fVar7);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_09537b20(0,0,0,&stack0x00000040,0);
  FUN_07c7afbc();
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return 1;
}


