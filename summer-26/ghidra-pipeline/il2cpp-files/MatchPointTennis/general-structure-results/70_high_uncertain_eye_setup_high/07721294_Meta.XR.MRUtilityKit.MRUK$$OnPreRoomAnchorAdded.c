/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$OnPreRoomAnchorAdded
ENTRY_POINT: 07721294
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


bool Meta_XR_MRUtilityKit_MRUK__OnPreRoomAnchorAdded(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x25;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long *unaff_x27;
  undefined8 *puVar21;
  long lVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  long in_stack_00000028;
  
  puVar18 = *(undefined8 **)(unaff_x25 + 0x48);
  uVar17 = 0;
  lVar14 = 0x20;
  do {
    uVar15 = *(uint *)(param_1 + 0x18);
    uVar16 = (ulong)(int)uVar15;
    if ((long)uVar16 <= (long)uVar17) {
      lVar14 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f31050);
      FUN_05bad610(lVar14,*(undefined8 *)PTR_DAT_09f31028);
      puVar2 = PTR_DAT_09f31018;
      if ((int)uVar15 < 1) goto LAB_07721418;
      uVar13 = 0;
      goto LAB_07721390;
    }
    plVar20 = (long *)*unaff_x27;
    uVar6 = FUN_05badb74(param_1,uVar17 & 0xffffffff,*puVar18);
    lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30ff8);
    FUN_07721f30(lVar7,uVar6,uVar17 & 0xffffffff);
    if (plVar20 == (long *)0x0) break;
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar20 + 0x40)), lVar8 == 0))
    goto LAB_07721f24;
    if (*(uint *)(plVar20 + 3) <= uVar17) goto LAB_07721f20;
    plVar20[uVar17 + 4] = lVar7;
    thunk_FUN_044bb4b4((long)plVar20 + lVar14,lVar7);
    param_1 = *(long *)(unaff_x19 + 0x10);
    uVar17 = uVar17 + 1;
    lVar14 = lVar14 + 8;
  } while (param_1 != 0);
  goto LAB_07721330;
LAB_07721a04:
  lVar8 = *(long *)(lVar12 + 0x10);
  lVar22 = *(long *)(lVar12 + 0x18);
LAB_07721a08:
  lVar19 = *unaff_x27;
  lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30ff8);
  FUN_07722420(auVar27._0_8_ & 0xffffffff,lVar9,lVar8,lVar22,uVar16 & 0xffffffff,
               iStack000000000000000c,lVar19);
  puVar3 = PTR_DAT_09f31020;
  FUN_05baf38c(lVar14,*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)PTR_DAT_09f31020);
  FUN_05baf38c(lVar14,*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)puVar3);
  if (*(long *)(lVar12 + 0x10) == 0) goto LAB_07721330;
  *(undefined1 *)(*(long *)(lVar12 + 0x10) + 0x4c) = 0;
  puVar21 = (undefined8 *)PTR_DAT_09f31040;
  if (*(long *)(lVar12 + 0x18) == 0) goto LAB_07721330;
  *(undefined1 *)(*(long *)(lVar12 + 0x18) + 0x4c) = 0;
  plVar20 = (long *)*unaff_x27;
  if (plVar20 == (long *)0x0) goto LAB_07721330;
  uVar15 = (uint)uVar16;
  if (uVar15 == *(uint *)(plVar20 + 3)) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31088,0);
    plVar20 = (long *)*unaff_x27;
    if (plVar20 == (long *)0x0) goto LAB_07721330;
  }
  if ((lVar9 != 0) &&
     (lVar8 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar20 + 0x40)), lVar8 == 0)) {
LAB_07721f24:
    uVar6 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar6,0);
  }
  if (*(uint *)(plVar20 + 3) <= uVar15) goto LAB_07721f20;
  plVar20[(long)(int)uVar15 + 4] = lVar9;
  thunk_FUN_044bb4b4(plVar20 + (long)(int)uVar15 + 4,lVar9);
  lVar8 = *(long *)(lVar14 + 0x10);
  lVar12 = *(long *)PTR_DAT_09f31018;
  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
  puVar18 = (undefined8 *)PTR_DAT_09f31060;
  if (lVar8 == 0) goto LAB_07721330;
  uVar13 = *(uint *)(lVar14 + 0x18);
  if (uVar13 < *(uint *)(lVar8 + 0x18)) {
    *(uint *)(lVar14 + 0x18) = uVar13 + 1;
    plVar20 = (long *)(lVar8 + (long)(int)uVar13 * 8 + 0x20);
    *plVar20 = lVar9;
    thunk_FUN_044bb4b4(plVar20,lVar9);
  }
  else {
    FUN_05bade44(lVar14,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
  }
  if (lVar9 == 0) goto LAB_07721330;
  *(undefined1 *)(lVar9 + 0x4c) = 1;
  if (0 < *(int *)(lVar14 + 0x18) + -1) {
    iVar5 = 0;
    do {
      uVar24 = *(undefined4 *)(lVar9 + 0x30);
      uVar25 = *(undefined4 *)(lVar9 + 0x34);
      uVar26 = *(undefined4 *)(lVar9 + 0x38);
      lVar8 = FUN_05badb74(lVar14,iVar5,*puVar21);
      if (lVar8 == 0) goto LAB_07721330;
      uVar6 = FUN_07720fc4(uVar24,uVar25,uVar26,*(undefined4 *)(lVar8 + 0x30),
                           *(undefined4 *)(lVar8 + 0x34),*(undefined4 *)(lVar8 + 0x38));
      if ((float)uVar6 < fVar23) {
        uVar10 = FUN_05badb74(lVar14,iVar5,*puVar21);
        uVar11 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30fe8);
        puVar18 = (undefined8 *)PTR_DAT_09f31060;
        FUN_0772260c(uVar11,lVar9,uVar10);
        puVar21 = (undefined8 *)PTR_DAT_09f31040;
        in_stack_00000010 = 0;
        in_stack_00000018 = 0;
        FUN_059011e8(uVar6,&stack0x00000010,uVar11,*(undefined8 *)PTR_DAT_09f31000);
        FUN_063093d4(lVar7,in_stack_00000010,in_stack_00000018,*(undefined8 *)PTR_DAT_09f31058);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar14 + 0x18) + -1);
  }
  if (*(char *)(unaff_x19 + 0x20) != '\0') goto LAB_07721eb8;
  if (*(int *)(*(long *)PTR_DAT_09f283d8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  in_stack_00000028 = FUN_07a76eac(0,0);
  in_stack_00000028 = in_stack_00000028 / 1000000;
  if (unaff_x20 != 0) {
    lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
    if (lVar8 == 0) goto LAB_07721330;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_07721f20;
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_09f310b8;
    thunk_FUN_044bb4b4();
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07721330;
    iVar5 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    fStack0000000000000024 = ((float)(iVar5 - *(int *)(lVar14 + 0x18)) * 100.0) / (float)iVar5;
    uVar6 = FUN_07a5081c((long)&stack0x00000020 + 4,0);
    if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_07721f20;
    *(undefined8 *)(lVar8 + 0x28) = uVar6;
    thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x28),uVar6);
    if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_07721f20;
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_09f31098;
    thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x30));
    uStack0000000000000020 = *(undefined4 *)(lVar14 + 0x18);
    uVar6 = FUN_07a3b850(&stack0x00000020,0);
    if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_07721f20;
    *(undefined8 *)(lVar8 + 0x38) = uVar6;
    thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x38),uVar6);
    if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_07721f20;
    *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_09f310a8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x40));
    uStack0000000000000020 = FUN_063095a0(lVar7,*(undefined8 *)puVar2);
    uVar6 = FUN_07a3b850(&stack0x00000020,0);
    if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_07721f20;
    *(undefined8 *)(lVar8 + 0x48) = uVar6;
    thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x48),uVar6);
    if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_07721f20;
    *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)PTR_DAT_09f310b0;
    thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x50));
    uVar6 = FUN_07a3c8f0(&stack0x00000028,0);
    if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_07721f20;
    *(undefined8 *)(lVar8 + 0x58) = uVar6;
    thunk_FUN_044bb4b4();
    uVar6 = FUN_078b57fc(lVar8,0);
    puVar18 = (undefined8 *)PTR_DAT_09f31060;
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07721330;
    iVar5 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    bVar4 = (**(code **)(unaff_x20 + 0x18))
                      ((float)(iVar5 - *(int *)(lVar14 + 0x18)) / (float)iVar5,
                       *(undefined8 *)(unaff_x20 + 0x40),uVar6,*(undefined8 *)(unaff_x20 + 0x28));
    *(byte *)(unaff_x19 + 0x20) = bVar4 & 1;
  }
  uVar16 = (ulong)(uVar15 + 1);
  if (*(int *)(lVar14 + 0x18) < 2) goto LAB_07721eb8;
  goto LAB_077214d8;
  while( true ) {
    if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_07721f20;
    lVar7 = *(long *)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
    if ((lVar7 == 0) || (*(undefined1 *)(lVar7 + 0x4c) = 1, lVar14 == 0)) goto LAB_07721330;
    lVar8 = *(long *)(lVar14 + 0x10);
    lVar12 = *(long *)puVar2;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_07721330;
    uVar1 = *(uint *)(lVar14 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
      thunk_FUN_044bb4b4();
    }
    else {
      FUN_05bade44(lVar14,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    uVar13 = uVar13 + 1;
    if (uVar15 == uVar13) break;
LAB_07721390:
    lVar7 = *unaff_x27;
    if (lVar7 == 0) goto LAB_07721330;
  }
LAB_07721418:
  lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2fba0);
  FUN_087dab30(lVar7,0);
  if (lVar7 != 0) {
    FUN_087dab38(lVar7,0);
    if (*(int *)(*(long *)PTR_DAT_09f283d8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    in_stack_00000028 = FUN_07a76eac(0,0);
    in_stack_00000028 = in_stack_00000028 / 1000000;
    lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f31078);
    FUN_06308674(lVar7,*(undefined8 *)PTR_DAT_09f31068);
    puVar2 = PTR_DAT_09f31070;
    if (lVar14 != 0) {
      if (*(int *)(lVar14 + 0x18) < 2) {
LAB_07721eb8:
        if (unaff_x20 == 0) {
          bVar4 = *(byte *)(unaff_x19 + 0x20);
        }
        else {
          bVar4 = (**(code **)(unaff_x20 + 0x18))
                            (0x42c80000,*(undefined8 *)(unaff_x20 + 0x40),
                             *(undefined8 *)PTR_DAT_09f31090,*(undefined8 *)(unaff_x20 + 0x28));
          bVar4 = bVar4 & 1;
          *(byte *)(unaff_x19 + 0x20) = bVar4;
        }
        return bVar4 == 0;
      }
      iStack000000000000000c = 0;
      fVar23 = 0.0;
      puVar18 = (undefined8 *)PTR_DAT_09f31060;
LAB_077214d8:
      if (lVar7 == 0) goto LAB_07721330;
      iVar5 = FUN_063095a0(lVar7,*(undefined8 *)puVar2);
      if (iVar5 == 0) {
        if (*(int *)(*(long *)PTR_DAT_09f283d8 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        in_stack_00000028 = FUN_07a76eac(0,0);
        in_stack_00000028 = in_stack_00000028 / 1000000;
        if (unaff_x20 != 0) {
          lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
          if (lVar8 == 0) goto LAB_07721330;
          if (*(int *)(lVar8 + 0x18) == 0) {
LAB_07721f20:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_09f310a0;
          thunk_FUN_044bb4b4();
          if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07721330;
          iVar5 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
          fStack0000000000000024 = ((float)(iVar5 - *(int *)(lVar14 + 0x18)) * 100.0) / (float)iVar5
          ;
          uVar6 = FUN_07a5081c((long)&stack0x00000020 + 4,0);
          if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_07721f20;
          *(undefined8 *)(lVar8 + 0x28) = uVar6;
          thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x28),uVar6);
          if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_07721f20;
          *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_09f31098;
          thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x30));
          uStack0000000000000020 = *(undefined4 *)(lVar14 + 0x18);
          uVar6 = FUN_07a3b850(&stack0x00000020,0);
          if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_07721f20;
          *(undefined8 *)(lVar8 + 0x38) = uVar6;
          thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x38),uVar6);
          if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_07721f20;
          *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_09f310a8;
          thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x40));
          uStack0000000000000020 = FUN_063095a0(lVar7,*(undefined8 *)puVar2);
          uVar6 = FUN_07a3b850(&stack0x00000020,0);
          if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_07721f20;
          *(undefined8 *)(lVar8 + 0x48) = uVar6;
          thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x48),uVar6);
          if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_07721f20;
          *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)PTR_DAT_09f310b0;
          thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x50));
          uVar6 = FUN_07a3c8f0(&stack0x00000028,0);
          if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_07721f20;
          *(undefined8 *)(lVar8 + 0x58) = uVar6;
          thunk_FUN_044bb4b4();
          uVar6 = FUN_078b57fc(lVar8,0);
          if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07721330;
          iVar5 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
          bVar4 = (**(code **)(unaff_x20 + 0x18))
                            ((float)(iVar5 - *(int *)(lVar14 + 0x18)) / (float)iVar5,
                             *(undefined8 *)(unaff_x20 + 0x40),uVar6,
                             *(undefined8 *)(unaff_x20 + 0x28));
          *(byte *)(unaff_x19 + 0x20) = bVar4 & 1;
        }
        fVar23 = (float)FUN_07721ffc();
        iVar5 = FUN_063095a0(lVar7,*(undefined8 *)puVar2);
        if (iVar5 == 0) goto LAB_07721eb8;
      }
      auVar27 = FUN_06308c30(lVar7,*puVar18);
      if (auVar27._8_8_ != 0) {
        iStack000000000000000c = iStack000000000000000c + 1;
        do {
          lVar12 = auVar27._8_8_;
          lVar8 = *(long *)(lVar12 + 0x10);
          if (lVar8 == 0) break;
          if (*(char *)(lVar8 + 0x4c) != '\0') {
            lVar22 = *(long *)(lVar12 + 0x18);
            if (lVar22 == 0) break;
            if (*(char *)(lVar22 + 0x4c) != '\0') goto LAB_07721a08;
          }
          iVar5 = FUN_063095a0(lVar7,*(undefined8 *)puVar2);
          if (iVar5 == 0) {
            if (*(int *)(*(long *)PTR_DAT_09f283d8 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            in_stack_00000028 = FUN_07a76eac(0,0);
            in_stack_00000028 = in_stack_00000028 / 1000000;
            if (unaff_x20 != 0) {
              lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
              if (lVar8 == 0) break;
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_07721f20;
              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_09f310b8;
              thunk_FUN_044bb4b4();
              if (*(long *)(unaff_x19 + 0x10) == 0) break;
              iVar5 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
              fStack0000000000000024 =
                   ((float)(iVar5 - *(int *)(lVar14 + 0x18)) * 100.0) / (float)iVar5;
              uVar6 = FUN_07a5081c((long)&stack0x00000020 + 4,0);
              if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_07721f20;
              *(undefined8 *)(lVar8 + 0x28) = uVar6;
              thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x28),uVar6);
              if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_07721f20;
              *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_09f31098;
              thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x30));
              uStack0000000000000020 = *(undefined4 *)(lVar14 + 0x18);
              uVar6 = FUN_07a3b850(&stack0x00000020,0);
              if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_07721f20;
              *(undefined8 *)(lVar8 + 0x38) = uVar6;
              thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x38),uVar6);
              if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_07721f20;
              *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_09f310a8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x40));
              uStack0000000000000020 = FUN_063095a0(lVar7,*(undefined8 *)puVar2);
              uVar6 = FUN_07a3b850(&stack0x00000020,0);
              if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_07721f20;
              *(undefined8 *)(lVar8 + 0x48) = uVar6;
              thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x48),uVar6);
              if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_07721f20;
              *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)PTR_DAT_09f310b0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x50));
              uVar6 = FUN_07a3c8f0(&stack0x00000028,0);
              if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_07721f20;
              *(undefined8 *)(lVar8 + 0x58) = uVar6;
              thunk_FUN_044bb4b4();
              uVar6 = FUN_078b57fc(lVar8,0);
              if (*(long *)(unaff_x19 + 0x10) == 0) break;
              iVar5 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
              bVar4 = (**(code **)(unaff_x20 + 0x18))
                                ((float)(iVar5 - *(int *)(lVar14 + 0x18)) / (float)iVar5,
                                 *(undefined8 *)(unaff_x20 + 0x40),uVar6,
                                 *(undefined8 *)(unaff_x20 + 0x28));
              *(byte *)(unaff_x19 + 0x20) = bVar4 & 1;
            }
            fVar23 = (float)FUN_07721ffc();
            iVar5 = FUN_063095a0(lVar7,*(undefined8 *)puVar2);
            if (iVar5 == 0) goto LAB_07721a04;
          }
          auVar27 = FUN_06308c30(lVar7,*puVar18);
          if (auVar27._8_8_ == 0) break;
        } while( true );
      }
    }
  }
LAB_07721330:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


