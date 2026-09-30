/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<>c__DisplayClass28_0$$<ClearGroupPresence>b__0
ENTRY_POINT: 07763354
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass28_0__<ClearGroupPresence>b__0
          (undefined1 param_1 [16],float param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  float *pfVar26;
  long lVar27;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long lVar28;
  undefined8 unaff_x26;
  long unaff_x27;
  ulong uVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  undefined8 in_stack_00000008;
  int in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  
  if (param_3 == 0) {
LAB_07764104:
    uVar17 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar17,0);
  }
  if (*(uint *)(unaff_x27 + 0x18) < 7) goto LAB_07764100;
  *(undefined8 *)(unaff_x27 + 0x50) = unaff_x26;
  thunk_FUN_044bb4b4();
  uVar17 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d60);
  if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
  }
  FUN_094c652c(uVar17,0);
  plVar18 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f32ca0,*(undefined4 *)(unaff_x23 + 0x18));
  if (*(char *)(in_stack_00000018 + 0x14) != '\0') {
    unaff_w22 = FUN_07760ae0(unaff_w22);
    unaff_w21 = FUN_07760ae0(unaff_w21);
  }
  if (plVar18 == (long *)0x0) goto LAB_077640fc;
  if (0 < (int)plVar18[3]) {
    lVar27 = 0;
    uVar29 = 0;
    do {
      puVar9 = PTR_DAT_09f32cf8;
      fVar30 = (float)FUN_05d0cfbc(unaff_x23,uVar29 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32cf8);
      iVar16 = -0x80000000;
      if (fVar30 != INFINITY) {
        iVar16 = (int)fVar30;
      }
      FUN_05d0cfbc(unaff_x23,uVar29 & 0xffffffff,*(undefined8 *)puVar9);
      puVar9 = PTR_DAT_09f32c78;
      iVar15 = -0x80000000;
      if (param_2 != INFINITY) {
        iVar15 = (int)param_2;
      }
      if (in_stack_00000020 == 0) goto LAB_077640fc;
      uVar19 = FUN_05a28f70(in_stack_00000020,uVar29 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32c78);
      iVar14 = unaff_w22 - ((uint)(uVar19 >> 0x1f) & 0xfffffffe);
      if (iVar14 <= iVar16) {
        iVar16 = iVar14;
      }
      iVar14 = FUN_05a28f70(in_stack_00000020,uVar29 & 0xffffffff,*(undefined8 *)puVar9);
      iVar14 = unaff_w21 + iVar14 * -2;
      if (iVar14 <= iVar15) {
        iVar15 = iVar14;
      }
      uVar19 = FUN_05a28f70(in_stack_00000020,uVar29 & 0xffffffff,*(undefined8 *)puVar9);
      lVar20 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
      FUN_07a80df4(lVar20,0);
      iVar16 = ((uint)(uVar19 >> 0x1f) & 0xfffffffe) + iVar16;
      if (iVar16 <= in_stack_00000008._4_4_) {
        iVar16 = in_stack_00000008._4_4_;
      }
      iVar15 = iVar15 + (int)uVar19 * 2;
      *(int *)(lVar20 + 0x10) = (int)uVar29;
      *(int *)(lVar20 + 0x14) = iVar16;
      if (iVar15 <= in_stack_00000010) {
        iVar15 = in_stack_00000010;
      }
      *(int *)(lVar20 + 0x18) = iVar15;
      lVar21 = thunk_FUN_04485110(lVar20,*(undefined8 *)(*plVar18 + 0x40));
      if (lVar21 == 0) goto LAB_07764104;
      if (*(uint *)(plVar18 + 3) <= uVar29) goto LAB_07764100;
      plVar18[uVar29 + 4] = lVar20;
      thunk_FUN_044bb4b4((long)plVar18 + lVar27 + 0x20,lVar20);
      uVar29 = uVar29 + 1;
      lVar27 = lVar27 + 8;
    } while ((long)uVar29 < (long)(int)plVar18[3]);
  }
  puVar12 = PTR_DAT_09f32d20;
  puVar10 = PTR_DAT_09f32c98;
  puVar9 = PTR_DAT_09f32c80;
  iVar16 = unaff_w22;
  iVar15 = unaff_w21;
  if (*(char *)(in_stack_00000018 + 0x14) != '\0') {
    iVar15 = FUN_07760ae0(unaff_w21);
    iVar16 = FUN_07760ae0(unaff_w22);
  }
  puVar11 = PTR_DAT_09f32ca8;
  iVar14 = 4;
  if (iVar16 != 0) {
    iVar14 = iVar16;
  }
  iVar16 = 4;
  if (iVar15 != 0) {
    iVar16 = iVar15;
  }
  lVar27 = thunk_FUN_0448520c(*(undefined8 *)puVar12);
  FUN_07a80df4(lVar27,0);
  uVar17 = thunk_FUN_0448520c(*(undefined8 *)puVar10);
  FUN_07a80df4(uVar17,0);
  FUN_04b03f08(plVar18,uVar17,*(undefined8 *)puVar9);
  uVar29 = FUN_07762798(in_stack_00000018,plVar18,iVar14,iVar16,unaff_w22,unaff_w21,lVar27);
  if ((uVar29 & 1) != 0) {
    *(long *)(in_stack_00000018 + 0x18) = lVar27;
    thunk_FUN_044bb4b4((long *)(in_stack_00000018 + 0x18),lVar27);
  }
  uVar17 = thunk_FUN_0448520c(*(undefined8 *)puVar11);
  FUN_07a80df4(uVar17,0);
  FUN_04b03f08(plVar18,uVar17,*(undefined8 *)puVar9);
  uVar29 = FUN_07762798(in_stack_00000018,plVar18,iVar14,iVar16,unaff_w22,unaff_w21,lVar27);
  if ((uVar29 & 1) != 0) {
    if (lVar27 == 0) goto LAB_077640fc;
    plVar22 = (long *)(in_stack_00000018 + 0x18);
    if (*plVar22 == 0) goto LAB_077640fc;
    if (*(float *)(lVar27 + 0x34) < *(float *)(*plVar22 + 0x34)) {
      *plVar22 = lVar27;
      thunk_FUN_044bb4b4(plVar22,lVar27);
    }
  }
  uVar17 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c90);
  FUN_07a80df4(uVar17,0);
  FUN_04b03f08(plVar18,uVar17,*(undefined8 *)puVar9);
  uVar29 = FUN_07762798(in_stack_00000018,plVar18,iVar14,iVar16,unaff_w22,unaff_w21,lVar27);
  if ((uVar29 & 1) != 0) {
    if (lVar27 == 0) goto LAB_077640fc;
    plVar18 = (long *)(in_stack_00000018 + 0x18);
    if (*plVar18 == 0) goto LAB_077640fc;
    if (*(float *)(lVar27 + 0x34) < *(float *)(*plVar18 + 0x34)) {
      *plVar18 = lVar27;
      thunk_FUN_044bb4b4(plVar18,lVar27);
    }
  }
  if (*(long *)(in_stack_00000018 + 0x18) == 0) {
    return 0;
  }
  if (3 < *(int *)(in_stack_00000018 + 0x10)) {
    lVar27 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
    if (lVar27 == 0) goto LAB_077640fc;
    if (*(int *)(lVar27 + 0x18) == 0) goto LAB_07764100;
    *(undefined8 *)(lVar27 + 0x20) = *(undefined8 *)PTR_DAT_09f32d78;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar17 = FUN_07a3b850(*(long *)(in_stack_00000018 + 0x18) + 0x10,0);
    if (*(uint *)(lVar27 + 0x18) < 2) {
LAB_07764100:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(lVar27 + 0x28) = uVar17;
    thunk_FUN_044bb4b4((undefined8 *)(lVar27 + 0x28),uVar17);
    if (*(uint *)(lVar27 + 0x18) < 3) goto LAB_07764100;
    *(undefined8 *)(lVar27 + 0x30) = *(undefined8 *)PTR_DAT_09f307b8;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar17 = FUN_07a3b850(*(long *)(in_stack_00000018 + 0x18) + 0x14,0);
    if (*(uint *)(lVar27 + 0x18) < 4) goto LAB_07764100;
    *(undefined8 *)(lVar27 + 0x38) = uVar17;
    thunk_FUN_044bb4b4((undefined8 *)(lVar27 + 0x38),uVar17);
    if (*(uint *)(lVar27 + 0x18) < 5) goto LAB_07764100;
    *(undefined8 *)(lVar27 + 0x40) = *(undefined8 *)PTR_DAT_09f32d50;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar17 = FUN_07a5081c(*(long *)(in_stack_00000018 + 0x18) + 0x2c,0);
    if (*(uint *)(lVar27 + 0x18) < 6) goto LAB_07764100;
    *(undefined8 *)(lVar27 + 0x48) = uVar17;
    thunk_FUN_044bb4b4((undefined8 *)(lVar27 + 0x48),uVar17);
    if (*(uint *)(lVar27 + 0x18) < 7) goto LAB_07764100;
    *(undefined8 *)(lVar27 + 0x50) = *(undefined8 *)PTR_DAT_09f32d58;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar17 = FUN_07a5081c(*(long *)(in_stack_00000018 + 0x18) + 0x30,0);
    if (*(uint *)(lVar27 + 0x18) < 8) goto LAB_07764100;
    *(undefined8 *)(lVar27 + 0x58) = uVar17;
    thunk_FUN_044bb4b4((undefined8 *)(lVar27 + 0x58),uVar17);
    if (*(uint *)(lVar27 + 0x18) < 9) goto LAB_07764100;
    *(undefined8 *)(lVar27 + 0x60) = *(undefined8 *)PTR_DAT_09f32d70;
    thunk_FUN_044bb4b4();
    lVar20 = *(long *)(in_stack_00000018 + 0x18);
    if (lVar20 == 0) goto LAB_077640fc;
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar17 = FUN_079a04dc(lVar20 + 0x28,0);
    if (*(uint *)(lVar27 + 0x18) < 10) goto LAB_07764100;
    *(undefined8 *)(lVar27 + 0x68) = uVar17;
    thunk_FUN_044bb4b4();
    uVar17 = FUN_078b57fc(lVar27,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar17,0);
  }
  puVar13 = PTR_DAT_09f32d48;
  puVar11 = PTR_DAT_09f32d38;
  puVar12 = PTR_DAT_09f32d10;
  puVar10 = PTR_DAT_09f32ce8;
  puVar9 = PTR_DAT_09f32cd8;
  lVar27 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d08);
  FUN_05bad610(lVar27,*(undefined8 *)puVar10);
  lVar20 = thunk_FUN_0448520c(*(undefined8 *)puVar12);
  FUN_05bad610(lVar20,*(undefined8 *)puVar9);
  lVar21 = thunk_FUN_0448520c(*(undefined8 *)puVar13);
  FUN_06761dfc(lVar21,*(undefined8 *)puVar11);
  puVar9 = PTR_DAT_09f32d30;
  if (*(long *)(in_stack_00000018 + 0x18) != 0) {
    lVar28 = *(long *)(*(long *)(in_stack_00000018 + 0x18) + 0x20);
    if (lVar28 != 0) {
      if (lVar21 == 0) goto LAB_077640fc;
      do {
        FUN_067624d4(lVar21,lVar28,*(undefined8 *)puVar9);
        lVar28 = *(long *)(lVar28 + 0x18);
        if (lVar28 == 0) goto LAB_077640fc;
        if (*(int *)(lVar28 + 0x18) == 0) goto LAB_07764100;
        lVar28 = *(long *)(lVar28 + 0x20);
      } while (lVar28 != 0);
    }
    puVar12 = PTR_DAT_09f32d30;
    puVar10 = PTR_DAT_09f32d28;
    puVar9 = PTR_DAT_09f32cc0;
    if (lVar21 != 0) {
      iVar16 = *(int *)(lVar21 + 0x18);
      fVar30 = DAT_01c7661c;
      puVar8 = (undefined8 *)PTR_DAT_09f32ba8;
      while (DAT_01c7661c = fVar30, PTR_DAT_09f32ba8 = (undefined *)puVar8, 0 < iVar16) {
        lVar28 = FUN_067623e4(lVar21,*(undefined8 *)puVar10);
        if (lVar28 == 0) goto LAB_077640fc;
        if (*(int *)(lVar28 + 0x10) == 1) {
          if (lVar20 == 0) goto LAB_077640fc;
          lVar23 = *(long *)(lVar20 + 0x10);
          lVar25 = *(long *)puVar9;
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
          if (lVar23 == 0) goto LAB_077640fc;
          uVar24 = *(uint *)(lVar20 + 0x18);
          if (uVar24 < *(uint *)(lVar23 + 0x18)) {
            *(uint *)(lVar20 + 0x18) = uVar24 + 1;
            plVar18 = (long *)(lVar23 + (long)(int)uVar24 * 8 + 0x20);
            *plVar18 = lVar28;
            thunk_FUN_044bb4b4(plVar18,lVar28);
          }
          else {
            FUN_05bade44(lVar20,lVar28,
                         *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar28 = *(long *)(lVar28 + 0x18);
        if (lVar28 == 0) goto LAB_077640fc;
        if (*(uint *)(lVar28 + 0x18) < 2) goto LAB_07764100;
        for (lVar28 = *(long *)(lVar28 + 0x28); lVar28 != 0; lVar28 = *(long *)(lVar28 + 0x20)) {
          FUN_067624d4(lVar21,lVar28,*(undefined8 *)puVar12);
          lVar28 = *(long *)(lVar28 + 0x18);
          if (lVar28 == 0) goto LAB_077640fc;
          if (*(int *)(lVar28 + 0x18) == 0) goto LAB_07764100;
        }
        fVar30 = DAT_01c7661c;
        puVar8 = (undefined8 *)PTR_DAT_09f32ba8;
        iVar16 = *(int *)(lVar21 + 0x18);
      }
      if (lVar20 != 0) {
        if (0 < *(int *)(lVar20 + 0x18)) {
          iVar16 = 0;
          do {
            lVar21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
            FUN_05bad610(lVar21,*(undefined8 *)PTR_DAT_09f32ce0);
            uVar17 = FUN_05badb74(lVar20,iVar16,*(undefined8 *)PTR_DAT_09f32d00);
            FUN_077617f0(uVar17,lVar21);
            if (lVar21 == 0) goto LAB_077640fc;
            lVar28 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar21 + 0x18));
            lVar23 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar21 + 0x18));
            if (0 < *(int *)(lVar21 + 0x18)) {
              uVar29 = 0;
              pfVar26 = (float *)(lVar28 + 0x2c);
              do {
                lVar25 = FUN_05badb74(lVar21,uVar29 & 0xffffffff,*puVar8);
                if (lVar25 == 0) goto LAB_077640fc;
                iVar15 = *(int *)(lVar25 + 0x1c);
                lVar25 = FUN_05badb74(lVar20,iVar16,*(undefined8 *)PTR_DAT_09f32d00);
                if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_077640fc;
                iVar14 = *(int *)(*(long *)(lVar25 + 0x20) + 0x10);
                lVar25 = FUN_05badb74(lVar21,uVar29 & 0xffffffff,*puVar8);
                if (lVar25 == 0) goto LAB_077640fc;
                iVar6 = *(int *)(lVar25 + 0x20);
                lVar25 = FUN_05badb74(lVar21,uVar29 & 0xffffffff,*puVar8);
                if (lVar25 == 0) goto LAB_077640fc;
                iVar7 = *(int *)(lVar25 + 0x14);
                lVar25 = FUN_05badb74(lVar21,uVar29 & 0xffffffff,*puVar8);
                if ((lVar25 == 0) || (lVar28 == 0)) goto LAB_077640fc;
                if (*(uint *)(lVar28 + 0x18) <= uVar29) goto LAB_07764100;
                iVar32 = *(int *)(lVar25 + 0x18);
                pfVar26[-3] = (float)(iVar15 - iVar14);
                pfVar26[-2] = (float)iVar6;
                pfVar26[-1] = (float)iVar7;
                *pfVar26 = (float)iVar32;
                lVar25 = FUN_05badb74(lVar21,uVar29 & 0xffffffff,*puVar8);
                if ((lVar25 == 0) || (lVar23 == 0)) goto LAB_077640fc;
                if (*(uint *)(lVar23 + 0x18) <= uVar29) goto LAB_07764100;
                pfVar26 = pfVar26 + 4;
                *(undefined4 *)(lVar23 + 0x20 + uVar29 * 4) = *(undefined4 *)(lVar25 + 0x10);
                uVar29 = uVar29 + 1;
              } while ((long)uVar29 < (long)*(int *)(lVar21 + 0x18));
            }
            if (in_stack_00000020 == 0) goto LAB_077640fc;
            uVar17 = FUN_05a2ad3c(in_stack_00000020,*(undefined8 *)PTR_DAT_09f32cc8);
            lVar21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
            FUN_07a80df4(lVar21,0);
            *(undefined8 *)(lVar21 + 0x28) = uVar17;
            thunk_FUN_044bb4b4((undefined8 *)(lVar21 + 0x28),uVar17);
            puVar9 = PTR_DAT_09f32d00;
            uVar17 = FUN_05badb74(lVar20,iVar16,*(undefined8 *)PTR_DAT_09f32d00);
            puVar1 = (uint *)(lVar21 + 0x18);
            puVar2 = (uint *)(lVar21 + 0x1c);
            FUN_07762688(in_stack_00000018,uVar17,puVar1,puVar2);
            iVar15 = *(int *)(lVar21 + 0x18);
            lVar25 = FUN_05badb74(lVar20,iVar16,*(undefined8 *)puVar9);
            if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_077640fc;
            *puVar1 = iVar15 - *(int *)(*(long *)(lVar25 + 0x20) + 0x10);
            lVar25 = FUN_05badb74(lVar20,iVar16,*(undefined8 *)PTR_DAT_09f32d00);
            if ((lVar25 == 0) ||
               (((*(long *)(lVar25 + 0x20) == 0 ||
                 (lVar25 = FUN_05badb74(lVar20,iVar16,*(undefined8 *)PTR_DAT_09f32d00), lVar25 == 0)
                 ) || (*(long *)(lVar25 + 0x20) == 0)))) goto LAB_077640fc;
            if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
              uVar24 = *puVar2;
              uVar5 = *puVar1;
            }
            else {
              fVar31 = logf((float)(int)*puVar1);
              fVar31 = exp2f((float)(int)(fVar31 / fVar30));
              uVar4 = 0x80000000;
              if (fVar31 != INFINITY) {
                uVar4 = (int)fVar31;
              }
              if (uVar4 < 3) {
                uVar4 = 2;
              }
              lVar25 = FUN_05badb74(lVar20,iVar16,*(undefined8 *)PTR_DAT_09f32d00);
              if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_077640fc;
              uVar24 = *(uint *)(*(long *)(lVar25 + 0x20) + 0x18);
              if ((int)uVar24 <= (int)uVar4) {
                uVar4 = uVar24;
              }
              fVar31 = logf((float)(int)*puVar2);
              fVar31 = exp2f((float)(int)(fVar31 / fVar30));
              uVar5 = 0x80000000;
              if (fVar31 != INFINITY) {
                uVar5 = (int)fVar31;
              }
              if (uVar5 < 3) {
                uVar5 = 2;
              }
              lVar25 = FUN_05badb74(lVar20,iVar16,*(undefined8 *)PTR_DAT_09f32d00);
              if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_077640fc;
              uVar24 = *(uint *)(*(long *)(lVar25 + 0x20) + 0x1c);
              if ((int)uVar24 <= (int)uVar5) {
                uVar5 = uVar24;
              }
              uVar3 = uVar4;
              if ((int)uVar4 < 0) {
                uVar3 = uVar4 + 1;
              }
              uVar24 = (int)uVar3 >> 1;
              if ((int)uVar3 >> 1 <= (int)uVar5) {
                uVar24 = uVar5;
              }
              uVar3 = uVar24;
              if ((int)uVar24 < 0) {
                uVar3 = uVar24 + 1;
              }
              uVar5 = (int)uVar3 >> 1;
              if ((int)uVar3 >> 1 <= (int)uVar4) {
                uVar5 = uVar4;
              }
            }
            *(uint *)(lVar21 + 0x10) = uVar5;
            *(uint *)(lVar21 + 0x14) = uVar24;
            *(long *)(lVar21 + 0x20) = lVar28;
            thunk_FUN_044bb4b4();
            *(long *)(lVar21 + 0x30) = lVar23;
            thunk_FUN_044bb4b4((long *)(lVar21 + 0x30),lVar23);
            FUN_077606dc(lVar21);
            if (lVar27 == 0) goto LAB_077640fc;
            lVar28 = *(long *)(lVar27 + 0x10);
            lVar23 = *(long *)PTR_DAT_09f32cb8;
            *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
            if (lVar28 == 0) goto LAB_077640fc;
            uVar24 = *(uint *)(lVar27 + 0x18);
            if (uVar24 < *(uint *)(lVar28 + 0x18)) {
              *(uint *)(lVar27 + 0x18) = uVar24 + 1;
              plVar18 = (long *)(lVar28 + (long)(int)uVar24 * 8 + 0x20);
              *plVar18 = lVar21;
              thunk_FUN_044bb4b4(plVar18,lVar21);
            }
            else {
              FUN_05bade44(lVar27,lVar21,
                           *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
            }
            uVar17 = FUN_05a28f70(in_stack_00000020,iVar16,*(undefined8 *)PTR_DAT_09f32c78);
            FUN_07761148(uVar17,lVar21,uVar17);
            if (3 < *(int *)(in_stack_00000018 + 0x10)) {
              lVar28 = *(long *)PTR_DAT_09f22e40;
              lVar21 = *(long *)(lVar28 + 0x38);
              if (lVar21 == 0) {
                FUN_04482014(lVar28);
                lVar21 = *(long *)(lVar28 + 0x38);
              }
              lVar21 = *(long *)(lVar21 + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = FUN_04481fb8();
              }
              if (*(int *)(lVar21 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar21 = *(long *)(*(long *)(lVar28 + 0x38) + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = FUN_04481fb8();
              }
              uVar17 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d68,**(undefined8 **)(lVar21 + 0xb8)
                                    ,0);
              lVar28 = *(long *)PTR_DAT_09f22e40;
              lVar21 = *(long *)(lVar28 + 0x38);
              if (lVar21 == 0) {
                FUN_04482014(lVar28);
                lVar21 = *(long *)(lVar28 + 0x38);
              }
              lVar21 = *(long *)(lVar21 + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = FUN_04481fb8();
              }
              if (*(int *)(lVar21 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar21 = *(long *)(*(long *)(lVar28 + 0x38) + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = FUN_04481fb8();
              }
              FUN_0771ec00(uVar17,**(undefined8 **)(lVar21 + 0xb8),0);
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < *(int *)(lVar20 + 0x18));
        }
        if (lVar27 != 0) {
          uVar17 = FUN_05baf9bc(lVar27,*(undefined8 *)PTR_DAT_09f32cd0);
          return uVar17;
        }
      }
    }
  }
LAB_077640fc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


