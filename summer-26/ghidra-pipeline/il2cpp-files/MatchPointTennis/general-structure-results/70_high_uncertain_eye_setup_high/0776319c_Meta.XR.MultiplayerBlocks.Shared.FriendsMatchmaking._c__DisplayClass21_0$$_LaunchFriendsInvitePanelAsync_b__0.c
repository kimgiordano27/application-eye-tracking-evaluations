/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<>c__DisplayClass21_0$$<LaunchFriendsInvitePanelAsync>b__0
ENTRY_POINT: 0776319c
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
Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass21_0__<LaunchFriendsInvitePanelAsync>b__0
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
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  float *pfVar28;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long lVar29;
  undefined4 unaff_w26;
  long *unaff_x27;
  ulong uVar30;
  long unaff_x28;
  float fVar31;
  float fVar32;
  int iVar33;
  undefined8 in_stack_00000008;
  int in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  int iStack0000000000000044;
  int in_stack_00000048;
  int in_stack_00000058;
  undefined4 in_stack_000000c0;
  
  if (param_3 == 0) {
LAB_07764104:
    uVar20 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar20,0);
  }
  if ((int)unaff_x27[3] == 0) goto LAB_07764100;
  unaff_x27[4] = unaff_x28;
  thunk_FUN_044bb4b4();
  in_stack_00000058 = unaff_w22;
  lVar18 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000058);
  if ((lVar18 != 0) &&
     (lVar19 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*unaff_x27 + 0x40)), lVar19 == 0))
  goto LAB_07764104;
  if (*(uint *)(unaff_x27 + 3) < 2) goto LAB_07764100;
  unaff_x27[5] = lVar18;
  thunk_FUN_044bb4b4(unaff_x27 + 5,lVar18);
  lVar18 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x0000004c);
  if ((lVar18 != 0) &&
     (lVar19 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*unaff_x27 + 0x40)), lVar19 == 0))
  goto LAB_07764104;
  if (*(uint *)(unaff_x27 + 3) < 3) goto LAB_07764100;
  unaff_x27[6] = lVar18;
  thunk_FUN_044bb4b4(unaff_x27 + 6,lVar18);
  in_stack_00000048 = in_stack_00000008._4_4_;
  lVar18 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000048);
  if ((lVar18 != 0) &&
     (lVar19 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*unaff_x27 + 0x40)), lVar19 == 0))
  goto LAB_07764104;
  if (*(uint *)(unaff_x27 + 3) < 4) goto LAB_07764100;
  unaff_x27[7] = lVar18;
  thunk_FUN_044bb4b4(unaff_x27 + 7,lVar18);
  iStack0000000000000044 = in_stack_00000010;
  lVar18 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000040 + 4);
  if ((lVar18 != 0) &&
     (lVar19 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*unaff_x27 + 0x40)), lVar19 == 0))
  goto LAB_07764104;
  if (*(uint *)(unaff_x27 + 3) < 5) goto LAB_07764100;
  unaff_x27[8] = lVar18;
  thunk_FUN_044bb4b4(unaff_x27 + 8,lVar18);
  uStack0000000000000040 = unaff_w26;
  lVar18 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000040);
  if ((lVar18 != 0) &&
     (lVar19 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*unaff_x27 + 0x40)), lVar19 == 0))
  goto LAB_07764104;
  uVar14 = in_stack_000000c0;
  if (*(uint *)(unaff_x27 + 3) < 6) goto LAB_07764100;
  unaff_x27[9] = lVar18;
  thunk_FUN_044bb4b4(unaff_x27 + 9,lVar18);
  in_stack_00000038._4_4_ = uVar14;
  lVar18 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x20 + 0x48),(long)&stack0x00000038 + 4);
  if ((lVar18 != 0) &&
     (lVar19 = thunk_FUN_04485110(lVar18,*(undefined8 *)(*unaff_x27 + 0x40)), lVar19 == 0))
  goto LAB_07764104;
  if (*(uint *)(unaff_x27 + 3) < 7) goto LAB_07764100;
  unaff_x27[10] = lVar18;
  thunk_FUN_044bb4b4(unaff_x27 + 10,lVar18);
  uVar20 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d60);
  if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
  }
  FUN_094c652c(uVar20,0);
  plVar21 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f32ca0,*(undefined4 *)(unaff_x23 + 0x18));
  if (*(char *)(in_stack_00000018 + 0x14) != '\0') {
    unaff_w22 = FUN_07760ae0(unaff_w22);
    unaff_w21 = FUN_07760ae0(unaff_w21);
  }
  if (plVar21 == (long *)0x0) goto LAB_077640fc;
  if (0 < (int)plVar21[3]) {
    lVar18 = 0;
    uVar30 = 0;
    do {
      puVar9 = PTR_DAT_09f32cf8;
      fVar31 = (float)FUN_05d0cfbc(unaff_x23,uVar30 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32cf8);
      iVar17 = -0x80000000;
      if (fVar31 != INFINITY) {
        iVar17 = (int)fVar31;
      }
      FUN_05d0cfbc(unaff_x23,uVar30 & 0xffffffff,*(undefined8 *)puVar9);
      puVar9 = PTR_DAT_09f32c78;
      iVar16 = -0x80000000;
      if (param_2 != INFINITY) {
        iVar16 = (int)param_2;
      }
      if (in_stack_00000020 == 0) goto LAB_077640fc;
      uVar22 = FUN_05a28f70(in_stack_00000020,uVar30 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32c78);
      iVar15 = unaff_w22 - ((uint)(uVar22 >> 0x1f) & 0xfffffffe);
      if (iVar15 <= iVar17) {
        iVar17 = iVar15;
      }
      iVar15 = FUN_05a28f70(in_stack_00000020,uVar30 & 0xffffffff,*(undefined8 *)puVar9);
      iVar15 = unaff_w21 + iVar15 * -2;
      if (iVar15 <= iVar16) {
        iVar16 = iVar15;
      }
      uVar22 = FUN_05a28f70(in_stack_00000020,uVar30 & 0xffffffff,*(undefined8 *)puVar9);
      lVar19 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
      FUN_07a80df4(lVar19,0);
      iVar17 = ((uint)(uVar22 >> 0x1f) & 0xfffffffe) + iVar17;
      if (iVar17 <= in_stack_00000008._4_4_) {
        iVar17 = in_stack_00000008._4_4_;
      }
      iVar16 = iVar16 + (int)uVar22 * 2;
      *(int *)(lVar19 + 0x10) = (int)uVar30;
      *(int *)(lVar19 + 0x14) = iVar17;
      if (iVar16 <= in_stack_00000010) {
        iVar16 = in_stack_00000010;
      }
      *(int *)(lVar19 + 0x18) = iVar16;
      lVar23 = thunk_FUN_04485110(lVar19,*(undefined8 *)(*plVar21 + 0x40));
      if (lVar23 == 0) goto LAB_07764104;
      if (*(uint *)(plVar21 + 3) <= uVar30) goto LAB_07764100;
      plVar21[uVar30 + 4] = lVar19;
      thunk_FUN_044bb4b4((long)plVar21 + lVar18 + 0x20,lVar19);
      uVar30 = uVar30 + 1;
      lVar18 = lVar18 + 8;
    } while ((long)uVar30 < (long)(int)plVar21[3]);
  }
  puVar12 = PTR_DAT_09f32d20;
  puVar10 = PTR_DAT_09f32c98;
  puVar9 = PTR_DAT_09f32c80;
  iVar17 = unaff_w22;
  iVar16 = unaff_w21;
  if (*(char *)(in_stack_00000018 + 0x14) != '\0') {
    iVar16 = FUN_07760ae0(unaff_w21);
    iVar17 = FUN_07760ae0(unaff_w22);
  }
  puVar11 = PTR_DAT_09f32ca8;
  iVar15 = 4;
  if (iVar17 != 0) {
    iVar15 = iVar17;
  }
  iVar17 = 4;
  if (iVar16 != 0) {
    iVar17 = iVar16;
  }
  lVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar12);
  FUN_07a80df4(lVar18,0);
  uVar20 = thunk_FUN_0448520c(*(undefined8 *)puVar10);
  FUN_07a80df4(uVar20,0);
  FUN_04b03f08(plVar21,uVar20,*(undefined8 *)puVar9);
  uVar30 = FUN_07762798(in_stack_00000018,plVar21,iVar15,iVar17,unaff_w22,unaff_w21,lVar18);
  if ((uVar30 & 1) != 0) {
    *(long *)(in_stack_00000018 + 0x18) = lVar18;
    thunk_FUN_044bb4b4((long *)(in_stack_00000018 + 0x18),lVar18);
  }
  uVar20 = thunk_FUN_0448520c(*(undefined8 *)puVar11);
  FUN_07a80df4(uVar20,0);
  FUN_04b03f08(plVar21,uVar20,*(undefined8 *)puVar9);
  uVar30 = FUN_07762798(in_stack_00000018,plVar21,iVar15,iVar17,unaff_w22,unaff_w21,lVar18);
  if ((uVar30 & 1) != 0) {
    if (lVar18 == 0) goto LAB_077640fc;
    plVar24 = (long *)(in_stack_00000018 + 0x18);
    if (*plVar24 == 0) goto LAB_077640fc;
    if (*(float *)(lVar18 + 0x34) < *(float *)(*plVar24 + 0x34)) {
      *plVar24 = lVar18;
      thunk_FUN_044bb4b4(plVar24,lVar18);
    }
  }
  uVar20 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c90);
  FUN_07a80df4(uVar20,0);
  FUN_04b03f08(plVar21,uVar20,*(undefined8 *)puVar9);
  uVar30 = FUN_07762798(in_stack_00000018,plVar21,iVar15,iVar17,unaff_w22,unaff_w21,lVar18);
  if ((uVar30 & 1) != 0) {
    if (lVar18 == 0) goto LAB_077640fc;
    plVar21 = (long *)(in_stack_00000018 + 0x18);
    if (*plVar21 == 0) goto LAB_077640fc;
    if (*(float *)(lVar18 + 0x34) < *(float *)(*plVar21 + 0x34)) {
      *plVar21 = lVar18;
      thunk_FUN_044bb4b4(plVar21,lVar18);
    }
  }
  if (*(long *)(in_stack_00000018 + 0x18) == 0) {
    return 0;
  }
  if (3 < *(int *)(in_stack_00000018 + 0x10)) {
    lVar18 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
    if (lVar18 == 0) goto LAB_077640fc;
    if (*(int *)(lVar18 + 0x18) == 0) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)PTR_DAT_09f32d78;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar20 = FUN_07a3b850(*(long *)(in_stack_00000018 + 0x18) + 0x10,0);
    if (*(uint *)(lVar18 + 0x18) < 2) {
LAB_07764100:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(lVar18 + 0x28) = uVar20;
    thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x28),uVar20);
    if (*(uint *)(lVar18 + 0x18) < 3) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x30) = *(undefined8 *)PTR_DAT_09f307b8;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar20 = FUN_07a3b850(*(long *)(in_stack_00000018 + 0x18) + 0x14,0);
    if (*(uint *)(lVar18 + 0x18) < 4) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x38) = uVar20;
    thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x38),uVar20);
    if (*(uint *)(lVar18 + 0x18) < 5) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x40) = *(undefined8 *)PTR_DAT_09f32d50;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar20 = FUN_07a5081c(*(long *)(in_stack_00000018 + 0x18) + 0x2c,0);
    if (*(uint *)(lVar18 + 0x18) < 6) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x48) = uVar20;
    thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x48),uVar20);
    if (*(uint *)(lVar18 + 0x18) < 7) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x50) = *(undefined8 *)PTR_DAT_09f32d58;
    thunk_FUN_044bb4b4();
    if (*(long *)(in_stack_00000018 + 0x18) == 0) goto LAB_077640fc;
    uVar20 = FUN_07a5081c(*(long *)(in_stack_00000018 + 0x18) + 0x30,0);
    if (*(uint *)(lVar18 + 0x18) < 8) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x58) = uVar20;
    thunk_FUN_044bb4b4((undefined8 *)(lVar18 + 0x58),uVar20);
    if (*(uint *)(lVar18 + 0x18) < 9) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x60) = *(undefined8 *)PTR_DAT_09f32d70;
    thunk_FUN_044bb4b4();
    lVar19 = *(long *)(in_stack_00000018 + 0x18);
    if (lVar19 == 0) goto LAB_077640fc;
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar20 = FUN_079a04dc(lVar19 + 0x28,0);
    if (*(uint *)(lVar18 + 0x18) < 10) goto LAB_07764100;
    *(undefined8 *)(lVar18 + 0x68) = uVar20;
    thunk_FUN_044bb4b4();
    uVar20 = FUN_078b57fc(lVar18,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar20,0);
  }
  puVar13 = PTR_DAT_09f32d48;
  puVar11 = PTR_DAT_09f32d38;
  puVar12 = PTR_DAT_09f32d10;
  puVar10 = PTR_DAT_09f32ce8;
  puVar9 = PTR_DAT_09f32cd8;
  lVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d08);
  FUN_05bad610(lVar18,*(undefined8 *)puVar10);
  lVar19 = thunk_FUN_0448520c(*(undefined8 *)puVar12);
  FUN_05bad610(lVar19,*(undefined8 *)puVar9);
  lVar23 = thunk_FUN_0448520c(*(undefined8 *)puVar13);
  FUN_06761dfc(lVar23,*(undefined8 *)puVar11);
  puVar9 = PTR_DAT_09f32d30;
  if (*(long *)(in_stack_00000018 + 0x18) != 0) {
    lVar29 = *(long *)(*(long *)(in_stack_00000018 + 0x18) + 0x20);
    if (lVar29 != 0) {
      if (lVar23 == 0) goto LAB_077640fc;
      do {
        FUN_067624d4(lVar23,lVar29,*(undefined8 *)puVar9);
        lVar29 = *(long *)(lVar29 + 0x18);
        if (lVar29 == 0) goto LAB_077640fc;
        if (*(int *)(lVar29 + 0x18) == 0) goto LAB_07764100;
        lVar29 = *(long *)(lVar29 + 0x20);
      } while (lVar29 != 0);
    }
    puVar12 = PTR_DAT_09f32d30;
    puVar10 = PTR_DAT_09f32d28;
    puVar9 = PTR_DAT_09f32cc0;
    if (lVar23 != 0) {
      iVar17 = *(int *)(lVar23 + 0x18);
      fVar31 = DAT_01c7661c;
      puVar8 = (undefined8 *)PTR_DAT_09f32ba8;
      while (DAT_01c7661c = fVar31, PTR_DAT_09f32ba8 = (undefined *)puVar8, 0 < iVar17) {
        lVar29 = FUN_067623e4(lVar23,*(undefined8 *)puVar10);
        if (lVar29 == 0) goto LAB_077640fc;
        if (*(int *)(lVar29 + 0x10) == 1) {
          if (lVar19 == 0) goto LAB_077640fc;
          lVar25 = *(long *)(lVar19 + 0x10);
          lVar27 = *(long *)puVar9;
          *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
          if (lVar25 == 0) goto LAB_077640fc;
          uVar26 = *(uint *)(lVar19 + 0x18);
          if (uVar26 < *(uint *)(lVar25 + 0x18)) {
            *(uint *)(lVar19 + 0x18) = uVar26 + 1;
            plVar21 = (long *)(lVar25 + (long)(int)uVar26 * 8 + 0x20);
            *plVar21 = lVar29;
            thunk_FUN_044bb4b4(plVar21,lVar29);
          }
          else {
            FUN_05bade44(lVar19,lVar29,
                         *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar29 = *(long *)(lVar29 + 0x18);
        if (lVar29 == 0) goto LAB_077640fc;
        if (*(uint *)(lVar29 + 0x18) < 2) goto LAB_07764100;
        for (lVar29 = *(long *)(lVar29 + 0x28); lVar29 != 0; lVar29 = *(long *)(lVar29 + 0x20)) {
          FUN_067624d4(lVar23,lVar29,*(undefined8 *)puVar12);
          lVar29 = *(long *)(lVar29 + 0x18);
          if (lVar29 == 0) goto LAB_077640fc;
          if (*(int *)(lVar29 + 0x18) == 0) goto LAB_07764100;
        }
        fVar31 = DAT_01c7661c;
        puVar8 = (undefined8 *)PTR_DAT_09f32ba8;
        iVar17 = *(int *)(lVar23 + 0x18);
      }
      if (lVar19 != 0) {
        if (0 < *(int *)(lVar19 + 0x18)) {
          iVar17 = 0;
          do {
            lVar23 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
            FUN_05bad610(lVar23,*(undefined8 *)PTR_DAT_09f32ce0);
            uVar20 = FUN_05badb74(lVar19,iVar17,*(undefined8 *)PTR_DAT_09f32d00);
            FUN_077617f0(uVar20,lVar23);
            if (lVar23 == 0) goto LAB_077640fc;
            lVar29 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar23 + 0x18));
            lVar25 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar23 + 0x18));
            if (0 < *(int *)(lVar23 + 0x18)) {
              uVar30 = 0;
              pfVar28 = (float *)(lVar29 + 0x2c);
              do {
                lVar27 = FUN_05badb74(lVar23,uVar30 & 0xffffffff,*puVar8);
                if (lVar27 == 0) goto LAB_077640fc;
                iVar16 = *(int *)(lVar27 + 0x1c);
                lVar27 = FUN_05badb74(lVar19,iVar17,*(undefined8 *)PTR_DAT_09f32d00);
                if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_077640fc;
                iVar15 = *(int *)(*(long *)(lVar27 + 0x20) + 0x10);
                lVar27 = FUN_05badb74(lVar23,uVar30 & 0xffffffff,*puVar8);
                if (lVar27 == 0) goto LAB_077640fc;
                iVar6 = *(int *)(lVar27 + 0x20);
                lVar27 = FUN_05badb74(lVar23,uVar30 & 0xffffffff,*puVar8);
                if (lVar27 == 0) goto LAB_077640fc;
                iVar7 = *(int *)(lVar27 + 0x14);
                lVar27 = FUN_05badb74(lVar23,uVar30 & 0xffffffff,*puVar8);
                if ((lVar27 == 0) || (lVar29 == 0)) goto LAB_077640fc;
                if (*(uint *)(lVar29 + 0x18) <= uVar30) goto LAB_07764100;
                iVar33 = *(int *)(lVar27 + 0x18);
                pfVar28[-3] = (float)(iVar16 - iVar15);
                pfVar28[-2] = (float)iVar6;
                pfVar28[-1] = (float)iVar7;
                *pfVar28 = (float)iVar33;
                lVar27 = FUN_05badb74(lVar23,uVar30 & 0xffffffff,*puVar8);
                if ((lVar27 == 0) || (lVar25 == 0)) goto LAB_077640fc;
                if (*(uint *)(lVar25 + 0x18) <= uVar30) goto LAB_07764100;
                pfVar28 = pfVar28 + 4;
                *(undefined4 *)(lVar25 + 0x20 + uVar30 * 4) = *(undefined4 *)(lVar27 + 0x10);
                uVar30 = uVar30 + 1;
              } while ((long)uVar30 < (long)*(int *)(lVar23 + 0x18));
            }
            if (in_stack_00000020 == 0) goto LAB_077640fc;
            uVar20 = FUN_05a2ad3c(in_stack_00000020,*(undefined8 *)PTR_DAT_09f32cc8);
            lVar23 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
            FUN_07a80df4(lVar23,0);
            *(undefined8 *)(lVar23 + 0x28) = uVar20;
            thunk_FUN_044bb4b4((undefined8 *)(lVar23 + 0x28),uVar20);
            puVar9 = PTR_DAT_09f32d00;
            uVar20 = FUN_05badb74(lVar19,iVar17,*(undefined8 *)PTR_DAT_09f32d00);
            puVar1 = (uint *)(lVar23 + 0x18);
            puVar2 = (uint *)(lVar23 + 0x1c);
            FUN_07762688(in_stack_00000018,uVar20,puVar1,puVar2);
            iVar16 = *(int *)(lVar23 + 0x18);
            lVar27 = FUN_05badb74(lVar19,iVar17,*(undefined8 *)puVar9);
            if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_077640fc;
            *puVar1 = iVar16 - *(int *)(*(long *)(lVar27 + 0x20) + 0x10);
            lVar27 = FUN_05badb74(lVar19,iVar17,*(undefined8 *)PTR_DAT_09f32d00);
            if ((lVar27 == 0) ||
               (((*(long *)(lVar27 + 0x20) == 0 ||
                 (lVar27 = FUN_05badb74(lVar19,iVar17,*(undefined8 *)PTR_DAT_09f32d00), lVar27 == 0)
                 ) || (*(long *)(lVar27 + 0x20) == 0)))) goto LAB_077640fc;
            if (*(char *)(in_stack_00000018 + 0x14) == '\0') {
              uVar26 = *puVar2;
              uVar5 = *puVar1;
            }
            else {
              fVar32 = logf((float)(int)*puVar1);
              fVar32 = exp2f((float)(int)(fVar32 / fVar31));
              uVar4 = 0x80000000;
              if (fVar32 != INFINITY) {
                uVar4 = (int)fVar32;
              }
              if (uVar4 < 3) {
                uVar4 = 2;
              }
              lVar27 = FUN_05badb74(lVar19,iVar17,*(undefined8 *)PTR_DAT_09f32d00);
              if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_077640fc;
              uVar26 = *(uint *)(*(long *)(lVar27 + 0x20) + 0x18);
              if ((int)uVar26 <= (int)uVar4) {
                uVar4 = uVar26;
              }
              fVar32 = logf((float)(int)*puVar2);
              fVar32 = exp2f((float)(int)(fVar32 / fVar31));
              uVar5 = 0x80000000;
              if (fVar32 != INFINITY) {
                uVar5 = (int)fVar32;
              }
              if (uVar5 < 3) {
                uVar5 = 2;
              }
              lVar27 = FUN_05badb74(lVar19,iVar17,*(undefined8 *)PTR_DAT_09f32d00);
              if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_077640fc;
              uVar26 = *(uint *)(*(long *)(lVar27 + 0x20) + 0x1c);
              if ((int)uVar26 <= (int)uVar5) {
                uVar5 = uVar26;
              }
              uVar3 = uVar4;
              if ((int)uVar4 < 0) {
                uVar3 = uVar4 + 1;
              }
              uVar26 = (int)uVar3 >> 1;
              if ((int)uVar3 >> 1 <= (int)uVar5) {
                uVar26 = uVar5;
              }
              uVar3 = uVar26;
              if ((int)uVar26 < 0) {
                uVar3 = uVar26 + 1;
              }
              uVar5 = (int)uVar3 >> 1;
              if ((int)uVar3 >> 1 <= (int)uVar4) {
                uVar5 = uVar4;
              }
            }
            *(uint *)(lVar23 + 0x10) = uVar5;
            *(uint *)(lVar23 + 0x14) = uVar26;
            *(long *)(lVar23 + 0x20) = lVar29;
            thunk_FUN_044bb4b4();
            *(long *)(lVar23 + 0x30) = lVar25;
            thunk_FUN_044bb4b4((long *)(lVar23 + 0x30),lVar25);
            FUN_077606dc(lVar23);
            if (lVar18 == 0) goto LAB_077640fc;
            lVar29 = *(long *)(lVar18 + 0x10);
            lVar25 = *(long *)PTR_DAT_09f32cb8;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar29 == 0) goto LAB_077640fc;
            uVar26 = *(uint *)(lVar18 + 0x18);
            if (uVar26 < *(uint *)(lVar29 + 0x18)) {
              *(uint *)(lVar18 + 0x18) = uVar26 + 1;
              plVar21 = (long *)(lVar29 + (long)(int)uVar26 * 8 + 0x20);
              *plVar21 = lVar23;
              thunk_FUN_044bb4b4(plVar21,lVar23);
            }
            else {
              FUN_05bade44(lVar18,lVar23,
                           *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
            }
            uVar20 = FUN_05a28f70(in_stack_00000020,iVar17,*(undefined8 *)PTR_DAT_09f32c78);
            FUN_07761148(uVar20,lVar23,uVar20);
            if (3 < *(int *)(in_stack_00000018 + 0x10)) {
              lVar29 = *(long *)PTR_DAT_09f22e40;
              lVar23 = *(long *)(lVar29 + 0x38);
              if (lVar23 == 0) {
                FUN_04482014(lVar29);
                lVar23 = *(long *)(lVar29 + 0x38);
              }
              lVar23 = *(long *)(lVar23 + 0x10);
              if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                lVar23 = FUN_04481fb8();
              }
              if (*(int *)(lVar23 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar23 = *(long *)(*(long *)(lVar29 + 0x38) + 0x10);
              if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                lVar23 = FUN_04481fb8();
              }
              uVar20 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d68,**(undefined8 **)(lVar23 + 0xb8)
                                    ,0);
              lVar29 = *(long *)PTR_DAT_09f22e40;
              lVar23 = *(long *)(lVar29 + 0x38);
              if (lVar23 == 0) {
                FUN_04482014(lVar29);
                lVar23 = *(long *)(lVar29 + 0x38);
              }
              lVar23 = *(long *)(lVar23 + 0x10);
              if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                lVar23 = FUN_04481fb8();
              }
              if (*(int *)(lVar23 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar23 = *(long *)(*(long *)(lVar29 + 0x38) + 0x10);
              if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                lVar23 = FUN_04481fb8();
              }
              FUN_0771ec00(uVar20,**(undefined8 **)(lVar23 + 0xb8),0);
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)(lVar19 + 0x18));
        }
        if (lVar18 != 0) {
          uVar20 = FUN_05baf9bc(lVar18,*(undefined8 *)PTR_DAT_09f32cd0);
          return uVar20;
        }
      }
    }
  }
LAB_077640fc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


