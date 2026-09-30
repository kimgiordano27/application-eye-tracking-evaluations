/*
FUNCTION_NAME: FUN_034fb70c
ENTRY_POINT: 034fb70c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_034fb70c(long param_1,char *param_2)

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
  undefined1 auStack_120 [80];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((DAT_03ff6d5b & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d95938);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff6d5b = 1;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  plVar9 = *(long **)(param_2 + 0x1d0);
  if (plVar9 == (long *)0x0) goto LAB_034fbae4;
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
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_0391f968(uVar12,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_034fbae4;
      uVar6 = FUN_03927438(uVar6,*(long *)(param_1 + 0x68),0);
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_034fbae4;
      fVar13 = fVar17;
      fVar15 = fVar18;
      fVar10 = (float)FUN_039274a0(*(long *)(param_1 + 0x68),0);
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
  else if ((iVar3 == 1) && (iVar5 = FUN_0390e2b8(0), iVar5 == 1)) {
    if (*(int *)(param_1 + 0xd0) == 0) {
      uVar12 = NEON_fmov(0xbf800000,4);
    }
    else {
      uVar6 = FUN_038fa760(0);
      uVar7 = FUN_038fa788(0);
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
  FUN_034fae4c(auStack_120,param_1,plVar9);
  memcpy(__dest,auStack_120,0x50);
  thunk_FUN_01b4f09c(__dest,0);
  if (iVar3 == 3) {
    memcpy(&local_d0,__dest,0x50);
    uVar8 = FUN_03b322a8(&local_d0,0);
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
  FUN_034fbae8(pcVar2,plVar9);
  FUN_034fbbb8(param_1,param_2,plVar9);
  if (*param_2 == '\0') {
    uVar12 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_03922f24(uVar12,0,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (*(long *)(param_2 + 0x1d0) == 0) {
LAB_034fbae4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(int *)(*(long *)(param_2 + 0x1d0) + 0x194) != 3) {
      return;
    }
  }
  puVar4 = PTR_DAT_03d95938;
  FUN_034fbc20(param_1,pcVar2,plVar9);
  FUN_034fc498(param_1,pcVar2,plVar9);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_034fc7b0(param_2,plVar9);
  pcVar2 = param_2 + 0xa0;
  *(undefined4 *)(plVar9 + 0x29) = 1;
  FUN_034fbae8(pcVar2,plVar9);
  FUN_034fbc20(param_1,pcVar2,plVar9);
  FUN_034fc498(param_1,pcVar2,plVar9);
  param_2 = param_2 + 0x138;
  *(undefined4 *)(plVar9 + 0x29) = 2;
  FUN_034fbae8(param_2,plVar9);
  FUN_034fbc20(param_1,param_2,plVar9);
  FUN_034fc498(param_1,param_2,plVar9);
  return;
}


