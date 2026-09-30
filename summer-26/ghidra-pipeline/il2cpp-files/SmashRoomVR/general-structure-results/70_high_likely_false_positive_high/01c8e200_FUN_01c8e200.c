/*
FUNCTION_NAME: FUN_01c8e200
ENTRY_POINT: 01c8e200
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_01c8e200(undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  float *pfVar15;
  undefined4 *puVar16;
  long lVar17;
  float *pfVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  float *pfVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((DAT_03fed83b & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_518);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__);
    thunk_FUN_01ad9084(StringLiteral_415);
    thunk_FUN_01ad9084(StringLiteral_526);
    thunk_FUN_01ad9084(StringLiteral_519);
    thunk_FUN_01ad9084(StringLiteral_527);
    thunk_FUN_01ad9084(StringLiteral_520);
    DAT_03fed83b = 1;
  }
  plVar13 = (long *)StringLiteral_415;
  local_100 = 0;
  local_128 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  local_130 = 0;
  if (*(char *)(param_4 + 0x50) == '\0') {
    if (*(int *)(param_4 + 0x5c) == -1) {
      return;
    }
    FUN_01c8ee74(param_4);
    *(undefined4 *)(param_4 + 0x5c) = 0xffffffff;
    return;
  }
  uVar19 = *(undefined8 *)(param_4 + 0x38);
  uVar30 = FUN_0394fadc(0);
  uVar20 = *(undefined8 *)(param_4 + 0x48);
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_037064e0(uVar30,param_2,param_3,uVar19,uVar20,1,0);
  if (uVar10 == 0xffffffff) {
    FUN_01c8ee74(param_4);
    *(undefined4 *)(param_4 + 0x5c) = 0xffffffff;
  }
  else if (uVar10 != *(uint *)(param_4 + 0x5c)) {
    FUN_01c8ee74(param_4);
    *(undefined4 *)(param_4 + 0x5c) = 0xffffffff;
    uVar11 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x130,0);
    if (((uVar11 & 1) != 0) ||
       (uVar11 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x12f,0), (uVar11 & 1) != 0))
    {
      *(uint *)(param_4 + 0x5c) = uVar10;
      if ((*(long *)(param_4 + 0x38) == 0) ||
         ((lVar14 = *(long *)(*(long *)(param_4 + 0x38) + 0x368), lVar14 == 0 ||
          (lVar17 = *(long *)(lVar14 + 0x38), lVar17 == 0)))) goto LAB_01c8ee70;
      if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_01c8ee6c;
      lVar14 = *(long *)(lVar14 + 0x60);
      if (lVar14 == 0) goto LAB_01c8ee70;
      lVar17 = lVar17 + (long)(int)uVar10 * 0x178;
      uVar10 = *(uint *)(lVar17 + 0x58);
      lVar26 = (long)(int)uVar10;
      if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_01c8ee6c;
      lVar14 = *(long *)(lVar14 + lVar26 * 0x50 + 0x30);
      if (lVar14 == 0) goto LAB_01c8ee70;
      uVar21 = *(uint *)(lVar17 + 0x6c);
      if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_01c8ee6c;
      lVar17 = lVar14 + (long)(int)uVar21 * 0xc;
      puVar29 = (undefined8 *)(lVar17 + 0x20);
      uVar1 = uVar21 + 2;
      if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_01c8ee6c;
      lVar27 = lVar14 + (long)(int)uVar1 * 0xc;
      puVar28 = (undefined8 *)(lVar27 + 0x20);
      uVar2 = uVar21 + 1;
      fVar35 = (float)*puVar28;
      fVar36 = (float)*puVar29;
      fVar31 = (float)((ulong)*puVar28 >> 0x20);
      fVar33 = (float)((ulong)*puVar29 >> 0x20);
      fVar34 = (fVar36 + fVar35) * 0.5;
      fVar37 = (fVar33 + fVar31) * 0.5;
      *puVar29 = CONCAT44(fVar33 - fVar37,fVar36 - fVar34);
      if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_01c8ee6c;
      lVar24 = lVar14 + (long)(int)uVar2 * 0xc;
      puVar25 = (undefined8 *)(lVar24 + 0x20);
      pfVar18 = (float *)(lVar24 + 0x28);
      *puVar25 = CONCAT44((float)((ulong)*puVar25 >> 0x20) - fVar37,(float)*puVar25 - fVar34);
      if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_01c8ee6c;
      *puVar28 = CONCAT44(fVar31 - fVar37,fVar35 - fVar34);
      uVar3 = uVar21 + 3;
      if (*(uint *)(lVar14 + 0x18) <= uVar3) goto LAB_01c8ee6c;
      lVar22 = lVar14 + (long)(int)uVar3 * 0xc;
      pfVar23 = (float *)(lVar22 + 0x20);
      pfVar15 = (float *)(lVar22 + 0x28);
      *(ulong *)pfVar23 =
           CONCAT44((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) - fVar37,
                    (float)*(undefined8 *)pfVar23 - fVar34);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar16 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      uVar40 = *puVar16;
      uVar39 = puVar16[1];
      uVar38 = puVar16[2];
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar16 = *(undefined4 **)
                 (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                 0xb8);
      uVar44 = *puVar16;
      uVar43 = puVar16[1];
      uVar42 = puVar16[2];
      uVar41 = puVar16[3];
      if (DAT_03fed258 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed258 = '\x01';
      }
      FUN_03910ecc(&local_1b0,uVar40,uVar39,uVar38,uVar44,uVar43,uVar42,uVar41,0);
      uStack_148 = uStack_188;
      local_150 = local_190;
      uStack_138 = uStack_178;
      uStack_140 = uStack_180;
      uStack_168 = uStack_1a8;
      local_170 = local_1b0;
      uStack_158 = uStack_198;
      uStack_160 = uStack_1a0;
      *(undefined8 *)(param_4 + 0x88) = uStack_188;
      *(undefined8 *)(param_4 + 0x80) = local_190;
      *(undefined8 *)(param_4 + 0x98) = uStack_178;
      *(undefined8 *)(param_4 + 0x90) = uStack_180;
      *(undefined8 *)(param_4 + 0x68) = uStack_1a8;
      *(undefined8 *)(param_4 + 0x60) = local_1b0;
      *(undefined8 *)(param_4 + 0x78) = uStack_198;
      *(undefined8 *)(param_4 + 0x70) = uStack_1a0;
      if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_01c8ee6c;
      pfVar4 = (float *)(lVar17 + 0x28);
      uVar39 = *(undefined4 *)(lVar17 + 0x24);
      fVar35 = *pfVar4;
      lVar5 = param_4 + 0x60;
      uVar38 = FUN_03911ddc(*(undefined4 *)puVar29,lVar5,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_01c8ee6c;
      *(undefined4 *)puVar29 = uVar38;
      *(undefined4 *)(lVar17 + 0x24) = uVar39;
      *pfVar4 = fVar35;
      if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_01c8ee6c;
      uVar39 = *(undefined4 *)(lVar24 + 0x24);
      fVar35 = *pfVar18;
      uVar38 = FUN_03911ddc(*(undefined4 *)puVar25,lVar5,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_01c8ee6c;
      *(undefined4 *)puVar25 = uVar38;
      *(undefined4 *)(lVar24 + 0x24) = uVar39;
      *pfVar18 = fVar35;
      if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_01c8ee6c;
      pfVar6 = (float *)(lVar27 + 0x28);
      uVar39 = *(undefined4 *)(lVar27 + 0x24);
      fVar35 = *pfVar6;
      uVar38 = FUN_03911ddc(*(undefined4 *)puVar28,lVar5,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_01c8ee6c;
      *(undefined4 *)puVar28 = uVar38;
      *(undefined4 *)(lVar27 + 0x24) = uVar39;
      *pfVar6 = fVar35;
      if (*(uint *)(lVar14 + 0x18) <= uVar3) goto LAB_01c8ee6c;
      pfVar7 = (float *)(lVar22 + 0x24);
      fVar31 = *pfVar7;
      fVar36 = *pfVar15;
      fVar35 = (float)FUN_03911ddc(*pfVar23,lVar5,0);
      if (*(uint *)(lVar14 + 0x18) <= uVar3) goto LAB_01c8ee6c;
      *pfVar23 = fVar35;
      *pfVar7 = fVar31;
      *pfVar15 = fVar36;
      if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_01c8ee6c;
      *puVar29 = CONCAT44(fVar37 + (float)((ulong)*puVar29 >> 0x20),fVar34 + (float)*puVar29);
      *pfVar4 = *pfVar4 + 0.0;
      if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_01c8ee6c;
      *puVar25 = CONCAT44(fVar37 + (float)((ulong)*puVar25 >> 0x20),fVar34 + (float)*puVar25);
      *pfVar18 = *pfVar18 + 0.0;
      if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_01c8ee6c;
      *puVar28 = CONCAT44(fVar37 + (float)((ulong)*puVar28 >> 0x20),fVar34 + (float)*puVar28);
      *pfVar6 = *pfVar6 + 0.0;
      if (*(uint *)(lVar14 + 0x18) <= uVar3) goto LAB_01c8ee6c;
      param_3 = (ulong)(uint)(fVar36 + 0.0);
      param_2 = (ulong)(uint)(fVar37 + fVar31);
      *pfVar23 = fVar34 + fVar35;
      *pfVar7 = fVar37 + fVar31;
      *pfVar15 = fVar36 + 0.0;
      plVar13 = (long *)StringLiteral_415;
      if (((*(long *)(param_4 + 0x38) == 0) ||
          (lVar17 = *(long *)(*(long *)(param_4 + 0x38) + 0x368), lVar17 == 0)) ||
         (lVar17 = *(long *)(lVar17 + 0x60), lVar17 == 0)) goto LAB_01c8ee70;
      if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_01c8ee6c;
      lVar17 = *(long *)(lVar17 + lVar26 * 0x50 + 0x58);
      if (lVar17 == 0) goto LAB_01c8ee70;
      if (((*(uint *)(lVar17 + 0x18) <= uVar21) ||
          (*(undefined4 *)(lVar17 + (long)(int)uVar21 * 4 + 0x20) = 0xffc0ffff,
          *(uint *)(lVar17 + 0x18) <= uVar2)) ||
         ((*(undefined4 *)(lVar17 + (long)(int)uVar2 * 4 + 0x20) = 0xffc0ffff,
          *(uint *)(lVar17 + 0x18) <= uVar1 ||
          (*(undefined4 *)(lVar17 + (long)(int)uVar1 * 4 + 0x20) = 0xffc0ffff,
          *(uint *)(lVar17 + 0x18) <= uVar3)))) goto LAB_01c8ee6c;
      *(undefined4 *)(lVar17 + (long)(int)uVar3 * 4 + 0x20) = 0xffc0ffff;
      if (((*(long *)(param_4 + 0x38) == 0) ||
          (lVar17 = *(long *)(*(long *)(param_4 + 0x38) + 0x368), lVar17 == 0)) ||
         (lVar17 = *(long *)(lVar17 + 0x60), lVar17 == 0)) goto LAB_01c8ee70;
      if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_01c8ee6c;
      memmove(&local_f0,(void *)(lVar17 + lVar26 * 0x50 + 0x20),0x50);
      iVar8 = *(int *)(lVar14 + 0x18);
      if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036fa72c(&local_f0,uVar21,iVar8 + -4,0);
      plVar12 = *(long **)(param_4 + 0x38);
      if (plVar12 == (long *)0x0) goto LAB_01c8ee70;
      (**(code **)(*plVar12 + 0x7f8))(plVar12,0xff,*(undefined8 *)(*plVar12 + 0x800));
    }
  }
  puVar9 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar19 = *(undefined8 *)(param_4 + 0x38);
  uVar30 = FUN_0394fadc(0);
  uVar20 = *(undefined8 *)(param_4 + 0x48);
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_037066e8(uVar30,param_2,param_3,uVar19,uVar20,0);
  uVar19 = *(undefined8 *)(param_4 + 0x28);
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar9);
  }
  uVar11 = FUN_0391f968(uVar19,0,0);
  uVar38 = DAT_00b55384;
  if ((uVar11 & 1) == 0) {
LAB_01c8eab4:
    if (((uVar10 != 0xffffffff) && (uVar10 != *(uint *)(param_4 + 0x54))) &&
       ((uVar11 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x130,0), (uVar11 & 1) == 0
        && (uVar11 = UnityEngine_UIElements_RadioButtonGroup__set_choices(0x12f,0),
           (uVar11 & 1) == 0)))) {
      plVar12 = *(long **)(param_4 + 0x38);
      *(uint *)(param_4 + 0x54) = uVar10;
      if (((plVar12 == (long *)0x0) || (plVar12[0x6d] == 0)) ||
         (lVar14 = *(long *)(plVar12[0x6d] + 0x40), lVar14 == 0)) goto LAB_01c8ee70;
      if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_01c8ee6c;
      lVar14 = lVar14 + (long)(int)uVar10 * 0x18;
      uVar10 = *(uint *)(lVar14 + 0x30);
      uVar11 = (ulong)uVar10;
      if (0 < (int)uVar10) {
        uVar10 = *(uint *)(lVar14 + 0x28);
        do {
          if (((plVar12 == (long *)0x0) || (lVar14 = plVar12[0x6d], lVar14 == 0)) ||
             (lVar17 = *(long *)(lVar14 + 0x38), lVar17 == 0)) goto LAB_01c8ee70;
          if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_01c8ee6c;
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 == 0) goto LAB_01c8ee70;
          lVar17 = lVar17 + (long)(int)uVar10 * 0x178;
          uVar21 = *(uint *)(lVar17 + 0x58);
          if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_01c8ee6c;
          lVar14 = *(long *)(lVar14 + (long)(int)uVar21 * 0x50 + 0x58);
          if (lVar14 == 0) goto LAB_01c8ee70;
          uVar21 = *(uint *)(lVar17 + 0x6c);
          if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_01c8ee6c;
          puVar16 = (undefined4 *)(lVar14 + (long)(int)uVar21 * 4 + 0x20);
          uVar38 = FUN_036c0ff0(0x3f400000,*puVar16,0);
          if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_01c8ee6c;
          *puVar16 = uVar38;
          if (*(uint *)(lVar14 + 0x18) <= uVar21 + 1) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar14 + (long)(int)(uVar21 + 1) * 4 + 0x20) = uVar38;
          if (*(uint *)(lVar14 + 0x18) <= uVar21 + 2) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar14 + (long)(int)(uVar21 + 2) * 4 + 0x20) = uVar38;
          if (*(uint *)(lVar14 + 0x18) <= uVar21 + 3) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar14 + (long)(int)(uVar21 + 3) * 4 + 0x20) = uVar38;
          plVar12 = *(long **)(param_4 + 0x38);
          uVar11 = uVar11 - 1;
          uVar10 = uVar10 + 1;
        } while (uVar11 != 0);
        if (plVar12 == (long *)0x0) goto LAB_01c8ee70;
      }
      (**(code **)(*plVar12 + 0x7f8))(plVar12,0xff,*(undefined8 *)(*plVar12 + 0x800));
    }
  }
  else {
    uVar21 = *(uint *)(param_4 + 0x54);
    if (uVar21 == 0xffffffff) goto LAB_01c8eab4;
    if ((uVar10 == 0xffffffff) || (uVar10 != uVar21)) {
      plVar12 = *(long **)(param_4 + 0x38);
      if ((plVar12 == (long *)0x0) ||
         ((plVar12[0x6d] == 0 || (lVar14 = *(long *)(plVar12[0x6d] + 0x40), lVar14 == 0))))
      goto LAB_01c8ee70;
      if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_01c8ee6c;
      lVar14 = lVar14 + (long)(int)uVar21 * 0x18;
      uVar21 = *(uint *)(lVar14 + 0x30);
      uVar11 = (ulong)uVar21;
      if (0 < (int)uVar21) {
        uVar21 = *(uint *)(lVar14 + 0x28);
        do {
          if (((plVar12 == (long *)0x0) || (lVar14 = plVar12[0x6d], lVar14 == 0)) ||
             (lVar17 = *(long *)(lVar14 + 0x38), lVar17 == 0)) goto LAB_01c8ee70;
          if (*(uint *)(lVar17 + 0x18) <= uVar21) goto LAB_01c8ee6c;
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 == 0) goto LAB_01c8ee70;
          lVar17 = lVar17 + (long)(int)uVar21 * 0x178;
          uVar1 = *(uint *)(lVar17 + 0x58);
          if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_01c8ee6c;
          lVar14 = *(long *)(lVar14 + (long)(int)uVar1 * 0x50 + 0x58);
          if (lVar14 == 0) goto LAB_01c8ee70;
          uVar1 = *(uint *)(lVar17 + 0x6c);
          if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_01c8ee6c;
          puVar16 = (undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20);
          uVar39 = FUN_036c0ff0(uVar38,*puVar16,0);
          if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_01c8ee6c;
          *puVar16 = uVar39;
          if (*(uint *)(lVar14 + 0x18) <= uVar1 + 1) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar14 + (long)(int)(uVar1 + 1) * 4 + 0x20) = uVar39;
          if (*(uint *)(lVar14 + 0x18) <= uVar1 + 2) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar14 + (long)(int)(uVar1 + 2) * 4 + 0x20) = uVar39;
          if (*(uint *)(lVar14 + 0x18) <= uVar1 + 3) goto LAB_01c8ee6c;
          *(undefined4 *)(lVar14 + (long)(int)(uVar1 + 3) * 4 + 0x20) = uVar39;
          plVar12 = *(long **)(param_4 + 0x38);
          uVar11 = uVar11 - 1;
          uVar21 = uVar21 + 1;
        } while (uVar11 != 0);
        if (plVar12 == (long *)0x0) goto LAB_01c8ee70;
      }
      (**(code **)(*plVar12 + 0x7f8))(plVar12,0xff,*(undefined8 *)(*plVar12 + 0x800));
      *(undefined4 *)(param_4 + 0x54) = 0xffffffff;
      goto LAB_01c8eab4;
    }
  }
  uVar19 = *(undefined8 *)(param_4 + 0x38);
  uVar30 = FUN_0394fadc(0);
  uVar20 = *(undefined8 *)(param_4 + 0x48);
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = FUN_03707214(uVar30,param_2,param_3,uVar19,uVar20,0);
  if (uVar10 == 0xffffffff) {
    if (*(uint *)(param_4 + 0x58) == 0xffffffff) {
      return;
    }
  }
  else if (uVar10 == *(uint *)(param_4 + 0x58)) {
    return;
  }
  if ((*(long *)(param_4 + 0x28) == 0) ||
     (lVar14 = FUN_0391c2b8(*(long *)(param_4 + 0x28),0), lVar14 == 0)) goto LAB_01c8ee70;
  FUN_0391fb70(lVar14,0,0);
  *(undefined4 *)(param_4 + 0x58) = 0xffffffff;
  if (uVar10 != 0xffffffff) {
    lVar14 = *(long *)(param_4 + 0x38);
    *(uint *)(param_4 + 0x58) = uVar10;
    if (((lVar14 == 0) || (*(long *)(lVar14 + 0x368) == 0)) ||
       (lVar17 = *(long *)(*(long *)(lVar14 + 0x368) + 0x48), lVar17 == 0)) goto LAB_01c8ee70;
    if (*(uint *)(lVar17 + 0x18) <= uVar10) {
LAB_01c8ee6c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar17 = lVar17 + (long)(int)uVar10 * 0x28;
    local_100 = *(undefined8 *)(lVar17 + 0x40);
    uStack_118 = *(undefined8 *)(lVar17 + 0x28);
    uVar32 = *(undefined8 *)(lVar17 + 0x20);
    uStack_108 = *(undefined8 *)(lVar17 + 0x38);
    uStack_110 = *(undefined8 *)(lVar17 + 0x30);
    local_120 = uVar32;
    uVar19 = FUN_036dff78(lVar14,0);
    uVar30 = FUN_0394fadc(0);
    uVar20 = *(undefined8 *)(param_4 + 0x48);
    if (*(int *)(*(long *)StringLiteral_518 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03af9680(uVar30,uVar32,uVar19,uVar20,&local_130,0);
    uVar19 = FUN_036c1508(&local_120,0);
    uVar11 = thunk_FUN_02ee6388(uVar19,*(undefined8 *)StringLiteral_519,0);
    if ((uVar11 & 1) == 0) {
      uVar11 = thunk_FUN_02ee6388(uVar19,*(undefined8 *)StringLiteral_520,0);
      if ((uVar11 & 1) == 0) {
        return;
      }
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_01c8ee70;
      FUN_03928dd4(local_130 & 0xffffffff,local_130._4_4_,local_128,*(long *)(param_4 + 0x28),0);
      if ((*(long *)(param_4 + 0x28) == 0) ||
         (lVar14 = FUN_0391c2b8(*(long *)(param_4 + 0x28),0), lVar14 == 0)) goto LAB_01c8ee70;
      FUN_0391fb70(lVar14,1,0);
      plVar13 = *(long **)(param_4 + 0x30);
      if (plVar13 == (long *)0x0) goto LAB_01c8ee70;
      lVar14 = *plVar13;
      puVar29 = (undefined8 *)StringLiteral_526;
    }
    else {
      if (*(long *)(param_4 + 0x28) == 0) {
LAB_01c8ee70:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03928dd4(local_130 & 0xffffffff,local_130._4_4_,local_128,*(long *)(param_4 + 0x28),0);
      if ((*(long *)(param_4 + 0x28) == 0) ||
         (lVar14 = FUN_0391c2b8(*(long *)(param_4 + 0x28),0), lVar14 == 0)) goto LAB_01c8ee70;
      FUN_0391fb70(lVar14,1,0);
      plVar13 = *(long **)(param_4 + 0x30);
      if (plVar13 == (long *)0x0) goto LAB_01c8ee70;
      lVar14 = *plVar13;
      puVar29 = (undefined8 *)StringLiteral_527;
    }
    (**(code **)(lVar14 + 0x558))(plVar13,*puVar29,*(undefined8 *)(lVar14 + 0x560));
  }
  return;
}


