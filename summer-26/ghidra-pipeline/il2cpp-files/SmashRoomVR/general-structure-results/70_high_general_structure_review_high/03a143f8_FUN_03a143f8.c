/*
FUNCTION_NAME: FUN_03a143f8
ENTRY_POINT: 03a143f8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void FUN_03a143f8(undefined1 param_1 [16],undefined4 param_2,float param_3,float param_4,
                 long param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  void *__src;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar29;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar30;
  undefined1 auVar28 [16];
  float fVar31;
  undefined8 uVar32;
  float fVar34;
  undefined8 uVar33;
  undefined4 uVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auStack_ae0 [272];
  undefined1 auStack_9d0 [272];
  undefined1 auStack_8c0 [272];
  undefined1 local_7b0 [16];
  undefined4 local_7a0;
  undefined1 local_790 [16];
  undefined4 local_780;
  double local_778;
  undefined8 uStack_770;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined8 uStack_760;
  undefined1 auStack_668 [272];
  char local_558 [4];
  char local_554 [4];
  undefined8 local_550;
  undefined8 local_548;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined1 local_510 [12];
  undefined1 local_504 [12];
  undefined8 local_4f8;
  undefined4 local_4e0;
  long *local_4d8;
  long local_4c8;
  undefined8 local_4a4;
  undefined8 uStack_49c;
  undefined8 local_494;
  undefined8 uStack_48c;
  int local_474;
  int local_470;
  int local_46c;
  int local_468;
  float local_464;
  undefined8 local_450;
  undefined4 local_440;
  undefined4 local_43c;
  float local_438;
  float local_434;
  undefined1 auStack_430 [16];
  undefined4 local_420;
  undefined4 local_41c;
  float local_418;
  float local_414;
  undefined8 local_3a4;
  undefined8 uStack_39c;
  undefined8 local_340;
  undefined1 auStack_330 [172];
  undefined1 auStack_284 [8];
  undefined1 auStack_27c [8];
  undefined1 auStack_274 [8];
  undefined1 auStack_26c [76];
  double local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [172];
  undefined1 local_154 [8];
  undefined1 auStack_14c [8];
  undefined8 local_144;
  undefined8 auStack_13c [9];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  if ((DAT_03ffce96 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_3192);
    thunk_FUN_01ad9084(StringLiteral_2634);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03daf4c0);
    DAT_03ffce96 = 1;
  }
  local_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  memset(auStack_200,0,0x110);
  uStack_208 = 0;
  local_210 = 0;
  uStack_218 = 0;
  local_220 = 0.0;
  memset(auStack_330,0,0x110);
  memset(&local_440,0,0x110);
  memset(&local_550,0,0x110);
  local_554[0] = '\0';
  local_558[0] = '\0';
  if (*(long *)(param_5 + 0x110) == 0) goto LAB_03a15524;
  FUN_03ac10a4(*(long *)(param_5 + 0x110),0);
  fVar22 = DAT_00b550f0;
  if (param_3 <= DAT_00b550f0) {
    return;
  }
  plVar1 = (long *)(param_5 + 0x110);
  if (*plVar1 == 0) goto LAB_03a15524;
  FUN_03ac10a4(*plVar1,0);
  if (param_4 <= fVar22) {
    return;
  }
  if (*plVar1 == 0) goto LAB_03a15524;
  __src = (void *)FUN_03ab57b0(*plVar1,0);
  memmove(&local_e0,__src,0x58);
  FUN_03a9dafc(&local_e0,0);
  if (fVar22 < param_4) {
    memset(auStack_430,0,0x100);
    if (*plVar1 == 0) goto LAB_03a15524;
    local_440 = FUN_03ac22f8(*plVar1,0);
    local_43c = param_2;
    local_438 = param_3;
    local_434 = param_4;
    local_420 = FUN_03a9dafc(&local_e0,0);
    local_41c = param_2;
    local_418 = param_3;
    local_414 = param_4;
    if (*plVar1 == 0) goto LAB_03a15524;
    local_340 = FUN_03a981e0(*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(*plVar1 + 0x180),0);
    if (*(long *)(param_5 + 0x110) == 0) goto LAB_03a15524;
    plVar12 = (long *)FUN_03ac0ca0(*(long *)(param_5 + 0x110),0);
    if (plVar12 == (long *)0x0) goto LAB_03a15524;
    lVar18 = *plVar12;
    uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_3192) {
          puVar13 = (undefined8 *)(lVar18 + (long)(*piVar21 + 2) * 0x10 + 0x138);
          goto LAB_03a1462c;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)StringLiteral_3192,2);
LAB_03a1462c:
    iVar6 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    puVar2 = PTR_DAT_03daf4c0;
    if (iVar6 == 1) {
      lVar18 = *(long *)PTR_DAT_03daf4c0;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar18 = *(long *)puVar2;
      }
      auVar26 = *(undefined1 (*) [16])(*(long *)(lVar18 + 0xb8) + 0x18);
    }
    else {
      auVar26 = NEON_fmov(0x3f800000,4);
    }
    uStack_39c = auVar26._8_8_;
    local_3a4 = auVar26._0_8_;
    memcpy(auStack_330,&local_440,0x110);
    FUN_03a984c4(*(undefined8 *)(param_5 + 0x110),auStack_284,auStack_26c,auStack_27c,auStack_274,0)
    ;
    FUN_03a98760(*(undefined8 *)(param_5 + 0x110),auStack_330,0);
    memcpy(auStack_668,auStack_330,0x110);
    FUN_03a13874(param_5,auStack_668);
  }
  iVar6 = FUN_03a9e6c0(&local_e0,0);
  iVar7 = FUN_03a9e7b0(&local_e0,0);
  iVar8 = FUN_03a9e710(&local_e0,0);
  iVar9 = FUN_03a9e670(&local_e0,0);
  uVar20 = (ulong)(uint)(float)iVar8;
  uVar16 = (ulong)(uint)(float)iVar9;
  local_f0 = CONCAT44((float)iVar7,(float)iVar6);
  local_e8 = CONCAT44((float)iVar9,(float)iVar8);
  memset(auStack_200,0,0x110);
  FUN_03a984c4(*plVar1,local_154,auStack_13c,auStack_14c,&local_144,0);
  FUN_03a9db50(&local_778,&local_e0,0);
  uVar33 = CONCAT44(uStack_764,local_768);
  uStack_218 = uStack_770;
  local_220 = local_778;
  uStack_208 = uStack_760;
  local_210 = uVar33;
  uVar14 = FUN_03ab6afc(&local_220,0);
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar15 = FUN_0391f968(uVar14,0,0);
  if ((uVar15 & 1) == 0) {
    uVar14 = FUN_03ab6bc4(&local_220,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    uVar15 = FUN_0391f968(uVar14,0,0);
    if ((uVar15 & 1) == 0) {
      uVar14 = FUN_03ab57b8(&local_220,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar2);
      }
      uVar15 = FUN_0391f968(uVar14,0,0);
      if ((uVar15 & 1) == 0) {
        uVar14 = FUN_03ab6c90(&local_220,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar15 = FUN_0391f968(uVar14,0,0);
        if ((uVar15 & 1) == 0) {
          return;
        }
      }
    }
  }
  memset(&local_550,0,0x110);
  if (*plVar1 == 0) goto LAB_03a15524;
  plVar12 = (long *)FUN_03ab5724(*plVar1,0);
  if (plVar12 == (long *)0x0) goto LAB_03a15524;
  lVar18 = *plVar12;
  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar15 != 0) {
    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_2634) {
        puVar13 = (undefined8 *)(lVar18 + (long)(*piVar21 + 0x28) * 0x10 + 0x138);
        goto LAB_03a148e4;
      }
      uVar15 = uVar15 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar15 != 0);
  }
  puVar13 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)StringLiteral_2634,0x28);
LAB_03a148e4:
  fVar22 = (float)(*(code *)*puVar13)(plVar12,puVar13[1]);
  uVar14 = FUN_03ab6afc(&local_220,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar15 = FUN_0391f968(uVar14,0,0);
  if ((uVar15 & 1) != 0) {
    if (*plVar1 == 0) goto LAB_03a15524;
    auVar26 = FUN_03ac22f8(*plVar1,0);
    uVar32 = auVar26._8_8_;
    uVar24 = auVar26._0_8_;
    uVar14 = FUN_03ab6afc(&local_220,0);
    if (*plVar1 == 0) goto LAB_03a15524;
    plVar12 = (long *)FUN_03ac0ca0(*plVar1,0);
    if (plVar12 == (long *)0x0) goto LAB_03a15524;
    lVar19 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
    lVar18 = *(long *)StringLiteral_3192;
    if (uVar15 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar18) goto LAB_03a14be8;
        uVar15 = uVar15 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar15 != 0);
    }
LAB_03a14bd8:
    puVar13 = (undefined8 *)FUN_01ae9f78(plVar12,lVar18,2);
    goto LAB_03a14bf8;
  }
  uVar14 = FUN_03ab6bc4(&local_220,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar15 = FUN_0391f968(uVar14,0,0);
  if ((uVar15 & 1) == 0) {
    uVar14 = FUN_03ab6c90(&local_220,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    uVar15 = FUN_0391f968(uVar14,0,0);
    if ((uVar15 & 1) != 0) {
      if (*plVar1 == 0) goto LAB_03a15524;
      auVar26 = FUN_03ac22f8(*plVar1,0);
      uVar32 = auVar26._8_8_;
      uVar24 = auVar26._0_8_;
      uVar14 = FUN_03ab6c90(&local_220,0);
      if (*plVar1 == 0) goto LAB_03a15524;
      plVar12 = (long *)FUN_03ac0ca0(*plVar1,0);
      if (plVar12 == (long *)0x0) goto LAB_03a15524;
      lVar19 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
      lVar18 = *(long *)StringLiteral_3192;
      if (uVar15 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar18) goto LAB_03a14be8;
          uVar15 = uVar15 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar15 != 0);
      }
      goto LAB_03a14bd8;
    }
    uVar14 = FUN_03ab57b8(&local_220,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    uVar15 = FUN_0391f968(uVar14,0,0);
    if ((uVar15 & 1) != 0) {
      auVar26 = FUN_03a9dbb0(&local_e0,0);
      auVar37 = FUN_03a9dc08(&local_e0,0);
      uVar14 = FUN_03a9dc60(&local_e0,0);
      FUN_03a9dcb0(&local_778,&local_e0,0);
      local_7a0 = local_768;
      iVar6 = FUN_039bba08(auVar26._0_8_,auVar26._8_8_ & 0xffffffff,auVar37._0_8_,
                           auVar37._8_8_ & 0xffffffff,uVar14,local_7b0,local_558,0);
      cVar4 = local_558[0];
      if (*plVar1 == 0) goto LAB_03a15524;
      auVar26 = FUN_03ac22f8(*plVar1,0);
      uVar24 = auVar26._8_8_;
      auVar37._0_8_ = auVar26._0_8_;
      uVar14 = FUN_03ab57b8(&local_220,0);
      if (cVar4 == '\0' || iVar6 == 1) {
        iVar6 = 0;
      }
      if (*plVar1 == 0) goto LAB_03a15524;
      plVar12 = (long *)FUN_03ac0ca0(*plVar1,0);
      if (plVar12 == (long *)0x0) goto LAB_03a15524;
      lVar18 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar15 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_3192) {
            puVar13 = (undefined8 *)(lVar18 + (long)(*piVar21 + 2) * 0x10 + 0x138);
            goto LAB_03a154b8;
          }
          uVar15 = uVar15 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)StringLiteral_3192,2);
LAB_03a154b8:
      uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      auVar37._8_8_ = uVar24;
      FUN_03a99d54(&local_778,auVar37,uVar33,uVar20,uVar16,0,0,0x3f800000,0x3f800000,uVar14,iVar6,
                   uVar10,0);
      memcpy(&local_550,&local_778,0x110);
      if (local_4c8 == 0) goto LAB_03a15524;
      local_548 = *(undefined8 *)(local_4c8 + 0x40);
      local_550 = 0;
    }
  }
  else {
    auVar26 = FUN_03a9dbb0(&local_e0,0);
    auVar37 = FUN_03a9dc08(&local_e0,0);
    uVar14 = FUN_03a9dc60(&local_e0,0);
    FUN_03a9dcb0(&local_778,&local_e0,0);
    local_780 = local_768;
    iVar6 = FUN_039bba08(auVar26._0_8_,auVar26._8_8_ & 0xffffffff,auVar37._0_8_,
                         auVar37._8_8_ & 0xffffffff,uVar14,local_790,local_554,0);
    bVar5 = local_554[0] == '\0';
    if (*plVar1 == 0) goto LAB_03a15524;
    auVar26 = FUN_03ac22f8(*plVar1,0);
    uVar24 = auVar26._8_8_;
    auVar27._0_8_ = auVar26._0_8_;
    uVar14 = FUN_03ab6bc4(&local_220,0);
    iVar7 = 0;
    if (iVar6 != 1 && !bVar5) {
      iVar7 = iVar6;
    }
    if (*plVar1 == 0) goto LAB_03a15524;
    plVar12 = (long *)FUN_03ac0ca0(*plVar1,0);
    if (plVar12 == (long *)0x0) goto LAB_03a15524;
    lVar18 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_3192) {
          puVar13 = (undefined8 *)(lVar18 + (long)(*piVar21 + 2) * 0x10 + 0x138);
          goto LAB_03a14e00;
        }
        uVar15 = uVar15 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)StringLiteral_3192,2);
LAB_03a14e00:
    uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    uVar11 = FUN_03a99ed4(auStack_200,0);
    auVar27._8_8_ = uVar24;
    FUN_03a99508(&local_778,auVar27,uVar33,uVar20,uVar16,0,0,0x3f800000,0x3f800000,uVar14,iVar7,
                 uVar10,uVar11 & 1,&local_f0,iVar6 == 1 || bVar5,0);
    uVar35 = (undefined4)uVar16;
    uVar10 = (undefined4)uVar20;
    memcpy(&local_550,&local_778,0x110);
    plVar12 = local_4d8;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar20 = FUN_0391f968(plVar12,0,0);
    if ((uVar20 & 1) != 0) {
      lVar18 = FUN_03ab6bc4(&local_220,0);
      if (lVar18 == 0) goto LAB_03a15524;
      FUN_0392b080(lVar18,0);
      lVar18 = FUN_03ab6bc4(&local_220,0);
      if (lVar18 == 0) goto LAB_03a15524;
      FUN_0392b080(lVar18,0);
      local_550 = 0;
      local_548 = CONCAT44(uVar35,uVar10);
    }
    lVar18 = *plVar1;
    uVar33 = FUN_03ab6bc4(&local_220,0);
    if (*(int *)(*(long *)PTR_DAT_03daf4c0 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)PTR_DAT_03daf4c0);
    }
    fVar23 = (float)FUN_03aeeef8(lVar18,uVar33,0);
    fVar22 = fVar22 * fVar23;
  }
LAB_03a14f24:
  uVar14 = local_e8;
  uVar33 = local_f0;
  uStack_49c = local_154._8_8_;
  local_4a4 = local_154;
  uStack_48c = auStack_13c[0];
  local_494 = local_144;
  if (DAT_03fed318 == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_80__);
    DAT_03fed318 = '\x01';
  }
  uVar24 = **(undefined8 **)
             (*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_80__ + 0xb8);
  uVar32 = (*(undefined8 **)
             (*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_80__ + 0xb8))
           [1];
  uVar20 = (ulong)(uint)DAT_00b55084;
  fVar23 = (float)uVar33 - (float)uVar24;
  fVar29 = (float)((ulong)uVar33 >> 0x20) - (float)((ulong)uVar24 >> 0x20);
  fVar29 = fVar29 * fVar29;
  fVar31 = (float)uVar14 - (float)uVar32;
  fVar34 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar32 >> 0x20);
  uVar14 = CONCAT44(fVar29,fVar29);
  fVar34 = fVar34 * fVar34;
  uVar33 = CONCAT44(fVar34,fVar34);
  if (DAT_00b55084 <= fVar34 + fVar31 * fVar31 + fVar23 * fVar23 + fVar29) {
    fVar23 = (float)local_f0;
    if (DAT_03fed2db == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed2db = '\x01';
    }
    puVar3 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    dVar36 = (double)fVar23;
    dVar25 = modf(dVar36,&local_778);
    if (0.0 <= fVar23) {
      if (dVar25 == 0.5) {
        dVar25 = 1.0;
        goto LAB_03a1502c;
      }
      dVar36 = (double)(long)(dVar36 + 0.5);
    }
    else if (dVar25 == -0.5) {
      dVar25 = -1.0;
LAB_03a1502c:
      dVar36 = local_778;
      if (((long)local_778 & 1U) != 0) {
        dVar36 = local_778 + dVar25;
      }
    }
    else {
      dVar36 = (double)(long)(dVar36 + -0.5);
    }
    fVar23 = local_f0._4_4_;
    local_474 = -0x80000000;
    if (dVar36 != INFINITY) {
      local_474 = (int)dVar36;
    }
    if (DAT_03fed2db == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed2db = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    dVar36 = (double)fVar23;
    dVar25 = modf(dVar36,&local_778);
    if (0.0 <= fVar23) {
      if (dVar25 == 0.5) {
        dVar25 = 1.0;
        goto UnityEngine_UI_ScrollRect__OnScroll;
      }
      dVar36 = (double)(long)(dVar36 + 0.5);
    }
    else if (dVar25 == -0.5) {
      dVar25 = -1.0;
UnityEngine_UI_ScrollRect__OnScroll:
      dVar36 = local_778;
      if (((long)local_778 & 1U) != 0) {
        dVar36 = local_778 + dVar25;
      }
    }
    else {
      dVar36 = (double)(long)(dVar36 + -0.5);
    }
    fVar23 = (float)local_e8;
    local_470 = -0x80000000;
    if (dVar36 != INFINITY) {
      local_470 = (int)dVar36;
    }
    if (DAT_03fed2db == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed2db = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    dVar36 = (double)fVar23;
    dVar25 = modf(dVar36,&local_778);
    if (0.0 <= fVar23) {
      if (dVar25 == 0.5) {
        dVar25 = 1.0;
        goto LAB_03a1519c;
      }
      dVar36 = (double)(long)(dVar36 + 0.5);
    }
    else if (dVar25 == -0.5) {
      dVar25 = -1.0;
LAB_03a1519c:
      dVar36 = local_778;
      if (((long)local_778 & 1U) != 0) {
        dVar36 = local_778 + dVar25;
      }
    }
    else {
      dVar36 = (double)(long)(dVar36 + -0.5);
    }
    fVar23 = local_e8._4_4_;
    local_46c = -0x80000000;
    if (dVar36 != INFINITY) {
      local_46c = (int)dVar36;
    }
    if (DAT_03fed2db == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed2db = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    dVar36 = (double)fVar23;
    dVar25 = modf(dVar36,&local_778);
    if (0.0 <= fVar23) {
      if (dVar25 == 0.5) {
        dVar25 = 1.0;
        goto LAB_03a15254;
      }
      local_778 = (double)(long)(dVar36 + 0.5);
    }
    else if (dVar25 == -0.5) {
      dVar25 = -1.0;
LAB_03a15254:
      if (((long)local_778 & 1U) != 0) {
        local_778 = local_778 + dVar25;
      }
    }
    else {
      local_778 = (double)(long)(dVar36 + -0.5);
    }
    uVar33 = 0x7ff0000000000000;
    local_468 = -0x80000000;
    local_464 = fVar22;
    if (local_778 != INFINITY) {
      local_468 = (int)local_778;
    }
  }
  local_530 = FUN_03a9e488(&local_e0,0);
  local_52c = (undefined4)uVar33;
  local_528 = (undefined4)uVar20;
  local_524 = (undefined4)uVar14;
  if (*plVar1 != 0) {
    local_450 = FUN_03a981e0(*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(*plVar1 + 0x1a8),0);
    local_510 = FUN_03a9dbb0(&local_e0,0);
    local_504 = FUN_03a9dc08(&local_e0,0);
    local_4f8 = FUN_03a9dc60(&local_e0,0);
    FUN_03a9dcb0(&local_778,&local_e0,0);
    local_4e0 = local_768;
    FUN_03a98760(*(undefined8 *)(param_5 + 0x110),&local_550,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar16 = FUN_0391f968(local_4d8,0,0);
    if ((uVar16 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar16 = FUN_0391f968(local_4c8,0,0);
      if ((uVar16 & 1) == 0) {
        memcpy(auStack_ae0,&local_550,0x110);
        FUN_03a13874(param_5,auStack_ae0);
        return;
      }
      memcpy(&local_778,&local_550,0x110);
      if (*plVar1 != 0) {
        auVar26 = FUN_03ac22f8(*plVar1,0);
        if (*plVar1 != 0) {
          uVar30 = auVar26._8_8_;
          uVar24 = auVar26._0_8_;
          uVar32 = FUN_03ac1090(*plVar1,0);
          memcpy(auStack_9d0,&local_778,0x110);
          puVar17 = auStack_9d0;
          goto LAB_03a15440;
        }
      }
    }
    else {
      memcpy(&local_778,&local_550,0x110);
      if (*plVar1 != 0) {
        auVar26 = FUN_03ac22f8(*plVar1,0);
        if (*plVar1 != 0) {
          uVar30 = auVar26._8_8_;
          uVar24 = auVar26._0_8_;
          uVar32 = FUN_03ac1090(*plVar1,0);
          memcpy(auStack_8c0,&local_778,0x110);
          puVar17 = auStack_8c0;
LAB_03a15440:
          auVar28._8_8_ = uVar30;
          auVar28._0_8_ = uVar24;
          FUN_03a15528(auVar28,uVar33,uVar20,uVar14,uVar32,param_5,puVar17);
          return;
        }
      }
    }
  }
LAB_03a15524:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_03a14be8:
  puVar13 = (undefined8 *)(lVar19 + (long)(*piVar21 + 2) * 0x10 + 0x138);
LAB_03a14bf8:
  uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
  auVar26._8_8_ = uVar32;
  auVar26._0_8_ = uVar24;
  FUN_03a99324(&local_778,auVar26,uVar33,uVar20,uVar16,0,0,0x3f800000,0x3f800000,uVar14,2,uVar10,0);
  memcpy(&local_550,&local_778,0x110);
  if (local_4d8 == (long *)0x0) goto LAB_03a15524;
  iVar6 = (**(code **)(*local_4d8 + 0x178))(local_4d8,*(undefined8 *)(*local_4d8 + 0x180));
  if (local_4d8 == (long *)0x0) goto LAB_03a15524;
  iVar7 = (**(code **)(*local_4d8 + 0x198))(local_4d8,*(undefined8 *)(*local_4d8 + 0x1a0));
  local_550 = 0;
  local_548 = CONCAT44((float)iVar7,(float)iVar6);
  goto LAB_03a14f24;
}


