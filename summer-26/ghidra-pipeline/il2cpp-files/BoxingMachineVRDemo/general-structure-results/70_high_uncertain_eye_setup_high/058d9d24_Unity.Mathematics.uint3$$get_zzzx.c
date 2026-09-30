/*
FUNCTION_NAME: Unity.Mathematics.uint3$$get_zzzx
ENTRY_POINT: 058d9d24
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_uint3__get_zzzx(long param_1,char *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long *__dest;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_s3;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  if ((DAT_06b80b25 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_45_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    DAT_06b80b25 = 1;
  }
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  plVar9 = *(long **)(param_2 + 0x1d0);
  if (plVar9 == (long *)0x0) goto LAB_058da0f0;
  iVar3 = *(int *)((long)plVar9 + 0x194);
  puVar1 = (undefined8 *)((long)plVar9 + 0x104);
  if (iVar3 == 3) {
    uVar6 = *(undefined4 *)(param_2 + 0x1e8);
    fVar17 = *(float *)(param_2 + 0x1ec);
    fVar18 = *(float *)(param_2 + 0x1f0);
    fVar19 = *(float *)(param_2 + 500);
    fVar22 = *(float *)(param_2 + 0x1f8);
    fVar21 = *(float *)(param_2 + 0x1fc);
    fVar20 = *(float *)(param_2 + 0x200);
    uVar12 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar8 = FUN_0606a004(uVar12,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_058da0f0;
      uVar6 = FUN_06076f00(uVar6,*(long *)(param_1 + 0x68),0);
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_058da0f0;
      fVar13 = fVar17;
      fVar15 = fVar18;
      fVar10 = (float)FUN_06076fa4(*(long *)(param_1 + 0x68),0);
      fVar24 = fVar22 * fVar10;
      fVar11 = fVar19 * fVar10;
      fVar23 = fVar19 * fVar15;
      fVar25 = fVar19 * fVar13;
      fVar14 = fVar22 * fVar13;
      fVar16 = fVar21 * fVar15;
      fVar19 = (fVar21 * fVar13 + fVar19 * in_s3 + fVar20 * fVar10) - fVar22 * fVar15;
      fVar22 = (fVar23 + fVar22 * in_s3 + fVar20 * fVar13) - fVar21 * fVar10;
      fVar21 = (fVar24 + fVar21 * in_s3 + fVar20 * fVar15) - fVar25;
      fVar20 = ((fVar20 * in_s3 - fVar11) - fVar14) - fVar16;
    }
    *(float *)(plVar9 + 0x35) = fVar19;
    *(float *)((long)plVar9 + 0x1ac) = fVar22;
    *(float *)(plVar9 + 0x36) = fVar21;
    *(float *)((long)plVar9 + 0x1b4) = fVar20;
    *(undefined4 *)((long)plVar9 + 0x19c) = uVar6;
    *(float *)(plVar9 + 0x34) = fVar17;
    *(float *)((long)plVar9 + 0x1a4) = fVar18;
  }
  else if ((iVar3 == 1) && (iVar5 = FUN_06051690(0), iVar5 == 1)) {
    if (*(int *)(param_1 + 0xd0) == 0) {
      uVar12 = NEON_fmov(0xbf800000,4);
    }
    else {
      uVar6 = FUN_0602aaac(0);
      uVar7 = FUN_0602aad4(0);
      uVar12 = NEON_scvtf(CONCAT44(uVar7,uVar6),4);
      uVar12 = CONCAT44((float)((ulong)uVar12 >> 0x20) * 0.5,(float)uVar12 * 0.5);
    }
    *puVar1 = uVar12;
    *(undefined8 *)((long)plVar9 + 0x10c) = 0;
  }
  else {
    *(ulong *)((long)plVar9 + 0x10c) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x1d8) >> 0x20) -
                  (float)((ulong)*puVar1 >> 0x20),
                  (float)*(undefined8 *)(param_2 + 0x1d8) - (float)*puVar1);
    *puVar1 = *(undefined8 *)(param_2 + 0x1d8);
  }
  __dest = plVar9 + 10;
  (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
  FUN_058d9458(param_1,plVar9);
  memcpy(__dest,&stack0x00000000,0x50);
  thunk_FUN_02dd37b4(__dest,0);
  if (iVar3 == 3) {
    memcpy(&stack0x00000050,__dest,0x50);
    uVar8 = FUN_06376a40(&stack0x00000050,0);
    if ((uVar8 & 1) != 0) {
      uVar12 = *(undefined8 *)((long)plVar9 + 0x94);
      *(ulong *)((long)plVar9 + 0x10c) =
           CONCAT44((float)((ulong)uVar12 >> 0x20) - (float)((ulong)*puVar1 >> 0x20),
                    (float)uVar12 - (float)*puVar1);
      *(undefined8 *)((long)plVar9 + 0x104) = uVar12;
    }
  }
  pcVar2 = param_2 + 8;
  *(undefined4 *)(plVar9 + 0x29) = 0;
  FUN_058da0f4(pcVar2,plVar9);
  FUN_058da1c4(param_1,param_2,plVar9);
  if (*param_2 == '\0') {
    uVar12 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar8 = UnityEngine_Font__add_textureRebuilt(uVar12,0,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (*(long *)(param_2 + 0x1d0) == 0) {
LAB_058da0f0:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(int *)(*(long *)(param_2 + 0x1d0) + 0x194) != 3) {
      return;
    }
  }
  puVar4 = OVRPlugin_OVRP_1_45_0_TypeInfo;
  FUN_058da22c(param_1,pcVar2,plVar9);
  FUN_058daad4(param_1,pcVar2,plVar9);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_058dadec(param_2,plVar9);
  pcVar2 = param_2 + 0xa0;
  *(undefined4 *)(plVar9 + 0x29) = 1;
  FUN_058da0f4(pcVar2,plVar9);
  FUN_058da22c(param_1,pcVar2,plVar9);
  FUN_058daad4(param_1,pcVar2,plVar9);
  param_2 = param_2 + 0x138;
  *(undefined4 *)(plVar9 + 0x29) = 2;
  FUN_058da0f4(param_2,plVar9);
  FUN_058da22c(param_1,param_2,plVar9);
  FUN_058daad4(param_1,param_2,plVar9);
  return;
}


