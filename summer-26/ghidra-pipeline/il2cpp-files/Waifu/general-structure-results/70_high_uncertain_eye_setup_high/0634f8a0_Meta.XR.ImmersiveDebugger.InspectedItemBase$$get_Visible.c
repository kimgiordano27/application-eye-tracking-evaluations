/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedItemBase$$get_Visible
ENTRY_POINT: 0634f8a0
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


bool Meta_XR_ImmersiveDebugger_InspectedItemBase__get_Visible
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,long param_8,float *param_9,float *param_10,ulong param_11)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
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
  float fVar24;
  float fVar25;
  float fStack0000000000000000;
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
  
  iVar5 = (int)param_11;
  lVar1 = (-(param_11 >> 0x1f & 1) & 0xfffffffe00000000 | (param_11 & 0xffffffff) << 1) +
          (long)iVar5;
  pfVar2 = (float *)(*(long *)(param_8 + 0x98) + lVar1 * 4);
  fStack000000000000004c = *pfVar2;
  fStack0000000000000048 = pfVar2[1];
  fStack0000000000000044 = pfVar2[2];
  pfVar2 = (float *)(*(long *)(param_8 + 0xa8) + (long)iVar5 * 0x10);
  fStack0000000000000034 = *pfVar2;
  fVar20 = pfVar2[1];
  fVar21 = pfVar2[2];
  fStack0000000000000038 = pfVar2[3];
  pfVar6 = (float *)(*(long *)(param_8 + 0xd8) +
                    (long)*(int *)(*(long *)(param_8 + 200) + (long)iVar5 * 4) * 0xc);
  pfVar3 = (float *)(*(long *)(param_8 + 0x78) + lVar1 * 4);
  pfVar4 = (float *)(*(long *)(param_8 + 0x68) + lVar1 * 4);
  pfVar2 = (float *)(*(long *)(param_8 + 0x88) + (long)iVar5 * 0x10);
  fVar18 = *pfVar2;
  fVar22 = pfVar2[1];
  fVar17 = pfVar2[2];
  fStack0000000000000030 = pfVar2[3];
  fStack0000000000000040 =
       in_stack_000000f8 * pfVar6[2] +
       fStack00000000000000f0 * *pfVar6 + fStack00000000000000f4 * pfVar6[1];
  fVar12 = *pfVar4 * fStack0000000000000040;
  fStack000000000000003c = pfVar4[1] * fStack0000000000000040;
  fStack0000000000000040 = pfVar4[2] * fStack0000000000000040;
  fVar19 = fStack00000000000000f0 * fVar12;
  fVar23 = fStack00000000000000f4 * fVar12;
  fVar12 = in_stack_000000f8 * fVar12;
  fVar8 = fVar22 * fVar12 - fVar17 * fVar23;
  fVar9 = fVar17 * fVar19 - fVar18 * fVar12;
  fVar7 = fVar18 * fVar23 - fVar22 * fVar19;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar7 = fVar7 + fVar7;
  fVar13 = fVar19 + fStack0000000000000030 * fVar8 + (fVar22 * fVar7 - fVar17 * fVar9);
  fVar10 = fVar23 + fStack0000000000000030 * fVar9 + (fVar17 * fVar8 - fVar18 * fVar7);
  fVar7 = fVar12 + fStack0000000000000030 * fVar7 + (fVar18 * fVar9 - fVar22 * fVar8);
  fStack0000000000000000 = param_1;
  fStack0000000000000004 = param_2;
  fStack0000000000000008 = param_3;
  fStack0000000000000010 = param_4;
  fStack0000000000000014 = param_5;
  fStack0000000000000018 = param_6;
  fStack0000000000000024 = param_4;
  fStack0000000000000028 = param_5;
  fStack000000000000002c = param_6;
  fStack0000000000000050 = param_7;
  fStack0000000000000054 = param_1;
  fStack0000000000000058 = param_2;
  fStack000000000000005c = param_3;
  FUN_06391844(*pfVar3 - fVar13,pfVar3[1] - fVar10,pfVar3[2] - fVar7,*pfVar3 + fVar13,
               pfVar3[1] + fVar10,pfVar3[2] + fVar7,(long)&stack0x000000c8 + 4,&stack0x000000c8,
               &stack0x00000070,&stack0x00000060,0);
  fVar7 = fStack000000000000003c;
  fVar10 = fStack0000000000000034 * fVar23 - fVar20 * fVar19;
  fVar14 = fVar20 * fVar12 - fVar21 * fVar23;
  fVar16 = fVar21 * fVar19 - fStack0000000000000034 * fVar12;
  fVar14 = fVar14 + fVar14;
  fVar13 = fStack0000000000000060 - fStack0000000000000070;
  fVar16 = fVar16 + fVar16;
  fVar10 = fVar10 + fVar10;
  fVar11 = in_stack_00000068 - in_stack_00000078;
  fStack0000000000000064 = fStack0000000000000064 - fStack0000000000000074;
  fVar15 = 1.0 / (fStack0000000000000030 * fStack0000000000000030 +
                 fVar17 * fVar17 + fVar18 * fVar18 + fVar22 * fVar22);
  fVar8 = fVar19 + fStack0000000000000038 * fVar14 + (fVar20 * fVar10 - fVar21 * fVar16);
  fVar9 = fVar23 + fStack0000000000000038 * fVar16 +
          (fVar21 * fVar14 - fStack0000000000000034 * fVar10);
  fVar19 = fStack0000000000000030 * fVar15;
  fVar18 = fVar15 * -fVar18;
  fVar22 = fVar15 * -fVar22;
  fVar15 = fVar15 * -fVar17;
  fVar10 = fVar12 + fStack0000000000000038 * fVar10 +
           (fStack0000000000000034 * fVar16 - fVar20 * fVar14);
  fVar14 = fVar18 * fStack0000000000000064 - fVar22 * fVar13;
  fVar16 = fVar22 * fVar11 - fVar15 * fStack0000000000000064;
  fVar17 = fVar15 * fVar13 - fVar18 * fVar11;
  fVar16 = fVar16 + fVar16;
  fVar17 = fVar17 + fVar17;
  fVar14 = fVar14 + fVar14;
  fVar13 = fVar13 + fVar19 * fVar16 + (fVar22 * fVar14 - fVar15 * fVar17);
  fVar12 = fStack0000000000000064 + fVar19 * fVar17 + (fVar15 * fVar16 - fVar18 * fVar14);
  fVar11 = fVar11 + fVar19 * fVar14 + (fVar18 * fVar17 - fVar22 * fVar16);
  fVar19 = fStack0000000000000034 * fVar12 - fVar20 * fVar13;
  fVar15 = fVar20 * fVar11 - fVar21 * fVar12;
  fVar16 = fVar21 * fVar13 - fStack0000000000000034 * fVar11;
  fVar15 = fVar15 + fVar15;
  fVar16 = fVar16 + fVar16;
  fVar19 = fVar19 + fVar19;
  fVar18 = fStack0000000000000038 * fVar15;
  fVar17 = fStack0000000000000038 * fVar16;
  fVar23 = fStack0000000000000038 * fVar19;
  fVar25 = fStack0000000000000034 * fVar16;
  fVar14 = fStack0000000000000034 * fVar19;
  fVar22 = (fStack0000000000000040 - fStack000000000000003c) * in_stack_000000c8._4_4_;
  if (DAT_086d90cb == '\0') {
    fStack0000000000000034 = fVar10;
    fStack0000000000000038 = fVar9;
    fStack0000000000000040 = fVar8;
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d90cb = '\x01';
    fVar8 = fStack0000000000000040;
    fVar9 = fStack0000000000000038;
    fVar10 = fStack0000000000000034;
  }
  fVar19 = fVar13 + fVar18 + (fVar20 * fVar19 - fVar21 * fVar16);
  fVar18 = fStack000000000000004c - fVar8;
  fVar24 = fStack0000000000000048 - fVar9;
  fVar16 = fStack0000000000000044 - fVar10;
  fVar8 = fStack000000000000004c + fVar8;
  fVar9 = fStack0000000000000048 + fVar9;
  fStack000000000000004c = fStack0000000000000044 + fVar10;
  fVar13 = fVar12 + fVar17 + (fVar21 * fVar15 - fVar14);
  fVar10 = fVar11 + fVar23 + (fVar25 - fVar20 * fVar15);
  fStack0000000000000048 = fVar24;
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar12 = 1.0 / SQRT(fVar10 * fVar10 + fVar19 * fVar19 + fVar13 * fVar13);
  fStack0000000000000050 = fVar7 + fVar22 + fStack0000000000000050;
  fVar19 = fVar19 * fVar12;
  fVar13 = fVar13 * fVar12;
  fVar10 = fVar10 * fVar12;
  fVar15 = fStack0000000000000050 * fVar19 + fVar18 + (fVar8 - fVar18) * in_stack_000000c8._4_4_;
  fVar14 = fStack0000000000000050 * fVar13 +
           fStack0000000000000048 + (fVar9 - fStack0000000000000048) * in_stack_000000c8._4_4_;
  fVar11 = fStack0000000000000050 * fVar10 +
           fVar16 + (fStack000000000000004c - fVar16) * in_stack_000000c8._4_4_;
  fVar12 = fVar10 * (fStack000000000000005c - fVar11) +
           fVar19 * (fStack0000000000000054 - fVar15) + fVar13 * (fStack0000000000000058 - fVar14);
  fVar7 = fStack0000000000000058;
  fVar8 = fStack000000000000005c;
  fVar9 = fStack0000000000000054;
  if (fVar12 < 0.0) {
    fVar7 = fStack0000000000000058 - fVar13 * fVar12;
    fVar8 = fStack000000000000005c - fVar10 * fVar12;
    fVar9 = fStack0000000000000054 - fVar19 * fVar12;
  }
  fVar16 = fVar10 * (fStack000000000000002c - fVar11) +
           fVar19 * (fStack0000000000000024 - fVar15) + fVar13 * (fStack0000000000000028 - fVar14);
  fVar11 = fStack000000000000002c;
  fVar14 = fStack0000000000000028;
  fVar15 = fStack0000000000000024;
  if (fVar16 < 0.0) {
    fVar11 = fStack000000000000002c - fVar10 * fVar16;
    fVar14 = fStack0000000000000028 - fVar13 * fVar16;
    fVar15 = fStack0000000000000024 - fVar19 * fVar16;
  }
  if (fVar12 < 0.0) {
    *param_9 = (fVar9 - fStack0000000000000054) + *param_9;
    param_9[1] = (fVar7 - fStack0000000000000058) + param_9[1];
    param_9[2] = (fVar8 - fStack000000000000005c) + param_9[2];
  }
  if (fVar16 < 0.0) {
    *param_10 = (fVar15 - fStack0000000000000024) + *param_10;
    param_10[1] = (fVar14 - fStack0000000000000028) + param_10[1];
    param_10[2] = (fVar11 - fStack000000000000002c) + param_10[2];
  }
  return fVar12 < 0.0 || fVar16 < 0.0;
}


