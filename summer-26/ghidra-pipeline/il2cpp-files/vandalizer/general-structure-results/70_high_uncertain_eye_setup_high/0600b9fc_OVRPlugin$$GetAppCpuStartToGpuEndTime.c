/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 0600b9fc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetAppCpuStartToGpuEndTime(float param_1,float param_2)

{
  undefined *puVar1;
  float *pfVar2;
  ulong *unaff_x19;
  float *unaff_x22;
  long *unaff_x23;
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
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar18;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 in_stack_000000a8;
  
  fVar3 = SQRT(unaff_s9 * unaff_s9 + param_1 + param_2);
  if (fVar3 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
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
  puVar1 = PTR_DAT_075d64f0;
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
  if (DAT_07a3fba2 == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a3fba2 = '\x01';
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
  fVar16 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8) * 8.0;
  fVar12 = fVar15 * DAT_014bab34;
  if (fVar15 * DAT_014bab34 <= fVar16) {
    fVar12 = fVar16;
  }
  fVar15 = 0.0;
  if (fVar12 <= ABS(0.0 - fVar17)) {
    fVar15 = ((unaff_s14 * fVar3 + unaff_s12 * fVar10 + unaff_s13 * fVar13) -
             (fVar18 + fVar11 + fVar14)) / fVar17;
  }
  FUN_0600bde8(fVar4 + fVar7 * fVar15,fVar5 + fVar8 * fVar15,fVar6 + fVar15 * fVar9);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06e67e1c(0,0,0,&stack0x00000040,0);
  FUN_0600bc38();
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return 1;
}


