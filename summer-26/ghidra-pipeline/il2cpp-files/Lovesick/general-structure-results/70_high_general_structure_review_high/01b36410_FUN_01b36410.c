/*
FUNCTION_NAME: FUN_01b36410
ENTRY_POINT: 01b36410
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


void FUN_01b36410(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float __x;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  float __x_00;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000028;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  uStack_a8 = in_stack_00000018;
  local_b0 = in_stack_00000010;
  if ((DAT_0377d3ce & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    DAT_0377d3ce = 1;
  }
  FUN_02698858(in_d3,in_d4,in_d5,in_d6,0);
  fVar22 = (float)in_d4;
  fVar23 = (float)in_d5;
  fVar10 = (float)FUN_02699088(0);
  fVar11 = (float)FUN_026884d4(&local_b0,0);
  if (DAT_03775e60 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775e60 = '\x01';
  }
  puVar5 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  iVar1 = -0x80000000;
  if ((float)(int)(fVar11 * (float)param_4) != INFINITY) {
    iVar1 = (int)(fVar11 * (float)param_4);
  }
  fVar11 = (float)FUN_026884c4(&local_b0,0);
  if (DAT_03775e60 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775e60 = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  iVar2 = -0x80000000;
  if ((float)(int)(fVar11 * (float)param_5) != INFINITY) {
    iVar2 = (int)(fVar11 * (float)param_5);
  }
  fVar12 = (float)FUN_02688390(&local_b0,0);
  fVar13 = (float)FUN_026883a0(&local_b0,0);
  fVar14 = (float)FUN_026884d4(&local_b0,0);
  fVar15 = (float)FUN_026884c4(&local_b0,0);
  fVar16 = (float)FUN_026884d4(&local_b0,0);
  puVar6 = StringLiteral_1006;
  puVar5 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  fVar4 = DAT_028aaa70;
  fVar11 = DAT_028aa15c;
  if (0 < iVar1 + 1) {
    fVar15 = fVar15 * DAT_028aaa70;
    fVar12 = fVar12 * DAT_028aaa70;
    fVar16 = fVar16 * DAT_028aa15c;
    fVar13 = ((0.5 - fVar13) - fVar14) * DAT_028aa15c;
    iVar8 = 0;
    do {
      if (0 < iVar2 + 1) {
        __x = fVar13 + (fVar16 / (float)iVar1) * (float)iVar8;
        sincosf(__x,&fStack_b4,&local_b8);
        fVar14 = local_b8;
        iVar9 = 0;
        fVar17 = fStack_b4 * in_stack_00000020;
        do {
          fVar18 = (float)FUN_02688390(&local_b0,0);
          fVar19 = (float)FUN_026884c4(&local_b0,0);
          fVar20 = (float)FUN_026883a0(&local_b0,0);
          fVar21 = (float)FUN_026884d4(&local_b0,0);
          if (param_2 == 0) goto LAB_01b368c8;
          __x_00 = fVar12 + (fVar15 / (float)iVar2) * (float)iVar9;
          FUN_00bbed00((((1.0 / in_stack_00000028) * (__x_00 / fVar4 + -0.5) + 0.5) - fVar18) /
                       fVar19,((((1.0 / in_stack_00000028) * __x) / fVar11 + 0.5) - fVar20) / fVar21
                       ,param_2,*(undefined8 *)puVar5);
          if (param_1 == 0) goto LAB_01b368c8;
          sincosf(__x_00,&fStack_bc,&local_c0);
          FUN_00ac4f98((-(fVar14 * fStack_bc * in_stack_00000020) - fVar10) / fStack0000000000000000
                       ,(fVar17 - fVar22) / fStack0000000000000004,
                       (-(fVar14 * local_c0 * in_stack_00000020) - fVar23) / in_stack_00000008,
                       param_1,*(undefined8 *)puVar6);
          iVar9 = iVar9 + 1;
        } while (iVar2 + 1 != iVar9);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar1 + 1);
  }
  puVar5 = StringLiteral_4747;
  if (0 < iVar1) {
    iVar8 = 0;
    do {
      if (0 < iVar2) {
        if (param_3 == 0) {
LAB_01b368c8:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar9 = (iVar8 + 1) * (iVar2 + 1);
        iVar7 = iVar8 * (iVar2 + 1);
        iVar3 = iVar2;
        do {
          FUN_00ac20f0(param_3,iVar7,*(undefined8 *)puVar5);
          FUN_00ac20f0(param_3,iVar9,*(undefined8 *)puVar5);
          iVar9 = iVar9 + 1;
          FUN_00ac20f0(param_3,iVar9,*(undefined8 *)puVar5);
          FUN_00ac20f0(param_3,iVar9,*(undefined8 *)puVar5);
          FUN_00ac20f0(param_3,iVar7 + 1,*(undefined8 *)puVar5);
          FUN_00ac20f0(param_3,iVar7,*(undefined8 *)puVar5);
          iVar3 = iVar3 + -1;
          iVar7 = iVar7 + 1;
        } while (iVar3 != 0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar1);
  }
  return;
}


