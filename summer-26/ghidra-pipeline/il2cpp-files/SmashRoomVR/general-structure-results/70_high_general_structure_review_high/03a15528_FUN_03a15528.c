/*
FUNCTION_NAME: FUN_03a15528
ENTRY_POINT: 03a15528
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x03a16784) */
/* WARNING: Removing unreachable block (ram,0x03a16788) */
/* WARNING: Removing unreachable block (ram,0x03a16924) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03a15528(float param_1,float param_2,float param_3,float param_4,float param_5,long param_6
                 ,float *param_7)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float fStack_2ac;
  int local_2a8;
  float local_2a4;
  uint local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  undefined1 auStack_290 [272];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  local_2c4 = param_5;
  local_294 = param_1;
  if ((DAT_03ffce97 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03db0a70);
    thunk_FUN_01ad9084(PTR_DAT_03db0a78);
    thunk_FUN_01ad9084(PTR_DAT_03db0a80);
    thunk_FUN_01ad9084(PTR_DAT_03db0a88);
    thunk_FUN_01ad9084(PTR_DAT_03db0a90);
    thunk_FUN_01ad9084(PTR_DAT_03db0a98);
    thunk_FUN_01ad9084(PTR_DAT_03db0aa0);
    thunk_FUN_01ad9084(PTR_DAT_03db0aa8);
    thunk_FUN_01ad9084(PTR_DAT_03db0ab0);
    thunk_FUN_01ad9084(PTR_DAT_03db0ab8);
    thunk_FUN_01ad9084(PTR_DAT_03db0ac0);
    thunk_FUN_01ad9084(PTR_DAT_03db0ac8);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffce97 = 1;
  }
  local_e8 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  plVar21 = (long *)(param_6 + 0xf0);
  lVar18 = *plVar21;
  if (lVar18 == 0) {
    lVar18 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03db0a88,2);
    *plVar21 = lVar18;
    thunk_FUN_01b4f09c(plVar21,lVar18);
    puVar10 = PTR_DAT_03db0ac8;
    plVar22 = (long *)*plVar21;
    lVar18 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03db0ac8);
    puVar9 = PTR_DAT_03db0aa8;
    System_Collections_Generic_ObjectEqualityComparer<StylePropertyAnimationSystem_ElementPropertyPair>__Equals
              (lVar18,*(undefined8 *)PTR_DAT_03db0aa8);
    if (plVar22 == (long *)0x0) goto LAB_03a168ec;
    if ((lVar18 != 0) &&
       (lVar20 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar22 + 0x40)), lVar20 == 0)) {
LAB_03a1692c:
      uVar23 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar23,0);
    }
    if ((int)plVar22[3] == 0) goto LAB_03a168f0;
    plVar22[4] = lVar18;
    thunk_FUN_01b4f09c(plVar22 + 4,lVar18);
    plVar22 = (long *)*plVar21;
    lVar18 = thunk_FUN_01afaadc(*(undefined8 *)puVar10);
    System_Collections_Generic_ObjectEqualityComparer<StylePropertyAnimationSystem_ElementPropertyPair>__Equals
              (lVar18,*(undefined8 *)puVar9);
    if (plVar22 == (long *)0x0) goto LAB_03a168ec;
    if ((lVar18 != 0) &&
       (lVar20 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar22 + 0x40)), lVar20 == 0))
    goto LAB_03a1692c;
    if (*(uint *)(plVar22 + 3) < 2) goto LAB_03a168f0;
    plVar22[5] = lVar18;
    thunk_FUN_01b4f09c(plVar22 + 5,lVar18);
  }
  else {
    uVar14 = *(uint *)(lVar18 + 0x18);
    if (uVar14 == 0) goto LAB_03a168f0;
    lVar20 = *(long *)(lVar18 + 0x20);
    if (lVar20 == 0) goto LAB_03a168ec;
    *(undefined4 *)(lVar20 + 0x18) = 0;
    *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
    if (uVar14 < 2) goto LAB_03a168f0;
    lVar18 = *(long *)(lVar18 + 0x28);
    if (lVar18 == 0) goto LAB_03a168ec;
    *(undefined4 *)(lVar18 + 0x18) = 0;
    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
  }
  local_2bc = *param_7;
  local_2b8 = param_7[1];
  fVar32 = param_7[2];
  fVar30 = param_7[3];
  pfVar5 = param_7 + 0x18;
  iVar13 = FUN_039bbfb8(pfVar5,0);
  local_2b4 = param_2;
  fVar29 = fVar32;
  fVar25 = fVar30;
  if (iVar13 == 0) {
    local_e8 = FUN_039bc014(pfVar5,0);
    uVar15 = FUN_03ad2584(&local_e8,0);
    if ((uVar15 & 1) != 0) {
      local_e8 = FUN_039bc028(pfVar5,0);
      uVar15 = FUN_03ad2584(&local_e8,0);
      if ((uVar15 & 1) != 0) goto LAB_03a159a4;
    }
    local_e8 = FUN_039bc014(pfVar5,0);
    uVar15 = FUN_03ad2584(&local_e8,0);
    if ((uVar15 & 1) == 0) {
      local_e8 = FUN_039bc028(pfVar5,0);
      uVar15 = FUN_03ad2574(&local_e8,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_039bc014(pfVar5,0);
        local_e8 = uVar15;
        local_e8 = FUN_039bc014(pfVar5,0);
        if (uVar15 >> 0x20 == 1) {
          fVar29 = (param_3 * (float)local_e8) / 100.0;
        }
        else {
          if (local_e8 >> 0x20 != 0) goto LAB_03a159a4;
          local_e8 = FUN_039bc014(pfVar5,0);
          fVar29 = (float)local_e8;
        }
        fVar25 = (fVar30 * fVar29) / fVar32;
        goto LAB_03a159a4;
      }
    }
    local_e8 = FUN_039bc014(pfVar5,0);
    uVar15 = FUN_03ad2584(&local_e8,0);
    if ((uVar15 & 1) == 0) {
      local_e8 = FUN_039bc028(pfVar5,0);
      uVar15 = FUN_03ad2584(&local_e8,0);
      if ((uVar15 & 1) == 0) {
        local_e8 = FUN_039bc014(pfVar5,0);
        uVar15 = FUN_03ad2574(&local_e8,0);
        if ((uVar15 & 1) == 0) {
          uVar15 = FUN_039bc014(pfVar5,0);
          local_e8 = uVar15;
          local_e8 = FUN_039bc014(pfVar5,0);
          if (uVar15 >> 0x20 == 1) {
            fVar29 = (param_3 * (float)local_e8) / 100.0;
          }
          else if (local_e8 >> 0x20 == 0) {
            local_e8 = FUN_039bc014(pfVar5,0);
            fVar29 = (float)local_e8;
          }
        }
        local_e8 = FUN_039bc028(pfVar5,0);
        uVar15 = FUN_03ad2574(&local_e8,0);
        if ((uVar15 & 1) == 0) {
          uVar15 = FUN_039bc028(pfVar5,0);
          local_e8 = uVar15;
          local_e8 = FUN_039bc028(pfVar5,0);
          if (uVar15 >> 0x20 == 1) {
            fVar25 = (param_4 * (float)local_e8) / 100.0;
          }
          else if (local_e8 >> 0x20 == 0) {
            local_e8 = FUN_039bc028(pfVar5,0);
            fVar25 = (float)local_e8;
          }
          local_e8 = FUN_039bc014(pfVar5,0);
          uVar15 = FUN_03ad2574(&local_e8,0);
          if ((uVar15 & 1) != 0) {
            fVar29 = (fVar32 * fVar25) / fVar30;
          }
        }
      }
    }
  }
  else {
    iVar13 = FUN_039bbfb8(pfVar5,0);
    if (iVar13 == 2) {
      if (param_4 / fVar30 <= param_3 / fVar32) {
LAB_03a158b8:
        fVar29 = (param_4 * fVar32) / fVar30;
        fVar25 = param_4;
      }
      else {
LAB_03a157bc:
        fVar29 = param_3;
        fVar25 = (param_3 * fVar30) / fVar32;
      }
    }
    else {
      iVar13 = FUN_039bbfb8(pfVar5,0);
      if (iVar13 == 1) {
        if (param_3 / fVar32 <= param_4 / fVar30) goto LAB_03a158b8;
        goto LAB_03a157bc;
      }
    }
  }
LAB_03a159a4:
  if ((((param_4 <= DAT_00b550f0) || (param_3 <= DAT_00b550f0)) || (fVar25 <= DAT_00b550f0)) ||
     (fVar29 <= DAT_00b550f0)) goto LAB_03a167c8;
  local_2c0 = DAT_00b550f0;
  local_e8 = FUN_039bc014(pfVar5,0);
  uVar15 = FUN_03ad2574(&local_e8,0);
  if (((uVar15 & 1) == 0) || (param_7[0x17] != 2.8026e-45)) {
    local_e8 = FUN_039bc028(pfVar5,0);
    uVar15 = FUN_03ad2574(&local_e8,0);
    local_298 = fVar29;
    if (((uVar15 & 1) != 0) && (param_7[0x16] == 2.8026e-45)) {
      fVar30 = param_3 * (1.0 / fVar29) + 0.5;
      iVar13 = -0x80000000;
      if (fVar30 != INFINITY) {
        iVar13 = (int)fVar30;
      }
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      iVar13 = FUN_03041568(iVar13,1,0);
      local_298 = param_3 / (float)iVar13;
      fVar25 = (1.0 / fVar29) * fVar25 * local_298;
      goto LAB_03a15b08;
    }
  }
  else {
    fVar30 = 1.0 / fVar25;
    fVar25 = param_4 * fVar30 + 0.5;
    iVar13 = -0x80000000;
    if (fVar25 != INFINITY) {
      iVar13 = (int)fVar25;
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar13 = FUN_03041568(iVar13,1,0);
    fVar25 = param_4 / (float)iVar13;
    local_298 = fVar30 * fVar29 * fVar25;
LAB_03a15b08:
    local_2b8 = 0.0;
    local_2bc = 0.0;
  }
  puVar10 = PTR_DAT_03db0ac0;
  puVar9 = PTR_DAT_03db0ab8;
  fVar30 = DAT_00b5568c;
  uVar7 = DAT_00b554f4;
  local_2d0 = param_3 - local_298;
  local_2cc = param_4 - fVar25;
  local_2c8 = 1.0 / local_2c4;
  bVar6 = false;
  uVar15 = 0;
  uVar14 = 1;
  local_2b0 = param_4;
  fStack_2ac = param_3;
  fVar29 = local_298;
  do {
    fVar32 = local_298;
    bVar12 = uVar14 == 0;
    lVar18 = 0x58;
    if (bVar12) {
      lVar18 = 0x5c;
    }
    lVar20 = 0x48;
    if (bVar12) {
      lVar20 = 0x54;
    }
    lVar19 = 0x44;
    if (bVar12) {
      lVar19 = 0x50;
    }
    lVar1 = 0x40;
    if (bVar12) {
      lVar1 = 0x4c;
    }
    uVar2 = *(uint *)((long)param_7 + lVar18);
    fVar28 = *(float *)((long)param_7 + lVar1);
    local_2a4 = *(float *)((long)param_7 + lVar19);
    local_2a8 = *(int *)((long)param_7 + lVar20);
    fVar33 = 0.0;
    iVar13 = (int)uVar15;
    fVar31 = 0.0;
    local_2a0 = uVar14;
    local_29c = fVar28;
    switch(uVar2) {
    case 0:
      lVar18 = *plVar21;
      fVar31 = fVar25;
      if (!bVar6) {
        fVar31 = fVar29;
      }
      if (lVar18 == 0) goto LAB_03a168ec;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_03a168f0;
      lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_03a168ec;
      lVar20 = *(long *)(lVar18 + 0x10);
      lVar19 = *(long *)PTR_DAT_03db0a90;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      uVar8 = _UNK_00b55ee8;
      uVar23 = _DAT_00b55ee0;
      if (lVar20 == 0) goto LAB_03a168ec;
      uVar14 = *(uint *)(lVar18 + 0x18);
      if (uVar14 < *(uint *)(lVar20 + 0x18)) {
        lVar20 = lVar20 + (long)(int)uVar14 * 0x20;
        *(uint *)(lVar18 + 0x18) = uVar14 + 1;
        *(float *)(lVar20 + 0x28) = fVar29;
        *(float *)(lVar20 + 0x2c) = fVar25;
        *(undefined8 *)(lVar20 + 0x38) = uVar8;
        *(undefined8 *)(lVar20 + 0x30) = uVar23;
        *(float *)(lVar20 + 0x20) = local_2bc;
        *(float *)(lVar20 + 0x24) = local_2b8;
      }
      else {
        local_180._0_4_ = local_2bc;
        uStack_178 = CONCAT44(fVar25,fVar29);
        uStack_168 = _UNK_00b55ee8;
        uStack_170 = _DAT_00b55ee0;
        local_180._4_4_ = local_2b8;
        FUN_02c61f00(lVar18,&local_180,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      break;
    case 1:
      fVar28 = fVar25;
      if (iVar13 != 1) {
        fVar28 = fVar29;
        param_4 = param_3;
      }
      iVar17 = -0x80000000;
      if (param_4 / fVar28 != INFINITY) {
        iVar17 = (int)(param_4 / fVar28);
      }
      fVar31 = fVar33;
      if (-1 < iVar17) {
        lVar18 = *plVar21;
        if (lVar18 == 0) goto LAB_03a168ec;
        if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_03a168f0;
        lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_03a168ec;
        lVar20 = *(long *)(lVar18 + 0x10);
        lVar19 = *(long *)PTR_DAT_03db0a90;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        uVar8 = _UNK_00b55ee8;
        uVar23 = _DAT_00b55ee0;
        if (lVar20 == 0) goto LAB_03a168ec;
        uVar14 = *(uint *)(lVar18 + 0x18);
        if (uVar14 < *(uint *)(lVar20 + 0x18)) {
          lVar20 = lVar20 + (long)(int)uVar14 * 0x20;
          *(uint *)(lVar18 + 0x18) = uVar14 + 1;
          *(float *)(lVar20 + 0x28) = local_298;
          *(float *)(lVar20 + 0x2c) = fVar25;
          *(undefined8 *)(lVar20 + 0x38) = uVar8;
          *(undefined8 *)(lVar20 + 0x30) = uVar23;
          *(float *)(lVar20 + 0x20) = local_2bc;
          *(float *)(lVar20 + 0x24) = local_2b8;
        }
        else {
          local_180._0_4_ = local_2bc;
          uStack_178 = CONCAT44(fVar25,local_298);
          uStack_168 = _UNK_00b55ee8;
          uStack_170 = _DAT_00b55ee0;
          local_180._4_4_ = local_2b8;
          FUN_02c61f00(lVar18,&local_180,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        fVar33 = local_298;
        fVar28 = fStack_2ac;
        fVar29 = local_2b0;
        fVar31 = fVar25;
        if (iVar13 != 1) {
          fVar31 = fVar32;
        }
        if (1 < iVar17) {
          lVar18 = *plVar21;
          fVar32 = local_2cc;
          fVar34 = local_2bc;
          if (iVar13 != 1) {
            fVar32 = local_2b8;
            fVar34 = local_2d0;
          }
          if (lVar18 == 0) goto LAB_03a168ec;
          if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_03a168f0;
          lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
          if (lVar18 == 0) goto LAB_03a168ec;
          lVar20 = *(long *)(lVar18 + 0x10);
          lVar19 = *(long *)PTR_DAT_03db0a90;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          uVar8 = _UNK_00b55ee8;
          uVar23 = _DAT_00b55ee0;
          if (lVar20 == 0) goto LAB_03a168ec;
          uVar14 = *(uint *)(lVar18 + 0x18);
          if (uVar14 < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + (long)(int)uVar14 * 0x20;
            *(uint *)(lVar18 + 0x18) = uVar14 + 1;
            *(float *)(lVar20 + 0x20) = fVar34;
            *(float *)(lVar20 + 0x24) = fVar32;
            *(float *)(lVar20 + 0x28) = local_298;
            *(float *)(lVar20 + 0x2c) = fVar25;
            *(undefined8 *)(lVar20 + 0x38) = uVar8;
            *(undefined8 *)(lVar20 + 0x30) = uVar23;
          }
          else {
            uStack_178 = CONCAT44(fVar25,local_298);
            uStack_168 = _UNK_00b55ee8;
            uStack_170 = _DAT_00b55ee0;
            local_180._0_4_ = fVar34;
            local_180._4_4_ = fVar32;
            FUN_02c61f00(lVar18,&local_180,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          fVar31 = fVar29;
          if (iVar13 != 1) {
            fVar31 = fVar28;
          }
          if (2 < iVar17) {
            fVar26 = fVar25;
            if (iVar13 != 1) {
              fVar29 = fVar28;
              fVar26 = fVar33;
            }
            fVar29 = (fVar29 - fVar26 * (float)iVar17) / (float)(iVar17 + -1);
            iVar24 = 0;
            do {
              iVar24 = iVar24 + 1;
              lVar18 = *plVar21;
              fVar28 = (fVar25 + fVar29) * (float)iVar24;
              if (iVar13 != 1) {
                fVar28 = fVar32;
                fVar34 = (fVar33 + fVar29) * (float)iVar24;
              }
              fVar32 = fVar28;
              if (lVar18 == 0) goto LAB_03a168ec;
              if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_03a168f0;
              lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
              if (lVar18 == 0) goto LAB_03a168ec;
              lVar20 = *(long *)(lVar18 + 0x10);
              lVar19 = *(long *)PTR_DAT_03db0a90;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              uVar8 = _UNK_00b55ee8;
              uVar23 = _DAT_00b55ee0;
              if (lVar20 == 0) goto LAB_03a168ec;
              uVar14 = *(uint *)(lVar18 + 0x18);
              if (uVar14 < *(uint *)(lVar20 + 0x18)) {
                lVar20 = lVar20 + (long)(int)uVar14 * 0x20;
                *(uint *)(lVar18 + 0x18) = uVar14 + 1;
                *(float *)(lVar20 + 0x20) = fVar34;
                *(float *)(lVar20 + 0x24) = fVar32;
                *(float *)(lVar20 + 0x28) = fVar33;
                *(float *)(lVar20 + 0x2c) = fVar25;
                *(undefined8 *)(lVar20 + 0x38) = uVar8;
                *(undefined8 *)(lVar20 + 0x30) = uVar23;
              }
              else {
                uStack_178 = CONCAT44(fVar25,fVar33);
                uStack_168 = _UNK_00b55ee8;
                uStack_170 = _DAT_00b55ee0;
                local_180._0_4_ = fVar34;
                local_180._4_4_ = fVar32;
                FUN_02c61f00(lVar18,&local_180,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            } while (iVar24 < iVar17 + -2);
          }
        }
      }
      break;
    case 2:
      fVar32 = fVar25;
      if (iVar13 != 1) {
        fVar32 = fVar29;
      }
      fVar31 = param_4;
      if (iVar13 != 1) {
        fVar31 = param_3;
      }
      fVar32 = (fVar31 + fVar32 * 0.5) / fVar32;
      iVar17 = -0x80000000;
      if (fVar32 != INFINITY) {
        iVar17 = (int)fVar32;
      }
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar14 = FUN_03041568(iVar17,1,0);
      iVar17 = 1;
      if ((uVar14 & 1) != 0) {
        iVar17 = 2;
      }
      if (fVar28 != 0.0) {
        iVar17 = 1;
      }
      if (iVar13 != 1) {
        param_4 = param_3;
      }
      param_4 = param_4 / (float)(int)uVar14;
      fVar32 = param_4;
      if (iVar13 != 1) {
        fVar32 = fVar25;
        fVar29 = param_4;
      }
      fVar31 = fVar33;
      if (0 < (int)(uVar14 + iVar17)) {
        iVar24 = 0;
        fVar28 = fVar32;
        if (iVar13 != 1) {
          fVar28 = fVar29;
        }
        fVar31 = 0.0;
        fVar34 = local_2b8;
        fVar33 = local_2bc;
        do {
          lVar18 = *plVar21;
          fVar26 = param_4 * (float)iVar24;
          if (iVar13 != 1) {
            fVar26 = fVar34;
            fVar33 = param_4 * (float)iVar24;
          }
          fVar34 = fVar26;
          if (lVar18 == 0) goto LAB_03a168ec;
          if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_03a168f0;
          lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
          if (lVar18 == 0) goto LAB_03a168ec;
          lVar20 = *(long *)(lVar18 + 0x10);
          lVar19 = *(long *)PTR_DAT_03db0a90;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          uVar8 = _UNK_00b55ee8;
          uVar23 = _DAT_00b55ee0;
          if (lVar20 == 0) goto LAB_03a168ec;
          uVar3 = *(uint *)(lVar18 + 0x18);
          if (uVar3 < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + (long)(int)uVar3 * 0x20;
            *(uint *)(lVar18 + 0x18) = uVar3 + 1;
            *(float *)(lVar20 + 0x20) = fVar33;
            *(float *)(lVar20 + 0x24) = fVar34;
            *(float *)(lVar20 + 0x28) = fVar29;
            *(float *)(lVar20 + 0x2c) = fVar32;
            *(undefined8 *)(lVar20 + 0x38) = uVar8;
            *(undefined8 *)(lVar20 + 0x30) = uVar23;
          }
          else {
            uStack_178 = CONCAT44(fVar32,fVar29);
            uStack_168 = _UNK_00b55ee8;
            uStack_170 = _DAT_00b55ee0;
            local_180._0_4_ = fVar33;
            local_180._4_4_ = fVar34;
            FUN_02c61f00(lVar18,&local_180,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          iVar24 = iVar24 + 1;
          fVar31 = fVar31 + fVar28;
        } while (uVar14 + iVar17 != iVar24);
      }
      break;
    case 3:
      fVar32 = fVar25;
      if (iVar13 != 1) {
        fVar32 = fVar29;
        param_4 = param_3;
      }
      fVar32 = (local_2c8 + param_4) / fVar32;
      uVar14 = 0x80000000;
      if (fVar32 != INFINITY) {
        uVar14 = (int)fVar32;
      }
      iVar17 = 1;
      if (fVar28 != 0.0 || (uVar14 & 1) != 0) {
        iVar17 = 2;
      }
      fVar31 = fVar33;
      if (0 < (int)(uVar14 + iVar17)) {
        iVar24 = 0;
        fVar29 = fVar25;
        if (iVar13 != 1) {
          fVar29 = local_298;
        }
        fVar31 = 0.0;
        fVar28 = local_2bc;
        fVar32 = local_2b8;
        do {
          lVar18 = *plVar21;
          fVar33 = fVar25 * (float)iVar24;
          if (iVar13 != 1) {
            fVar28 = local_298 * (float)iVar24;
            fVar33 = fVar32;
          }
          fVar32 = fVar33;
          if (lVar18 == 0) goto LAB_03a168ec;
          if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_03a168f0;
          lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
          if (lVar18 == 0) goto LAB_03a168ec;
          lVar20 = *(long *)(lVar18 + 0x10);
          lVar19 = *(long *)PTR_DAT_03db0a90;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          uVar8 = _UNK_00b55ee8;
          uVar23 = _DAT_00b55ee0;
          if (lVar20 == 0) goto LAB_03a168ec;
          uVar3 = *(uint *)(lVar18 + 0x18);
          if (uVar3 < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + (long)(int)uVar3 * 0x20;
            *(uint *)(lVar18 + 0x18) = uVar3 + 1;
            *(float *)(lVar20 + 0x20) = fVar28;
            *(float *)(lVar20 + 0x24) = fVar32;
            *(float *)(lVar20 + 0x28) = local_298;
            *(float *)(lVar20 + 0x2c) = fVar25;
            *(undefined8 *)(lVar20 + 0x38) = uVar8;
            *(undefined8 *)(lVar20 + 0x30) = uVar23;
          }
          else {
            uStack_178 = CONCAT44(fVar25,local_298);
            uStack_168 = _UNK_00b55ee8;
            uStack_170 = _DAT_00b55ee0;
            local_180._0_4_ = fVar28;
            local_180._4_4_ = fVar32;
            FUN_02c61f00(lVar18,&local_180,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          iVar24 = iVar24 + 1;
          fVar31 = fVar31 + fVar29;
        } while (uVar14 + iVar17 != iVar24);
      }
    }
    fVar29 = local_298;
    param_3 = fStack_2ac;
    param_4 = local_2b0;
    if (local_29c == 0.0) {
      fVar32 = local_2b0;
      if (!bVar6) {
        fVar32 = fStack_2ac;
      }
      fVar32 = (fVar32 - fVar31) * 0.5;
FUN_03a162d0:
      uVar23 = *(undefined8 *)(param_7 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar16 = FUN_03922f24(uVar23,0,0);
      if ((uVar16 & 1) != 0) {
        uVar23 = *(undefined8 *)(param_7 + 0x22);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar16 = FUN_03922f24(uVar23,0,0);
        if ((uVar16 & 1) != 0) {
          fVar28 = fVar25;
          if (!bVar6) {
            fVar28 = fVar29;
          }
          fVar28 = fVar28 * local_2c4;
          dVar27 = modf((double)fVar28,(double *)&local_180);
          if (0.0 <= fVar28) {
            if (dVar27 == 0.5) {
              fVar31 = 1.0;
              goto LAB_03a16380;
            }
            fVar33 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar27 == -0.5) {
            fVar31 = -1.0;
LAB_03a16380:
            fVar33 = (float)(double)CONCAT44(local_180._4_4_,(float)local_180);
            if (((long)(double)CONCAT44(local_180._4_4_,(float)local_180) & 1U) != 0) {
              fVar33 = fVar33 + fVar31;
            }
          }
          else {
            fVar33 = (float)(int)(fVar28 + -0.5);
          }
          if (ABS(fVar33 - fVar28) < fVar30) {
            fVar32 = (float)FUN_039ba41c(fVar32,local_2c4,uVar7,0);
          }
        }
      }
LAB_03a163dc:
      if ((uVar2 & 0xfffffffe) == 2) {
        fVar28 = fVar25;
        if (!bVar6) {
          fVar28 = fVar29;
        }
        if (local_2c0 < fVar28) {
          if (fVar32 < -fVar28) {
            fVar31 = -2.1474836e+09;
            if (-fVar32 / fVar28 != INFINITY) {
              fVar31 = (float)(int)(-fVar32 / fVar28);
            }
            fVar32 = fVar32 + fVar28 * fVar31;
          }
          if (0.0 < fVar32) {
            fVar31 = -2.1474836e+09;
            if (fVar32 / fVar28 != INFINITY) {
              fVar31 = (float)((int)(fVar32 / fVar28) + 1);
            }
            fVar32 = fVar32 - fVar28 * fVar31;
          }
        }
      }
    }
    else {
      fVar32 = 0.0;
      if (uVar2 != 1) {
        if (local_2a8 == 0) {
          bVar12 = false;
          fVar32 = local_2a4;
        }
        else if (local_2a8 == 1) {
          pfVar5 = &local_2cc;
          if (!bVar6) {
            pfVar5 = &local_2d0;
          }
          bVar12 = true;
          fVar32 = (local_2a4 * *pfVar5) / 100.0;
        }
        else {
          bVar12 = false;
          fVar32 = 0.0;
        }
        if ((local_29c == 5.60519e-45) || (local_29c == 2.8026e-45)) {
          fVar28 = local_2b0;
          if (!bVar6) {
            fVar28 = fStack_2ac;
          }
          fVar32 = (fVar28 - fVar31) - fVar32;
        }
        if (bVar12) goto FUN_03a162d0;
        goto LAB_03a163dc;
      }
    }
    lVar18 = *plVar21;
    if (lVar18 == 0) goto LAB_03a168ec;
    iVar13 = 0;
    while( true ) {
      fVar28 = local_2b4;
      puVar11 = PTR_DAT_03db0aa0;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_03a168f0;
      lVar20 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
      if (lVar20 == 0) goto LAB_03a168ec;
      if (*(int *)(lVar20 + 0x18) <= iVar13) break;
      FUN_02c61bac(&local_180,lVar20,iVar13,*(undefined8 *)puVar9);
      uStack_b8 = uStack_170;
      local_c0 = uStack_178;
      local_b0 = uStack_168;
      lVar18 = *plVar21;
      fVar28 = (float)local_180;
      fVar31 = fVar32 + local_180._4_4_;
      if (!bVar6) {
        fVar28 = fVar32 + (float)local_180;
        fVar31 = local_180._4_4_;
      }
      if (lVar18 == 0) goto LAB_03a168ec;
      if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_03a168f0;
      lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
      uStack_d8 = uStack_170;
      local_e0 = uStack_178;
      local_d0 = uStack_168;
      if (lVar18 == 0) goto LAB_03a168ec;
      local_180._0_4_ = fVar28;
      local_180._4_4_ = fVar31;
      FUN_02c61c0c(lVar18,iVar13,&local_180,*(undefined8 *)puVar10);
      lVar18 = *plVar21;
      iVar13 = iVar13 + 1;
      if (lVar18 == 0) goto LAB_03a168ec;
    }
    uVar14 = 0;
    bVar6 = true;
    uVar15 = 1;
  } while ((local_2a0 & 1) != 0);
  if (*(uint *)(lVar18 + 0x18) < 2) {
LAB_03a168f0:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  if (*(long *)(lVar18 + 0x28) == 0) {
LAB_03a168ec:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  FUN_02c62a64(&local_180,*(long *)(lVar18 + 0x28),*(undefined8 *)PTR_DAT_03db0aa0);
  puVar10 = PTR_DAT_03db0a78;
  puVar9 = PTR_DAT_03db0a70;
  local_120 = CONCAT44(local_180._4_4_,(float)local_180);
  local_298 = param_3 + local_294;
  uStack_118 = uStack_178;
  uStack_108 = uStack_168;
  local_110 = uStack_170;
  uStack_f8 = uStack_158;
  local_100 = local_160;
  param_4 = param_4 + fVar28;
  local_29c = param_4;
  while (uVar15 = FUN_02757d4c(&local_120,*(undefined8 *)puVar10), (uVar15 & 1) != 0) {
    if (local_2b4 <= local_110._4_4_) {
      fVar29 = local_100._4_4_;
      fVar25 = uStack_108._4_4_;
      fVar30 = uStack_f8._4_4_;
      fVar32 = local_110._4_4_;
    }
    else {
      fVar30 = local_2b4 - local_110._4_4_;
      fVar25 = uStack_108._4_4_ - fVar30;
      fVar29 = fVar30 / (fVar30 + fVar25) + 0.0;
      fVar30 = fVar25 / (fVar30 + fVar25);
      fVar32 = local_2b4;
    }
    if (param_4 < fVar25 + fVar32) {
      param_4 = (fVar25 + fVar32) - param_4;
      fVar25 = fVar25 - param_4;
      fVar30 = (fVar30 * fVar25) / (param_4 + fVar25);
      fVar29 = (fVar29 + fVar30) - fVar30;
    }
    uVar23 = *(undefined8 *)(param_7 + 0x22);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar15 = FUN_03922f24(uVar23,0,0);
    lVar18 = *plVar21;
    fVar28 = fVar29 + ((1.0 - (fVar30 + fVar29)) - fVar29);
    if ((uVar15 & 1) == 0) {
      fVar28 = fVar29;
    }
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(int *)(lVar18 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    if (*(long *)(lVar18 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_02c62a64(&local_180,*(long *)(lVar18 + 0x20),*(undefined8 *)puVar11);
    local_150 = CONCAT44(local_180._4_4_,(float)local_180);
    uStack_148 = uStack_178;
    local_138 = uStack_168;
    local_140 = uStack_170;
    uStack_128 = uStack_158;
    local_130 = local_160;
    while (uVar15 = FUN_02757d4c(&local_150,*(undefined8 *)puVar10), param_4 = local_29c,
          (uVar15 & 1) != 0) {
      if (local_294 <= (float)local_140) {
        fVar31 = (float)local_130;
        fVar33 = (float)uStack_128;
        fVar34 = (float)local_138;
        fVar29 = (float)local_140;
      }
      else {
        fVar29 = local_294 - (float)local_140;
        fVar34 = (float)local_138 - fVar29;
        fVar31 = fVar29 / (fVar29 + fVar34) + 0.0;
        fVar33 = (fVar34 * (float)uStack_128) / (fVar29 + fVar34);
        fVar29 = local_294;
      }
      if (local_298 < fVar34 + fVar29) {
        fVar26 = (fVar34 + fVar29) - local_298;
        fVar34 = fVar34 - fVar26;
        fVar33 = (fVar33 * fVar34) / (fVar26 + fVar34);
      }
      memcpy(auStack_290,param_7,0x110);
      FUN_03a169cc(fVar29,fVar32,fVar34,fVar25,fVar31,fVar28,fVar33,fVar30,param_6,auStack_290);
    }
    FUN_02757d48(&local_150,*(undefined8 *)puVar9);
  }
  FUN_02757d48(&local_120,*(undefined8 *)puVar9);
LAB_03a167c8:
  if (*(long *)(lVar4 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


