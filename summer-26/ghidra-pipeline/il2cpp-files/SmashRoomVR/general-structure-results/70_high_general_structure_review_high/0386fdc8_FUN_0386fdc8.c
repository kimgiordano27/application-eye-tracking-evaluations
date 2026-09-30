/*
FUNCTION_NAME: FUN_0386fdc8
ENTRY_POINT: 0386fdc8
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


void FUN_0386fdc8(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  float *pfVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_6c;
  long local_68;
  
  if ((DAT_03ff871c & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da7d58);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da7730);
    thunk_FUN_01ad9084(PTR_DAT_03da5fc0);
    thunk_FUN_01ad9084(PTR_DAT_03da5fc8);
    thunk_FUN_01ad9084(PTR_DAT_03da7720);
    DAT_03ff871c = 1;
  }
  local_6c = 0;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = 0.0;
  local_a0 = 0;
  local_98 = 0.0;
  fStack_94 = 0.0;
  local_a8 = 0;
  local_b0 = 0.0;
  local_b8 = 0;
  if (*(int *)(param_5 + 0xa0) == 0) {
    if (*(long *)(param_5 + 0xf0) != 0) {
      FUN_02437e64(*(long *)(param_5 + 0xf0),0,*(undefined8 *)PTR_DAT_03da7d58);
      return;
    }
    goto LAB_038702f8;
  }
  lVar2 = FUN_0386f978(param_5);
  local_68 = lVar2;
  uVar3 = FUN_038702fc(param_5,*(undefined4 *)(param_5 + 0x28),&local_68,&local_6c,&local_78,
                       &local_80,&local_88);
  if ((uVar3 & 1) == 0) {
    fVar9 = (float)FUN_03925d1c(0);
    if (lVar2 == 0) goto LAB_038702f8;
    param_2 = *(float *)(param_5 + 0xf8);
    param_3 = *(float *)(lVar2 + 0x68);
    if (param_3 < fVar9 - param_2) {
      if (*(long *)(param_5 + 0xf0) == 0) goto LAB_038702f8;
      FUN_02437e64(*(long *)(param_5 + 0xf0),0,*(undefined8 *)PTR_DAT_03da7d58);
    }
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar11 = *(undefined8 *)(param_5 + 200);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    uVar11 = *(undefined8 *)(param_5 + 0xd0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    uVar11 = *(undefined8 *)(param_5 + 0xd8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  else {
    *(undefined8 *)(param_5 + 200) = local_78;
    thunk_FUN_01b4f09c();
    *(undefined8 *)(param_5 + 0xd0) = local_80;
    thunk_FUN_01b4f09c();
    *(undefined8 *)(param_5 + 0xd8) = local_88;
    thunk_FUN_01b4f09c((undefined8 *)(param_5 + 0xd8));
    uVar8 = FUN_03925d1c(0);
    *(undefined4 *)(param_5 + 0xf8) = uVar8;
  }
  if (*(long *)(param_5 + 0xd8) == 0) goto LAB_038702f8;
  fVar9 = (float)FUN_03928d34(*(long *)(param_5 + 0xd8),0);
  if (*(long *)(param_5 + 200) == 0) goto LAB_038702f8;
  fVar13 = param_2;
  fVar12 = param_3;
  fVar10 = (float)FUN_03928d34(*(long *)(param_5 + 200),0);
  if (DAT_03fed25d == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03fed25d = '\x01';
  }
  fVar9 = fVar9 - fVar10;
  param_2 = param_2 - fVar13;
  param_3 = param_3 - fVar12;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  fVar13 = SQRT(param_3 * param_3 + fVar9 * fVar9 + param_2 * param_2);
  if (fVar13 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar6 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    local_98 = *pfVar6;
    fStack_94 = pfVar6[1];
    local_90 = pfVar6[2];
  }
  else {
    local_98 = fVar9 / fVar13;
    fStack_94 = param_2 / fVar13;
    local_90 = param_3 / fVar13;
  }
  uVar14 = (ulong)(uint)local_90;
  uVar4 = (ulong)(uint)fStack_94;
  if ((uVar3 & 1) != 0) {
    if (*(char *)(param_5 + 0x4c) == '\0') {
      bVar5 = true;
    }
    else {
      if (*(long *)(param_5 + 200) == 0) goto LAB_038702f8;
      fVar9 = (float)FUN_039291ac(*(long *)(param_5 + 200),0);
      fVar13 = (float)uVar4;
      fVar12 = (float)uVar14 * local_90;
      uVar4 = (ulong)(uint)fVar12;
      bVar5 = *(float *)(param_5 + 0x54) < fVar12 + local_98 * fVar9 + fVar13 * fStack_94;
      param_4 = local_98;
    }
    if (*(long *)(param_5 + 0xf0) == 0) goto LAB_038702f8;
    FUN_02437e64(*(long *)(param_5 + 0xf0),bVar5,*(undefined8 *)PTR_DAT_03da7d58);
  }
  if (*(long *)(param_5 + 0x20) == 0) goto LAB_038702f8;
  uVar3 = FUN_0391fbb4(*(long *)(param_5 + 0x20),0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(param_5 + 0xd8) == 0) goto LAB_038702f8;
  uVar11 = FUN_03928d34(*(long *)(param_5 + 0xd8),0);
  if (*(long *)(param_5 + 0xd8) == 0) goto LAB_038702f8;
  uVar3 = uVar4;
  uVar15 = uVar14;
  uVar8 = FUN_039274a0(*(long *)(param_5 + 0xd8),0);
  fVar9 = (float)uVar3;
  local_a8 = CONCAT44(fVar9,uVar8);
  fVar13 = (float)uVar15;
  local_a0 = CONCAT44(param_4,fVar13);
  if (local_6c - 1U < 2) {
    if (lVar2 == 0) goto LAB_038702f8;
    fVar12 = (float)FUN_0386ec6c(lVar2,*(undefined8 *)(param_5 + 0xd0),local_6c == 2);
    if ((*(char *)(lVar2 + 0x5c) != '\0') &&
       (fVar10 = fVar13 * local_90,
       *(float *)(lVar2 + 100) < (fVar9 * -fStack_94 - fVar12 * local_98) - fVar10)) {
      uVar8 = FUN_038704a8(param_5,*(undefined8 *)(param_5 + 200));
      local_b8 = CONCAT44(fVar10,uVar8);
      local_b0 = fVar13;
      FUN_03857f58(&local_98,&local_b8,&local_a8,0);
    }
  }
  lVar7 = *(long *)(param_5 + 0x58);
  FUN_035a0b10(uVar11,uVar4,uVar14,0);
  if (lVar7 == 0) goto LAB_038702f8;
  FUN_021ef618(lVar7,*(undefined8 *)PTR_DAT_03da5fc8);
  if (*(long *)(param_5 + 0x60) == 0) goto LAB_038702f8;
  FUN_021ee304(local_a8 & 0xffffffff,local_a8._4_4_,local_a0 & 0xffffffff,local_a0._4_4_,
               *(long *)(param_5 + 0x60),*(undefined8 *)PTR_DAT_03da7720);
  if (*(char *)(param_5 + 0x80) == '\0') {
    if (lVar2 == 0) goto LAB_038702f8;
    if (*(char *)(lVar2 + 0x6c) == '\0') goto LAB_03870240;
    lVar7 = *(long *)(param_5 + 0x58);
    uVar11 = FUN_03925cf4(0);
    if (lVar7 == 0) goto LAB_038702f8;
    FUN_0385d084(uVar11,*(undefined4 *)(lVar2 + 0x70),*(undefined4 *)(lVar2 + 0x74),lVar7,0);
    lVar7 = *(long *)(param_5 + 0x60);
  }
  else {
LAB_03870240:
    if ((*(long *)(param_5 + 0x58) == 0) ||
       (FUN_021ef670(0x3f800000,*(long *)(param_5 + 0x58),*(undefined8 *)PTR_DAT_03da5fc0),
       lVar2 == 0)) goto LAB_038702f8;
    lVar7 = *(long *)(param_5 + 0x60);
    if (*(char *)(lVar2 + 0x6c) == '\0') {
      if (lVar7 == 0) goto LAB_038702f8;
      fVar9 = 1.0;
      goto LAB_038702cc;
    }
  }
  fVar9 = (float)FUN_03925cf4(0);
  if (lVar7 != 0) {
    fVar9 = fVar9 * *(float *)(lVar2 + 0x70);
LAB_038702cc:
    FUN_021ee3d0(fVar9,lVar7,*(undefined8 *)PTR_DAT_03da7730);
    return;
  }
LAB_038702f8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


