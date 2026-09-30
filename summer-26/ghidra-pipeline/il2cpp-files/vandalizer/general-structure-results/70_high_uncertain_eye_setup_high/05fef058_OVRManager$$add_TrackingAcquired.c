/*
FUNCTION_NAME: OVRManager$$add_TrackingAcquired
ENTRY_POINT: 05fef058
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__add_TrackingAcquired
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  float *pfVar5;
  float *unaff_x19;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s14;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  
  puVar3 = (undefined8 *)FUN_0322c1e8(param_4,param_5,0);
  (*(code *)*puVar3)(&stack0x00000018);
  fVar9 = in_stack_00000018;
  fStack0000000000000014 = fStack0000000000000020;
  fStack000000000000000c = in_stack_00000028._4_4_;
  fVar11 = in_stack_00000018;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar6 = (float)FUN_06e6836c();
  if (DAT_07a3caf2 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3caf2 = '\x01';
  }
  puVar1 = PTR_DAT_0759b378;
  lVar4 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
  fVar13 = *(float *)(lVar4 + 0x18);
  fVar12 = *(float *)(lVar4 + 0x1c);
  fVar10 = *(float *)(lVar4 + 0x20);
  if (DAT_07a44545 == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a44545 = '\x01';
  }
  fVar7 = fVar10 * fVar10 + fVar13 * fVar13 + fVar12 * fVar12;
  if (**(float **)(*(long *)PTR_DAT_075b9420 + 0xb8) <= fVar7) {
    fVar8 = param_3 * fVar10 + fVar6 * fVar13 + fVar11 * fVar12;
    fVar6 = fVar6 - (fVar13 * fVar8) / fVar7;
    fVar11 = fVar11 - (fVar12 * fVar8) / fVar7;
    param_3 = param_3 - (fVar10 * fVar8) / fVar7;
  }
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar10 = SQRT(param_3 * param_3 + fVar6 * fVar6 + fVar11 * fVar11);
  if (fVar10 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar6 = *pfVar5;
    fVar11 = pfVar5[1];
    param_3 = pfVar5[2];
  }
  else {
    fVar6 = fVar6 / fVar10;
    fVar11 = fVar11 / fVar10;
    param_3 = param_3 / fVar10;
  }
  fVar10 = fStack0000000000000024 * fStack0000000000000024 +
           fStack000000000000000c * fStack000000000000000c;
  fVar12 = unaff_x19[1] - unaff_x19[1];
  fVar9 = fVar9 - *unaff_x19;
  fStack0000000000000014 = fStack0000000000000014 - unaff_x19[2];
  fVar13 = (fVar12 * fVar12 + fVar9 * fVar9 + fStack0000000000000014 * fStack0000000000000014) -
           fVar10;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (unaff_s14 < fVar13) {
    bVar2 = false;
  }
  else {
    fVar7 = param_3 * fVar12 - fVar11 * fStack0000000000000014;
    fVar13 = fVar6 * fStack0000000000000014 - param_3 * fVar9;
    fVar9 = fVar11 * fVar9 - fVar6 * fVar12;
    bVar2 = fVar9 * fVar9 + fVar7 * fVar7 + fVar13 * fVar13 <= fVar10;
  }
  return bVar2;
}


