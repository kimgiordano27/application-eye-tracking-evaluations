/*
FUNCTION_NAME: UnityEngine.UI.ScrollRect$$SetContentAnchoredPosition
ENTRY_POINT: 03a15660
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x03a16784) */
/* WARNING: Removing unreachable block (ram,0x03a16788) */
/* WARNING: Removing unreachable block (ram,0x03a16924) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_UI_ScrollRect__SetContentAnchoredPosition(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  float *unaff_x19;
  long *unaff_x21;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int iVar24;
  long unaff_x26;
  float fVar25;
  float fVar26;
  double dVar27;
  float unaff_s8;
  float fVar28;
  float fVar29;
  float fVar30;
  float unaff_s10;
  float unaff_s13;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  float fStack0000000000000044;
  int iStack0000000000000048;
  float fStack000000000000004c;
  uint uStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float fStack00000000000001b0;
  float fStack00000000000001b8;
  float fStack00000000000001c0;
  float fStack00000000000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00000248;
  
  if (param_1 == 0) {
    lVar20 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03db0a88,2);
    *unaff_x21 = lVar20;
    thunk_FUN_01b4f09c();
    puVar9 = PTR_DAT_03db0ac8;
    plVar21 = (long *)*unaff_x21;
    lVar20 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03db0ac8);
    puVar8 = PTR_DAT_03db0aa8;
    System_Collections_Generic_ObjectEqualityComparer<StylePropertyAnimationSystem_ElementPropertyPair>__Equals
              (lVar20,*(undefined8 *)PTR_DAT_03db0aa8);
    if (plVar21 == (long *)0x0) goto LAB_03a168ec;
    if ((lVar20 != 0) &&
       (lVar17 = thunk_FUN_01afa9e0(lVar20,*(undefined8 *)(*plVar21 + 0x40)), lVar17 == 0)) {
LAB_03a1692c:
      uVar22 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar22,0);
    }
    if ((int)plVar21[3] == 0) goto LAB_03a168f0;
    plVar21[4] = lVar20;
    thunk_FUN_01b4f09c(plVar21 + 4,lVar20);
    plVar21 = (long *)*unaff_x21;
    lVar20 = thunk_FUN_01afaadc(*(undefined8 *)puVar9);
    System_Collections_Generic_ObjectEqualityComparer<StylePropertyAnimationSystem_ElementPropertyPair>__Equals
              (lVar20,*(undefined8 *)puVar8);
    if (plVar21 == (long *)0x0) goto LAB_03a168ec;
    if ((lVar20 != 0) &&
       (lVar17 = thunk_FUN_01afa9e0(lVar20,*(undefined8 *)(*plVar21 + 0x40)), lVar17 == 0))
    goto LAB_03a1692c;
    if (*(uint *)(plVar21 + 3) < 2) goto LAB_03a168f0;
    plVar21[5] = lVar20;
    thunk_FUN_01b4f09c(plVar21 + 5,lVar20);
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x18);
    if (uVar14 == 0) goto LAB_03a168f0;
    lVar20 = *(long *)(param_1 + 0x20);
    if (lVar20 == 0) goto LAB_03a168ec;
    *(undefined4 *)(lVar20 + 0x18) = 0;
    *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
    if (uVar14 < 2) goto LAB_03a168f0;
    lVar20 = *(long *)(param_1 + 0x28);
    if (lVar20 == 0) goto LAB_03a168ec;
    *(undefined4 *)(lVar20 + 0x18) = 0;
    *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
  }
  fStack0000000000000034 = *unaff_x19;
  in_stack_00000038 = unaff_x19[1];
  fVar31 = unaff_x19[2];
  fVar28 = unaff_x19[3];
  pfVar4 = unaff_x19 + 0x18;
  iVar13 = FUN_039bbfb8(pfVar4,0);
  fVar32 = fVar31;
  fVar25 = fVar28;
  fStack000000000000003c = unaff_s8;
  if (iVar13 == 0) {
    FUN_039bc014(pfVar4,0);
    uVar15 = FUN_03ad2584(&stack0x00000208,0);
    if ((uVar15 & 1) != 0) {
      FUN_039bc028(pfVar4,0);
      uVar15 = FUN_03ad2584(&stack0x00000208,0);
      if ((uVar15 & 1) != 0) goto LAB_03a159a4;
    }
    FUN_039bc014(pfVar4,0);
    uVar15 = FUN_03ad2584(&stack0x00000208,0);
    if ((uVar15 & 1) == 0) {
      FUN_039bc028(pfVar4,0);
      uVar15 = FUN_03ad2574(&stack0x00000208,0);
      if ((uVar15 & 1) != 0) {
        uVar15 = FUN_039bc014(pfVar4,0);
        uVar16 = FUN_039bc014(pfVar4,0);
        if (uVar15 >> 0x20 == 1) {
          fVar32 = (unaff_s10 * (float)uVar16) / 100.0;
        }
        else {
          if (uVar16 >> 0x20 != 0) goto LAB_03a159a4;
          fVar32 = (float)FUN_039bc014(pfVar4,0);
        }
        fVar25 = (fVar28 * fVar32) / fVar31;
        goto LAB_03a159a4;
      }
    }
    FUN_039bc014(pfVar4,0);
    uVar15 = FUN_03ad2584(&stack0x00000208,0);
    if ((uVar15 & 1) == 0) {
      FUN_039bc028(pfVar4,0);
      uVar15 = FUN_03ad2584(&stack0x00000208,0);
      if ((uVar15 & 1) == 0) {
        FUN_039bc014(pfVar4,0);
        uVar15 = FUN_03ad2574(&stack0x00000208,0);
        if ((uVar15 & 1) == 0) {
          uVar15 = FUN_039bc014(pfVar4,0);
          uVar16 = FUN_039bc014(pfVar4,0);
          if (uVar15 >> 0x20 == 1) {
            fVar32 = (unaff_s10 * (float)uVar16) / 100.0;
          }
          else if (uVar16 >> 0x20 == 0) {
            fVar32 = (float)FUN_039bc014(pfVar4,0);
          }
        }
        FUN_039bc028(pfVar4,0);
        uVar15 = FUN_03ad2574(&stack0x00000208,0);
        if ((uVar15 & 1) == 0) {
          uVar15 = FUN_039bc028(pfVar4,0);
          uVar16 = FUN_039bc028(pfVar4,0);
          if (uVar15 >> 0x20 == 1) {
            fVar25 = (unaff_s13 * (float)uVar16) / 100.0;
          }
          else if (uVar16 >> 0x20 == 0) {
            fVar25 = (float)FUN_039bc028(pfVar4,0);
          }
          FUN_039bc014(pfVar4,0);
          uVar15 = FUN_03ad2574(&stack0x00000208,0);
          if ((uVar15 & 1) != 0) {
            fVar32 = (fVar31 * fVar25) / fVar28;
          }
        }
      }
    }
  }
  else {
    iVar13 = FUN_039bbfb8(pfVar4,0);
    if (iVar13 == 2) {
      if (unaff_s13 / fVar28 <= unaff_s10 / fVar31) {
LAB_03a158b8:
        fVar32 = (unaff_s13 * fVar31) / fVar28;
        fVar25 = unaff_s13;
      }
      else {
LAB_03a157bc:
        fVar32 = unaff_s10;
        fVar25 = (unaff_s10 * fVar28) / fVar31;
      }
    }
    else {
      iVar13 = FUN_039bbfb8(pfVar4,0);
      if (iVar13 == 1) {
        if (unaff_s10 / fVar31 <= unaff_s13 / fVar28) goto LAB_03a158b8;
        goto LAB_03a157bc;
      }
    }
  }
LAB_03a159a4:
  if ((((unaff_s13 <= DAT_00b550f0) || (unaff_s10 <= DAT_00b550f0)) || (fVar25 <= DAT_00b550f0)) ||
     (fVar32 <= DAT_00b550f0)) goto LAB_03a167c8;
  fStack0000000000000030 = DAT_00b550f0;
  FUN_039bc014(pfVar4,0);
  uVar15 = FUN_03ad2574(&stack0x00000208,0);
  if (((uVar15 & 1) == 0) || (unaff_x19[0x17] != 2.8026e-45)) {
    FUN_039bc028(pfVar4,0);
    uVar15 = FUN_03ad2574(&stack0x00000208,0);
    if (((uVar15 & 1) != 0) && (unaff_x19[0x16] == 2.8026e-45)) {
      fVar28 = 1.0 / fVar32;
      fVar32 = unaff_s10 * fVar28 + 0.5;
      iVar13 = -0x80000000;
      if (fVar32 != INFINITY) {
        iVar13 = (int)fVar32;
      }
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      iVar13 = FUN_03041568(iVar13,1,0);
      fVar32 = unaff_s10 / (float)iVar13;
      fVar25 = fVar28 * fVar25 * fVar32;
      goto LAB_03a15b08;
    }
  }
  else {
    fVar28 = 1.0 / fVar25;
    fVar25 = unaff_s13 * fVar28 + 0.5;
    iVar13 = -0x80000000;
    if (fVar25 != INFINITY) {
      iVar13 = (int)fVar25;
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar13 = FUN_03041568(iVar13,1,0);
    fVar25 = unaff_s13 / (float)iVar13;
    fVar32 = fVar28 * fVar32 * fVar25;
LAB_03a15b08:
    in_stack_00000038 = 0.0;
    fStack0000000000000034 = 0.0;
  }
  puVar9 = PTR_DAT_03db0ac0;
  puVar8 = PTR_DAT_03db0ab8;
  fVar28 = DAT_00b5568c;
  uVar6 = DAT_00b554f4;
  fStack0000000000000020 = unaff_s10 - fVar32;
  fStack0000000000000024 = unaff_s13 - fVar25;
  fStack0000000000000028 = 1.0 / fStack000000000000002c;
  bVar5 = false;
  uVar15 = 0;
  uVar14 = 1;
  in_stack_00000040 = unaff_s13;
  fStack0000000000000044 = unaff_s10;
  fStack0000000000000058 = fVar32;
  do {
    fVar31 = fStack0000000000000058;
    bVar12 = uVar14 == 0;
    lVar20 = 0x58;
    if (bVar12) {
      lVar20 = 0x5c;
    }
    lVar17 = 0x48;
    if (bVar12) {
      lVar17 = 0x54;
    }
    lVar19 = 0x44;
    if (bVar12) {
      lVar19 = 0x50;
    }
    lVar1 = 0x40;
    if (bVar12) {
      lVar1 = 0x4c;
    }
    uVar2 = *(uint *)((long)unaff_x19 + lVar20);
    fVar30 = *(float *)((long)unaff_x19 + lVar1);
    fStack000000000000004c = *(float *)((long)unaff_x19 + lVar19);
    iStack0000000000000048 = *(int *)((long)unaff_x19 + lVar17);
    fVar33 = 0.0;
    iVar13 = (int)uVar15;
    fVar29 = 0.0;
    uStack0000000000000050 = uVar14;
    fStack0000000000000054 = fVar30;
    switch(uVar2) {
    case 0:
      lVar20 = *unaff_x21;
      fVar29 = fVar25;
      if (!bVar5) {
        fVar29 = fVar32;
      }
      if (lVar20 == 0) goto LAB_03a168ec;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_03a168f0;
      lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
      if (lVar20 == 0) goto LAB_03a168ec;
      lVar17 = *(long *)(lVar20 + 0x10);
      lVar19 = *(long *)PTR_DAT_03db0a90;
      *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
      uVar7 = _UNK_00b55ee8;
      uVar22 = _DAT_00b55ee0;
      if (lVar17 == 0) goto LAB_03a168ec;
      uVar14 = *(uint *)(lVar20 + 0x18);
      if (uVar14 < *(uint *)(lVar17 + 0x18)) {
        lVar17 = lVar17 + (long)(int)uVar14 * 0x20;
        *(uint *)(lVar20 + 0x18) = uVar14 + 1;
        *(float *)(lVar17 + 0x28) = fVar32;
        *(float *)(lVar17 + 0x2c) = fVar25;
        *(undefined8 *)(lVar17 + 0x38) = uVar7;
        *(undefined8 *)(lVar17 + 0x30) = uVar22;
        *(float *)(lVar17 + 0x20) = fStack0000000000000034;
        *(float *)(lVar17 + 0x24) = in_stack_00000038;
      }
      else {
        fStack0000000000000170 = fStack0000000000000034;
        in_stack_00000178 = CONCAT44(fVar25,fVar32);
        in_stack_00000188 = _UNK_00b55ee8;
        in_stack_00000180 = _DAT_00b55ee0;
        fStack0000000000000174 = in_stack_00000038;
        FUN_02c61f00(lVar20,&stack0x00000170,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      break;
    case 1:
      fVar30 = fVar25;
      if (iVar13 != 1) {
        fVar30 = fVar32;
        unaff_s13 = unaff_s10;
      }
      iVar18 = -0x80000000;
      if (unaff_s13 / fVar30 != INFINITY) {
        iVar18 = (int)(unaff_s13 / fVar30);
      }
      fVar29 = fVar33;
      if (-1 < iVar18) {
        lVar20 = *unaff_x21;
        if (lVar20 == 0) goto LAB_03a168ec;
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_03a168f0;
        lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_03a168ec;
        lVar17 = *(long *)(lVar20 + 0x10);
        lVar19 = *(long *)PTR_DAT_03db0a90;
        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
        uVar7 = _UNK_00b55ee8;
        uVar22 = _DAT_00b55ee0;
        if (lVar17 == 0) goto LAB_03a168ec;
        uVar14 = *(uint *)(lVar20 + 0x18);
        if (uVar14 < *(uint *)(lVar17 + 0x18)) {
          lVar17 = lVar17 + (long)(int)uVar14 * 0x20;
          *(uint *)(lVar20 + 0x18) = uVar14 + 1;
          *(float *)(lVar17 + 0x28) = fStack0000000000000058;
          *(float *)(lVar17 + 0x2c) = fVar25;
          *(undefined8 *)(lVar17 + 0x38) = uVar7;
          *(undefined8 *)(lVar17 + 0x30) = uVar22;
          *(float *)(lVar17 + 0x20) = fStack0000000000000034;
          *(float *)(lVar17 + 0x24) = in_stack_00000038;
        }
        else {
          fStack0000000000000170 = fStack0000000000000034;
          in_stack_00000178 = CONCAT44(fVar25,fStack0000000000000058);
          in_stack_00000188 = _UNK_00b55ee8;
          in_stack_00000180 = _DAT_00b55ee0;
          fStack0000000000000174 = in_stack_00000038;
          FUN_02c61f00(lVar20,&stack0x00000170,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        fVar33 = fStack0000000000000058;
        fVar30 = fStack0000000000000044;
        fVar32 = in_stack_00000040;
        fVar29 = fVar25;
        if (iVar13 != 1) {
          fVar29 = fVar31;
        }
        if (1 < iVar18) {
          lVar20 = *unaff_x21;
          fVar31 = fStack0000000000000024;
          fVar34 = fStack0000000000000034;
          if (iVar13 != 1) {
            fVar31 = in_stack_00000038;
            fVar34 = fStack0000000000000020;
          }
          if (lVar20 == 0) goto LAB_03a168ec;
          if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_03a168f0;
          lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
          if (lVar20 == 0) goto LAB_03a168ec;
          lVar17 = *(long *)(lVar20 + 0x10);
          lVar19 = *(long *)PTR_DAT_03db0a90;
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
          uVar7 = _UNK_00b55ee8;
          uVar22 = _DAT_00b55ee0;
          if (lVar17 == 0) goto LAB_03a168ec;
          uVar14 = *(uint *)(lVar20 + 0x18);
          if (uVar14 < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)uVar14 * 0x20;
            *(uint *)(lVar20 + 0x18) = uVar14 + 1;
            *(float *)(lVar17 + 0x20) = fVar34;
            *(float *)(lVar17 + 0x24) = fVar31;
            *(float *)(lVar17 + 0x28) = fStack0000000000000058;
            *(float *)(lVar17 + 0x2c) = fVar25;
            *(undefined8 *)(lVar17 + 0x38) = uVar7;
            *(undefined8 *)(lVar17 + 0x30) = uVar22;
          }
          else {
            in_stack_00000178 = CONCAT44(fVar25,fStack0000000000000058);
            in_stack_00000188 = _UNK_00b55ee8;
            in_stack_00000180 = _DAT_00b55ee0;
            fStack0000000000000170 = fVar34;
            fStack0000000000000174 = fVar31;
            FUN_02c61f00(lVar20,&stack0x00000170,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          fVar29 = fVar32;
          if (iVar13 != 1) {
            fVar29 = fVar30;
          }
          if (2 < iVar18) {
            fVar26 = fVar25;
            if (iVar13 != 1) {
              fVar32 = fVar30;
              fVar26 = fVar33;
            }
            fVar32 = (fVar32 - fVar26 * (float)iVar18) / (float)(iVar18 + -1);
            iVar24 = 0;
            do {
              iVar24 = iVar24 + 1;
              lVar20 = *unaff_x21;
              fVar30 = (fVar25 + fVar32) * (float)iVar24;
              if (iVar13 != 1) {
                fVar30 = fVar31;
                fVar34 = (fVar33 + fVar32) * (float)iVar24;
              }
              fVar31 = fVar30;
              if (lVar20 == 0) goto LAB_03a168ec;
              if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_03a168f0;
              lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
              if (lVar20 == 0) goto LAB_03a168ec;
              lVar17 = *(long *)(lVar20 + 0x10);
              lVar19 = *(long *)PTR_DAT_03db0a90;
              *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
              uVar7 = _UNK_00b55ee8;
              uVar22 = _DAT_00b55ee0;
              if (lVar17 == 0) goto LAB_03a168ec;
              uVar14 = *(uint *)(lVar20 + 0x18);
              if (uVar14 < *(uint *)(lVar17 + 0x18)) {
                lVar17 = lVar17 + (long)(int)uVar14 * 0x20;
                *(uint *)(lVar20 + 0x18) = uVar14 + 1;
                *(float *)(lVar17 + 0x20) = fVar34;
                *(float *)(lVar17 + 0x24) = fVar31;
                *(float *)(lVar17 + 0x28) = fVar33;
                *(float *)(lVar17 + 0x2c) = fVar25;
                *(undefined8 *)(lVar17 + 0x38) = uVar7;
                *(undefined8 *)(lVar17 + 0x30) = uVar22;
              }
              else {
                in_stack_00000178 = CONCAT44(fVar25,fVar33);
                in_stack_00000188 = _UNK_00b55ee8;
                in_stack_00000180 = _DAT_00b55ee0;
                fStack0000000000000170 = fVar34;
                fStack0000000000000174 = fVar31;
                FUN_02c61f00(lVar20,&stack0x00000170,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            } while (iVar24 < iVar18 + -2);
          }
        }
      }
      break;
    case 2:
      fVar31 = fVar25;
      if (iVar13 != 1) {
        fVar31 = fVar32;
      }
      fVar29 = unaff_s13;
      if (iVar13 != 1) {
        fVar29 = unaff_s10;
      }
      fVar31 = (fVar29 + fVar31 * 0.5) / fVar31;
      iVar18 = -0x80000000;
      if (fVar31 != INFINITY) {
        iVar18 = (int)fVar31;
      }
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar14 = FUN_03041568(iVar18,1,0);
      iVar18 = 1;
      if ((uVar14 & 1) != 0) {
        iVar18 = 2;
      }
      if (fVar30 != 0.0) {
        iVar18 = 1;
      }
      if (iVar13 != 1) {
        unaff_s13 = unaff_s10;
      }
      fVar30 = unaff_s13 / (float)(int)uVar14;
      fVar31 = fVar30;
      if (iVar13 != 1) {
        fVar31 = fVar25;
        fVar32 = fVar30;
      }
      fVar29 = fVar33;
      if (0 < (int)(uVar14 + iVar18)) {
        iVar24 = 0;
        fVar33 = fVar31;
        if (iVar13 != 1) {
          fVar33 = fVar32;
        }
        fVar29 = 0.0;
        fVar26 = in_stack_00000038;
        fVar34 = fStack0000000000000034;
        do {
          lVar20 = *unaff_x21;
          fVar11 = fVar30 * (float)iVar24;
          if (iVar13 != 1) {
            fVar11 = fVar26;
            fVar34 = fVar30 * (float)iVar24;
          }
          fVar26 = fVar11;
          if (lVar20 == 0) goto LAB_03a168ec;
          if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_03a168f0;
          lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
          if (lVar20 == 0) goto LAB_03a168ec;
          lVar17 = *(long *)(lVar20 + 0x10);
          lVar19 = *(long *)PTR_DAT_03db0a90;
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
          uVar7 = _UNK_00b55ee8;
          uVar22 = _DAT_00b55ee0;
          if (lVar17 == 0) goto LAB_03a168ec;
          uVar3 = *(uint *)(lVar20 + 0x18);
          if (uVar3 < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)uVar3 * 0x20;
            *(uint *)(lVar20 + 0x18) = uVar3 + 1;
            *(float *)(lVar17 + 0x20) = fVar34;
            *(float *)(lVar17 + 0x24) = fVar26;
            *(float *)(lVar17 + 0x28) = fVar32;
            *(float *)(lVar17 + 0x2c) = fVar31;
            *(undefined8 *)(lVar17 + 0x38) = uVar7;
            *(undefined8 *)(lVar17 + 0x30) = uVar22;
          }
          else {
            in_stack_00000178 = CONCAT44(fVar31,fVar32);
            in_stack_00000188 = _UNK_00b55ee8;
            in_stack_00000180 = _DAT_00b55ee0;
            fStack0000000000000170 = fVar34;
            fStack0000000000000174 = fVar26;
            FUN_02c61f00(lVar20,&stack0x00000170,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          iVar24 = iVar24 + 1;
          fVar29 = fVar29 + fVar33;
        } while (uVar14 + iVar18 != iVar24);
      }
      break;
    case 3:
      fVar31 = fVar25;
      if (iVar13 != 1) {
        fVar31 = fVar32;
        unaff_s13 = unaff_s10;
      }
      fVar31 = (fStack0000000000000028 + unaff_s13) / fVar31;
      uVar14 = 0x80000000;
      if (fVar31 != INFINITY) {
        uVar14 = (int)fVar31;
      }
      iVar18 = 1;
      if (fVar30 != 0.0 || (uVar14 & 1) != 0) {
        iVar18 = 2;
      }
      fVar29 = fVar33;
      if (0 < (int)(uVar14 + iVar18)) {
        iVar24 = 0;
        fVar32 = fVar25;
        if (iVar13 != 1) {
          fVar32 = fStack0000000000000058;
        }
        fVar29 = 0.0;
        fVar30 = fStack0000000000000034;
        fVar31 = in_stack_00000038;
        do {
          lVar20 = *unaff_x21;
          fVar33 = fVar25 * (float)iVar24;
          if (iVar13 != 1) {
            fVar30 = fStack0000000000000058 * (float)iVar24;
            fVar33 = fVar31;
          }
          fVar31 = fVar33;
          if (lVar20 == 0) goto LAB_03a168ec;
          if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_03a168f0;
          lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
          if (lVar20 == 0) goto LAB_03a168ec;
          lVar17 = *(long *)(lVar20 + 0x10);
          lVar19 = *(long *)PTR_DAT_03db0a90;
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
          uVar7 = _UNK_00b55ee8;
          uVar22 = _DAT_00b55ee0;
          if (lVar17 == 0) goto LAB_03a168ec;
          uVar3 = *(uint *)(lVar20 + 0x18);
          if (uVar3 < *(uint *)(lVar17 + 0x18)) {
            lVar17 = lVar17 + (long)(int)uVar3 * 0x20;
            *(uint *)(lVar20 + 0x18) = uVar3 + 1;
            *(float *)(lVar17 + 0x20) = fVar30;
            *(float *)(lVar17 + 0x24) = fVar31;
            *(float *)(lVar17 + 0x28) = fStack0000000000000058;
            *(float *)(lVar17 + 0x2c) = fVar25;
            *(undefined8 *)(lVar17 + 0x38) = uVar7;
            *(undefined8 *)(lVar17 + 0x30) = uVar22;
          }
          else {
            in_stack_00000178 = CONCAT44(fVar25,fStack0000000000000058);
            in_stack_00000188 = _UNK_00b55ee8;
            in_stack_00000180 = _DAT_00b55ee0;
            fStack0000000000000170 = fVar30;
            fStack0000000000000174 = fVar31;
            FUN_02c61f00(lVar20,&stack0x00000170,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          iVar24 = iVar24 + 1;
          fVar29 = fVar29 + fVar32;
        } while (uVar14 + iVar18 != iVar24);
      }
    }
    fVar32 = fStack0000000000000058;
    unaff_s10 = fStack0000000000000044;
    unaff_s13 = in_stack_00000040;
    if (fStack0000000000000054 == 0.0) {
      fVar31 = in_stack_00000040;
      if (!bVar5) {
        fVar31 = fStack0000000000000044;
      }
      fVar31 = (fVar31 - fVar29) * 0.5;
FUN_03a162d0:
      uVar22 = *(undefined8 *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar16 = FUN_03922f24(uVar22,0,0);
      if ((uVar16 & 1) != 0) {
        uVar22 = *(undefined8 *)(unaff_x19 + 0x22);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar16 = FUN_03922f24(uVar22,0,0);
        if ((uVar16 & 1) != 0) {
          fVar30 = fVar25;
          if (!bVar5) {
            fVar30 = fVar32;
          }
          fVar30 = fVar30 * fStack000000000000002c;
          dVar27 = modf((double)fVar30,(double *)&stack0x00000170);
          if (0.0 <= fVar30) {
            if (dVar27 == 0.5) {
              fVar29 = 1.0;
              goto LAB_03a16380;
            }
            fVar33 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar27 == -0.5) {
            fVar29 = -1.0;
LAB_03a16380:
            fVar33 = (float)(double)CONCAT44(fStack0000000000000174,fStack0000000000000170);
            if (((long)(double)CONCAT44(fStack0000000000000174,fStack0000000000000170) & 1U) != 0) {
              fVar33 = fVar33 + fVar29;
            }
          }
          else {
            fVar33 = (float)(int)(fVar30 + -0.5);
          }
          if (ABS(fVar33 - fVar30) < fVar28) {
            fVar31 = (float)FUN_039ba41c(fVar31,fStack000000000000002c,uVar6,0);
          }
        }
      }
LAB_03a163dc:
      if ((uVar2 & 0xfffffffe) == 2) {
        fVar30 = fVar25;
        if (!bVar5) {
          fVar30 = fVar32;
        }
        if (fStack0000000000000030 < fVar30) {
          if (fVar31 < -fVar30) {
            fVar29 = -2.1474836e+09;
            if (-fVar31 / fVar30 != INFINITY) {
              fVar29 = (float)(int)(-fVar31 / fVar30);
            }
            fVar31 = fVar31 + fVar30 * fVar29;
          }
          if (0.0 < fVar31) {
            fVar29 = -2.1474836e+09;
            if (fVar31 / fVar30 != INFINITY) {
              fVar29 = (float)((int)(fVar31 / fVar30) + 1);
            }
            fVar31 = fVar31 - fVar30 * fVar29;
          }
        }
      }
    }
    else {
      fVar31 = 0.0;
      if (uVar2 != 1) {
        if (iStack0000000000000048 == 0) {
          bVar12 = false;
          fVar31 = fStack000000000000004c;
        }
        else if (iStack0000000000000048 == 1) {
          pfVar4 = (float *)((long)&stack0x00000020 + 4);
          if (!bVar5) {
            pfVar4 = &stack0x00000020;
          }
          bVar12 = true;
          fVar31 = (fStack000000000000004c * *pfVar4) / 100.0;
        }
        else {
          bVar12 = false;
          fVar31 = 0.0;
        }
        if ((fStack0000000000000054 == 5.60519e-45) || (fStack0000000000000054 == 2.8026e-45)) {
          fVar30 = in_stack_00000040;
          if (!bVar5) {
            fVar30 = fStack0000000000000044;
          }
          fVar31 = (fVar30 - fVar29) - fVar31;
        }
        if (bVar12) goto FUN_03a162d0;
        goto LAB_03a163dc;
      }
    }
    lVar20 = *unaff_x21;
    if (lVar20 == 0) goto LAB_03a168ec;
    iVar13 = 0;
    while( true ) {
      fVar30 = fStack000000000000003c;
      puVar10 = PTR_DAT_03db0aa0;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_03a168f0;
      lVar17 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
      if (lVar17 == 0) goto LAB_03a168ec;
      if (*(int *)(lVar17 + 0x18) <= iVar13) break;
      FUN_02c61bac(&stack0x00000170,lVar17,iVar13,*(undefined8 *)puVar8);
      lVar20 = *unaff_x21;
      fVar30 = fStack0000000000000170;
      fVar29 = fVar31 + fStack0000000000000174;
      if (!bVar5) {
        fVar30 = fVar31 + fStack0000000000000170;
        fVar29 = fStack0000000000000174;
      }
      if (lVar20 == 0) goto LAB_03a168ec;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_03a168f0;
      lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
      if (lVar20 == 0) goto LAB_03a168ec;
      fStack0000000000000170 = fVar30;
      fStack0000000000000174 = fVar29;
      FUN_02c61c0c(lVar20,iVar13,&stack0x00000170,*(undefined8 *)puVar9);
      lVar20 = *unaff_x21;
      iVar13 = iVar13 + 1;
      if (lVar20 == 0) goto LAB_03a168ec;
    }
    uVar14 = 0;
    bVar5 = true;
    uVar15 = 1;
  } while ((uStack0000000000000050 & 1) != 0);
  if (*(uint *)(lVar20 + 0x18) < 2) {
LAB_03a168f0:
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  if (*(long *)(lVar20 + 0x28) == 0) {
LAB_03a168ec:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  FUN_02c62a64(&stack0x00000170,*(long *)(lVar20 + 0x28),*(undefined8 *)PTR_DAT_03db0aa0);
  uVar7 = in_stack_00000198;
  uVar22 = in_stack_00000190;
  puVar9 = PTR_DAT_03db0a78;
  puVar8 = PTR_DAT_03db0a70;
  in_stack_000001d0 = CONCAT44(fStack0000000000000174,fStack0000000000000170);
  fStack0000000000000058 = unaff_s10 + fStack000000000000005c;
  in_stack_000001d8 = in_stack_00000178;
  in_stack_000001e8 = in_stack_00000188;
  in_stack_000001e0 = in_stack_00000180;
  fVar30 = unaff_s13 + fVar30;
  fStack0000000000000054 = fVar30;
  while (uVar15 = FUN_02757d4c(&stack0x000001d0,*(undefined8 *)puVar9), (uVar15 & 1) != 0) {
    if (fStack000000000000003c <= in_stack_000001e0._4_4_) {
      fVar28 = (float)((ulong)uVar22 >> 0x20);
      fVar31 = (float)((ulong)uVar7 >> 0x20);
      fVar32 = in_stack_000001e8._4_4_;
      fVar25 = in_stack_000001e0._4_4_;
    }
    else {
      fVar25 = fStack000000000000003c - in_stack_000001e0._4_4_;
      fVar32 = in_stack_000001e8._4_4_ - fVar25;
      fVar31 = fVar32 / (fVar25 + fVar32);
      fVar28 = fVar25 / (fVar25 + fVar32) + 0.0;
      fVar25 = fStack000000000000003c;
    }
    if (fVar30 < fVar32 + fVar25) {
      fVar30 = (fVar32 + fVar25) - fVar30;
      fVar32 = fVar32 - fVar30;
      fVar31 = (fVar31 * fVar32) / (fVar30 + fVar32);
      fVar28 = (fVar28 + fVar31) - fVar31;
    }
    uVar23 = *(undefined8 *)(unaff_x19 + 0x22);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar15 = FUN_03922f24(uVar23,0,0);
    lVar20 = *unaff_x21;
    fVar29 = fVar28 + ((1.0 - (fVar31 + fVar28)) - fVar28);
    if ((uVar15 & 1) == 0) {
      fVar29 = fVar28;
    }
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(int *)(lVar20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    if (*(long *)(lVar20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_02c62a64(&stack0x00000170,*(long *)(lVar20 + 0x20),*(undefined8 *)puVar10);
    in_stack_000001a0 = CONCAT44(fStack0000000000000174,fStack0000000000000170);
    in_stack_000001a8 = in_stack_00000178;
    _fStack00000000000001b8 = in_stack_00000188;
    _fStack00000000000001b0 = in_stack_00000180;
    _fStack00000000000001c8 = in_stack_00000198;
    _fStack00000000000001c0 = in_stack_00000190;
    while (uVar15 = FUN_02757d4c(&stack0x000001a0,*(undefined8 *)puVar9),
          fVar30 = fStack0000000000000054, (uVar15 & 1) != 0) {
      if (fStack000000000000005c <= fStack00000000000001b0) {
        fVar30 = fStack00000000000001c0;
        fVar33 = fStack00000000000001c8;
        fVar34 = fStack00000000000001b8;
        fVar28 = fStack00000000000001b0;
      }
      else {
        fVar28 = fStack000000000000005c - fStack00000000000001b0;
        fVar34 = fStack00000000000001b8 - fVar28;
        fVar30 = fVar28 / (fVar28 + fVar34) + 0.0;
        fVar33 = (fVar34 * fStack00000000000001c8) / (fVar28 + fVar34);
        fVar28 = fStack000000000000005c;
      }
      if (fStack0000000000000058 < fVar34 + fVar28) {
        fVar26 = (fVar34 + fVar28) - fStack0000000000000058;
        fVar34 = fVar34 - fVar26;
        fVar33 = (fVar33 * fVar34) / (fVar26 + fVar34);
      }
      memcpy(&stack0x00000060,unaff_x19,0x110);
      FUN_03a169cc(fVar28,fVar25,fVar34,fVar32,fVar30,fVar29,fVar33,fVar31);
    }
    FUN_02757d48(&stack0x000001a0,*(undefined8 *)puVar8);
  }
  FUN_02757d48(&stack0x000001d0,*(undefined8 *)puVar8);
LAB_03a167c8:
  if (*(long *)(unaff_x26 + 0x28) != in_stack_00000248) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


