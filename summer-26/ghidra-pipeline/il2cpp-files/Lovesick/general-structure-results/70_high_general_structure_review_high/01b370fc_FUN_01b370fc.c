/*
FUNCTION_NAME: FUN_01b370fc
ENTRY_POINT: 01b370fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2
*/


void FUN_01b370fc(float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,long param_8,long param_9,long param_10,
                 int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  
  local_b0 = param_4;
  uStack_ac = param_5;
  local_a8 = param_6;
  uStack_a4 = param_7;
  if ((DAT_0377d3d1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    DAT_0377d3d1 = 1;
  }
  fVar11 = (float)FUN_026884d4(&local_b0,0);
  fVar12 = (float)FUN_026884c4(&local_b0,0);
  fVar17 = (param_1 * fVar12) / param_3;
  fVar13 = (float)FUN_02688390(&local_b0,0);
  fVar16 = DAT_028aaa70;
  if (DAT_03775e60 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775e60 = '\x01';
  }
  puVar5 = System_Threading_Timer_TimerComparer_TypeInfo;
  fVar16 = (fVar17 * (float)param_11) / fVar16;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
    bVar7 = DAT_03775e60 == '\0';
  }
  else {
    bVar7 = false;
  }
  iVar2 = -0x80000000;
  if ((float)(int)fVar16 != INFINITY) {
    iVar2 = (int)fVar16;
  }
  fVar16 = (float)iVar2;
  if (bVar7) {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775e60 = '\x01';
  }
  fVar11 = ((ABS(param_2) * fVar11) / ((param_1 * fVar12) / fVar16)) * 0.5;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar6 = StringLiteral_1006;
  puVar5 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  iVar3 = -0x80000000;
  if ((float)(int)fVar11 != INFINITY) {
    iVar3 = (int)fVar11;
  }
  if (0 < iVar3 + 1) {
    iVar9 = 0;
    do {
      if (0 < iVar2 + 1) {
        if (param_9 == 0) goto LAB_01b374a0;
        iVar10 = 0;
        fVar11 = 1.0 - (float)iVar9 / (float)iVar3;
        do {
          FUN_00bbed00((float)iVar10 / fVar16,fVar11,param_9,*(undefined8 *)puVar5);
          fVar12 = (float)FUN_026883a0(&local_b0,0);
          fVar14 = (float)FUN_026884d4(&local_b0,0);
          fVar15 = (float)FUN_026884d4(&local_b0,0);
          if (param_8 == 0) goto LAB_01b374a0;
          sincosf((param_1 * (fVar13 + -0.5)) / param_3 + (fVar17 * (float)iVar10) / fVar16,
                  &fStack_b4,&local_b8);
          FUN_00ac4f98((param_3 * fStack_b4) / param_1,((0.5 - fVar12) - fVar14) + fVar11 * fVar15,
                       (param_3 * local_b8) / param_3,param_8,*(undefined8 *)puVar6);
          iVar10 = iVar10 + 1;
        } while (iVar2 + 1 != iVar10);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar3 + 1);
  }
  puVar5 = StringLiteral_4747;
  if (0 < iVar3) {
    iVar9 = 0;
    do {
      if (0 < iVar2) {
        if (param_10 == 0) {
LAB_01b374a0:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar10 = iVar9 * (iVar2 + 1);
        iVar8 = (iVar9 + 1) * (iVar2 + 1);
        iVar4 = iVar2;
        do {
          FUN_00ac20f0(param_10,iVar10,*(undefined8 *)puVar5);
          iVar1 = iVar8 + 1;
          FUN_00ac20f0(param_10,iVar1,*(undefined8 *)puVar5);
          FUN_00ac20f0(param_10,iVar8,*(undefined8 *)puVar5);
          FUN_00ac20f0(param_10,iVar1,*(undefined8 *)puVar5);
          FUN_00ac20f0(param_10,iVar10,*(undefined8 *)puVar5);
          iVar10 = iVar10 + 1;
          FUN_00ac20f0(param_10,iVar10,*(undefined8 *)puVar5);
          iVar4 = iVar4 + -1;
          iVar8 = iVar1;
        } while (iVar4 != 0);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar3);
  }
  return;
}


