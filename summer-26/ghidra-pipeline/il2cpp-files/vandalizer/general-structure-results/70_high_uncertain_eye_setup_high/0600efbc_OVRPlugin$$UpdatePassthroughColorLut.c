/*
FUNCTION_NAME: OVRPlugin$$UpdatePassthroughColorLut
ENTRY_POINT: 0600efbc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdatePassthroughColorLut
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5
               ,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  float *pfVar5;
  undefined8 *unaff_x19;
  undefined4 *unaff_x22;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack000000000000003c;
  undefined8 in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  
  FUN_0600d354(&stack0x00000040,param_5,param_7);
  fVar3 = in_stack_00000058;
  fVar2 = fStack0000000000000050;
  fStack0000000000000014 = (float)FUN_0600dcbc(param_5,param_7);
  fVar8 = param_2;
  fStack000000000000001c = param_3;
  fStack000000000000000c = (float)FUN_0600dd98(param_5,param_7);
  fStack0000000000000004 = param_4;
  fStack000000000000002c = (float)FUN_0600db00(param_5,param_7);
  uVar17 = *unaff_x22;
  fStack0000000000000024 = (float)unaff_x22[1];
  fVar21 = (float)unaff_x22[4];
  fVar22 = (float)unaff_x22[5];
  fVar23 = (float)unaff_x22[6];
  fVar10 = (float)unaff_x22[2];
  fVar20 = (float)unaff_x22[3];
  fStack0000000000000034 = in_stack_00000048._4_4_;
  fStack000000000000003c = fStack0000000000000054;
  fVar11 = fVar3;
  fVar12 = fVar2;
  fVar6 = (float)FUN_06e45c00(in_stack_00000048._4_4_,0);
  fVar19 = (fVar22 * fVar6 + fVar23 * fVar12 + fVar21 * fVar11) - fVar20 * fStack0000000000000054;
  fVar18 = (fVar21 * fStack0000000000000054 + fVar23 * fVar6 + fVar20 * fVar11) - fVar22 * fVar12;
  fVar7 = (fVar20 * fVar12 + fVar23 * fStack0000000000000054 + fVar22 * fVar11) - fVar21 * fVar6;
  fVar11 = ((fVar23 * fVar11 - fVar20 * fVar6) - fVar21 * fVar12) - fVar22 * fStack0000000000000054;
  fVar20 = fStack000000000000000c * fVar11;
  fVar21 = fStack0000000000000004 * fVar18;
  fVar22 = fStack000000000000000c * fVar18;
  fVar12 = fStack0000000000000004 * fVar11;
  fVar6 = (fStack000000000000000c * fVar7 + fVar8 * fVar11 + fStack0000000000000004 * fVar19) -
          param_3 * fVar18;
  fVar11 = (fVar8 * fVar18 + param_3 * fVar11 + fStack0000000000000004 * fVar7) -
           fStack000000000000000c * fVar19;
  if (DAT_07a3fba6 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3fba6 = '\x01';
  }
  puVar1 = PTR_DAT_0759b378;
  lVar4 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
  fVar8 = (float)FUN_06e464bc((param_3 * fVar19 + fVar20 + fVar21) - fVar8 * fVar7,fVar6,fVar11,
                              ((fVar12 - fVar22) - fVar8 * fVar19) - param_3 * fVar7,
                              *(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c),
                              *(undefined4 *)(lVar4 + 0x50),0);
  if (DAT_07a44545 == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a44545 = '\x01';
  }
  fVar12 = fStack000000000000001c * fStack000000000000001c +
           fStack0000000000000014 * fStack0000000000000014 + param_2 * param_2;
  if (**(float **)(*(long *)PTR_DAT_075b9420 + 0xb8) <= fVar12) {
    fVar7 = fStack000000000000001c * fVar11 + fStack0000000000000014 * fVar8 + param_2 * fVar6;
    fVar8 = fVar8 - (fStack0000000000000014 * fVar7) / fVar12;
    fVar6 = fVar6 - (param_2 * fVar7) / fVar12;
    fVar11 = fVar11 - (fStack000000000000001c * fVar7) / fVar12;
  }
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar12 = SQRT(fVar11 * fVar11 + fVar8 * fVar8 + fVar6 * fVar6);
  if (fVar12 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar8 = *pfVar5;
    fVar6 = pfVar5[1];
    fVar11 = pfVar5[2];
  }
  else {
    fVar8 = fVar8 / fVar12;
    fVar6 = fVar6 / fVar12;
    fVar11 = fVar11 / fVar12;
  }
  fVar12 = fStack0000000000000024;
  fVar7 = (float)FUN_0600e194(uVar17,fStack0000000000000024,fVar10,param_5,param_7);
  fVar8 = fStack000000000000002c * fVar8;
  uVar13 = (ulong)(uint)(fStack000000000000002c * fVar6 + fVar12);
  uVar15 = (ulong)(uint)(fStack000000000000002c * fVar11 + fVar10);
  uVar9 = FUN_0600e60c(fVar8 + fVar7,uVar13,uVar15,param_5,param_7);
  uVar14 = uVar13;
  uVar16 = uVar15;
  fVar11 = (float)FUN_0600f3e4(param_5,param_7);
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  fVar12 = (float)uVar14;
  fVar6 = (float)uVar16;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_06e67e1c(uVar9,uVar13,uVar15,
               (fStack000000000000003c * fVar12 + fStack0000000000000034 * fVar8 + fVar3 * fVar11) -
               fVar2 * fVar6,
               (fStack0000000000000034 * fVar6 + fVar2 * fVar8 + fVar3 * fVar12) -
               fStack000000000000003c * fVar11,
               (fVar2 * fVar11 + fStack000000000000003c * fVar8 + fVar3 * fVar6) -
               fStack0000000000000034 * fVar12,
               ((fVar3 * fVar8 - fStack0000000000000034 * fVar11) - fVar2 * fVar12) -
               fStack000000000000003c * fVar6);
  return;
}


