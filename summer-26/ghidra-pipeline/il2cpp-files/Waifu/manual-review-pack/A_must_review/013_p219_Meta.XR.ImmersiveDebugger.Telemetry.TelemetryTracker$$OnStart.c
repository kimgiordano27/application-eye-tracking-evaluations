/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnStart
ENTRY_POINT: 0634f870
PROGRAM: Waifu-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


bool Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnStart
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  local_78 = 0.0;
  local_80 = 0;
  local_88 = 0.0;
  local_90 = 0;
  iVar5 = (int)param_11;
  lVar1 = (-(param_11 >> 0x1f & 1) & 0xfffffffe00000000 | (param_11 & 0xffffffff) << 1) +
          (long)iVar5;
  pfVar2 = (float *)(*(long *)(param_8 + 0x98) + lVar1 * 4);
  fVar19 = *pfVar2;
  fVar7 = pfVar2[1];
  fVar8 = pfVar2[2];
  pfVar2 = (float *)(*(long *)(param_8 + 0xa8) + (long)iVar5 * 0x10);
  fVar20 = *pfVar2;
  fVar23 = pfVar2[1];
  fVar24 = pfVar2[2];
  fVar9 = pfVar2[3];
  pfVar6 = (float *)(*(long *)(param_8 + 0xd8) +
                    (long)*(int *)(*(long *)(param_8 + 200) + (long)iVar5 * 4) * 0xc);
  pfVar3 = (float *)(*(long *)(param_8 + 0x78) + lVar1 * 4);
  pfVar4 = (float *)(*(long *)(param_8 + 0x68) + lVar1 * 4);
  fVar15 = pfVar4[1];
  pfVar2 = (float *)(*(long *)(param_8 + 0x88) + (long)iVar5 * 0x10);
  fVar26 = pfVar4[2];
  fVar22 = *pfVar2;
  fVar25 = pfVar2[1];
  fVar21 = pfVar2[2];
  fVar27 = pfVar2[3];
  fVar17 = in_stack_00000008 * pfVar6[2] +
           fStack0000000000000000 * *pfVar6 + fStack0000000000000004 * pfVar6[1];
  fVar13 = *pfVar4 * fVar17;
  fStack0000000000000000 = fStack0000000000000000 * fVar13;
  fStack0000000000000004 = fStack0000000000000004 * fVar13;
  in_stack_00000008 = in_stack_00000008 * fVar13;
  fVar10 = fVar25 * in_stack_00000008 - fVar21 * fStack0000000000000004;
  fVar11 = fVar21 * fStack0000000000000000 - fVar22 * in_stack_00000008;
  fVar13 = fVar22 * fStack0000000000000004 - fVar25 * fStack0000000000000000;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar13 = fVar13 + fVar13;
  fVar14 = fStack0000000000000000 + fVar27 * fVar10 + (fVar25 * fVar13 - fVar21 * fVar11);
  fVar12 = fStack0000000000000004 + fVar27 * fVar11 + (fVar21 * fVar10 - fVar22 * fVar13);
  fVar13 = in_stack_00000008 + fVar27 * fVar13 + (fVar22 * fVar11 - fVar25 * fVar10);
  FUN_06391844(*pfVar3 - fVar14,pfVar3[1] - fVar12,pfVar3[2] - fVar13,*pfVar3 + fVar14,
               pfVar3[1] + fVar12,pfVar3[2] + fVar13,(long)&uStack_28 + 4,&uStack_28,&local_80,
               &local_90,0);
  fVar12 = fVar20 * fStack0000000000000004 - fVar23 * fStack0000000000000000;
  fVar14 = fVar23 * in_stack_00000008 - fVar24 * fStack0000000000000004;
  fVar18 = fVar24 * fStack0000000000000000 - fVar20 * in_stack_00000008;
  fVar14 = fVar14 + fVar14;
  fVar13 = (float)local_90 - (float)local_80;
  fVar18 = fVar18 + fVar18;
  fVar12 = fVar12 + fVar12;
  fVar11 = local_88 - local_78;
  fVar10 = local_90._4_4_ - local_80._4_4_;
  fVar16 = 1.0 / (fVar27 * fVar27 + fVar21 * fVar21 + fVar22 * fVar22 + fVar25 * fVar25);
  fVar28 = fStack0000000000000000 + fVar9 * fVar14 + (fVar23 * fVar12 - fVar24 * fVar18);
  fVar29 = fStack0000000000000004 + fVar9 * fVar18 + (fVar24 * fVar14 - fVar20 * fVar12);
  fVar27 = fVar27 * fVar16;
  fVar22 = fVar16 * -fVar22;
  fVar25 = fVar16 * -fVar25;
  fVar16 = fVar16 * -fVar21;
  fVar21 = in_stack_00000008 + fVar9 * fVar12 + (fVar20 * fVar18 - fVar23 * fVar14);
  fVar12 = fVar22 * fVar10 - fVar25 * fVar13;
  fVar14 = fVar25 * fVar11 - fVar16 * fVar10;
  fVar18 = fVar16 * fVar13 - fVar22 * fVar11;
  fVar14 = fVar14 + fVar14;
  fVar18 = fVar18 + fVar18;
  fVar12 = fVar12 + fVar12;
  fVar13 = fVar13 + fVar27 * fVar14 + (fVar25 * fVar12 - fVar16 * fVar18);
  fVar10 = fVar10 + fVar27 * fVar18 + (fVar16 * fVar14 - fVar22 * fVar12);
  fVar11 = fVar11 + fVar27 * fVar12 + (fVar22 * fVar18 - fVar25 * fVar14);
  fVar12 = fVar20 * fVar10 - fVar23 * fVar13;
  fVar14 = fVar23 * fVar11 - fVar24 * fVar10;
  fVar27 = fVar24 * fVar13 - fVar20 * fVar11;
  fVar14 = fVar14 + fVar14;
  fVar27 = fVar27 + fVar27;
  fVar12 = fVar12 + fVar12;
  fVar16 = (fVar26 * fVar17 - fVar15 * fVar17) * uStack_28._4_4_;
  if (DAT_086d90cb == '\0') {
    FUN_0335b6c8(&DAT_083ce8b0,1);
    DataMemoryBarrier(2,3);
    DAT_086d90cb = '\x01';
  }
  fVar18 = fVar13 + fVar9 * fVar14 + (fVar23 * fVar12 - fVar24 * fVar27);
  fVar25 = fVar19 - fVar28;
  fVar26 = fVar7 - fVar29;
  fVar22 = fVar8 - fVar21;
  fVar13 = fVar10 + fVar9 * fVar27 + (fVar24 * fVar14 - fVar20 * fVar12);
  fVar9 = fVar11 + fVar9 * fVar12 + (fVar20 * fVar27 - fVar23 * fVar14);
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar10 = 1.0 / SQRT(fVar9 * fVar9 + fVar18 * fVar18 + fVar13 * fVar13);
  param_7 = fVar15 * fVar17 + fVar16 + param_7;
  fVar18 = fVar18 * fVar10;
  fVar13 = fVar13 * fVar10;
  fVar9 = fVar9 * fVar10;
  fVar27 = param_7 * fVar18 + fVar25 + ((fVar19 + fVar28) - fVar25) * uStack_28._4_4_;
  fVar14 = param_7 * fVar13 + fVar26 + ((fVar7 + fVar29) - fVar26) * uStack_28._4_4_;
  fVar12 = param_7 * fVar9 + fVar22 + ((fVar8 + fVar21) - fVar22) * uStack_28._4_4_;
  fVar11 = fVar9 * (param_3 - fVar12) + fVar18 * (param_1 - fVar27) + fVar13 * (param_2 - fVar14);
  fVar7 = param_2;
  fVar8 = param_3;
  fVar10 = param_1;
  if (fVar11 < 0.0) {
    fVar7 = param_2 - fVar13 * fVar11;
    fVar8 = param_3 - fVar9 * fVar11;
    fVar10 = param_1 - fVar18 * fVar11;
  }
  fVar15 = fVar9 * (param_6 - fVar12) + fVar18 * (param_4 - fVar27) + fVar13 * (param_5 - fVar14);
  fVar12 = param_6;
  fVar14 = param_5;
  fVar27 = param_4;
  if (fVar15 < 0.0) {
    fVar12 = param_6 - fVar9 * fVar15;
    fVar14 = param_5 - fVar13 * fVar15;
    fVar27 = param_4 - fVar18 * fVar15;
  }
  if (fVar11 < 0.0) {
    *param_9 = (fVar10 - param_1) + *param_9;
    param_9[1] = (fVar7 - param_2) + param_9[1];
    param_9[2] = (fVar8 - param_3) + param_9[2];
  }
  if (fVar15 < 0.0) {
    *param_10 = (fVar27 - param_4) + *param_10;
    param_10[1] = (fVar14 - param_5) + param_10[1];
    param_10[2] = (fVar12 - param_6) + param_10[2];
  }
  return fVar11 < 0.0 || fVar15 < 0.0;
}


