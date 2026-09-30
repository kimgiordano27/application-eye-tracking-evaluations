/*
FUNCTION_NAME: FUN_036ede68
ENTRY_POINT: 036ede68
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


void FUN_036ede68(float param_1,float param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined *puVar22;
  undefined4 uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  uint *puVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int iVar42;
  float fVar43;
  int iVar44;
  float fVar45;
  int iVar46;
  float fVar47;
  undefined1 local_90 [16];
  
  if ((DAT_03ff762f & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2271);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff762f = 1;
  }
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  auVar7 = ZEXT816(0);
  if ((*(long *)(param_3 + 0x368) == 0) ||
     (lVar32 = *(long *)(*(long *)(param_3 + 0x368) + 0x38), auVar7 = ZEXT816(0), lVar32 == 0))
  goto LAB_036ee9d8;
  auVar9 = ZEXT816(0);
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)(param_3 + 0x494)) goto LAB_036ee9dc;
  lVar32 = lVar32 + (long)(int)*(uint *)(param_3 + 0x494) * 0x178;
  plVar1 = (long *)(param_3 + 0x368);
  *(undefined8 *)(lVar32 + 0x70) = *(undefined8 *)(lVar32 + 0x11c);
  *(undefined4 *)(lVar32 + 0x78) = *(undefined4 *)(lVar32 + 0x124);
  auVar7 = ZEXT816(0);
  if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = ZEXT816(0), lVar32 == 0))
  goto LAB_036ee9d8;
  puVar2 = (uint *)(param_3 + 0x494);
  auVar9 = ZEXT816(0);
  if (*(uint *)(lVar32 + 0x18) <= *puVar2) goto LAB_036ee9dc;
  lVar32 = lVar32 + (long)(int)*puVar2 * 0x178;
  *(undefined8 *)(lVar32 + 0x98) = *(undefined8 *)(lVar32 + 0x110);
  *(undefined4 *)(lVar32 + 0xa0) = *(undefined4 *)(lVar32 + 0x118);
  auVar7 = ZEXT816(0);
  if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = ZEXT816(0), lVar32 == 0))
  goto LAB_036ee9d8;
  auVar9 = ZEXT816(0);
  if (*(uint *)(lVar32 + 0x18) <= *puVar2) goto LAB_036ee9dc;
  lVar32 = lVar32 + (long)(int)*puVar2 * 0x178;
  *(undefined8 *)(lVar32 + 0xc0) = *(undefined8 *)(lVar32 + 0x128);
  *(undefined4 *)(lVar32 + 200) = *(undefined4 *)(lVar32 + 0x130);
  auVar7 = ZEXT816(0);
  if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = ZEXT816(0), lVar32 == 0))
  goto LAB_036ee9d8;
  auVar9 = ZEXT816(0);
  if (*(uint *)(lVar32 + 0x18) <= *puVar2) goto LAB_036ee9dc;
  lVar32 = lVar32 + (long)(int)*puVar2 * 0x178;
  *(undefined8 *)(lVar32 + 0xe8) = *(undefined8 *)(lVar32 + 0x134);
  *(undefined4 *)(lVar32 + 0xf0) = *(undefined4 *)(lVar32 + 0x13c);
  puVar22 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar34 = (uint)param_4;
  uVar24 = (uint)*(byte *)(param_3 + 0x147);
  if (uVar34 >> 0x18 <= uVar24) {
    uVar24 = (uint)(byte)((ulong)param_4 >> 0x18);
  }
  uVar4 = (undefined1)uVar24;
  if ((*(char *)(param_3 + 0x160) == '\0') ||
     ((*(char *)(param_3 + 0x1d4) == '\0' && (1 < *(int *)(param_3 + 0x4f8))))) {
    auVar7 = ZEXT816(0);
    if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = ZEXT816(0), lVar32 == 0))
    goto LAB_036ee9d8;
    auVar9 = ZEXT816(0);
    if (*(uint *)(lVar32 + 0x18) <= *puVar2) goto LAB_036ee9dc;
    lVar32 = lVar32 + (long)(int)*puVar2 * 0x178;
    uVar5 = (undefined1)((ulong)param_4 >> 0x10);
    *(undefined1 *)(lVar32 + 0x96) = uVar5;
    uVar6 = (undefined2)param_4;
    *(undefined2 *)(lVar32 + 0x94) = uVar6;
    *(undefined1 *)(lVar32 + 0x97) = uVar4;
    auVar7 = ZEXT816(0);
    if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = ZEXT816(0), lVar32 == 0))
    goto LAB_036ee9d8;
    auVar9 = ZEXT816(0);
    if (*(uint *)(lVar32 + 0x18) <= *puVar2) goto LAB_036ee9dc;
    lVar32 = lVar32 + (long)(int)*puVar2 * 0x178;
    *(undefined1 *)(lVar32 + 0xbe) = uVar5;
    *(undefined2 *)(lVar32 + 0xbc) = uVar6;
    *(undefined1 *)(lVar32 + 0xbf) = uVar4;
    auVar7 = ZEXT816(0);
    if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = ZEXT816(0), lVar32 == 0))
    goto LAB_036ee9d8;
    auVar9 = ZEXT816(0);
    if (*(uint *)(lVar32 + 0x18) <= *puVar2) goto LAB_036ee9dc;
    lVar32 = lVar32 + (long)(int)*puVar2 * 0x178;
    *(undefined1 *)(lVar32 + 0xe6) = uVar5;
    *(undefined2 *)(lVar32 + 0xe4) = uVar6;
    *(undefined1 *)(lVar32 + 0xe7) = uVar4;
    auVar7 = ZEXT816(0);
    if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = ZEXT816(0), lVar32 == 0))
    goto LAB_036ee9d8;
    auVar9 = ZEXT816(0);
    if (*(uint *)(lVar32 + 0x18) <= *puVar2) goto LAB_036ee9dc;
    lVar32 = lVar32 + (long)(int)*puVar2 * 0x178;
    *(undefined1 *)(lVar32 + 0x10e) = uVar5;
    *(undefined2 *)(lVar32 + 0x10c) = uVar6;
    *(undefined1 *)(lVar32 + 0x10f) = uVar4;
  }
  else {
    uVar36 = *(undefined8 *)(param_3 + 0x1a8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar31 = FUN_0391f968(uVar36,0,0);
    auVar9._8_8_ = local_90._8_8_;
    auVar9._0_8_ = local_90._0_8_;
    auVar8._8_8_ = local_90._8_8_;
    auVar8._0_8_ = local_90._0_8_;
    auVar7._8_8_ = local_90._8_8_;
    auVar7._0_8_ = local_90._0_8_;
    if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = auVar8, lVar32 == 0))
    goto LAB_036ee9d8;
    uVar3 = *puVar2;
    if (*(uint *)(lVar32 + 0x18) <= uVar3) goto LAB_036ee9dc;
    if ((uVar31 & 1) == 0) {
      fVar47 = (float)(uVar34 & 0xff) / 255.0;
      fVar45 = (float)(uVar34 >> 8 & 0xff) / 255.0;
      fVar43 = (float)(uVar34 >> 0x10 & 0xff) / 255.0;
      fVar41 = (float)uVar24 / 255.0;
      uVar23 = FUN_01bd7168(*(float *)(param_3 + 0x188) * fVar47,
                            *(float *)(param_3 + 0x18c) * fVar45,*(float *)(param_3 + 400) * fVar43,
                            *(float *)(param_3 + 0x194) * fVar41,0);
      auVar9._8_8_ = local_90._8_8_;
      auVar9._0_8_ = local_90._0_8_;
      auVar7._8_8_ = local_90._8_8_;
      auVar7._0_8_ = local_90._0_8_;
      *(undefined4 *)(lVar32 + (long)(int)uVar3 * 0x178 + 0x94) = uVar23;
      if ((*(long *)(param_3 + 0x368) == 0) ||
         (lVar32 = *(long *)(*(long *)(param_3 + 0x368) + 0x38), auVar7 = auVar9, lVar32 == 0))
      goto LAB_036ee9d8;
      uVar3 = *puVar2;
      if (*(uint *)(lVar32 + 0x18) <= uVar3) goto LAB_036ee9dc;
      uVar23 = FUN_01bd7168(fVar47 * *(float *)(param_3 + 0x168),
                            fVar45 * *(float *)(param_3 + 0x16c),
                            fVar43 * *(float *)(param_3 + 0x170),
                            fVar41 * *(float *)(param_3 + 0x174),0);
      auVar9._8_8_ = local_90._8_8_;
      auVar9._0_8_ = local_90._0_8_;
      auVar7._8_8_ = local_90._8_8_;
      auVar7._0_8_ = local_90._0_8_;
      *(undefined4 *)(lVar32 + (long)(int)uVar3 * 0x178 + 0xbc) = uVar23;
      if ((*(long *)(param_3 + 0x368) == 0) ||
         (lVar32 = *(long *)(*(long *)(param_3 + 0x368) + 0x38), auVar7 = auVar9, lVar32 == 0))
      goto LAB_036ee9d8;
      uVar3 = *puVar2;
      if (*(uint *)(lVar32 + 0x18) <= uVar3) goto LAB_036ee9dc;
      uVar23 = FUN_01bd7168(fVar47 * *(float *)(param_3 + 0x178),
                            fVar45 * *(float *)(param_3 + 0x17c),
                            fVar43 * *(float *)(param_3 + 0x180),
                            fVar41 * *(float *)(param_3 + 0x184),0);
      auVar9._8_8_ = local_90._8_8_;
      auVar9._0_8_ = local_90._0_8_;
      auVar7._8_8_ = local_90._8_8_;
      auVar7._0_8_ = local_90._0_8_;
      *(undefined4 *)(lVar32 + (long)(int)uVar3 * 0x178 + 0xe4) = uVar23;
      if ((*(long *)(param_3 + 0x368) == 0) ||
         (lVar32 = *(long *)(*(long *)(param_3 + 0x368) + 0x38), auVar7 = auVar9, lVar32 == 0))
      goto LAB_036ee9d8;
      uVar3 = *puVar2;
      if (*(uint *)(lVar32 + 0x18) <= uVar3) goto LAB_036ee9dc;
      fVar37 = *(float *)(param_3 + 0x198);
      fVar38 = *(float *)(param_3 + 0x19c);
      fVar39 = *(float *)(param_3 + 0x1a0);
      fVar40 = *(float *)(param_3 + 0x1a4);
    }
    else {
      lVar33 = *(long *)(param_3 + 0x1a8);
      auVar7 = auVar9;
      if (lVar33 == 0) goto LAB_036ee9d8;
      fVar47 = (float)(uVar34 & 0xff) / 255.0;
      fVar45 = (float)(uVar34 >> 8 & 0xff) / 255.0;
      fVar43 = (float)(uVar34 >> 0x10 & 0xff) / 255.0;
      fVar41 = (float)uVar24 / 255.0;
      uVar23 = FUN_01bd7168(*(float *)(lVar33 + 0x3c) * fVar47,*(float *)(lVar33 + 0x40) * fVar45,
                            *(float *)(lVar33 + 0x44) * fVar43,*(float *)(lVar33 + 0x48) * fVar41,0)
      ;
      auVar9._8_8_ = local_90._8_8_;
      auVar9._0_8_ = local_90._0_8_;
      auVar10._8_8_ = local_90._8_8_;
      auVar10._0_8_ = local_90._0_8_;
      auVar7._8_8_ = local_90._8_8_;
      auVar7._0_8_ = local_90._0_8_;
      *(undefined4 *)(lVar32 + (long)(int)uVar3 * 0x178 + 0x94) = uVar23;
      if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = auVar10, lVar32 == 0))
      goto LAB_036ee9d8;
      uVar3 = *puVar2;
      if (*(uint *)(lVar32 + 0x18) <= uVar3) goto LAB_036ee9dc;
      lVar33 = *(long *)(param_3 + 0x1a8);
      auVar7 = auVar9;
      if (lVar33 == 0) goto LAB_036ee9d8;
      uVar23 = FUN_01bd7168(fVar47 * *(float *)(lVar33 + 0x1c),fVar45 * *(float *)(lVar33 + 0x20),
                            fVar43 * *(float *)(lVar33 + 0x24),fVar41 * *(float *)(lVar33 + 0x28),0)
      ;
      auVar9._8_8_ = local_90._8_8_;
      auVar9._0_8_ = local_90._0_8_;
      auVar11._8_8_ = local_90._8_8_;
      auVar11._0_8_ = local_90._0_8_;
      auVar7._8_8_ = local_90._8_8_;
      auVar7._0_8_ = local_90._0_8_;
      *(undefined4 *)(lVar32 + (long)(int)uVar3 * 0x178 + 0xbc) = uVar23;
      if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = auVar11, lVar32 == 0))
      goto LAB_036ee9d8;
      uVar3 = *puVar2;
      if (*(uint *)(lVar32 + 0x18) <= uVar3) goto LAB_036ee9dc;
      lVar33 = *(long *)(param_3 + 0x1a8);
      auVar7 = auVar9;
      if (lVar33 == 0) goto LAB_036ee9d8;
      uVar23 = FUN_01bd7168(fVar47 * *(float *)(lVar33 + 0x2c),fVar45 * *(float *)(lVar33 + 0x30),
                            fVar43 * *(float *)(lVar33 + 0x34),fVar41 * *(float *)(lVar33 + 0x38),0)
      ;
      auVar9._8_8_ = local_90._8_8_;
      auVar9._0_8_ = local_90._0_8_;
      auVar12._8_8_ = local_90._8_8_;
      auVar12._0_8_ = local_90._0_8_;
      auVar7._8_8_ = local_90._8_8_;
      auVar7._0_8_ = local_90._0_8_;
      *(undefined4 *)(lVar32 + (long)(int)uVar3 * 0x178 + 0xe4) = uVar23;
      if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = auVar12, lVar32 == 0))
      goto LAB_036ee9d8;
      uVar3 = *puVar2;
      if (*(uint *)(lVar32 + 0x18) <= uVar3) goto LAB_036ee9dc;
      lVar33 = *(long *)(param_3 + 0x1a8);
      auVar7 = auVar9;
      if (lVar33 == 0) goto LAB_036ee9d8;
      fVar37 = *(float *)(lVar33 + 0x4c);
      fVar38 = *(float *)(lVar33 + 0x50);
      fVar39 = *(float *)(lVar33 + 0x54);
      fVar40 = *(float *)(lVar33 + 0x58);
    }
    uVar23 = FUN_01bd7168(fVar47 * fVar37,fVar45 * fVar38,fVar43 * fVar39,fVar41 * fVar40,0);
    *(undefined4 *)(lVar32 + (long)(int)uVar3 * 0x178 + 0x10c) = uVar23;
  }
  uVar36 = *(undefined8 *)(param_3 + 0x580);
  if (*(int *)(*(long *)puVar22 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar31 = FUN_0391f968(uVar36,0,0);
  auVar9._8_8_ = local_90._8_8_;
  auVar9._0_8_ = local_90._0_8_;
  auVar14._8_8_ = local_90._8_8_;
  auVar14._0_8_ = local_90._0_8_;
  auVar13._8_8_ = local_90._8_8_;
  auVar13._0_8_ = local_90._0_8_;
  auVar7._8_8_ = local_90._8_8_;
  auVar7._0_8_ = local_90._0_8_;
  if ((uVar31 & 1) != 0) {
    if ((*(long *)(param_3 + 0x368) == 0) ||
       (lVar32 = *(long *)(*(long *)(param_3 + 0x368) + 0x38), auVar7 = auVar13, lVar32 == 0))
    goto LAB_036ee9d8;
    uVar3 = *puVar2;
    if (*(uint *)(lVar32 + 0x18) <= uVar3) goto LAB_036ee9dc;
    if (*(char *)(param_3 + 0x5b0) == '\0') {
      lVar33 = *(long *)(param_3 + 0x580);
      auVar7 = auVar9;
      if (lVar33 == 0) goto LAB_036ee9d8;
      fVar47 = (float)(uVar34 & 0xff) / 255.0;
      fVar45 = (float)(uVar34 >> 8 & 0xff) / 255.0;
      fVar41 = (float)(uVar34 >> 0x10 & 0xff) / 255.0;
      fVar43 = (float)uVar24 / 255.0;
      FUN_036c10cc(*(undefined4 *)(lVar33 + 0x3c),*(undefined4 *)(lVar33 + 0x40),
                   *(undefined4 *)(lVar33 + 0x44),*(undefined4 *)(lVar33 + 0x48),fVar47,fVar45,
                   fVar41,fVar43,0);
      uVar23 = FUN_01bd7168(0);
      auVar9._8_8_ = local_90._8_8_;
      auVar9._0_8_ = local_90._0_8_;
      auVar19._8_8_ = local_90._8_8_;
      auVar19._0_8_ = local_90._0_8_;
      auVar7._8_8_ = local_90._8_8_;
      auVar7._0_8_ = local_90._0_8_;
      *(undefined4 *)(lVar32 + (long)(int)uVar3 * 0x178 + 0x94) = uVar23;
      if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = auVar19, lVar32 == 0))
      goto LAB_036ee9d8;
      uVar24 = *puVar2;
      if (*(uint *)(lVar32 + 0x18) <= uVar24) goto LAB_036ee9dc;
      lVar33 = *(long *)(param_3 + 0x580);
      auVar7 = auVar9;
      if (lVar33 == 0) goto LAB_036ee9d8;
      FUN_036c10cc(*(undefined4 *)(lVar33 + 0x1c),*(undefined4 *)(lVar33 + 0x20),
                   *(undefined4 *)(lVar33 + 0x24),*(undefined4 *)(lVar33 + 0x28),fVar47,fVar45,
                   fVar41,fVar43,0);
      uVar23 = FUN_01bd7168(0);
      auVar9._8_8_ = local_90._8_8_;
      auVar9._0_8_ = local_90._0_8_;
      auVar20._8_8_ = local_90._8_8_;
      auVar20._0_8_ = local_90._0_8_;
      auVar7._8_8_ = local_90._8_8_;
      auVar7._0_8_ = local_90._0_8_;
      *(undefined4 *)(lVar32 + (long)(int)uVar24 * 0x178 + 0xbc) = uVar23;
      if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = auVar20, lVar32 == 0))
      goto LAB_036ee9d8;
      uVar24 = *puVar2;
      if (*(uint *)(lVar32 + 0x18) <= uVar24) goto LAB_036ee9dc;
      lVar33 = *(long *)(param_3 + 0x580);
      auVar7 = auVar9;
      if (lVar33 == 0) goto LAB_036ee9d8;
      FUN_036c10cc(*(undefined4 *)(lVar33 + 0x2c),*(undefined4 *)(lVar33 + 0x30),
                   *(undefined4 *)(lVar33 + 0x34),*(undefined4 *)(lVar33 + 0x38),fVar47,fVar45,
                   fVar41,fVar43,0);
      uVar23 = FUN_01bd7168(0);
      auVar9._8_8_ = local_90._8_8_;
      auVar9._0_8_ = local_90._0_8_;
      auVar21._8_8_ = local_90._8_8_;
      auVar21._0_8_ = local_90._0_8_;
      auVar7._8_8_ = local_90._8_8_;
      auVar7._0_8_ = local_90._0_8_;
      *(undefined4 *)(lVar32 + (long)(int)uVar24 * 0x178 + 0xe4) = uVar23;
      if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = auVar21, lVar32 == 0))
      goto LAB_036ee9d8;
      uVar24 = *puVar2;
      if (*(uint *)(lVar32 + 0x18) <= uVar24) goto LAB_036ee9dc;
      lVar33 = *(long *)(param_3 + 0x580);
      auVar7 = auVar9;
      if (lVar33 == 0) goto LAB_036ee9d8;
      FUN_036c10cc(*(undefined4 *)(lVar33 + 0x4c),*(undefined4 *)(lVar33 + 0x50),
                   *(undefined4 *)(lVar33 + 0x54),*(undefined4 *)(lVar33 + 0x58),fVar47,fVar45,
                   fVar41,fVar43,0);
      uVar23 = FUN_01bd7168(0);
      *(undefined4 *)(lVar32 + (long)(int)uVar24 * 0x178 + 0x10c) = uVar23;
    }
    else {
      puVar35 = (uint *)(lVar32 + (long)(int)uVar3 * 0x178 + 0x94);
      uVar24 = *puVar35;
      lVar32 = *(long *)(param_3 + 0x580);
      auVar7 = auVar14;
      if (lVar32 == 0) goto LAB_036ee9d8;
      uVar24 = FUN_01bd7168(((float)(uVar24 & 0xff) / 255.0) * *(float *)(lVar32 + 0x3c),
                            ((float)(uVar24 >> 8 & 0xff) / 255.0) * *(float *)(lVar32 + 0x40),
                            ((float)(uVar24 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar32 + 0x44),
                            ((float)(uVar24 >> 0x18) / 255.0) * *(float *)(lVar32 + 0x48),0);
      auVar9._8_8_ = local_90._8_8_;
      auVar9._0_8_ = local_90._0_8_;
      auVar15._8_8_ = local_90._8_8_;
      auVar15._0_8_ = local_90._0_8_;
      auVar7._8_8_ = local_90._8_8_;
      auVar7._0_8_ = local_90._0_8_;
      *puVar35 = uVar24;
      if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = auVar15, lVar32 == 0))
      goto LAB_036ee9d8;
      if (*(uint *)(lVar32 + 0x18) <= *puVar2) goto LAB_036ee9dc;
      puVar35 = (uint *)(lVar32 + (long)(int)*puVar2 * 0x178 + 0xbc);
      uVar24 = *puVar35;
      lVar32 = *(long *)(param_3 + 0x580);
      auVar7 = auVar9;
      if (lVar32 == 0) goto LAB_036ee9d8;
      uVar24 = FUN_01bd7168(((float)(uVar24 & 0xff) / 255.0) * *(float *)(lVar32 + 0x1c),
                            ((float)(uVar24 >> 8 & 0xff) / 255.0) * *(float *)(lVar32 + 0x20),
                            ((float)(uVar24 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar32 + 0x24),
                            ((float)(uVar24 >> 0x18) / 255.0) * *(float *)(lVar32 + 0x28),0);
      auVar9._8_8_ = local_90._8_8_;
      auVar9._0_8_ = local_90._0_8_;
      auVar16._8_8_ = local_90._8_8_;
      auVar16._0_8_ = local_90._0_8_;
      auVar7._8_8_ = local_90._8_8_;
      auVar7._0_8_ = local_90._0_8_;
      *puVar35 = uVar24;
      if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = auVar16, lVar32 == 0))
      goto LAB_036ee9d8;
      if (*(uint *)(lVar32 + 0x18) <= *puVar2) goto LAB_036ee9dc;
      puVar35 = (uint *)(lVar32 + (long)(int)*puVar2 * 0x178 + 0xe4);
      uVar24 = *puVar35;
      lVar32 = *(long *)(param_3 + 0x580);
      auVar7 = auVar9;
      if (lVar32 == 0) goto LAB_036ee9d8;
      uVar24 = FUN_01bd7168(((float)(uVar24 & 0xff) / 255.0) * *(float *)(lVar32 + 0x2c),
                            ((float)(uVar24 >> 8 & 0xff) / 255.0) * *(float *)(lVar32 + 0x30),
                            ((float)(uVar24 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar32 + 0x34),
                            ((float)(uVar24 >> 0x18) / 255.0) * *(float *)(lVar32 + 0x38),0);
      auVar9._8_8_ = local_90._8_8_;
      auVar9._0_8_ = local_90._0_8_;
      auVar17._8_8_ = local_90._8_8_;
      auVar17._0_8_ = local_90._0_8_;
      auVar7._8_8_ = local_90._8_8_;
      auVar7._0_8_ = local_90._0_8_;
      *puVar35 = uVar24;
      if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), auVar7 = auVar17, lVar32 == 0))
      goto LAB_036ee9d8;
      if (*(uint *)(lVar32 + 0x18) <= *puVar2) goto LAB_036ee9dc;
      lVar33 = *(long *)(param_3 + 0x580);
      auVar7 = auVar9;
      if (lVar33 == 0) goto LAB_036ee9d8;
      lVar32 = lVar32 + (long)(int)*puVar2 * 0x178;
      uVar24 = *(uint *)(lVar32 + 0x10c);
      uVar23 = FUN_01bd7168(((float)(uVar24 & 0xff) / 255.0) * *(float *)(lVar33 + 0x4c),
                            ((float)(uVar24 >> 8 & 0xff) / 255.0) * *(float *)(lVar33 + 0x50),
                            ((float)(uVar24 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar33 + 0x54),
                            ((float)(uVar24 >> 0x18) / 255.0) * *(float *)(lVar33 + 0x58),0);
      *(undefined4 *)(lVar32 + 0x10c) = uVar23;
    }
  }
  puVar22 = StringLiteral_2271;
  auVar18._8_8_ = local_90._8_8_;
  auVar18._0_8_ = local_90._0_8_;
  auVar7._8_8_ = local_90._8_8_;
  auVar7._0_8_ = local_90._0_8_;
  fVar41 = 0.0;
  if (*(char *)(param_3 + 0x108) != '\0') {
    fVar41 = param_2;
  }
  if ((*(long *)(param_3 + 0x648) != 0) &&
     (lVar32 = *(long *)(*(long *)(param_3 + 0x648) + 0x20), auVar7 = auVar18, lVar32 != 0)) {
    local_90 = FUN_0396b168(lVar32,0);
    if (*(int *)(*(long *)puVar22 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar25 = FUN_0396ad2c(local_90,0);
    auVar7 = local_90;
    if (*(long *)(param_3 + 0x100) != 0) {
      iVar44 = *(int *)(*(long *)(param_3 + 0x100) + 0x108);
      iVar26 = FUN_0396ad34(local_90,0);
      auVar7 = local_90;
      if (*(long *)(param_3 + 0x100) != 0) {
        iVar46 = *(int *)(*(long *)(param_3 + 0x100) + 0x10c);
        iVar27 = FUN_0396ad34(local_90,0);
        iVar28 = FUN_0396ad44(local_90,0);
        auVar7 = local_90;
        if (*(long *)(param_3 + 0x100) != 0) {
          iVar42 = *(int *)(*(long *)(param_3 + 0x100) + 0x10c);
          iVar29 = FUN_0396ad2c(local_90,0);
          iVar30 = FUN_0396ad3c(local_90,0);
          auVar7 = local_90;
          if (((*(long *)(param_3 + 0x100) != 0) && (*plVar1 != 0)) &&
             (lVar32 = *(long *)(*plVar1 + 0x38), lVar32 != 0)) {
            auVar9 = local_90;
            if (*puVar2 < *(uint *)(lVar32 + 0x18)) {
              fVar45 = (((float)iVar25 - param_1) - fVar41) / (float)iVar44;
              fVar43 = (((float)iVar26 - param_1) - fVar41) / (float)iVar46;
              iVar25 = *(int *)(*(long *)(param_3 + 0x100) + 0x108);
              lVar32 = lVar32 + (long)(int)*puVar2 * 0x178;
              *(float *)(lVar32 + 0x7c) = fVar45;
              *(float *)(lVar32 + 0x80) = fVar43;
              if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), lVar32 == 0))
              goto LAB_036ee9d8;
              if (*puVar2 < *(uint *)(lVar32 + 0x18)) {
                lVar32 = lVar32 + (long)(int)*puVar2 * 0x178;
                fVar47 = (fVar41 + (float)iVar27 + param_1 + (float)iVar28) / (float)iVar42;
                *(float *)(lVar32 + 0xa4) = fVar45;
                *(float *)(lVar32 + 0xa8) = fVar47;
                if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), lVar32 == 0))
                goto LAB_036ee9d8;
                if (*puVar2 < *(uint *)(lVar32 + 0x18)) {
                  lVar32 = lVar32 + (long)(int)*puVar2 * 0x178;
                  fVar41 = (fVar41 + (float)iVar29 + param_1 + (float)iVar30) / (float)iVar25;
                  *(float *)(lVar32 + 0xcc) = fVar41;
                  *(float *)(lVar32 + 0xd0) = fVar47;
                  if ((*plVar1 == 0) || (lVar32 = *(long *)(*plVar1 + 0x38), lVar32 == 0))
                  goto LAB_036ee9d8;
                  if (*puVar2 < *(uint *)(lVar32 + 0x18)) {
                    lVar32 = lVar32 + (long)(int)*puVar2 * 0x178;
                    *(float *)(lVar32 + 0xf4) = fVar41;
                    *(float *)(lVar32 + 0xf8) = fVar43;
                    return;
                  }
                }
              }
            }
LAB_036ee9dc:
            local_90 = auVar9;
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
        }
      }
    }
  }
LAB_036ee9d8:
  local_90 = auVar7;
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


