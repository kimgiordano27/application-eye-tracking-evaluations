/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 07473740
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAppCpuStartToGpuEndTime
               (float param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
               float param_5,float param_6)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  undefined8 *unaff_x19;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_s22;
  float in_s23;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  
  fVar13 = (in_s19 * param_1 + in_s17 * param_2 + in_s18 * param_6) - in_s20 * param_5;
  fVar12 = (in_s22 * param_5 + in_s20 * param_2 + in_s23 * param_1) - in_s19 * param_6;
  if (DAT_0983637e == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    DAT_0983637e = '\x01';
  }
  puVar1 = PTR_DAT_091a0f88;
  lVar2 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
  fVar4 = (float)FUN_08a44d84((in_s20 * param_6 + in_s19 * param_2 + in_s18 * param_5) -
                              in_s17 * param_1,fVar13,fVar12,
                              ((in_s23 * param_2 - in_s19 * param_5) - in_s22 * param_6) -
                              in_s20 * param_1,*(undefined4 *)(lVar2 + 0x48),
                              *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_09837382 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    DAT_09837382 = '\x01';
  }
  fVar5 = fStack000000000000001c * fStack000000000000001c +
          in_stack_00000010._4_4_ * in_stack_00000010._4_4_ +
          fStack0000000000000018 * fStack0000000000000018;
  if (**(float **)(*(long *)PTR_DAT_091a2ee8 + 0xb8) <= fVar5) {
    fVar7 = fStack000000000000001c * fVar12 +
            in_stack_00000010._4_4_ * fVar4 + fStack0000000000000018 * fVar13;
    fVar4 = fVar4 - (in_stack_00000010._4_4_ * fVar7) / fVar5;
    fVar13 = fVar13 - (fStack0000000000000018 * fVar7) / fVar5;
    fVar12 = fVar12 - (fStack000000000000001c * fVar7) / fVar5;
  }
  if (DAT_0983637d == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983637d = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar5 = SQRT(fVar12 * fVar12 + fVar4 * fVar4 + fVar13 * fVar13);
  if (fVar5 <= DAT_0191476c) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar4 = *pfVar3;
    fVar13 = pfVar3[1];
    fVar12 = pfVar3[2];
  }
  else {
    fVar4 = fVar4 / fVar5;
    fVar13 = fVar13 / fVar5;
    fVar12 = fVar12 / fVar5;
  }
  fVar5 = (float)FUN_07472804(uStack0000000000000028,fStack0000000000000024,fStack0000000000000020);
  fVar4 = fStack000000000000002c * fVar4;
  uVar8 = (ulong)(uint)(fStack000000000000002c * fVar13 + fStack0000000000000024);
  uVar10 = (ulong)(uint)(fStack000000000000002c * fVar12 + fStack0000000000000020);
  uVar6 = FUN_07472c7c(fVar4 + fVar5,uVar8,uVar10);
  uVar9 = uVar8;
  uVar11 = uVar10;
  fVar13 = (float)FUN_07473a54();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  fVar12 = (float)uVar9;
  fVar5 = (float)uVar11;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_08a5b7d0(uVar6,uVar8,uVar10,
               (fStack000000000000003c * fVar12 +
               fStack0000000000000034 * fVar4 + fStack0000000000000030 * fVar13) -
               fStack0000000000000038 * fVar5,
               (fStack0000000000000034 * fVar5 +
               fStack0000000000000038 * fVar4 + fStack0000000000000030 * fVar12) -
               fStack000000000000003c * fVar13,
               (fStack0000000000000038 * fVar13 +
               fStack000000000000003c * fVar4 + fStack0000000000000030 * fVar5) -
               fStack0000000000000034 * fVar12,
               ((fStack0000000000000030 * fVar4 - fStack0000000000000034 * fVar13) -
               fStack0000000000000038 * fVar12) - fStack000000000000003c * fVar5);
  return;
}


