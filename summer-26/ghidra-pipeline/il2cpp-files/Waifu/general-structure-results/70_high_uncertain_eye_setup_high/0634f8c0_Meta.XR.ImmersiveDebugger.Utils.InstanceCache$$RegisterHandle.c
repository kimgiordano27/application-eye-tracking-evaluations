/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.InstanceCache$$RegisterHandle
ENTRY_POINT: 0634f8c0
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_Utils_InstanceCache__RegisterHandle
               (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,long param_10,float *param_11,
               float *param_12,int param_13)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long in_x9;
  long in_x12;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float in_s22;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  undefined8 in_stack_000000c8;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float in_stack_000000f8;
  
  fStack0000000000000044 = *(float *)(in_x12 + 8);
  pfVar1 = (float *)(*(long *)(param_10 + 0xa8) + (long)param_13 * 0x10);
  fStack0000000000000034 = *pfVar1;
  fVar18 = pfVar1[1];
  fVar19 = pfVar1[2];
  fStack0000000000000038 = pfVar1[3];
  pfVar4 = (float *)(*(long *)(param_10 + 0xd8) + (long)*(int *)(param_1 + (long)param_13 * 4) * 0xc
                    );
  pfVar2 = (float *)(*(long *)(param_10 + 0x78) + in_x9 * 4);
  pfVar3 = (float *)(*(long *)(param_10 + 0x68) + in_x9 * 4);
  pfVar1 = (float *)(*(long *)(param_10 + 0x88) + (long)param_13 * 0x10);
  fVar16 = *pfVar1;
  fVar20 = pfVar1[1];
  fVar15 = pfVar1[2];
  fStack0000000000000030 = pfVar1[3];
  fStack0000000000000040 =
       in_stack_000000f8 * pfVar4[2] +
       fStack00000000000000f0 * *pfVar4 + fStack00000000000000f4 * pfVar4[1];
  fVar10 = *pfVar3 * fStack0000000000000040;
  fStack000000000000003c = pfVar3[1] * fStack0000000000000040;
  fStack0000000000000040 = pfVar3[2] * fStack0000000000000040;
  fVar17 = fStack00000000000000f0 * fVar10;
  fVar21 = fStack00000000000000f4 * fVar10;
  fVar10 = in_stack_000000f8 * fVar10;
  fVar6 = fVar20 * fVar10 - fVar15 * fVar21;
  fVar7 = fVar15 * fVar17 - fVar16 * fVar10;
  fVar5 = fVar16 * fVar21 - fVar20 * fVar17;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar5 = fVar5 + fVar5;
  fVar11 = fVar17 + fStack0000000000000030 * fVar6 + (fVar20 * fVar5 - fVar15 * fVar7);
  fVar8 = fVar21 + fStack0000000000000030 * fVar7 + (fVar15 * fVar6 - fVar16 * fVar5);
  fVar5 = fVar10 + fStack0000000000000030 * fVar5 + (fVar16 * fVar7 - fVar20 * fVar6);
  fStack0000000000000004 = param_3;
  fStack0000000000000008 = param_4;
  fStack0000000000000010 = param_5;
  fStack0000000000000014 = param_6;
  fStack0000000000000018 = param_7;
  fStack0000000000000024 = param_5;
  fStack0000000000000028 = param_6;
  fStack000000000000002c = param_7;
  fStack0000000000000048 = param_2;
  fStack000000000000004c = param_9;
  fStack0000000000000050 = param_8;
  fStack0000000000000054 = in_s22;
  fStack0000000000000058 = param_3;
  fStack000000000000005c = param_4;
  FUN_06391844(*pfVar2 - fVar11,pfVar2[1] - fVar8,pfVar2[2] - fVar5,*pfVar2 + fVar11,
               pfVar2[1] + fVar8,pfVar2[2] + fVar5,(long)&stack0x000000c8 + 4,&stack0x000000c8,
               &stack0x00000070,&stack0x00000060,0);
  fVar5 = fStack000000000000003c;
  fVar8 = fStack0000000000000034 * fVar21 - fVar18 * fVar17;
  fVar12 = fVar18 * fVar10 - fVar19 * fVar21;
  fVar14 = fVar19 * fVar17 - fStack0000000000000034 * fVar10;
  fVar12 = fVar12 + fVar12;
  fVar11 = fStack0000000000000060 - fStack0000000000000070;
  fVar14 = fVar14 + fVar14;
  fVar8 = fVar8 + fVar8;
  fVar9 = in_stack_00000068 - in_stack_00000078;
  fStack0000000000000064 = fStack0000000000000064 - fStack0000000000000074;
  fVar13 = 1.0 / (fStack0000000000000030 * fStack0000000000000030 +
                 fVar15 * fVar15 + fVar16 * fVar16 + fVar20 * fVar20);
  fVar6 = fVar17 + fStack0000000000000038 * fVar12 + (fVar18 * fVar8 - fVar19 * fVar14);
  fVar7 = fVar21 + fStack0000000000000038 * fVar14 +
          (fVar19 * fVar12 - fStack0000000000000034 * fVar8);
  fVar17 = fStack0000000000000030 * fVar13;
  fVar16 = fVar13 * -fVar16;
  fVar20 = fVar13 * -fVar20;
  fVar13 = fVar13 * -fVar15;
  fVar8 = fVar10 + fStack0000000000000038 * fVar8 +
          (fStack0000000000000034 * fVar14 - fVar18 * fVar12);
  fVar12 = fVar16 * fStack0000000000000064 - fVar20 * fVar11;
  fVar14 = fVar20 * fVar9 - fVar13 * fStack0000000000000064;
  fVar15 = fVar13 * fVar11 - fVar16 * fVar9;
  fVar14 = fVar14 + fVar14;
  fVar15 = fVar15 + fVar15;
  fVar12 = fVar12 + fVar12;
  fVar11 = fVar11 + fVar17 * fVar14 + (fVar20 * fVar12 - fVar13 * fVar15);
  fVar10 = fStack0000000000000064 + fVar17 * fVar15 + (fVar13 * fVar14 - fVar16 * fVar12);
  fVar9 = fVar9 + fVar17 * fVar12 + (fVar16 * fVar15 - fVar20 * fVar14);
  fVar17 = fStack0000000000000034 * fVar10 - fVar18 * fVar11;
  fVar13 = fVar18 * fVar9 - fVar19 * fVar10;
  fVar14 = fVar19 * fVar11 - fStack0000000000000034 * fVar9;
  fVar13 = fVar13 + fVar13;
  fVar14 = fVar14 + fVar14;
  fVar17 = fVar17 + fVar17;
  fVar16 = fStack0000000000000038 * fVar13;
  fVar15 = fStack0000000000000038 * fVar14;
  fVar21 = fStack0000000000000038 * fVar17;
  fVar23 = fStack0000000000000034 * fVar14;
  fVar12 = fStack0000000000000034 * fVar17;
  fVar20 = (fStack0000000000000040 - fStack000000000000003c) * in_stack_000000c8._4_4_;
  if (DAT_086d90cb == '\0') {
    fStack0000000000000034 = fVar8;
    fStack0000000000000038 = fVar7;
    fStack0000000000000040 = fVar6;
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d90cb = '\x01';
    fVar6 = fStack0000000000000040;
    fVar7 = fStack0000000000000038;
    fVar8 = fStack0000000000000034;
  }
  fVar17 = fVar11 + fVar16 + (fVar18 * fVar17 - fVar19 * fVar14);
  fVar16 = fStack000000000000004c - fVar6;
  fVar22 = fStack0000000000000048 - fVar7;
  fVar14 = fStack0000000000000044 - fVar8;
  fVar6 = fStack000000000000004c + fVar6;
  fVar7 = fStack0000000000000048 + fVar7;
  fStack000000000000004c = fStack0000000000000044 + fVar8;
  fVar11 = fVar10 + fVar15 + (fVar19 * fVar13 - fVar12);
  fVar8 = fVar9 + fVar21 + (fVar23 - fVar18 * fVar13);
  fStack0000000000000048 = fVar22;
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar10 = 1.0 / SQRT(fVar8 * fVar8 + fVar17 * fVar17 + fVar11 * fVar11);
  fStack0000000000000050 = fVar5 + fVar20 + fStack0000000000000050;
  fVar17 = fVar17 * fVar10;
  fVar11 = fVar11 * fVar10;
  fVar8 = fVar8 * fVar10;
  fVar13 = fStack0000000000000050 * fVar17 + fVar16 + (fVar6 - fVar16) * in_stack_000000c8._4_4_;
  fVar12 = fStack0000000000000050 * fVar11 +
           fStack0000000000000048 + (fVar7 - fStack0000000000000048) * in_stack_000000c8._4_4_;
  fVar9 = fStack0000000000000050 * fVar8 +
          fVar14 + (fStack000000000000004c - fVar14) * in_stack_000000c8._4_4_;
  fVar10 = fVar8 * (fStack000000000000005c - fVar9) +
           fVar17 * (fStack0000000000000054 - fVar13) + fVar11 * (fStack0000000000000058 - fVar12);
  fVar5 = fStack0000000000000058;
  fVar6 = fStack000000000000005c;
  fVar7 = fStack0000000000000054;
  if (fVar10 < 0.0) {
    fVar5 = fStack0000000000000058 - fVar11 * fVar10;
    fVar6 = fStack000000000000005c - fVar8 * fVar10;
    fVar7 = fStack0000000000000054 - fVar17 * fVar10;
  }
  fVar14 = fVar8 * (fStack000000000000002c - fVar9) +
           fVar17 * (fStack0000000000000024 - fVar13) + fVar11 * (fStack0000000000000028 - fVar12);
  fVar9 = fStack000000000000002c;
  fVar12 = fStack0000000000000028;
  fVar13 = fStack0000000000000024;
  if (fVar14 < 0.0) {
    fVar9 = fStack000000000000002c - fVar8 * fVar14;
    fVar12 = fStack0000000000000028 - fVar11 * fVar14;
    fVar13 = fStack0000000000000024 - fVar17 * fVar14;
  }
  if (fVar10 < 0.0) {
    *param_11 = (fVar7 - fStack0000000000000054) + *param_11;
    param_11[1] = (fVar5 - fStack0000000000000058) + param_11[1];
    param_11[2] = (fVar6 - fStack000000000000005c) + param_11[2];
  }
  if (fVar14 < 0.0) {
    *param_12 = (fVar13 - fStack0000000000000024) + *param_12;
    param_12[1] = (fVar12 - fStack0000000000000028) + param_12[1];
    param_12[2] = (fVar9 - fStack000000000000002c) + param_12[2];
  }
  return fVar10 < 0.0 || fVar14 < 0.0;
}


