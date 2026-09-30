/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$remove_OnVisibilityChangedEvent
ENTRY_POINT: 076e73b4
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__remove_OnVisibilityChangedEvent
               (undefined1 param_1 [16],undefined4 param_2,undefined8 param_3)

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
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*unaff_x21);
  }
  FUN_09531088(param_3,0);
  puVar10 = PTR_DAT_09f2f328;
  puVar9 = PTR_DAT_09f2f310;
  puVar8 = PTR_DAT_09f2f300;
  puVar7 = PTR_DAT_09f2f2f8;
  puVar6 = PTR_DAT_09f2f2f0;
  puVar5 = PTR_DAT_09f2ec88;
  puVar4 = PTR_DAT_09f2ec78;
  puVar2 = PTR_DAT_09f29b18;
  puVar3 = PTR_DAT_09f1e9a0;
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f320);
  FUN_05bad680(uVar13,0x10,*(undefined8 *)puVar7);
  *(undefined8 *)(unaff_x19 + 0x2b0) = uVar13;
  thunk_FUN_044bb4b4(unaff_x19 + 0x2b0,uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar9);
  FUN_05bad680(uVar13,0x10,*(undefined8 *)puVar8);
  *(undefined8 *)(unaff_x19 + 0x2b8) = uVar13;
  thunk_FUN_044bb4b4(unaff_x19 + 0x2b8,uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar10);
  FUN_05bad680(uVar13,8,*(undefined8 *)puVar6);
  *(undefined8 *)(unaff_x19 + 0x260) = uVar13;
  thunk_FUN_044bb4b4(unaff_x19 + 0x260,uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
  FUN_05bad680(uVar13,8,*(undefined8 *)puVar5);
  *(undefined8 *)(unaff_x19 + 0x270) = uVar13;
  thunk_FUN_044bb4b4(unaff_x19 + 0x270,uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_05b04038(uVar13,8,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x278) = uVar13;
  thunk_FUN_044bb4b4(unaff_x19 + 0x278,uVar13);
  iVar1 = *(int *)(unaff_x19 + 0x48);
  if (0xfff < iVar1) {
    iVar1 = 0x1000;
  }
  if (iVar1 < 0x11) {
    iVar1 = 0x10;
  }
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f2e0);
  FUN_0759404c(uVar13,iVar1,*(undefined8 *)PTR_DAT_09f2f2c0);
  *(undefined8 *)(unaff_x19 + 0x240) = uVar13;
  thunk_FUN_044bb4b4(unaff_x19 + 0x240,uVar13);
  uVar22 = *(undefined4 *)(unaff_x19 + 0x50);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f200);
  FUN_07000ad4(uVar13,uVar22,*(undefined8 *)PTR_DAT_09f2f1f8);
  *(undefined8 *)(unaff_x19 + 0x2c0) = uVar13;
  thunk_FUN_044bb4b4(unaff_x19 + 0x2c0,uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f286d8);
  FUN_07a80df4(uVar13,0);
  *(undefined8 *)(unaff_x19 + 0x250) = uVar13;
  thunk_FUN_044bb4b4(unaff_x19 + 0x250,uVar13);
  uVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20ed0);
  FUN_078bb6f4(uVar13,0x400,0);
  *(undefined8 *)(unaff_x19 + 0x2d8) = uVar13;
  thunk_FUN_044bb4b4(unaff_x19 + 0x2d8,uVar13);
  plVar14 = (long *)FUN_095258d0();
  plVar21 = (long *)PTR_DAT_09f2f340;
  if (plVar14 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x100) = 0;
    plVar21 = (long *)PTR_DAT_09f2f340;
  }
  else {
    lVar17 = *(long *)PTR_DAT_09f2f340;
    if ((*plVar14 != lVar17) || (*(long **)(unaff_x19 + 0x100) = plVar14, *plVar14 != lVar17))
    goto LAB_076e80e8;
  }
  thunk_FUN_044bb4b4(unaff_x19 + 0x100,plVar14);
  if (*(long *)(unaff_x19 + 0x1a0) != 0) {
    plVar14 = (long *)FUN_095258d0(*(long *)(unaff_x19 + 0x1a0),0);
    if (plVar14 == (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
    }
    else {
      lVar17 = *plVar21;
      if ((*plVar14 != lVar17) || (*(long **)(unaff_x19 + 0x1a8) = plVar14, *plVar14 != lVar17))
      goto LAB_076e80e8;
    }
    thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x1a8),plVar14);
    puVar2 = PTR_DAT_09f2f2b0;
    puVar3 = PTR_DAT_09f2f2a8;
    lVar17 = *(long *)(unaff_x19 + 0x1a8);
    if (lVar17 != 0) {
      uVar22 = FUN_09538f28(lVar17,0);
      *(undefined4 *)(unaff_x19 + 0x1b0) = uVar22;
      *(undefined4 *)(unaff_x19 + 0x1b4) = param_2;
      lVar17 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
      FUN_07375d58(lVar17,*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_09f2f298;
      if (lVar17 != 0) {
        FUN_07376b48(lVar17,3,*(undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)PTR_DAT_09f2f298);
        FUN_07376b48(lVar17,2,*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)puVar3);
        FUN_07376b48(lVar17,0,*(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)puVar3);
        FUN_07376b48(lVar17,4,*(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)puVar3);
        FUN_07376b48(lVar17,1,*(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)puVar3);
        *(long *)(unaff_x19 + 0xa0) = lVar17;
        thunk_FUN_044bb4b4((long *)(unaff_x19 + 0xa0),lVar17);
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
              puVar2 = PTR_DAT_09f2f230;
              puVar3 = PTR_DAT_09f2f218;
              if (*(long *)(unaff_x19 + 0x180) != 0) {
                lVar17 = 0x98;
                if (*(char *)(unaff_x19 + 0x28) != '\0') {
                  lVar17 = 0x90;
                }
                FUN_096385c4(*(long *)(unaff_x19 + 0x180),*(undefined8 *)(unaff_x19 + lVar17),0);
                uVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f320);
                FUN_05bad680(uVar13,0x80,*(undefined8 *)PTR_DAT_09f2f2f8);
                *(undefined8 *)(unaff_x19 + 0x200) = uVar13;
                thunk_FUN_044bb4b4(unaff_x19 + 0x200,uVar13);
                uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
                FUN_0742ff00(uVar13,0x80,*(undefined8 *)puVar4);
                *(undefined8 *)(unaff_x19 + 0x210) = uVar13;
                thunk_FUN_044bb4b4(unaff_x19 + 0x210,uVar13);
                uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                FUN_071c0814(uVar13,*(undefined8 *)puVar3);
                *(undefined8 *)(unaff_x19 + 0x218) = uVar13;
                thunk_FUN_044bb4b4(unaff_x19 + 0x218,uVar13);
                uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                FUN_071c0814(uVar13,*(undefined8 *)puVar3);
                *(undefined8 *)(unaff_x19 + 0x228) = uVar13;
                thunk_FUN_044bb4b4(unaff_x19 + 0x228,uVar13);
                if (*(char *)(unaff_x19 + 0x45) != '\0') {
                  uVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f318);
                  FUN_05ab6f08(uVar13,0x80,*(undefined8 *)PTR_DAT_09f2f308);
                  *(undefined8 *)(unaff_x19 + 0x208) = uVar13;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x208,uVar13);
                  puVar2 = PTR_DAT_09f2f228;
                  uVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f228);
                  puVar3 = PTR_DAT_09f2f220;
                  FUN_071c06b0(uVar13,*(undefined8 *)PTR_DAT_09f2f220);
                  *(undefined8 *)(unaff_x19 + 0x220) = uVar13;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x220,uVar13);
                  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                  FUN_071c06b0(uVar13,*(undefined8 *)puVar3);
                  *(undefined8 *)(unaff_x19 + 0x230) = uVar13;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x230,uVar13);
                  if (*(long *)(unaff_x19 + 0x240) == 0) goto LAB_076e80e4;
                  uVar12 = FUN_07593f6c(*(long *)(unaff_x19 + 0x240),*(undefined8 *)PTR_DAT_09f2f2d0
                                       );
                  uVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f2d8);
                  FUN_07593d04(uVar13,uVar12,*(undefined8 *)PTR_DAT_09f2f2c8);
                  *(undefined8 *)(unaff_x19 + 0x248) = uVar13;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x248,uVar13);
                }
                if ((*(long *)(unaff_x19 + 0x68) != 0) &&
                   (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x20), lVar17 != 0)) {
                  lVar20 = *(long *)(unaff_x19 + 0x1b8);
                  FUN_09538f28(lVar17,0);
                  if (lVar20 != 0) {
                    FUN_076e8100(CONCAT44(uVar25,uVar22),lVar20);
                    if (*(long *)(unaff_x19 + 0x1b8) != 0) {
                      FUN_076e817c(*(long *)(unaff_x19 + 0x1b8),1);
                      if (*(float *)(unaff_x19 + 0x2c) < 100.0) {
                        *(undefined4 *)(unaff_x19 + 0x2c) = 0x42c80000;
                      }
                      fVar18 = 200.0;
                      if (*(float *)(unaff_x19 + 0x24) < 200.0) {
                        *(undefined4 *)(unaff_x19 + 0x24) = 0x43480000;
                      }
                      if (*(char *)(unaff_x19 + 0x29) == '\0') {
                        if (((*(long *)(unaff_x19 + 0x180) == 0) ||
                            (lVar17 = FUN_04c6c620(*(long *)(unaff_x19 + 0x180),
                                                   *(undefined8 *)PTR_DAT_09f2f208), lVar17 == 0))
                           || (plVar14 = (long *)FUN_095258d0(lVar17,0), plVar14 == (long *)0x0))
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
                        FUN_09538e64(fVar23 + fVar24,fVar18 + 0.0,plVar15,0);
                      }
                      puVar2 = PTR_DAT_09f2f350;
                      puVar3 = PTR_DAT_09f2f348;
                      if (*(char *)(unaff_x19 + 0x38) == '\0') {
                        *(undefined8 *)(unaff_x19 + 0x168) = 0;
                        thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x168),0);
                        if ((*(long *)(unaff_x19 + 0x170) == 0) ||
                           (lVar17 = FUN_095259a0(*(long *)(unaff_x19 + 0x170),0), lVar17 == 0))
                        goto LAB_076e80e4;
                        FUN_0952a454(lVar17,0,0);
                        if ((*(long *)(unaff_x19 + 0x178) == 0) ||
                           (lVar17 = FUN_095259a0(*(long *)(unaff_x19 + 0x178),0), lVar17 == 0))
                        goto LAB_076e80e4;
                        FUN_0952a454(lVar17,0,0);
                      }
                      else {
                        lVar17 = *(long *)(unaff_x19 + 0x168);
                        if ((lVar17 == 0) ||
                           (lVar17 = FUN_04c6bfdc(lVar17,*(undefined8 *)PTR_DAT_09f2f210),
                           lVar17 == 0)) goto LAB_076e80e4;
                        lVar17 = *(long *)(lVar17 + 0x148);
                        uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                        FUN_06a389f0();
                        if (lVar17 == 0) goto LAB_076e80e4;
                        FUN_06a40fa0(lVar17,uVar13,*(undefined8 *)puVar2);
                      }
                      if ((*(long *)(unaff_x19 + 0x138) != 0) &&
                         (lVar17 = FUN_095259a0(*(long *)(unaff_x19 + 0x138),0), lVar17 != 0)) {
                        FUN_0952a454(lVar17,*(undefined1 *)(unaff_x19 + 0x41),0);
                        if ((*(long *)(unaff_x19 + 0x140) != 0) &&
                           (lVar17 = FUN_095259a0(*(long *)(unaff_x19 + 0x140),0), lVar17 != 0)) {
                          FUN_0952a454(lVar17,*(undefined1 *)(unaff_x19 + 0x42),0);
                          if (*(long *)(unaff_x19 + 0x148) != 0) {
                            lVar17 = FUN_095259a0(*(long *)(unaff_x19 + 0x148),0);
                            if (*(char *)(unaff_x19 + 0x43) == '\0') {
                              bVar11 = *(char *)(unaff_x19 + 0x44) != '\0';
                            }
                            else {
                              bVar11 = true;
                            }
                            if (lVar17 != 0) {
                              FUN_0952a454(lVar17,bVar11,0);
                              if ((*(long *)(unaff_x19 + 0x110) != 0) &&
                                 (lVar17 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0), lVar17 != 0
                                 )) {
                                uVar16 = FUN_0952a518(lVar17,0);
                                if ((uVar16 & 1) != 0) {
                                  if ((*(long *)(unaff_x19 + 0x110) == 0) ||
                                     (lVar17 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0),
                                     lVar17 == 0)) goto LAB_076e80e4;
                                  FUN_0952a454(lVar17,0,0);
                                }
                                puVar4 = PTR_DAT_09f2f338;
                                lVar17 = *(long *)(unaff_x19 + 0x118);
                                if (lVar17 != 0) {
                                  uVar19 = *(undefined8 *)(lVar17 + 0x150);
                                  uVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f338);
                                  FUN_0980b100();
                                  plVar14 = (long *)FUN_07a84204(uVar19,uVar13,0);
                                  if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)puVar4)) {
LAB_076e80e8:
                    /* WARNING: Subroutine does not return */
                                    FUN_044481e4(plVar14);
                                  }
                                  FUN_0980bd10(lVar17,plVar14,0);
                                  if (*(long *)(unaff_x19 + 0x118) != 0) {
                                    lVar17 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x148);
                                    uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                                    FUN_06a389f0();
                                    if (lVar17 != 0) {
                                      FUN_06a40fa0(lVar17,uVar13,*(undefined8 *)puVar2);
                                      if (*(long *)(unaff_x19 + 0x118) != 0) {
                                        lVar17 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x140);
                                        uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                                        FUN_06a389f0();
                                        if (lVar17 != 0) {
                                          FUN_06a40fa0(lVar17,uVar13,*(undefined8 *)puVar2);
                                          puVar3 = PTR_DAT_09f1e5e8;
                                          if (*(long *)(unaff_x19 + 0x120) != 0) {
                                            lVar17 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x100)
                                            ;
                                            uVar13 = thunk_FUN_0448520c(*(undefined8 *)
                                                                         PTR_DAT_09f1e5e8);
                                            FUN_09542000();
                                            if (lVar17 != 0) {
                                              FUN_095420d0(lVar17,uVar13,0);
                                              if (*(long *)(unaff_x19 + 0x128) != 0) {
                                                lVar17 = *(long *)(*(long *)(unaff_x19 + 0x128) +
                                                                  0x100);
                                                uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                                                FUN_09542000();
                                                if (lVar17 != 0) {
                                                  FUN_095420d0(lVar17,uVar13,0);
                                                  puVar2 = PTR_DAT_09f1e5d8;
                                                  if ((*(long *)(unaff_x19 + 0x130) != 0) &&
                                                     (lVar17 = FUN_04c6bfdc(*(long *)(unaff_x19 +
                                                                                     0x130),
                                                                            *(undefined8 *)
                                                                             PTR_DAT_09f1e5d8),
                                                     lVar17 != 0)) {
                                                    lVar17 = *(long *)(lVar17 + 0x100);
                                                    uVar13 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_09542000();
                                                    if (lVar17 != 0) {
                                                      FUN_095420d0(lVar17,uVar13,0);
                                                      if ((*(long *)(unaff_x19 + 0x138) != 0) &&
                                                         (lVar17 = FUN_04c6bfdc(*(long *)(unaff_x19
                                                                                         + 0x138),
                                                                                *(undefined8 *)
                                                                                 puVar2),
                                                         lVar17 != 0)) {
                                                        lVar17 = *(long *)(lVar17 + 0x100);
                                                        uVar13 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                     puVar3);
                                                        FUN_09542000();
                                                        if (lVar17 != 0) {
                                                          FUN_095420d0(lVar17,uVar13,0);
                                                          if ((*(long *)(unaff_x19 + 0x140) != 0) &&
                                                             (lVar17 = FUN_04c6bfdc(*(long *)(
                                                  unaff_x19 + 0x140),*(undefined8 *)puVar2),
                                                  lVar17 != 0)) {
                                                    lVar17 = *(long *)(lVar17 + 0x100);
                                                    uVar13 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_09542000();
                                                    if (lVar17 != 0) {
                                                      FUN_095420d0(lVar17,uVar13,0);
                                                      if ((*(long *)(unaff_x19 + 0x148) != 0) &&
                                                         (lVar17 = FUN_04c6bfdc(*(long *)(unaff_x19
                                                                                         + 0x148),
                                                                                *(undefined8 *)
                                                                                 puVar2),
                                                         lVar17 != 0)) {
                                                        lVar17 = *(long *)(lVar17 + 0x100);
                                                        uVar13 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                     puVar3);
                                                        FUN_09542000();
                                                        if (lVar17 != 0) {
                                                          FUN_095420d0(lVar17,uVar13,0);
                                                          if ((*(long *)(unaff_x19 + 0x188) != 0) &&
                                                             (lVar17 = FUN_04d7a1ac(*(long *)(
                                                  unaff_x19 + 0x188),*(undefined8 *)PTR_DAT_09f2f2e8
                                                  ), lVar17 != 0)) {
                                                    lVar17 = *(long *)(lVar17 + 0x100);
                                                    uVar13 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_09542000();
                                                    puVar2 = PTR_DAT_09f21ad0;
                                                    puVar3 = PTR_DAT_09f20070;
                                                    if (lVar17 != 0) {
                                                      FUN_095420d0(lVar17,uVar13,0);
                                                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                        thunk_FUN_044a54b4();
                                                      }
                                                      uVar13 = FUN_07a1e8c0(0);
                                                      uVar19 = FUN_07a1e9e8(0);
                                                      uVar13 = FUN_07a2064c(uVar13,uVar19,0);
                                                      *(undefined8 *)(unaff_x19 + 0x2e0) = uVar13;
                                                      *(undefined8 *)(unaff_x19 + 0x2f8) = 0;
                                                      *(undefined8 *)(unaff_x19 + 0x2f0) = 0;
                                                      uVar13 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                   puVar3);
                                                      FUN_09834e40(uVar13,0,0);
                                                      *(undefined8 *)(unaff_x19 + 0x300) = uVar13;
                                                      thunk_FUN_044bb4b4(unaff_x19 + 0x300,uVar13);
                                                      puVar3 = PTR_DAT_09f2f330;
                                                      if (*(char *)(unaff_x19 + 0x40) != '\0') {
                                                        uVar13 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                                                                                                          
                                                  PTR_DAT_09f2f330);
                                                  FUN_094bed1c();
                                                  if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) ==
                                                      0) {
                                                    thunk_FUN_044a54b4();
                                                  }
                                                  UnityEngine_Rigidbody__AddExplosionForce(uVar13,0)
                                                  ;
                                                  uVar13 = thunk_FUN_0448520c(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_094bed1c();
                                                  FUN_094bd318(uVar13,0);
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


