/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$set_RectTransform
ENTRY_POINT: 076e71e0
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__set_RectTransform
               (undefined1 param_1 [16],undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined4 uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f2f328);
  FUN_04447ba8(PTR_DAT_09f2f330);
  FUN_04447ba8(PTR_DAT_09f1e538);
  FUN_04447ba8(PTR_DAT_09f2f338);
  FUN_04447ba8(PTR_DAT_09f20070);
  FUN_04447ba8(PTR_DAT_09f2f340);
  FUN_04447ba8(PTR_DAT_09f286d8);
  FUN_04447ba8(PTR_DAT_09f20ed0);
  FUN_04447ba8(PTR_DAT_09f2f348);
  FUN_04447ba8(PTR_DAT_09f1e5e8);
  FUN_04447ba8(PTR_DAT_09f2f350);
  *(undefined1 *)(unaff_x20 + 0xe97) = 1;
  puVar2 = PTR_DAT_09f1e538;
  if (DAT_0a522ec6 == '\0') {
    FUN_04447ba8(PTR_DAT_09f2efb8);
    DAT_0a522ec6 = '\x01';
  }
  puVar3 = PTR_DAT_09f2efb8;
  uVar18 = **(undefined8 **)(*(long *)PTR_DAT_09f2efb8 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952fedc(uVar18,0);
  if ((uVar13 & 1) == 0) {
    if (DAT_0a522ec9 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2efb8);
      DAT_0a522ec9 = '\x01';
    }
    **(long **)(*(long *)puVar3 + 0xb8) = unaff_x19;
    thunk_FUN_044bb4b4(*(undefined8 *)(*(long *)puVar3 + 0xb8));
    if (*(char *)(unaff_x19 + 0x20) != '\0') {
      uVar18 = FUN_095259a0();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)puVar2);
      }
      FUN_09531088(uVar18,0);
    }
  }
  else {
    if (DAT_0a522ec6 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2efb8);
      DAT_0a522ec6 = '\x01';
    }
    uVar18 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar13 = FUN_09531730(uVar18);
    if ((uVar13 & 1) != 0) {
      uVar18 = FUN_095259a0();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)puVar2);
      }
      FUN_09530d4c(uVar18,0);
      return;
    }
  }
  puVar10 = PTR_DAT_09f2f328;
  puVar9 = PTR_DAT_09f2f310;
  puVar8 = PTR_DAT_09f2f300;
  puVar7 = PTR_DAT_09f2f2f8;
  puVar6 = PTR_DAT_09f2f2f0;
  puVar5 = PTR_DAT_09f2ec88;
  puVar4 = PTR_DAT_09f2ec78;
  puVar3 = PTR_DAT_09f29b18;
  puVar2 = PTR_DAT_09f1e9a0;
  uVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f320);
  FUN_05bad680(uVar18,0x10,*(undefined8 *)puVar7);
  *(undefined8 *)(unaff_x19 + 0x2b0) = uVar18;
  thunk_FUN_044bb4b4(unaff_x19 + 0x2b0,uVar18);
  uVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar9);
  FUN_05bad680(uVar18,0x10,*(undefined8 *)puVar8);
  *(undefined8 *)(unaff_x19 + 0x2b8) = uVar18;
  thunk_FUN_044bb4b4(unaff_x19 + 0x2b8,uVar18);
  uVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar10);
  FUN_05bad680(uVar18,8,*(undefined8 *)puVar6);
  *(undefined8 *)(unaff_x19 + 0x260) = uVar18;
  thunk_FUN_044bb4b4(unaff_x19 + 0x260,uVar18);
  uVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
  FUN_05bad680(uVar18,8,*(undefined8 *)puVar5);
  *(undefined8 *)(unaff_x19 + 0x270) = uVar18;
  thunk_FUN_044bb4b4(unaff_x19 + 0x270,uVar18);
  uVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_05b04038(uVar18,8,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x19 + 0x278) = uVar18;
  thunk_FUN_044bb4b4(unaff_x19 + 0x278,uVar18);
  iVar1 = *(int *)(unaff_x19 + 0x48);
  if (0xfff < iVar1) {
    iVar1 = 0x1000;
  }
  if (iVar1 < 0x11) {
    iVar1 = 0x10;
  }
  uVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f2e0);
  FUN_0759404c(uVar18,iVar1,*(undefined8 *)PTR_DAT_09f2f2c0);
  *(undefined8 *)(unaff_x19 + 0x240) = uVar18;
  thunk_FUN_044bb4b4(unaff_x19 + 0x240,uVar18);
  uVar22 = *(undefined4 *)(unaff_x19 + 0x50);
  uVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f200);
  FUN_07000ad4(uVar18,uVar22,*(undefined8 *)PTR_DAT_09f2f1f8);
  *(undefined8 *)(unaff_x19 + 0x2c0) = uVar18;
  thunk_FUN_044bb4b4(unaff_x19 + 0x2c0,uVar18);
  uVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f286d8);
  FUN_07a80df4(uVar18,0);
  *(undefined8 *)(unaff_x19 + 0x250) = uVar18;
  thunk_FUN_044bb4b4(unaff_x19 + 0x250,uVar18);
  uVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20ed0);
  FUN_078bb6f4(uVar18,0x400,0);
  *(undefined8 *)(unaff_x19 + 0x2d8) = uVar18;
  thunk_FUN_044bb4b4(unaff_x19 + 0x2d8,uVar18);
  plVar14 = (long *)FUN_095258d0();
  plVar21 = (long *)PTR_DAT_09f2f340;
  if (plVar14 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x100) = 0;
    plVar21 = (long *)PTR_DAT_09f2f340;
  }
  else {
    lVar16 = *(long *)PTR_DAT_09f2f340;
    if ((*plVar14 != lVar16) || (*(long **)(unaff_x19 + 0x100) = plVar14, *plVar14 != lVar16))
    goto LAB_076e80e8;
  }
  thunk_FUN_044bb4b4(unaff_x19 + 0x100,plVar14);
  if (*(long *)(unaff_x19 + 0x1a0) != 0) {
    plVar14 = (long *)FUN_095258d0(*(long *)(unaff_x19 + 0x1a0),0);
    if (plVar14 == (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
    }
    else {
      lVar16 = *plVar21;
      if ((*plVar14 != lVar16) || (*(long **)(unaff_x19 + 0x1a8) = plVar14, *plVar14 != lVar16))
      goto LAB_076e80e8;
    }
    thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x1a8),plVar14);
    puVar3 = PTR_DAT_09f2f2b0;
    puVar2 = PTR_DAT_09f2f2a8;
    lVar16 = *(long *)(unaff_x19 + 0x1a8);
    if (lVar16 != 0) {
      uVar22 = FUN_09538f28(lVar16,0);
      *(undefined4 *)(unaff_x19 + 0x1b0) = uVar22;
      *(undefined4 *)(unaff_x19 + 0x1b4) = param_2;
      lVar16 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
      FUN_07375d58(lVar16,*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_09f2f298;
      if (lVar16 != 0) {
        FUN_07376b48(lVar16,3,*(undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)PTR_DAT_09f2f298);
        FUN_07376b48(lVar16,2,*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)puVar2);
        FUN_07376b48(lVar16,0,*(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)puVar2);
        FUN_07376b48(lVar16,4,*(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)puVar2);
        FUN_07376b48(lVar16,1,*(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)puVar2);
        *(long *)(unaff_x19 + 0xa0) = lVar16;
        thunk_FUN_044bb4b4((long *)(unaff_x19 + 0xa0),lVar16);
        plVar14 = *(long **)(unaff_x19 + 0x138);
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x2a8))
                    (*(undefined4 *)(unaff_x19 + 0xd8),*(undefined4 *)(unaff_x19 + 0xdc),
                     *(undefined4 *)(unaff_x19 + 0xe0),*(undefined4 *)(unaff_x19 + 0xe4),plVar14,
                     *(undefined8 *)(*plVar14 + 0x2b0));
          plVar14 = *(long **)(unaff_x19 + 0x140);
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x2a8))
                      (*(undefined4 *)(unaff_x19 + 0xd8),*(undefined4 *)(unaff_x19 + 0xdc),
                       *(undefined4 *)(unaff_x19 + 0xe0),*(undefined4 *)(unaff_x19 + 0xe4),plVar14,
                       *(undefined8 *)(*plVar14 + 0x2b0));
            plVar14 = *(long **)(unaff_x19 + 0x148);
            if (plVar14 != (long *)0x0) {
              uVar22 = *(undefined4 *)(unaff_x19 + 0xdc);
              uVar25 = 0;
              (**(code **)(*plVar14 + 0x2a8))
                        (*(undefined4 *)(unaff_x19 + 0xd8),uVar22,*(undefined4 *)(unaff_x19 + 0xe0),
                         *(undefined4 *)(unaff_x19 + 0xe4),plVar14,*(undefined8 *)(*plVar14 + 0x2b0)
                        );
              puVar5 = PTR_DAT_09f2f2b8;
              puVar4 = PTR_DAT_09f2f2a0;
              puVar3 = PTR_DAT_09f2f230;
              puVar2 = PTR_DAT_09f2f218;
              if (*(long *)(unaff_x19 + 0x180) != 0) {
                lVar16 = 0x98;
                if (*(char *)(unaff_x19 + 0x28) != '\0') {
                  lVar16 = 0x90;
                }
                FUN_096385c4(*(long *)(unaff_x19 + 0x180),*(undefined8 *)(unaff_x19 + lVar16),0);
                uVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f320);
                FUN_05bad680(uVar18,0x80,*(undefined8 *)PTR_DAT_09f2f2f8);
                *(undefined8 *)(unaff_x19 + 0x200) = uVar18;
                thunk_FUN_044bb4b4(unaff_x19 + 0x200,uVar18);
                uVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
                FUN_0742ff00(uVar18,0x80,*(undefined8 *)puVar4);
                *(undefined8 *)(unaff_x19 + 0x210) = uVar18;
                thunk_FUN_044bb4b4(unaff_x19 + 0x210,uVar18);
                uVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                FUN_071c0814(uVar18,*(undefined8 *)puVar2);
                *(undefined8 *)(unaff_x19 + 0x218) = uVar18;
                thunk_FUN_044bb4b4(unaff_x19 + 0x218,uVar18);
                uVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                FUN_071c0814(uVar18,*(undefined8 *)puVar2);
                *(undefined8 *)(unaff_x19 + 0x228) = uVar18;
                thunk_FUN_044bb4b4(unaff_x19 + 0x228,uVar18);
                if (*(char *)(unaff_x19 + 0x45) != '\0') {
                  uVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f318);
                  FUN_05ab6f08(uVar18,0x80,*(undefined8 *)PTR_DAT_09f2f308);
                  *(undefined8 *)(unaff_x19 + 0x208) = uVar18;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x208,uVar18);
                  puVar3 = PTR_DAT_09f2f228;
                  uVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f228);
                  puVar2 = PTR_DAT_09f2f220;
                  FUN_071c06b0(uVar18,*(undefined8 *)PTR_DAT_09f2f220);
                  *(undefined8 *)(unaff_x19 + 0x220) = uVar18;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x220,uVar18);
                  uVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                  FUN_071c06b0(uVar18,*(undefined8 *)puVar2);
                  *(undefined8 *)(unaff_x19 + 0x230) = uVar18;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x230,uVar18);
                  if (*(long *)(unaff_x19 + 0x240) == 0) goto LAB_076e80e4;
                  uVar12 = FUN_07593f6c(*(long *)(unaff_x19 + 0x240),*(undefined8 *)PTR_DAT_09f2f2d0
                                       );
                  uVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f2d8);
                  FUN_07593d04(uVar18,uVar12,*(undefined8 *)PTR_DAT_09f2f2c8);
                  *(undefined8 *)(unaff_x19 + 0x248) = uVar18;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x248,uVar18);
                }
                if ((*(long *)(unaff_x19 + 0x68) != 0) &&
                   (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x20), lVar16 != 0)) {
                  lVar20 = *(long *)(unaff_x19 + 0x1b8);
                  FUN_09538f28(lVar16,0);
                  if (lVar20 != 0) {
                    FUN_076e8100(CONCAT44(uVar25,uVar22),lVar20);
                    if (*(long *)(unaff_x19 + 0x1b8) != 0) {
                      FUN_076e817c(*(long *)(unaff_x19 + 0x1b8),1);
                      if (*(float *)(unaff_x19 + 0x2c) < 100.0) {
                        *(undefined4 *)(unaff_x19 + 0x2c) = 0x42c80000;
                      }
                      fVar17 = 200.0;
                      if (*(float *)(unaff_x19 + 0x24) < 200.0) {
                        *(undefined4 *)(unaff_x19 + 0x24) = 0x43480000;
                      }
                      if (*(char *)(unaff_x19 + 0x29) == '\0') {
                        if (((*(long *)(unaff_x19 + 0x180) == 0) ||
                            (lVar16 = FUN_04c6c620(*(long *)(unaff_x19 + 0x180),
                                                   *(undefined8 *)PTR_DAT_09f2f208), lVar16 == 0))
                           || (plVar14 = (long *)FUN_095258d0(lVar16,0), plVar14 == (long *)0x0))
                        goto LAB_076e80e4;
                        if (*plVar14 != *plVar21) {
                    /* WARNING: Subroutine does not return */
                          FUN_044481e4(plVar14);
                        }
                        FUN_09538a84(plVar14,0);
                        FUN_09538b4c(0,plVar14,0);
                        FUN_09538c10(plVar14,0);
                        FUN_09538cd8(0,plVar14,0);
                        FUN_095390b4(plVar14,0);
                        FUN_0953917c(0,plVar14,0);
                        if ((*(long *)(unaff_x19 + 0x118) == 0) ||
                           (plVar15 = (long *)FUN_095258d0(*(long *)(unaff_x19 + 0x118),0),
                           plVar15 == (long *)0x0)) goto LAB_076e80e4;
                        if (*plVar15 != *plVar21) {
                    /* WARNING: Subroutine does not return */
                          FUN_044481e4(plVar15);
                        }
                        fVar23 = (float)FUN_09538d9c(plVar15,0);
                        fVar24 = (float)FUN_09538f28(plVar14,0);
                        FUN_09538e64(fVar23 + fVar24,fVar17 + 0.0,plVar15,0);
                      }
                      puVar3 = PTR_DAT_09f2f350;
                      puVar2 = PTR_DAT_09f2f348;
                      if (*(char *)(unaff_x19 + 0x38) == '\0') {
                        *(undefined8 *)(unaff_x19 + 0x168) = 0;
                        thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x168),0);
                        if ((*(long *)(unaff_x19 + 0x170) == 0) ||
                           (lVar16 = FUN_095259a0(*(long *)(unaff_x19 + 0x170),0), lVar16 == 0))
                        goto LAB_076e80e4;
                        FUN_0952a454(lVar16,0,0);
                        if ((*(long *)(unaff_x19 + 0x178) == 0) ||
                           (lVar16 = FUN_095259a0(*(long *)(unaff_x19 + 0x178),0), lVar16 == 0))
                        goto LAB_076e80e4;
                        FUN_0952a454(lVar16,0,0);
                      }
                      else {
                        lVar16 = *(long *)(unaff_x19 + 0x168);
                        if ((lVar16 == 0) ||
                           (lVar16 = FUN_04c6bfdc(lVar16,*(undefined8 *)PTR_DAT_09f2f210),
                           lVar16 == 0)) goto LAB_076e80e4;
                        lVar16 = *(long *)(lVar16 + 0x148);
                        uVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                        FUN_06a389f0();
                        if (lVar16 == 0) goto LAB_076e80e4;
                        FUN_06a40fa0(lVar16,uVar18,*(undefined8 *)puVar3);
                      }
                      if ((*(long *)(unaff_x19 + 0x138) != 0) &&
                         (lVar16 = FUN_095259a0(*(long *)(unaff_x19 + 0x138),0), lVar16 != 0)) {
                        FUN_0952a454(lVar16,*(undefined1 *)(unaff_x19 + 0x41),0);
                        if ((*(long *)(unaff_x19 + 0x140) != 0) &&
                           (lVar16 = FUN_095259a0(*(long *)(unaff_x19 + 0x140),0), lVar16 != 0)) {
                          FUN_0952a454(lVar16,*(undefined1 *)(unaff_x19 + 0x42),0);
                          if (*(long *)(unaff_x19 + 0x148) != 0) {
                            lVar16 = FUN_095259a0(*(long *)(unaff_x19 + 0x148),0);
                            if (*(char *)(unaff_x19 + 0x43) == '\0') {
                              bVar11 = *(char *)(unaff_x19 + 0x44) != '\0';
                            }
                            else {
                              bVar11 = true;
                            }
                            if (lVar16 != 0) {
                              FUN_0952a454(lVar16,bVar11,0);
                              if ((*(long *)(unaff_x19 + 0x110) != 0) &&
                                 (lVar16 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0), lVar16 != 0
                                 )) {
                                uVar13 = FUN_0952a518(lVar16,0);
                                if ((uVar13 & 1) != 0) {
                                  if ((*(long *)(unaff_x19 + 0x110) == 0) ||
                                     (lVar16 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0),
                                     lVar16 == 0)) goto LAB_076e80e4;
                                  FUN_0952a454(lVar16,0,0);
                                }
                                puVar4 = PTR_DAT_09f2f338;
                                lVar16 = *(long *)(unaff_x19 + 0x118);
                                if (lVar16 != 0) {
                                  uVar19 = *(undefined8 *)(lVar16 + 0x150);
                                  uVar18 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f338);
                                  FUN_0980b100();
                                  plVar14 = (long *)FUN_07a84204(uVar19,uVar18,0);
                                  if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)puVar4)) {
LAB_076e80e8:
                    /* WARNING: Subroutine does not return */
                                    FUN_044481e4(plVar14);
                                  }
                                  FUN_0980bd10(lVar16,plVar14,0);
                                  if (*(long *)(unaff_x19 + 0x118) != 0) {
                                    lVar16 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x148);
                                    uVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                    FUN_06a389f0();
                                    if (lVar16 != 0) {
                                      FUN_06a40fa0(lVar16,uVar18,*(undefined8 *)puVar3);
                                      if (*(long *)(unaff_x19 + 0x118) != 0) {
                                        lVar16 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x140);
                                        uVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                        FUN_06a389f0();
                                        if (lVar16 != 0) {
                                          FUN_06a40fa0(lVar16,uVar18,*(undefined8 *)puVar3);
                                          puVar2 = PTR_DAT_09f1e5e8;
                                          if (*(long *)(unaff_x19 + 0x120) != 0) {
                                            lVar16 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x100)
                                            ;
                                            uVar18 = thunk_FUN_0448520c(*(undefined8 *)
                                                                         PTR_DAT_09f1e5e8);
                                            FUN_09542000();
                                            if (lVar16 != 0) {
                                              FUN_095420d0(lVar16,uVar18,0);
                                              if (*(long *)(unaff_x19 + 0x128) != 0) {
                                                lVar16 = *(long *)(*(long *)(unaff_x19 + 0x128) +
                                                                  0x100);
                                                uVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                                FUN_09542000();
                                                if (lVar16 != 0) {
                                                  FUN_095420d0(lVar16,uVar18,0);
                                                  puVar3 = PTR_DAT_09f1e5d8;
                                                  if ((*(long *)(unaff_x19 + 0x130) != 0) &&
                                                     (lVar16 = FUN_04c6bfdc(*(long *)(unaff_x19 +
                                                                                     0x130),
                                                                            *(undefined8 *)
                                                                             PTR_DAT_09f1e5d8),
                                                     lVar16 != 0)) {
                                                    lVar16 = *(long *)(lVar16 + 0x100);
                                                    uVar18 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_09542000();
                                                    if (lVar16 != 0) {
                                                      FUN_095420d0(lVar16,uVar18,0);
                                                      if ((*(long *)(unaff_x19 + 0x138) != 0) &&
                                                         (lVar16 = FUN_04c6bfdc(*(long *)(unaff_x19
                                                                                         + 0x138),
                                                                                *(undefined8 *)
                                                                                 puVar3),
                                                         lVar16 != 0)) {
                                                        lVar16 = *(long *)(lVar16 + 0x100);
                                                        uVar18 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_09542000();
                                                        if (lVar16 != 0) {
                                                          FUN_095420d0(lVar16,uVar18,0);
                                                          if ((*(long *)(unaff_x19 + 0x140) != 0) &&
                                                             (lVar16 = FUN_04c6bfdc(*(long *)(
                                                  unaff_x19 + 0x140),*(undefined8 *)puVar3),
                                                  lVar16 != 0)) {
                                                    lVar16 = *(long *)(lVar16 + 0x100);
                                                    uVar18 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_09542000();
                                                    if (lVar16 != 0) {
                                                      FUN_095420d0(lVar16,uVar18,0);
                                                      if ((*(long *)(unaff_x19 + 0x148) != 0) &&
                                                         (lVar16 = FUN_04c6bfdc(*(long *)(unaff_x19
                                                                                         + 0x148),
                                                                                *(undefined8 *)
                                                                                 puVar3),
                                                         lVar16 != 0)) {
                                                        lVar16 = *(long *)(lVar16 + 0x100);
                                                        uVar18 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_09542000();
                                                        if (lVar16 != 0) {
                                                          FUN_095420d0(lVar16,uVar18,0);
                                                          if ((*(long *)(unaff_x19 + 0x188) != 0) &&
                                                             (lVar16 = FUN_04d7a1ac(*(long *)(
                                                  unaff_x19 + 0x188),*(undefined8 *)PTR_DAT_09f2f2e8
                                                  ), lVar16 != 0)) {
                                                    lVar16 = *(long *)(lVar16 + 0x100);
                                                    uVar18 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_09542000();
                                                    puVar3 = PTR_DAT_09f21ad0;
                                                    puVar2 = PTR_DAT_09f20070;
                                                    if (lVar16 != 0) {
                                                      FUN_095420d0(lVar16,uVar18,0);
                                                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                        thunk_FUN_044a54b4();
                                                      }
                                                      uVar18 = FUN_07a1e8c0(0);
                                                      uVar19 = FUN_07a1e9e8(0);
                                                      uVar18 = FUN_07a2064c(uVar18,uVar19,0);
                                                      *(undefined8 *)(unaff_x19 + 0x2e0) = uVar18;
                                                      *(undefined8 *)(unaff_x19 + 0x2f8) = 0;
                                                      *(undefined8 *)(unaff_x19 + 0x2f0) = 0;
                                                      uVar18 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_09834e40(uVar18,0,0);
                                                      *(undefined8 *)(unaff_x19 + 0x300) = uVar18;
                                                      thunk_FUN_044bb4b4(unaff_x19 + 0x300,uVar18);
                                                      puVar2 = PTR_DAT_09f2f330;
                                                      if (*(char *)(unaff_x19 + 0x40) != '\0') {
                                                        uVar18 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                                                                                                          
                                                  PTR_DAT_09f2f330);
                                                  FUN_094bed1c();
                                                  if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) ==
                                                      0) {
                                                    thunk_FUN_044a54b4();
                                                  }
                                                  UnityEngine_Rigidbody__AddExplosionForce(uVar18,0)
                                                  ;
                                                  uVar18 = thunk_FUN_0448520c(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_094bed1c();
                                                  FUN_094bd318(uVar18,0);
                                                  return;
                                                  }
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_076e80e4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


