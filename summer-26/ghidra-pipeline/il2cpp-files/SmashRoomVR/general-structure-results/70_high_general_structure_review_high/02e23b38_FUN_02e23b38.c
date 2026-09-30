/*
FUNCTION_NAME: FUN_02e23b38
ENTRY_POINT: 02e23b38
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_02e23b38(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  long *plVar9;
  char cVar10;
  undefined8 uVar11;
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
  
  if ((DAT_03ff01bf & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01bf = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_5 + 0x270) == '\0') {
    return;
  }
  if (*(char *)(param_5 + 0x96) != '\0') {
    return;
  }
  if (*(char *)(param_5 + 0x3f9) == '\0') {
    return;
  }
  uVar11 = *(undefined8 *)(param_5 + 0x330);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03923030(uVar11,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar6 = FUN_02ddcecc(0);
  if (lVar6 == 0) goto LAB_02e23f14;
  if (*(char *)(lVar6 + 0xb6) == '\0') {
    iVar1 = *(int *)(param_5 + 0xd8);
    if (iVar1 == 0) {
      if (*(char *)(param_5 + 0x3c6) != '\0') {
        bVar4 = true;
        goto LAB_02e23c70;
      }
      if ((*(char *)(param_5 + 0x1e9) == '\0') && (*(char *)(param_5 + 0x2f1) != '\0'))
      goto LAB_02e23c30;
      bVar4 = true;
LAB_02e23c68:
      if ((*(char *)(param_5 + 0x1e9) != '\0') || (*(char *)(param_5 + 0x2f1) == '\0'))
      goto LAB_02e23c70;
      cVar10 = '\x01';
    }
    else {
      if ((iVar1 == 1) || (*(char *)(param_5 + 0x1e9) != '\0')) {
LAB_02e23c40:
        bVar8 = *(byte *)(param_5 + 0x3c7) ^ 1;
      }
      else {
LAB_02e23c30:
        if (*(char *)(param_5 + 0x2f1) == '\0') goto LAB_02e23c40;
        bVar8 = 0;
      }
      bVar4 = bVar8 != 0;
      if (iVar1 == 0) {
        if (*(char *)(param_5 + 0x3c6) == '\0') goto LAB_02e23c68;
LAB_02e23c70:
        if ((*(char *)(param_5 + 0x1e9) == '\0') && (*(char *)(param_5 + 0x2f1) != '\0')) {
          cVar10 = '\0';
          goto LAB_02e23c7c;
        }
      }
      else if (iVar1 != 1) goto LAB_02e23c70;
      cVar10 = *(char *)(param_5 + 0x3c7);
    }
LAB_02e23c7c:
    bVar3 = cVar10 == '\0';
  }
  else {
    bVar3 = *(char *)(param_5 + 0x3c7) == '\0';
    bVar4 = bVar3;
  }
  lVar6 = *(long *)(param_5 + 0x280);
  if (lVar6 == 0) goto LAB_02e23f14;
  if ((*(char *)(lVar6 + 0x9c) == '\0') && (*(char *)(lVar6 + 0x9e) == '\0')) {
    return;
  }
  if ((bVar4 & (*(byte *)(param_5 + 0x358) ^ 0xff)) == 0) {
    if ((*(byte *)(param_5 + 0x358) & !bVar3) == 0) {
      return;
    }
    *(undefined1 *)(param_5 + 0x358) = 0;
    FUN_02e2c3fc(param_5);
    return;
  }
  *(undefined1 *)(param_5 + 0x358) = 1;
  if (*(char *)(lVar6 + 0x9f) == '\0') {
    if (*(long *)(param_5 + 0x98) == 0) goto LAB_02e23f14;
    uVar11 = *(undefined8 *)(*(long *)(param_5 + 0x98) + 0x78);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03923030(uVar11,0);
    if ((uVar5 & 1) == 0) {
      lVar6 = FUN_02ddcecc(0);
      if (lVar6 == 0) goto LAB_02e23f14;
      plVar9 = (long *)(lVar6 + 0xc0);
    }
    else {
      if (*(long *)(param_5 + 0x98) == 0) goto LAB_02e23f14;
      plVar9 = (long *)(*(long *)(param_5 + 0x98) + 0x78);
    }
    if (*plVar9 == 0) goto LAB_02e23f14;
    FUN_02dfd7e8(*plVar9,*(undefined8 *)(param_5 + 0x330),0);
    if (*(long *)(param_5 + 0x98) == 0) goto LAB_02e23f14;
    uVar11 = *(undefined8 *)(param_5 + 0x330);
    lVar6 = FUN_0391c27c(*(long *)(param_5 + 0x98),0);
    if (lVar6 == 0) goto LAB_02e23f14;
    FUN_039274a0(lVar6,0);
    fVar12 = (float)FUN_03914250(0);
    fVar15 = param_2;
    fVar16 = param_3;
    fVar17 = param_4;
    lVar6 = FUN_0391c27c(param_5,0);
    if (lVar6 == 0) goto LAB_02e23f14;
    fVar13 = (float)FUN_039274a0(lVar6,0);
    fVar19 = param_3 * fVar15;
    fVar20 = param_2 * fVar13;
    fVar14 = param_2 * fVar15;
    fVar18 = param_2 * fVar16;
    fVar21 = param_3 * fVar16;
    param_2 = (param_3 * fVar13 + param_4 * fVar15 + param_2 * fVar17) - fVar12 * fVar16;
    param_3 = (fVar12 * fVar15 + param_4 * fVar16 + param_3 * fVar17) - fVar20;
    FUN_03914250((fVar18 + param_4 * fVar13 + fVar12 * fVar17) - fVar19,param_2,param_3,
                 ((param_4 * fVar17 - fVar12 * fVar13) - fVar14) - fVar21,0);
    FUN_02de9f30(uVar11,0);
  }
  if (*(long *)(param_5 + 0x98) != 0) {
    lVar6 = FUN_0391c27c(*(long *)(param_5 + 0x98),0);
    if ((*(long *)(param_5 + 0x280) != 0) &&
       (FUN_02e14764(*(long *)(param_5 + 0x280),0), lVar6 != 0)) {
      fVar15 = (float)FUN_0392a520(lVar6,0);
      uVar11 = *(undefined8 *)(param_5 + 0x98);
      lVar6 = FUN_0391c27c(param_5,0);
      if (lVar6 != 0) {
        fVar12 = *(float *)(param_5 + 0x2d8);
        fVar17 = *(float *)(param_5 + 0x2d4);
        uVar7 = FUN_03927438(*(undefined4 *)(param_5 + 0x2d0),lVar6,0);
        fVar16 = (float)FUN_02e25cb8(uVar7,uVar11,*(undefined8 *)(param_5 + 0x280));
        lVar6 = *(long *)(param_5 + 0x330);
        fVar17 = fVar17 - param_2;
        fVar12 = fVar12 - param_3;
        *(float *)(param_5 + 0x34c) = fVar16 - fVar15;
        *(float *)(param_5 + 0x350) = fVar17;
        *(float *)(param_5 + 0x354) = fVar12;
        fVar15 = (float)FUN_02e21aa0(param_5);
        if (lVar6 != 0) {
          FUN_0395c8ec(fVar15 + *(float *)(param_5 + 0x34c),fVar17 + *(float *)(param_5 + 0x350),
                       fVar12 + *(float *)(param_5 + 0x354),lVar6,0);
          return;
        }
      }
    }
  }
LAB_02e23f14:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


