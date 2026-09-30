/*
FUNCTION_NAME: FUN_03990354
ENTRY_POINT: 03990354
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


void FUN_03990354(float param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  uint uVar30;
  uint *puVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 local_b8 [16];
  byte local_a4;
  
  local_a4 = (byte)((ulong)param_3 >> 0x18);
  if ((DAT_03ffc61e & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2271);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03dad2f8);
    DAT_03ffc61e = 1;
  }
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  auVar6 = ZEXT816(0);
  if (param_5 != 0) {
    plVar29 = (long *)(param_5 + 0x30);
    lVar27 = *plVar29;
    auVar6 = ZEXT816(0);
    if (lVar27 != 0) {
      auVar9 = ZEXT816(0);
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(param_2 + 0x324)) {
LAB_03990ebc:
        local_b8 = auVar9;
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar27 = lVar27 + (long)(int)*(uint *)(param_2 + 0x324) * 0x188;
      *(undefined8 *)(lVar27 + 0xa0) = *(undefined8 *)(lVar27 + 0x124);
      *(undefined4 *)(lVar27 + 0xa8) = *(undefined4 *)(lVar27 + 300);
      lVar27 = *plVar29;
      auVar6 = ZEXT816(0);
      if (lVar27 == 0) goto LAB_03990eb8;
      puVar1 = (uint *)(param_2 + 0x324);
      auVar9 = ZEXT816(0);
      if (*(uint *)(lVar27 + 0x18) <= *puVar1) goto LAB_03990ebc;
      lVar27 = lVar27 + (long)(int)*puVar1 * 0x188;
      *(undefined8 *)(lVar27 + 0x78) = *(undefined8 *)(lVar27 + 0x118);
      *(undefined4 *)(lVar27 + 0x80) = *(undefined4 *)(lVar27 + 0x120);
      lVar27 = *plVar29;
      auVar6 = ZEXT816(0);
      if (lVar27 == 0) goto LAB_03990eb8;
      auVar9 = ZEXT816(0);
      if (*(uint *)(lVar27 + 0x18) <= *puVar1) goto LAB_03990ebc;
      lVar27 = lVar27 + (long)(int)*puVar1 * 0x188;
      *(undefined8 *)(lVar27 + 200) = *(undefined8 *)(lVar27 + 0x130);
      *(undefined4 *)(lVar27 + 0xd0) = *(undefined4 *)(lVar27 + 0x138);
      lVar27 = *plVar29;
      auVar6 = ZEXT816(0);
      if (lVar27 == 0) goto LAB_03990eb8;
      auVar9 = ZEXT816(0);
      if (*(uint *)(lVar27 + 0x18) <= *puVar1) goto LAB_03990ebc;
      lVar27 = lVar27 + (long)(int)*puVar1 * 0x188;
      *(undefined8 *)(lVar27 + 0xf0) = *(undefined8 *)(lVar27 + 0x13c);
      *(undefined4 *)(lVar27 + 0xf8) = *(undefined4 *)(lVar27 + 0x144);
      puVar13 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      uVar30 = (uint)param_3;
      uVar14 = (uint)*(byte *)(param_2 + 0x1ab);
      if (uVar30 >> 0x18 <= uVar14) {
        uVar14 = (uint)local_a4;
      }
      bVar3 = (byte)uVar14;
      local_a4 = bVar3;
      auVar6 = ZEXT816(0);
      if (param_4 == 0) goto LAB_03990eb8;
      uVar32 = *(undefined8 *)(param_4 + 0x90);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar26 = FUN_03922f24(uVar32,0,0);
      auVar9._8_8_ = local_b8._8_8_;
      auVar9._0_8_ = local_b8._0_8_;
      auVar8._8_8_ = local_b8._8_8_;
      auVar8._0_8_ = local_b8._0_8_;
      auVar7._8_8_ = local_b8._8_8_;
      auVar7._0_8_ = local_b8._0_8_;
      auVar6._8_8_ = local_b8._8_8_;
      auVar6._0_8_ = local_b8._0_8_;
      if (((uVar26 & 1) == 0) &&
         ((*(char *)(param_4 + 0xa1) != '\0' || (*(int *)(param_2 + 0x1c0) < 2)))) {
        uVar32 = *(undefined8 *)(param_4 + 0x98);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar26 = FUN_0391f968(uVar32,0,0);
        auVar9._8_8_ = local_b8._8_8_;
        auVar9._0_8_ = local_b8._0_8_;
        auVar12._8_8_ = local_b8._8_8_;
        auVar12._0_8_ = local_b8._0_8_;
        auVar6._8_8_ = local_b8._8_8_;
        auVar6._0_8_ = local_b8._0_8_;
        lVar27 = *plVar29;
        if (lVar27 == 0) goto LAB_03990eb8;
        uVar2 = *puVar1;
        if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_03990ebc;
        if ((uVar26 & 1) == 0) {
          lVar28 = *(long *)(param_4 + 0x90);
          auVar6 = auVar9;
          if (lVar28 == 0) goto LAB_03990eb8;
          fVar33 = (float)(uVar30 & 0xff) / 255.0;
          fVar34 = (float)(uVar30 >> 8 & 0xff) / 255.0;
          fVar35 = (float)(uVar30 >> 0x10 & 0xff) / 255.0;
          fVar36 = (float)uVar14 / 255.0;
          uVar15 = FUN_01bd7168(*(float *)(lVar28 + 0x3c) * fVar33,
                                *(float *)(lVar28 + 0x40) * fVar34,
                                *(float *)(lVar28 + 0x44) * fVar35,
                                *(float *)(lVar28 + 0x48) * fVar36,0);
          auVar9._8_8_ = local_b8._8_8_;
          auVar9._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_b8._8_8_;
          auVar6._0_8_ = local_b8._0_8_;
          *(undefined4 *)(lVar27 + (long)(int)uVar2 * 0x188 + 0xc4) = uVar15;
          lVar27 = *plVar29;
          if (lVar27 == 0) goto LAB_03990eb8;
          uVar2 = *puVar1;
          if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_03990ebc;
          lVar28 = *(long *)(param_4 + 0x90);
          auVar6 = auVar9;
          if (lVar28 == 0) goto LAB_03990eb8;
          uVar15 = FUN_01bd7168(fVar33 * *(float *)(lVar28 + 0x1c),
                                fVar34 * *(float *)(lVar28 + 0x20),
                                fVar35 * *(float *)(lVar28 + 0x24),
                                fVar36 * *(float *)(lVar28 + 0x28),0);
          auVar9._8_8_ = local_b8._8_8_;
          auVar9._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_b8._8_8_;
          auVar6._0_8_ = local_b8._0_8_;
          *(undefined4 *)(lVar27 + (long)(int)uVar2 * 0x188 + 0x9c) = uVar15;
          lVar27 = *plVar29;
          if (lVar27 == 0) goto LAB_03990eb8;
          uVar2 = *puVar1;
          if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_03990ebc;
          lVar28 = *(long *)(param_4 + 0x90);
          auVar6 = auVar9;
          if (lVar28 == 0) goto LAB_03990eb8;
          uVar15 = FUN_01bd7168(fVar33 * *(float *)(lVar28 + 0x2c),
                                fVar34 * *(float *)(lVar28 + 0x30),
                                fVar35 * *(float *)(lVar28 + 0x34),
                                fVar36 * *(float *)(lVar28 + 0x38),0);
          auVar9._8_8_ = local_b8._8_8_;
          auVar9._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_b8._8_8_;
          auVar6._0_8_ = local_b8._0_8_;
          *(undefined4 *)(lVar27 + (long)(int)uVar2 * 0x188 + 0xec) = uVar15;
          lVar27 = *plVar29;
          if (lVar27 == 0) goto LAB_03990eb8;
          uVar2 = *puVar1;
          if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_03990ebc;
          lVar28 = *(long *)(param_4 + 0x90);
          auVar6 = auVar9;
        }
        else {
          lVar28 = *(long *)(param_4 + 0x98);
          auVar6 = auVar12;
          if (lVar28 == 0) goto LAB_03990eb8;
          fVar33 = (float)(uVar30 & 0xff) / 255.0;
          fVar34 = (float)(uVar30 >> 8 & 0xff) / 255.0;
          fVar35 = (float)(uVar30 >> 0x10 & 0xff) / 255.0;
          fVar36 = (float)uVar14 / 255.0;
          uVar15 = FUN_01bd7168(*(float *)(lVar28 + 0x3c) * fVar33,
                                *(float *)(lVar28 + 0x40) * fVar34,
                                *(float *)(lVar28 + 0x44) * fVar35,
                                *(float *)(lVar28 + 0x48) * fVar36,0);
          auVar9._8_8_ = local_b8._8_8_;
          auVar9._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_b8._8_8_;
          auVar6._0_8_ = local_b8._0_8_;
          *(undefined4 *)(lVar27 + (long)(int)uVar2 * 0x188 + 0xc4) = uVar15;
          lVar27 = *plVar29;
          if (lVar27 == 0) goto LAB_03990eb8;
          uVar2 = *puVar1;
          if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_03990ebc;
          lVar28 = *(long *)(param_4 + 0x98);
          auVar6 = auVar9;
          if (lVar28 == 0) goto LAB_03990eb8;
          uVar15 = FUN_01bd7168(fVar33 * *(float *)(lVar28 + 0x1c),
                                fVar34 * *(float *)(lVar28 + 0x20),
                                fVar35 * *(float *)(lVar28 + 0x24),
                                fVar36 * *(float *)(lVar28 + 0x28),0);
          auVar9._8_8_ = local_b8._8_8_;
          auVar9._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_b8._8_8_;
          auVar6._0_8_ = local_b8._0_8_;
          *(undefined4 *)(lVar27 + (long)(int)uVar2 * 0x188 + 0x9c) = uVar15;
          lVar27 = *plVar29;
          if (lVar27 == 0) goto LAB_03990eb8;
          uVar2 = *puVar1;
          if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_03990ebc;
          lVar28 = *(long *)(param_4 + 0x98);
          auVar6 = auVar9;
          if (lVar28 == 0) goto LAB_03990eb8;
          uVar15 = FUN_01bd7168(fVar33 * *(float *)(lVar28 + 0x2c),
                                fVar34 * *(float *)(lVar28 + 0x30),
                                fVar35 * *(float *)(lVar28 + 0x34),
                                fVar36 * *(float *)(lVar28 + 0x38),0);
          auVar9._8_8_ = local_b8._8_8_;
          auVar9._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_b8._8_8_;
          auVar6._0_8_ = local_b8._0_8_;
          *(undefined4 *)(lVar27 + (long)(int)uVar2 * 0x188 + 0xec) = uVar15;
          lVar27 = *plVar29;
          if (lVar27 == 0) goto LAB_03990eb8;
          uVar2 = *puVar1;
          if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_03990ebc;
          lVar28 = *(long *)(param_4 + 0x98);
          auVar6 = auVar9;
        }
        if (lVar28 == 0) goto LAB_03990eb8;
        uVar15 = FUN_01bd7168(fVar33 * *(float *)(lVar28 + 0x4c),fVar34 * *(float *)(lVar28 + 0x50),
                              fVar35 * *(float *)(lVar28 + 0x54),fVar36 * *(float *)(lVar28 + 0x58),
                              0);
        *(undefined4 *)(lVar27 + (long)(int)uVar2 * 0x188 + 0x114) = uVar15;
      }
      else {
        lVar27 = *plVar29;
        if (lVar27 == 0) goto LAB_03990eb8;
        if (*(uint *)(lVar27 + 0x18) <= *puVar1) goto LAB_03990ebc;
        lVar27 = lVar27 + (long)(int)*puVar1 * 0x188;
        uVar4 = (undefined1)((ulong)param_3 >> 0x10);
        *(undefined1 *)(lVar27 + 0xc6) = uVar4;
        uVar5 = (undefined2)param_3;
        *(undefined2 *)(lVar27 + 0xc4) = uVar5;
        *(byte *)(lVar27 + 199) = bVar3;
        lVar27 = *plVar29;
        auVar6 = auVar7;
        if (lVar27 == 0) goto LAB_03990eb8;
        if (*(uint *)(lVar27 + 0x18) <= *puVar1) goto LAB_03990ebc;
        lVar27 = lVar27 + (long)(int)*puVar1 * 0x188;
        *(undefined1 *)(lVar27 + 0x9e) = uVar4;
        *(undefined2 *)(lVar27 + 0x9c) = uVar5;
        *(byte *)(lVar27 + 0x9f) = bVar3;
        lVar27 = *plVar29;
        auVar6 = auVar8;
        if (lVar27 == 0) goto LAB_03990eb8;
        if (*(uint *)(lVar27 + 0x18) <= *puVar1) goto LAB_03990ebc;
        lVar27 = lVar27 + (long)(int)*puVar1 * 0x188;
        *(undefined1 *)(lVar27 + 0xee) = uVar4;
        *(undefined2 *)(lVar27 + 0xec) = uVar5;
        *(byte *)(lVar27 + 0xef) = bVar3;
        lVar27 = *plVar29;
        auVar6 = auVar9;
        if (lVar27 == 0) goto LAB_03990eb8;
        if (*(uint *)(lVar27 + 0x18) <= *puVar1) goto LAB_03990ebc;
        lVar27 = lVar27 + (long)(int)*puVar1 * 0x188;
        *(undefined1 *)(lVar27 + 0x116) = uVar4;
        *(undefined2 *)(lVar27 + 0x114) = uVar5;
        *(byte *)(lVar27 + 0x117) = bVar3;
      }
      uVar32 = *(undefined8 *)(param_2 + 0x288);
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar26 = FUN_0391f968(uVar32,0,0);
      auVar9._8_8_ = local_b8._8_8_;
      auVar9._0_8_ = local_b8._0_8_;
      auVar10._8_8_ = local_b8._8_8_;
      auVar10._0_8_ = local_b8._0_8_;
      auVar6._8_8_ = local_b8._8_8_;
      auVar6._0_8_ = local_b8._0_8_;
      if ((uVar26 & 1) != 0) {
        lVar27 = *plVar29;
        if (lVar27 == 0) goto LAB_03990eb8;
        uVar2 = *(uint *)(param_2 + 0x324);
        if (*(uint *)(lVar27 + 0x18) <= uVar2) goto LAB_03990ebc;
        if (*(char *)(param_2 + 0x2b8) == '\0') {
          lVar28 = *(long *)(param_2 + 0x288);
          auVar6 = auVar9;
          if (lVar28 == 0) goto LAB_03990eb8;
          uVar37 = *(undefined4 *)(lVar28 + 0x3c);
          uVar38 = *(undefined4 *)(lVar28 + 0x40);
          uVar39 = *(undefined4 *)(lVar28 + 0x44);
          uVar15 = *(undefined4 *)(lVar28 + 0x48);
          fVar34 = (float)(uVar30 & 0xff) / 255.0;
          fVar33 = (float)(uVar30 >> 8 & 0xff) / 255.0;
          fVar35 = (float)(uVar30 >> 0x10 & 0xff) / 255.0;
          fVar36 = (float)uVar14 / 255.0;
          if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_0399a414(uVar37,uVar38,uVar39,uVar15,fVar34,fVar33,fVar35,fVar36,0);
          uVar15 = FUN_01bd7168(0);
          auVar9._8_8_ = local_b8._8_8_;
          auVar9._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_b8._8_8_;
          auVar6._0_8_ = local_b8._0_8_;
          *(undefined4 *)(lVar27 + (long)(int)uVar2 * 0x188 + 0xc4) = uVar15;
          lVar27 = *plVar29;
          if (lVar27 == 0) goto LAB_03990eb8;
          uVar14 = *puVar1;
          if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_03990ebc;
          lVar28 = *(long *)(param_2 + 0x288);
          auVar6 = auVar9;
          if (lVar28 == 0) goto LAB_03990eb8;
          FUN_0399a414(*(undefined4 *)(lVar28 + 0x1c),*(undefined4 *)(lVar28 + 0x20),
                       *(undefined4 *)(lVar28 + 0x24),*(undefined4 *)(lVar28 + 0x28),fVar34,fVar33,
                       fVar35,fVar36,0);
          uVar15 = FUN_01bd7168(0);
          auVar9._8_8_ = local_b8._8_8_;
          auVar9._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_b8._8_8_;
          auVar6._0_8_ = local_b8._0_8_;
          *(undefined4 *)(lVar27 + (long)(int)uVar14 * 0x188 + 0x9c) = uVar15;
          lVar27 = *plVar29;
          if (lVar27 == 0) goto LAB_03990eb8;
          uVar14 = *puVar1;
          if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_03990ebc;
          lVar28 = *(long *)(param_2 + 0x288);
          auVar6 = auVar9;
          if (lVar28 == 0) goto LAB_03990eb8;
          FUN_0399a414(*(undefined4 *)(lVar28 + 0x2c),*(undefined4 *)(lVar28 + 0x30),
                       *(undefined4 *)(lVar28 + 0x34),*(undefined4 *)(lVar28 + 0x38),fVar34,fVar33,
                       fVar35,fVar36,0);
          uVar15 = FUN_01bd7168(0);
          auVar9._8_8_ = local_b8._8_8_;
          auVar9._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_b8._8_8_;
          auVar6._0_8_ = local_b8._0_8_;
          *(undefined4 *)(lVar27 + (long)(int)uVar14 * 0x188 + 0xec) = uVar15;
          lVar27 = *plVar29;
          if (lVar27 == 0) goto LAB_03990eb8;
          uVar14 = *puVar1;
          if (*(uint *)(lVar27 + 0x18) <= uVar14) goto LAB_03990ebc;
          lVar28 = *(long *)(param_2 + 0x288);
          auVar6 = auVar9;
          if (lVar28 == 0) goto LAB_03990eb8;
          FUN_0399a414(*(undefined4 *)(lVar28 + 0x4c),*(undefined4 *)(lVar28 + 0x50),
                       *(undefined4 *)(lVar28 + 0x54),*(undefined4 *)(lVar28 + 0x58),fVar34,fVar33,
                       fVar35,fVar36,0);
          uVar15 = FUN_01bd7168(0);
          *(undefined4 *)(lVar27 + (long)(int)uVar14 * 0x188 + 0x114) = uVar15;
        }
        else {
          puVar31 = (uint *)(lVar27 + (long)(int)uVar2 * 0x188 + 0xc4);
          uVar14 = *puVar31;
          lVar27 = *(long *)(param_2 + 0x288);
          auVar6 = auVar10;
          if (lVar27 == 0) goto LAB_03990eb8;
          uVar14 = FUN_01bd7168(((float)(uVar14 & 0xff) / 255.0) * *(float *)(lVar27 + 0x3c),
                                ((float)(uVar14 >> 8 & 0xff) / 255.0) * *(float *)(lVar27 + 0x40),
                                ((float)(uVar14 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar27 + 0x44)
                                ,((float)(uVar14 >> 0x18) / 255.0) * *(float *)(lVar27 + 0x48),0);
          auVar9._8_8_ = local_b8._8_8_;
          auVar9._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_b8._8_8_;
          auVar6._0_8_ = local_b8._0_8_;
          *puVar31 = uVar14;
          lVar27 = *plVar29;
          if (lVar27 == 0) goto LAB_03990eb8;
          if (*(uint *)(lVar27 + 0x18) <= *puVar1) goto LAB_03990ebc;
          puVar31 = (uint *)(lVar27 + (long)(int)*puVar1 * 0x188 + 0x9c);
          uVar14 = *puVar31;
          lVar27 = *(long *)(param_2 + 0x288);
          auVar6 = auVar9;
          if (lVar27 == 0) goto LAB_03990eb8;
          uVar14 = FUN_01bd7168(((float)(uVar14 & 0xff) / 255.0) * *(float *)(lVar27 + 0x1c),
                                ((float)(uVar14 >> 8 & 0xff) / 255.0) * *(float *)(lVar27 + 0x20),
                                ((float)(uVar14 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar27 + 0x24)
                                ,((float)(uVar14 >> 0x18) / 255.0) * *(float *)(lVar27 + 0x28),0);
          auVar9._8_8_ = local_b8._8_8_;
          auVar9._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_b8._8_8_;
          auVar6._0_8_ = local_b8._0_8_;
          *puVar31 = uVar14;
          lVar27 = *plVar29;
          if (lVar27 == 0) goto LAB_03990eb8;
          if (*(uint *)(lVar27 + 0x18) <= *puVar1) goto LAB_03990ebc;
          puVar31 = (uint *)(lVar27 + (long)(int)*puVar1 * 0x188 + 0xec);
          uVar14 = *puVar31;
          lVar27 = *(long *)(param_2 + 0x288);
          auVar6 = auVar9;
          if (lVar27 == 0) goto LAB_03990eb8;
          uVar14 = FUN_01bd7168(((float)(uVar14 & 0xff) / 255.0) * *(float *)(lVar27 + 0x2c),
                                ((float)(uVar14 >> 8 & 0xff) / 255.0) * *(float *)(lVar27 + 0x30),
                                ((float)(uVar14 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar27 + 0x34)
                                ,((float)(uVar14 >> 0x18) / 255.0) * *(float *)(lVar27 + 0x38),0);
          auVar9._8_8_ = local_b8._8_8_;
          auVar9._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_b8._8_8_;
          auVar6._0_8_ = local_b8._0_8_;
          *puVar31 = uVar14;
          lVar27 = *plVar29;
          if (lVar27 == 0) goto LAB_03990eb8;
          if (*(uint *)(lVar27 + 0x18) <= *puVar1) goto LAB_03990ebc;
          lVar28 = *(long *)(param_2 + 0x288);
          auVar6 = auVar9;
          if (lVar28 == 0) goto LAB_03990eb8;
          lVar27 = lVar27 + (long)(int)*puVar1 * 0x188;
          uVar14 = *(uint *)(lVar27 + 0x114);
          uVar15 = FUN_01bd7168(((float)(uVar14 & 0xff) / 255.0) * *(float *)(lVar28 + 0x4c),
                                ((float)(uVar14 >> 8 & 0xff) / 255.0) * *(float *)(lVar28 + 0x50),
                                ((float)(uVar14 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar28 + 0x54)
                                ,((float)(uVar14 >> 0x18) / 255.0) * *(float *)(lVar28 + 0x58),0);
          *(undefined4 *)(lVar27 + 0x114) = uVar15;
        }
      }
      puVar13 = StringLiteral_2271;
      auVar9._8_8_ = local_b8._8_8_;
      auVar9._0_8_ = local_b8._0_8_;
      auVar11._8_8_ = local_b8._8_8_;
      auVar11._0_8_ = local_b8._0_8_;
      auVar6._8_8_ = local_b8._8_8_;
      auVar6._0_8_ = local_b8._0_8_;
      lVar27 = *plVar29;
      if (lVar27 != 0) {
        if (*(uint *)(lVar27 + 0x18) <= *puVar1) goto LAB_03990ebc;
        lVar27 = *(long *)(lVar27 + (long)(int)*puVar1 * 0x188 + 0x38);
        if ((lVar27 != 0) ||
           ((auVar6 = auVar11, *(long *)(param_2 + 0x1588) != 0 &&
            (lVar27 = *(long *)(*(long *)(param_2 + 0x1588) + 0x20), auVar6 = auVar9, lVar27 != 0)))
           ) {
          local_b8 = FUN_0396b168(lVar27,0);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          iVar16 = FUN_0396ad2c(local_b8,0);
          auVar6 = local_b8;
          if (*(long *)(param_2 + 0x68) != 0) {
            iVar17 = FUN_0396de84(*(long *)(param_2 + 0x68),0);
            iVar18 = FUN_0396ad34(local_b8,0);
            auVar6 = local_b8;
            if (*(long *)(param_2 + 0x68) != 0) {
              iVar19 = FUN_0396de94(*(long *)(param_2 + 0x68),0);
              iVar20 = FUN_0396ad34(local_b8,0);
              iVar21 = FUN_0396ad44(local_b8,0);
              auVar6 = local_b8;
              if (*(long *)(param_2 + 0x68) != 0) {
                iVar22 = FUN_0396de94(*(long *)(param_2 + 0x68),0);
                iVar23 = FUN_0396ad2c(local_b8,0);
                iVar24 = FUN_0396ad3c(local_b8,0);
                auVar6 = local_b8;
                if (*(long *)(param_2 + 0x68) != 0) {
                  iVar25 = FUN_0396de84(*(long *)(param_2 + 0x68),0);
                  lVar27 = *plVar29;
                  auVar6 = local_b8;
                  if (lVar27 != 0) {
                    auVar9 = local_b8;
                    if (*puVar1 < *(uint *)(lVar27 + 0x18)) {
                      lVar27 = lVar27 + (long)(int)*puVar1 * 0x188;
                      fVar34 = ((float)iVar16 - param_1) / (float)iVar17;
                      fVar33 = ((float)iVar18 - param_1) / (float)iVar19;
                      *(float *)(lVar27 + 0xac) = fVar34;
                      *(float *)(lVar27 + 0xb0) = fVar33;
                      *(undefined4 *)(lVar27 + 0xb4) = 0;
                      *(undefined4 *)(lVar27 + 0xb8) = 0;
                      lVar27 = *plVar29;
                      if (lVar27 == 0) goto LAB_03990eb8;
                      if (*puVar1 < *(uint *)(lVar27 + 0x18)) {
                        lVar27 = lVar27 + (long)(int)*puVar1 * 0x188;
                        fVar35 = ((float)iVar20 + param_1 + 0.0 + (float)iVar21) / (float)iVar22;
                        *(float *)(lVar27 + 0x84) = fVar34;
                        *(float *)(lVar27 + 0x88) = fVar35;
                        *(undefined4 *)(lVar27 + 0x8c) = 0;
                        *(undefined4 *)(lVar27 + 0x90) = 0;
                        lVar27 = *plVar29;
                        if (lVar27 == 0) goto LAB_03990eb8;
                        if (*puVar1 < *(uint *)(lVar27 + 0x18)) {
                          lVar27 = lVar27 + (long)(int)*puVar1 * 0x188;
                          fVar34 = ((float)iVar23 + param_1 + 0.0 + (float)iVar24) / (float)iVar25;
                          *(float *)(lVar27 + 0xd4) = fVar34;
                          *(float *)(lVar27 + 0xd8) = fVar35;
                          *(undefined4 *)(lVar27 + 0xdc) = 0;
                          *(undefined4 *)(lVar27 + 0xe0) = 0;
                          lVar27 = *plVar29;
                          if (lVar27 == 0) goto LAB_03990eb8;
                          if (*puVar1 < *(uint *)(lVar27 + 0x18)) {
                            lVar27 = lVar27 + (long)(int)*puVar1 * 0x188;
                            *(float *)(lVar27 + 0xfc) = fVar34;
                            *(float *)(lVar27 + 0x100) = fVar33;
                            *(undefined4 *)(lVar27 + 0x108) = 0;
                            *(undefined4 *)(lVar27 + 0x104) = 0;
                            return;
                          }
                        }
                      }
                    }
                    goto LAB_03990ebc;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03990eb8:
  local_b8 = auVar6;
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


