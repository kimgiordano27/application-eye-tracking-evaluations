/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking$$OnLeaveIntentNotification
ENTRY_POINT: 07762fd0
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
Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__OnLeaveIntentNotification
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
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long unaff_x19;
  float *pfVar27;
  long unaff_x20;
  long lVar28;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long lVar29;
  undefined4 unaff_w26;
  ulong uVar30;
  float fVar31;
  float fVar32;
  int iVar33;
  undefined8 in_stack_00000008;
  int in_stack_00000010;
  long in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  int iStack0000000000000044;
  int in_stack_00000048;
  int iStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_000000c0;
  
  FUN_04447ba8(*(undefined8 *)(param_3 + 0xcd8));
  FUN_04447ba8(PTR_DAT_09f32ce0);
  FUN_04447ba8(PTR_DAT_09f32ce8);
  FUN_04447ba8(PTR_DAT_09f32cf0);
  FUN_04447ba8(PTR_DAT_09f32ba0);
  FUN_04447ba8(PTR_DAT_09f32c60);
  FUN_04447ba8(PTR_DAT_09f32c78);
  FUN_04447ba8(PTR_DAT_09f32cf8);
  FUN_04447ba8(PTR_DAT_09f32d00);
  FUN_04447ba8(PTR_DAT_09f32ba8);
  FUN_04447ba8(PTR_DAT_09f32d08);
  FUN_04447ba8(PTR_DAT_09f32d10);
  FUN_04447ba8(PTR_DAT_09f32d18);
  FUN_04447ba8(PTR_DAT_09f20d20);
  FUN_04447ba8(PTR_DAT_09f32d20);
  FUN_04447ba8(PTR_DAT_09f313a0);
  FUN_04447ba8(PTR_DAT_09f32d28);
  FUN_04447ba8(PTR_DAT_09f32d30);
  FUN_04447ba8(PTR_DAT_09f32d38);
  FUN_04447ba8(PTR_DAT_09f32d40);
  FUN_04447ba8(PTR_DAT_09f32d48);
  FUN_04447ba8(PTR_DAT_09f1e5f0);
  FUN_04447ba8(PTR_DAT_09f307b8);
  FUN_04447ba8(PTR_DAT_09f32d50);
  FUN_04447ba8(PTR_DAT_09f32d58);
  FUN_04447ba8(PTR_DAT_09f32d60);
  FUN_04447ba8(PTR_DAT_09f32d68);
  FUN_04447ba8(PTR_DAT_09f32d70);
  FUN_04447ba8(PTR_DAT_09f32d78);
  *(undefined1 *)(unaff_x20 + 0x2cb) = 1;
  if (*(int *)(unaff_x19 + 0x10) < 4) {
    if (unaff_x23 == 0) goto LAB_077640fc;
  }
  else {
    plVar18 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,7);
    puVar9 = PTR_DAT_09f1e5b8;
    if (unaff_x23 == 0) goto LAB_077640fc;
    uStack000000000000005c = *(undefined4 *)(unaff_x23 + 0x18);
    lVar28 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),(long)&stack0x00000058 + 4)
    ;
    if (plVar18 == (long *)0x0) goto LAB_077640fc;
    if ((lVar28 != 0) &&
       (lVar20 = thunk_FUN_04485110(lVar28,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0)) {
LAB_07764104:
      uVar22 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar22,0);
    }
    if ((int)plVar18[3] == 0) goto LAB_07764100;
    plVar18[4] = lVar28;
    thunk_FUN_044bb4b4(plVar18 + 4,lVar28);
    iStack0000000000000058 = unaff_w22;
    lVar28 = thunk_FUN_04484e3c(*(undefined8 *)(puVar9 + 0x48),&stack0x00000058);
    if ((lVar28 != 0) &&
       (lVar20 = thunk_FUN_04485110(lVar28,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
    goto LAB_07764104;
    if (*(uint *)(plVar18 + 3) < 2) goto LAB_07764100;
    plVar18[5] = lVar28;
    thunk_FUN_044bb4b4(plVar18 + 5,lVar28);
    lVar28 = thunk_FUN_04484e3c(*(undefined8 *)(puVar9 + 0x48),&stack0x0000004c);
    if ((lVar28 != 0) &&
       (lVar20 = thunk_FUN_04485110(lVar28,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
    goto LAB_07764104;
    if (*(uint *)(plVar18 + 3) < 3) goto LAB_07764100;
    plVar18[6] = lVar28;
    thunk_FUN_044bb4b4(plVar18 + 6,lVar28);
    in_stack_00000048 = in_stack_00000008._4_4_;
    lVar28 = thunk_FUN_04484e3c(*(undefined8 *)(puVar9 + 0x48),&stack0x00000048);
    if ((lVar28 != 0) &&
       (lVar20 = thunk_FUN_04485110(lVar28,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
    goto LAB_07764104;
    if (*(uint *)(plVar18 + 3) < 4) goto LAB_07764100;
    plVar18[7] = lVar28;
    thunk_FUN_044bb4b4(plVar18 + 7,lVar28);
    iStack0000000000000044 = in_stack_00000010;
    lVar28 = thunk_FUN_04484e3c(*(undefined8 *)(puVar9 + 0x48),(long)&stack0x00000040 + 4);
    if ((lVar28 != 0) &&
       (lVar20 = thunk_FUN_04485110(lVar28,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
    goto LAB_07764104;
    if (*(uint *)(plVar18 + 3) < 5) goto LAB_07764100;
    plVar18[8] = lVar28;
    thunk_FUN_044bb4b4(plVar18 + 8,lVar28);
    uStack0000000000000040 = unaff_w26;
    lVar28 = thunk_FUN_04484e3c(*(undefined8 *)(puVar9 + 0x48),&stack0x00000040);
    if ((lVar28 != 0) &&
       (lVar20 = thunk_FUN_04485110(lVar28,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
    goto LAB_07764104;
    uVar14 = in_stack_000000c0;
    if (*(uint *)(plVar18 + 3) < 6) goto LAB_07764100;
    plVar18[9] = lVar28;
    thunk_FUN_044bb4b4(plVar18 + 9,lVar28);
    in_stack_00000038._4_4_ = uVar14;
    lVar28 = thunk_FUN_04484e3c(*(undefined8 *)(puVar9 + 0x48),(long)&stack0x00000038 + 4);
    if ((lVar28 != 0) &&
       (lVar20 = thunk_FUN_04485110(lVar28,*(undefined8 *)(*plVar18 + 0x40)), lVar20 == 0))
    goto LAB_07764104;
    if (*(uint *)(plVar18 + 3) < 7) goto LAB_07764100;
    plVar18[10] = lVar28;
    thunk_FUN_044bb4b4(plVar18 + 10,lVar28);
    uVar22 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d60,plVar18,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar22,0);
  }
  plVar18 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f32ca0,*(undefined4 *)(unaff_x23 + 0x18));
  if (*(char *)(unaff_x19 + 0x14) != '\0') {
    unaff_w22 = FUN_07760ae0(unaff_w22);
    unaff_w21 = FUN_07760ae0(unaff_w21);
  }
  if (plVar18 == (long *)0x0) goto LAB_077640fc;
  if (0 < (int)plVar18[3]) {
    lVar28 = 0;
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
      uVar19 = FUN_05a28f70(in_stack_00000020,uVar30 & 0xffffffff,*(undefined8 *)PTR_DAT_09f32c78);
      iVar15 = unaff_w22 - ((uint)(uVar19 >> 0x1f) & 0xfffffffe);
      if (iVar15 <= iVar17) {
        iVar17 = iVar15;
      }
      iVar15 = FUN_05a28f70(in_stack_00000020,uVar30 & 0xffffffff,*(undefined8 *)puVar9);
      iVar15 = unaff_w21 + iVar15 * -2;
      if (iVar15 <= iVar16) {
        iVar16 = iVar15;
      }
      uVar19 = FUN_05a28f70(in_stack_00000020,uVar30 & 0xffffffff,*(undefined8 *)puVar9);
      lVar20 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32cb0);
      FUN_07a80df4(lVar20,0);
      iVar17 = ((uint)(uVar19 >> 0x1f) & 0xfffffffe) + iVar17;
      if (iVar17 <= in_stack_00000008._4_4_) {
        iVar17 = in_stack_00000008._4_4_;
      }
      iVar16 = iVar16 + (int)uVar19 * 2;
      *(int *)(lVar20 + 0x10) = (int)uVar30;
      *(int *)(lVar20 + 0x14) = iVar17;
      if (iVar16 <= in_stack_00000010) {
        iVar16 = in_stack_00000010;
      }
      *(int *)(lVar20 + 0x18) = iVar16;
      lVar21 = thunk_FUN_04485110(lVar20,*(undefined8 *)(*plVar18 + 0x40));
      if (lVar21 == 0) goto LAB_07764104;
      if (*(uint *)(plVar18 + 3) <= uVar30) goto LAB_07764100;
      plVar18[uVar30 + 4] = lVar20;
      thunk_FUN_044bb4b4((long)plVar18 + lVar28 + 0x20,lVar20);
      uVar30 = uVar30 + 1;
      lVar28 = lVar28 + 8;
    } while ((long)uVar30 < (long)(int)plVar18[3]);
  }
  puVar12 = PTR_DAT_09f32d20;
  puVar10 = PTR_DAT_09f32c98;
  puVar9 = PTR_DAT_09f32c80;
  iVar17 = unaff_w22;
  iVar16 = unaff_w21;
  if (*(char *)(unaff_x19 + 0x14) != '\0') {
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
  lVar28 = thunk_FUN_0448520c(*(undefined8 *)puVar12);
  FUN_07a80df4(lVar28,0);
  uVar22 = thunk_FUN_0448520c(*(undefined8 *)puVar10);
  FUN_07a80df4(uVar22,0);
  FUN_04b03f08(plVar18,uVar22,*(undefined8 *)puVar9);
  uVar30 = FUN_07762798(unaff_x19,plVar18,iVar15,iVar17,unaff_w22,unaff_w21,lVar28);
  if ((uVar30 & 1) != 0) {
    *(long *)(unaff_x19 + 0x18) = lVar28;
    thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x18),lVar28);
  }
  uVar22 = thunk_FUN_0448520c(*(undefined8 *)puVar11);
  FUN_07a80df4(uVar22,0);
  FUN_04b03f08(plVar18,uVar22,*(undefined8 *)puVar9);
  uVar30 = FUN_07762798(unaff_x19,plVar18,iVar15,iVar17,unaff_w22,unaff_w21,lVar28);
  if ((uVar30 & 1) != 0) {
    if (lVar28 == 0) goto LAB_077640fc;
    plVar23 = (long *)(unaff_x19 + 0x18);
    if (*plVar23 == 0) goto LAB_077640fc;
    if (*(float *)(lVar28 + 0x34) < *(float *)(*plVar23 + 0x34)) {
      *plVar23 = lVar28;
      thunk_FUN_044bb4b4(plVar23,lVar28);
    }
  }
  uVar22 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c90);
  FUN_07a80df4(uVar22,0);
  FUN_04b03f08(plVar18,uVar22,*(undefined8 *)puVar9);
  uVar30 = FUN_07762798(unaff_x19,plVar18,iVar15,iVar17,unaff_w22,unaff_w21,lVar28);
  if ((uVar30 & 1) != 0) {
    if (lVar28 == 0) goto LAB_077640fc;
    plVar18 = (long *)(unaff_x19 + 0x18);
    if (*plVar18 == 0) goto LAB_077640fc;
    if (*(float *)(lVar28 + 0x34) < *(float *)(*plVar18 + 0x34)) {
      *plVar18 = lVar28;
      thunk_FUN_044bb4b4(plVar18,lVar28);
    }
  }
  if (*(long *)(unaff_x19 + 0x18) == 0) {
    return 0;
  }
  if (3 < *(int *)(unaff_x19 + 0x10)) {
    lVar28 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
    if (lVar28 == 0) goto LAB_077640fc;
    if (*(int *)(lVar28 + 0x18) == 0) goto LAB_07764100;
    *(undefined8 *)(lVar28 + 0x20) = *(undefined8 *)PTR_DAT_09f32d78;
    thunk_FUN_044bb4b4();
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_077640fc;
    uVar22 = FUN_07a3b850(*(long *)(unaff_x19 + 0x18) + 0x10,0);
    if (*(uint *)(lVar28 + 0x18) < 2) {
LAB_07764100:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(lVar28 + 0x28) = uVar22;
    thunk_FUN_044bb4b4((undefined8 *)(lVar28 + 0x28),uVar22);
    if (*(uint *)(lVar28 + 0x18) < 3) goto LAB_07764100;
    *(undefined8 *)(lVar28 + 0x30) = *(undefined8 *)PTR_DAT_09f307b8;
    thunk_FUN_044bb4b4();
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_077640fc;
    uVar22 = FUN_07a3b850(*(long *)(unaff_x19 + 0x18) + 0x14,0);
    if (*(uint *)(lVar28 + 0x18) < 4) goto LAB_07764100;
    *(undefined8 *)(lVar28 + 0x38) = uVar22;
    thunk_FUN_044bb4b4((undefined8 *)(lVar28 + 0x38),uVar22);
    if (*(uint *)(lVar28 + 0x18) < 5) goto LAB_07764100;
    *(undefined8 *)(lVar28 + 0x40) = *(undefined8 *)PTR_DAT_09f32d50;
    thunk_FUN_044bb4b4();
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_077640fc;
    uVar22 = FUN_07a5081c(*(long *)(unaff_x19 + 0x18) + 0x2c,0);
    if (*(uint *)(lVar28 + 0x18) < 6) goto LAB_07764100;
    *(undefined8 *)(lVar28 + 0x48) = uVar22;
    thunk_FUN_044bb4b4((undefined8 *)(lVar28 + 0x48),uVar22);
    if (*(uint *)(lVar28 + 0x18) < 7) goto LAB_07764100;
    *(undefined8 *)(lVar28 + 0x50) = *(undefined8 *)PTR_DAT_09f32d58;
    thunk_FUN_044bb4b4();
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_077640fc;
    uVar22 = FUN_07a5081c(*(long *)(unaff_x19 + 0x18) + 0x30,0);
    if (*(uint *)(lVar28 + 0x18) < 8) goto LAB_07764100;
    *(undefined8 *)(lVar28 + 0x58) = uVar22;
    thunk_FUN_044bb4b4((undefined8 *)(lVar28 + 0x58),uVar22);
    if (*(uint *)(lVar28 + 0x18) < 9) goto LAB_07764100;
    *(undefined8 *)(lVar28 + 0x60) = *(undefined8 *)PTR_DAT_09f32d70;
    thunk_FUN_044bb4b4();
    lVar20 = *(long *)(unaff_x19 + 0x18);
    if (lVar20 == 0) goto LAB_077640fc;
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar22 = FUN_079a04dc(lVar20 + 0x28,0);
    if (*(uint *)(lVar28 + 0x18) < 10) goto LAB_07764100;
    *(undefined8 *)(lVar28 + 0x68) = uVar22;
    thunk_FUN_044bb4b4();
    uVar22 = FUN_078b57fc(lVar28,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar22,0);
  }
  puVar13 = PTR_DAT_09f32d48;
  puVar11 = PTR_DAT_09f32d38;
  puVar12 = PTR_DAT_09f32d10;
  puVar10 = PTR_DAT_09f32ce8;
  puVar9 = PTR_DAT_09f32cd8;
  lVar28 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d08);
  FUN_05bad610(lVar28,*(undefined8 *)puVar10);
  lVar20 = thunk_FUN_0448520c(*(undefined8 *)puVar12);
  FUN_05bad610(lVar20,*(undefined8 *)puVar9);
  lVar21 = thunk_FUN_0448520c(*(undefined8 *)puVar13);
  FUN_06761dfc(lVar21,*(undefined8 *)puVar11);
  puVar9 = PTR_DAT_09f32d30;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    lVar29 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x20);
    if (lVar29 != 0) {
      if (lVar21 == 0) goto LAB_077640fc;
      do {
        FUN_067624d4(lVar21,lVar29,*(undefined8 *)puVar9);
        lVar29 = *(long *)(lVar29 + 0x18);
        if (lVar29 == 0) goto LAB_077640fc;
        if (*(int *)(lVar29 + 0x18) == 0) goto LAB_07764100;
        lVar29 = *(long *)(lVar29 + 0x20);
      } while (lVar29 != 0);
    }
    puVar12 = PTR_DAT_09f32d30;
    puVar10 = PTR_DAT_09f32d28;
    puVar9 = PTR_DAT_09f32cc0;
    if (lVar21 != 0) {
      iVar17 = *(int *)(lVar21 + 0x18);
      fVar31 = DAT_01c7661c;
      puVar8 = (undefined8 *)PTR_DAT_09f32ba8;
      while (DAT_01c7661c = fVar31, PTR_DAT_09f32ba8 = (undefined *)puVar8, 0 < iVar17) {
        lVar29 = FUN_067623e4(lVar21,*(undefined8 *)puVar10);
        if (lVar29 == 0) goto LAB_077640fc;
        if (*(int *)(lVar29 + 0x10) == 1) {
          if (lVar20 == 0) goto LAB_077640fc;
          lVar24 = *(long *)(lVar20 + 0x10);
          lVar26 = *(long *)puVar9;
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
          if (lVar24 == 0) goto LAB_077640fc;
          uVar25 = *(uint *)(lVar20 + 0x18);
          if (uVar25 < *(uint *)(lVar24 + 0x18)) {
            *(uint *)(lVar20 + 0x18) = uVar25 + 1;
            plVar18 = (long *)(lVar24 + (long)(int)uVar25 * 8 + 0x20);
            *plVar18 = lVar29;
            thunk_FUN_044bb4b4(plVar18,lVar29);
          }
          else {
            FUN_05bade44(lVar20,lVar29,
                         *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar29 = *(long *)(lVar29 + 0x18);
        if (lVar29 == 0) goto LAB_077640fc;
        if (*(uint *)(lVar29 + 0x18) < 2) goto LAB_07764100;
        for (lVar29 = *(long *)(lVar29 + 0x28); lVar29 != 0; lVar29 = *(long *)(lVar29 + 0x20)) {
          FUN_067624d4(lVar21,lVar29,*(undefined8 *)puVar12);
          lVar29 = *(long *)(lVar29 + 0x18);
          if (lVar29 == 0) goto LAB_077640fc;
          if (*(int *)(lVar29 + 0x18) == 0) goto LAB_07764100;
        }
        fVar31 = DAT_01c7661c;
        puVar8 = (undefined8 *)PTR_DAT_09f32ba8;
        iVar17 = *(int *)(lVar21 + 0x18);
      }
      if (lVar20 != 0) {
        if (0 < *(int *)(lVar20 + 0x18)) {
          iVar17 = 0;
          do {
            lVar21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
            FUN_05bad610(lVar21,*(undefined8 *)PTR_DAT_09f32ce0);
            uVar22 = FUN_05badb74(lVar20,iVar17,*(undefined8 *)PTR_DAT_09f32d00);
            FUN_077617f0(uVar22,lVar21);
            if (lVar21 == 0) goto LAB_077640fc;
            lVar29 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(lVar21 + 0x18));
            lVar24 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar21 + 0x18));
            if (0 < *(int *)(lVar21 + 0x18)) {
              uVar30 = 0;
              pfVar27 = (float *)(lVar29 + 0x2c);
              do {
                lVar26 = FUN_05badb74(lVar21,uVar30 & 0xffffffff,*puVar8);
                if (lVar26 == 0) goto LAB_077640fc;
                iVar16 = *(int *)(lVar26 + 0x1c);
                lVar26 = FUN_05badb74(lVar20,iVar17,*(undefined8 *)PTR_DAT_09f32d00);
                if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_077640fc;
                iVar15 = *(int *)(*(long *)(lVar26 + 0x20) + 0x10);
                lVar26 = FUN_05badb74(lVar21,uVar30 & 0xffffffff,*puVar8);
                if (lVar26 == 0) goto LAB_077640fc;
                iVar6 = *(int *)(lVar26 + 0x20);
                lVar26 = FUN_05badb74(lVar21,uVar30 & 0xffffffff,*puVar8);
                if (lVar26 == 0) goto LAB_077640fc;
                iVar7 = *(int *)(lVar26 + 0x14);
                lVar26 = FUN_05badb74(lVar21,uVar30 & 0xffffffff,*puVar8);
                if ((lVar26 == 0) || (lVar29 == 0)) goto LAB_077640fc;
                if (*(uint *)(lVar29 + 0x18) <= uVar30) goto LAB_07764100;
                iVar33 = *(int *)(lVar26 + 0x18);
                pfVar27[-3] = (float)(iVar16 - iVar15);
                pfVar27[-2] = (float)iVar6;
                pfVar27[-1] = (float)iVar7;
                *pfVar27 = (float)iVar33;
                lVar26 = FUN_05badb74(lVar21,uVar30 & 0xffffffff,*puVar8);
                if ((lVar26 == 0) || (lVar24 == 0)) goto LAB_077640fc;
                if (*(uint *)(lVar24 + 0x18) <= uVar30) goto LAB_07764100;
                pfVar27 = pfVar27 + 4;
                *(undefined4 *)(lVar24 + 0x20 + uVar30 * 4) = *(undefined4 *)(lVar26 + 0x10);
                uVar30 = uVar30 + 1;
              } while ((long)uVar30 < (long)*(int *)(lVar21 + 0x18));
            }
            if (in_stack_00000020 == 0) goto LAB_077640fc;
            uVar22 = FUN_05a2ad3c(in_stack_00000020,*(undefined8 *)PTR_DAT_09f32cc8);
            lVar21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
            FUN_07a80df4(lVar21,0);
            *(undefined8 *)(lVar21 + 0x28) = uVar22;
            thunk_FUN_044bb4b4((undefined8 *)(lVar21 + 0x28),uVar22);
            puVar9 = PTR_DAT_09f32d00;
            uVar22 = FUN_05badb74(lVar20,iVar17,*(undefined8 *)PTR_DAT_09f32d00);
            puVar1 = (uint *)(lVar21 + 0x18);
            puVar2 = (uint *)(lVar21 + 0x1c);
            FUN_07762688(unaff_x19,uVar22,puVar1,puVar2);
            iVar16 = *(int *)(lVar21 + 0x18);
            lVar26 = FUN_05badb74(lVar20,iVar17,*(undefined8 *)puVar9);
            if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_077640fc;
            *puVar1 = iVar16 - *(int *)(*(long *)(lVar26 + 0x20) + 0x10);
            lVar26 = FUN_05badb74(lVar20,iVar17,*(undefined8 *)PTR_DAT_09f32d00);
            if ((lVar26 == 0) ||
               (((*(long *)(lVar26 + 0x20) == 0 ||
                 (lVar26 = FUN_05badb74(lVar20,iVar17,*(undefined8 *)PTR_DAT_09f32d00), lVar26 == 0)
                 ) || (*(long *)(lVar26 + 0x20) == 0)))) goto LAB_077640fc;
            if (*(char *)(unaff_x19 + 0x14) == '\0') {
              uVar25 = *puVar2;
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
              lVar26 = FUN_05badb74(lVar20,iVar17,*(undefined8 *)PTR_DAT_09f32d00);
              if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_077640fc;
              uVar25 = *(uint *)(*(long *)(lVar26 + 0x20) + 0x18);
              if ((int)uVar25 <= (int)uVar4) {
                uVar4 = uVar25;
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
              lVar26 = FUN_05badb74(lVar20,iVar17,*(undefined8 *)PTR_DAT_09f32d00);
              if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_077640fc;
              uVar25 = *(uint *)(*(long *)(lVar26 + 0x20) + 0x1c);
              if ((int)uVar25 <= (int)uVar5) {
                uVar5 = uVar25;
              }
              uVar3 = uVar4;
              if ((int)uVar4 < 0) {
                uVar3 = uVar4 + 1;
              }
              uVar25 = (int)uVar3 >> 1;
              if ((int)uVar3 >> 1 <= (int)uVar5) {
                uVar25 = uVar5;
              }
              uVar3 = uVar25;
              if ((int)uVar25 < 0) {
                uVar3 = uVar25 + 1;
              }
              uVar5 = (int)uVar3 >> 1;
              if ((int)uVar3 >> 1 <= (int)uVar4) {
                uVar5 = uVar4;
              }
            }
            *(uint *)(lVar21 + 0x10) = uVar5;
            *(uint *)(lVar21 + 0x14) = uVar25;
            *(long *)(lVar21 + 0x20) = lVar29;
            thunk_FUN_044bb4b4();
            *(long *)(lVar21 + 0x30) = lVar24;
            thunk_FUN_044bb4b4((long *)(lVar21 + 0x30),lVar24);
            FUN_077606dc(lVar21);
            if (lVar28 == 0) goto LAB_077640fc;
            lVar29 = *(long *)(lVar28 + 0x10);
            lVar24 = *(long *)PTR_DAT_09f32cb8;
            *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
            if (lVar29 == 0) goto LAB_077640fc;
            uVar25 = *(uint *)(lVar28 + 0x18);
            if (uVar25 < *(uint *)(lVar29 + 0x18)) {
              *(uint *)(lVar28 + 0x18) = uVar25 + 1;
              plVar18 = (long *)(lVar29 + (long)(int)uVar25 * 8 + 0x20);
              *plVar18 = lVar21;
              thunk_FUN_044bb4b4(plVar18,lVar21);
            }
            else {
              FUN_05bade44(lVar28,lVar21,
                           *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
            }
            uVar22 = FUN_05a28f70(in_stack_00000020,iVar17,*(undefined8 *)PTR_DAT_09f32c78);
            FUN_07761148(uVar22,lVar21,uVar22);
            if (3 < *(int *)(unaff_x19 + 0x10)) {
              lVar29 = *(long *)PTR_DAT_09f22e40;
              lVar21 = *(long *)(lVar29 + 0x38);
              if (lVar21 == 0) {
                FUN_04482014(lVar29);
                lVar21 = *(long *)(lVar29 + 0x38);
              }
              lVar21 = *(long *)(lVar21 + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = FUN_04481fb8();
              }
              if (*(int *)(lVar21 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar21 = *(long *)(*(long *)(lVar29 + 0x38) + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = FUN_04481fb8();
              }
              uVar22 = FUN_078b5b84(*(undefined8 *)PTR_DAT_09f32d68,**(undefined8 **)(lVar21 + 0xb8)
                                    ,0);
              lVar29 = *(long *)PTR_DAT_09f22e40;
              lVar21 = *(long *)(lVar29 + 0x38);
              if (lVar21 == 0) {
                FUN_04482014(lVar29);
                lVar21 = *(long *)(lVar29 + 0x38);
              }
              lVar21 = *(long *)(lVar21 + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = FUN_04481fb8();
              }
              if (*(int *)(lVar21 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar21 = *(long *)(*(long *)(lVar29 + 0x38) + 0x10);
              if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                lVar21 = FUN_04481fb8();
              }
              FUN_0771ec00(uVar22,**(undefined8 **)(lVar21 + 0xb8),0);
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)(lVar20 + 0x18));
        }
        if (lVar28 != 0) {
          uVar22 = FUN_05baf9bc(lVar28,*(undefined8 *)PTR_DAT_09f32cd0);
          return uVar22;
        }
      }
    }
  }
LAB_077640fc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


