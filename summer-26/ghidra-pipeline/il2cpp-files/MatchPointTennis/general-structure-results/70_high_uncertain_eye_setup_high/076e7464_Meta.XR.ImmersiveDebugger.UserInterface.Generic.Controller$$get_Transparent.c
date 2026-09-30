/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$get_Transparent
ENTRY_POINT: 076e7464
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__get_Transparent
               (undefined1 param_1 [16],undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar14;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long lVar15;
  int unaff_w24;
  undefined8 *unaff_x25;
  long *plVar16;
  undefined8 *unaff_x26;
  undefined8 *unaff_x29;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  
  FUN_05bad680();
  *(undefined8 *)(unaff_x19 + 0x2b8) = param_3;
  thunk_FUN_044bb4b4(unaff_x19 + 0x2b8,param_3);
  uVar8 = thunk_FUN_0448520c(*unaff_x21);
  FUN_05bad680(uVar8,8,*unaff_x29);
  *(undefined8 *)(unaff_x19 + 0x260) = uVar8;
  thunk_FUN_044bb4b4(unaff_x19 + 0x260,uVar8);
  uVar8 = thunk_FUN_0448520c(*unaff_x26);
  FUN_05bad680(uVar8,8,*unaff_x25);
  *(undefined8 *)(unaff_x19 + 0x270) = uVar8;
  thunk_FUN_044bb4b4(unaff_x19 + 0x270,uVar8);
  uVar8 = thunk_FUN_0448520c(*unaff_x23);
  FUN_05b04038(uVar8,8,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x278) = uVar8;
  thunk_FUN_044bb4b4(unaff_x19 + 0x278,uVar8);
  iVar1 = *(int *)(unaff_x19 + 0x48);
  if (0xfff < iVar1) {
    iVar1 = 0x1000;
  }
  if (iVar1 < 0x11) {
    iVar1 = unaff_w24;
  }
  uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f2e0);
  FUN_0759404c(uVar8,iVar1,*(undefined8 *)PTR_DAT_09f2f2c0);
  *(undefined8 *)(unaff_x19 + 0x240) = uVar8;
  thunk_FUN_044bb4b4(unaff_x19 + 0x240,uVar8);
  uVar17 = *(undefined4 *)(unaff_x19 + 0x50);
  uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f200);
  FUN_07000ad4(uVar8,uVar17,*(undefined8 *)PTR_DAT_09f2f1f8);
  *(undefined8 *)(unaff_x19 + 0x2c0) = uVar8;
  thunk_FUN_044bb4b4(unaff_x19 + 0x2c0,uVar8);
  uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f286d8);
  FUN_07a80df4(uVar8,0);
  *(undefined8 *)(unaff_x19 + 0x250) = uVar8;
  thunk_FUN_044bb4b4(unaff_x19 + 0x250,uVar8);
  uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20ed0);
  FUN_078bb6f4(uVar8,0x400,0);
  *(undefined8 *)(unaff_x19 + 0x2d8) = uVar8;
  thunk_FUN_044bb4b4(unaff_x19 + 0x2d8,uVar8);
  plVar9 = (long *)FUN_095258d0();
  plVar16 = (long *)PTR_DAT_09f2f340;
  if (plVar9 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x100) = 0;
    plVar16 = (long *)PTR_DAT_09f2f340;
  }
  else {
    lVar12 = *(long *)PTR_DAT_09f2f340;
    if ((*plVar9 != lVar12) || (*(long **)(unaff_x19 + 0x100) = plVar9, *plVar9 != lVar12))
    goto LAB_076e80e8;
  }
  thunk_FUN_044bb4b4(unaff_x19 + 0x100,plVar9);
  if (*(long *)(unaff_x19 + 0x1a0) != 0) {
    plVar9 = (long *)FUN_095258d0(*(long *)(unaff_x19 + 0x1a0),0);
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
    }
    else {
      lVar12 = *plVar16;
      if ((*plVar9 != lVar12) || (*(long **)(unaff_x19 + 0x1a8) = plVar9, *plVar9 != lVar12))
      goto LAB_076e80e8;
    }
    thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x1a8),plVar9);
    puVar2 = PTR_DAT_09f2f2b0;
    puVar3 = PTR_DAT_09f2f2a8;
    lVar12 = *(long *)(unaff_x19 + 0x1a8);
    if (lVar12 != 0) {
      uVar17 = FUN_09538f28(lVar12,0);
      *(undefined4 *)(unaff_x19 + 0x1b0) = uVar17;
      *(undefined4 *)(unaff_x19 + 0x1b4) = param_2;
      lVar12 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
      FUN_07375d58(lVar12,*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_09f2f298;
      if (lVar12 != 0) {
        FUN_07376b48(lVar12,3,*(undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)PTR_DAT_09f2f298);
        FUN_07376b48(lVar12,2,*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)puVar3);
        FUN_07376b48(lVar12,0,*(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)puVar3);
        FUN_07376b48(lVar12,4,*(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)puVar3);
        FUN_07376b48(lVar12,1,*(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)puVar3);
        *(long *)(unaff_x19 + 0xa0) = lVar12;
        thunk_FUN_044bb4b4((long *)(unaff_x19 + 0xa0),lVar12);
        plVar9 = *(long **)(unaff_x19 + 0x138);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x2a8))
                    (*(undefined4 *)(unaff_x19 + 0xd8),*(undefined4 *)(unaff_x19 + 0xdc),
                     *(undefined4 *)(unaff_x19 + 0xe0),*(undefined4 *)(unaff_x19 + 0xe4),plVar9,
                     *(undefined8 *)(*plVar9 + 0x2b0));
          plVar9 = *(long **)(unaff_x19 + 0x140);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x2a8))
                      (*(undefined4 *)(unaff_x19 + 0xd8),*(undefined4 *)(unaff_x19 + 0xdc),
                       *(undefined4 *)(unaff_x19 + 0xe0),*(undefined4 *)(unaff_x19 + 0xe4),plVar9,
                       *(undefined8 *)(*plVar9 + 0x2b0));
            plVar9 = *(long **)(unaff_x19 + 0x148);
            if (plVar9 != (long *)0x0) {
              uVar17 = *(undefined4 *)(unaff_x19 + 0xdc);
              uVar20 = 0;
              (**(code **)(*plVar9 + 0x2a8))
                        (*(undefined4 *)(unaff_x19 + 0xd8),uVar17,*(undefined4 *)(unaff_x19 + 0xe0),
                         *(undefined4 *)(unaff_x19 + 0xe4),plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
              puVar5 = PTR_DAT_09f2f2b8;
              puVar4 = PTR_DAT_09f2f2a0;
              puVar2 = PTR_DAT_09f2f230;
              puVar3 = PTR_DAT_09f2f218;
              if (*(long *)(unaff_x19 + 0x180) != 0) {
                lVar12 = 0x98;
                if (*(char *)(unaff_x19 + 0x28) != '\0') {
                  lVar12 = 0x90;
                }
                FUN_096385c4(*(long *)(unaff_x19 + 0x180),*(undefined8 *)(unaff_x19 + lVar12),0);
                uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f320);
                FUN_05bad680(uVar8,0x80,*(undefined8 *)PTR_DAT_09f2f2f8);
                *(undefined8 *)(unaff_x19 + 0x200) = uVar8;
                thunk_FUN_044bb4b4(unaff_x19 + 0x200,uVar8);
                uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
                FUN_0742ff00(uVar8,0x80,*(undefined8 *)puVar4);
                *(undefined8 *)(unaff_x19 + 0x210) = uVar8;
                thunk_FUN_044bb4b4(unaff_x19 + 0x210,uVar8);
                uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                FUN_071c0814(uVar8,*(undefined8 *)puVar3);
                *(undefined8 *)(unaff_x19 + 0x218) = uVar8;
                thunk_FUN_044bb4b4(unaff_x19 + 0x218,uVar8);
                uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                FUN_071c0814(uVar8,*(undefined8 *)puVar3);
                *(undefined8 *)(unaff_x19 + 0x228) = uVar8;
                thunk_FUN_044bb4b4(unaff_x19 + 0x228,uVar8);
                if (*(char *)(unaff_x19 + 0x45) != '\0') {
                  uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f318);
                  FUN_05ab6f08(uVar8,0x80,*(undefined8 *)PTR_DAT_09f2f308);
                  *(undefined8 *)(unaff_x19 + 0x208) = uVar8;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x208,uVar8);
                  puVar2 = PTR_DAT_09f2f228;
                  uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f228);
                  puVar3 = PTR_DAT_09f2f220;
                  FUN_071c06b0(uVar8,*(undefined8 *)PTR_DAT_09f2f220);
                  *(undefined8 *)(unaff_x19 + 0x220) = uVar8;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x220,uVar8);
                  uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                  FUN_071c06b0(uVar8,*(undefined8 *)puVar3);
                  *(undefined8 *)(unaff_x19 + 0x230) = uVar8;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x230,uVar8);
                  if (*(long *)(unaff_x19 + 0x240) == 0) goto LAB_076e80e4;
                  uVar7 = FUN_07593f6c(*(long *)(unaff_x19 + 0x240),*(undefined8 *)PTR_DAT_09f2f2d0)
                  ;
                  uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f2d8);
                  FUN_07593d04(uVar8,uVar7,*(undefined8 *)PTR_DAT_09f2f2c8);
                  *(undefined8 *)(unaff_x19 + 0x248) = uVar8;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x248,uVar8);
                }
                if ((*(long *)(unaff_x19 + 0x68) != 0) &&
                   (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x20), lVar12 != 0)) {
                  lVar15 = *(long *)(unaff_x19 + 0x1b8);
                  FUN_09538f28(lVar12,0);
                  if (lVar15 != 0) {
                    FUN_076e8100(CONCAT44(uVar20,uVar17),lVar15);
                    if (*(long *)(unaff_x19 + 0x1b8) != 0) {
                      FUN_076e817c(*(long *)(unaff_x19 + 0x1b8),1);
                      if (*(float *)(unaff_x19 + 0x2c) < 100.0) {
                        *(undefined4 *)(unaff_x19 + 0x2c) = 0x42c80000;
                      }
                      fVar13 = 200.0;
                      if (*(float *)(unaff_x19 + 0x24) < 200.0) {
                        *(undefined4 *)(unaff_x19 + 0x24) = 0x43480000;
                      }
                      if (*(char *)(unaff_x19 + 0x29) == '\0') {
                        if (((*(long *)(unaff_x19 + 0x180) == 0) ||
                            (lVar12 = FUN_04c6c620(*(long *)(unaff_x19 + 0x180),
                                                   *(undefined8 *)PTR_DAT_09f2f208), lVar12 == 0))
                           || (plVar9 = (long *)FUN_095258d0(lVar12,0), plVar9 == (long *)0x0))
                        goto LAB_076e80e4;
                        if (*plVar9 != *plVar16) {
                    /* WARNING: Subroutine does not return */
                          FUN_044481e4(plVar9);
                        }
                        FUN_09538a84(plVar9,0);
                        FUN_09538b4c(0,plVar9,0);
                        FUN_09538c10(plVar9,0);
                        FUN_09538cd8(0,plVar9,0);
                        FUN_095390b4(plVar9,0);
                        FUN_0953917c(0,plVar9,0);
                        if ((*(long *)(unaff_x19 + 0x118) == 0) ||
                           (plVar10 = (long *)FUN_095258d0(*(long *)(unaff_x19 + 0x118),0),
                           plVar10 == (long *)0x0)) goto LAB_076e80e4;
                        if (*plVar10 != *plVar16) {
                    /* WARNING: Subroutine does not return */
                          FUN_044481e4(plVar10);
                        }
                        fVar18 = (float)FUN_09538d9c(plVar10,0);
                        fVar19 = (float)FUN_09538f28(plVar9,0);
                        FUN_09538e64(fVar18 + fVar19,fVar13 + 0.0,plVar10,0);
                      }
                      puVar2 = PTR_DAT_09f2f350;
                      puVar3 = PTR_DAT_09f2f348;
                      if (*(char *)(unaff_x19 + 0x38) == '\0') {
                        *(undefined8 *)(unaff_x19 + 0x168) = 0;
                        thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x168),0);
                        if ((*(long *)(unaff_x19 + 0x170) == 0) ||
                           (lVar12 = FUN_095259a0(*(long *)(unaff_x19 + 0x170),0), lVar12 == 0))
                        goto LAB_076e80e4;
                        FUN_0952a454(lVar12,0,0);
                        if ((*(long *)(unaff_x19 + 0x178) == 0) ||
                           (lVar12 = FUN_095259a0(*(long *)(unaff_x19 + 0x178),0), lVar12 == 0))
                        goto LAB_076e80e4;
                        FUN_0952a454(lVar12,0,0);
                      }
                      else {
                        lVar12 = *(long *)(unaff_x19 + 0x168);
                        if ((lVar12 == 0) ||
                           (lVar12 = FUN_04c6bfdc(lVar12,*(undefined8 *)PTR_DAT_09f2f210),
                           lVar12 == 0)) goto LAB_076e80e4;
                        lVar12 = *(long *)(lVar12 + 0x148);
                        uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                        FUN_06a389f0();
                        if (lVar12 == 0) goto LAB_076e80e4;
                        FUN_06a40fa0(lVar12,uVar8,*(undefined8 *)puVar2);
                      }
                      if ((*(long *)(unaff_x19 + 0x138) != 0) &&
                         (lVar12 = FUN_095259a0(*(long *)(unaff_x19 + 0x138),0), lVar12 != 0)) {
                        FUN_0952a454(lVar12,*(undefined1 *)(unaff_x19 + 0x41),0);
                        if ((*(long *)(unaff_x19 + 0x140) != 0) &&
                           (lVar12 = FUN_095259a0(*(long *)(unaff_x19 + 0x140),0), lVar12 != 0)) {
                          FUN_0952a454(lVar12,*(undefined1 *)(unaff_x19 + 0x42),0);
                          if (*(long *)(unaff_x19 + 0x148) != 0) {
                            lVar12 = FUN_095259a0(*(long *)(unaff_x19 + 0x148),0);
                            if (*(char *)(unaff_x19 + 0x43) == '\0') {
                              bVar6 = *(char *)(unaff_x19 + 0x44) != '\0';
                            }
                            else {
                              bVar6 = true;
                            }
                            if (lVar12 != 0) {
                              FUN_0952a454(lVar12,bVar6,0);
                              if ((*(long *)(unaff_x19 + 0x110) != 0) &&
                                 (lVar12 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0), lVar12 != 0
                                 )) {
                                uVar11 = FUN_0952a518(lVar12,0);
                                if ((uVar11 & 1) != 0) {
                                  if ((*(long *)(unaff_x19 + 0x110) == 0) ||
                                     (lVar12 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0),
                                     lVar12 == 0)) goto LAB_076e80e4;
                                  FUN_0952a454(lVar12,0,0);
                                }
                                puVar4 = PTR_DAT_09f2f338;
                                lVar12 = *(long *)(unaff_x19 + 0x118);
                                if (lVar12 != 0) {
                                  uVar14 = *(undefined8 *)(lVar12 + 0x150);
                                  uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f338);
                                  FUN_0980b100();
                                  plVar9 = (long *)FUN_07a84204(uVar14,uVar8,0);
                                  if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)puVar4)) {
LAB_076e80e8:
                    /* WARNING: Subroutine does not return */
                                    FUN_044481e4(plVar9);
                                  }
                                  FUN_0980bd10(lVar12,plVar9,0);
                                  if (*(long *)(unaff_x19 + 0x118) != 0) {
                                    lVar12 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x148);
                                    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                                    FUN_06a389f0();
                                    if (lVar12 != 0) {
                                      FUN_06a40fa0(lVar12,uVar8,*(undefined8 *)puVar2);
                                      if (*(long *)(unaff_x19 + 0x118) != 0) {
                                        lVar12 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x140);
                                        uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                                        FUN_06a389f0();
                                        if (lVar12 != 0) {
                                          FUN_06a40fa0(lVar12,uVar8,*(undefined8 *)puVar2);
                                          puVar3 = PTR_DAT_09f1e5e8;
                                          if (*(long *)(unaff_x19 + 0x120) != 0) {
                                            lVar12 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x100)
                                            ;
                                            uVar8 = thunk_FUN_0448520c(*(undefined8 *)
                                                                        PTR_DAT_09f1e5e8);
                                            FUN_09542000();
                                            if (lVar12 != 0) {
                                              FUN_095420d0(lVar12,uVar8,0);
                                              if (*(long *)(unaff_x19 + 0x128) != 0) {
                                                lVar12 = *(long *)(*(long *)(unaff_x19 + 0x128) +
                                                                  0x100);
                                                uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
                                                FUN_09542000();
                                                if (lVar12 != 0) {
                                                  FUN_095420d0(lVar12,uVar8,0);
                                                  puVar2 = PTR_DAT_09f1e5d8;
                                                  if ((*(long *)(unaff_x19 + 0x130) != 0) &&
                                                     (lVar12 = FUN_04c6bfdc(*(long *)(unaff_x19 +
                                                                                     0x130),
                                                                            *(undefined8 *)
                                                                             PTR_DAT_09f1e5d8),
                                                     lVar12 != 0)) {
                                                    lVar12 = *(long *)(lVar12 + 0x100);
                                                    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_09542000();
                                                    if (lVar12 != 0) {
                                                      FUN_095420d0(lVar12,uVar8,0);
                                                      if ((*(long *)(unaff_x19 + 0x138) != 0) &&
                                                         (lVar12 = FUN_04c6bfdc(*(long *)(unaff_x19
                                                                                         + 0x138),
                                                                                *(undefined8 *)
                                                                                 puVar2),
                                                         lVar12 != 0)) {
                                                        lVar12 = *(long *)(lVar12 + 0x100);
                                                        uVar8 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_09542000();
                                                        if (lVar12 != 0) {
                                                          FUN_095420d0(lVar12,uVar8,0);
                                                          if ((*(long *)(unaff_x19 + 0x140) != 0) &&
                                                             (lVar12 = FUN_04c6bfdc(*(long *)(
                                                  unaff_x19 + 0x140),*(undefined8 *)puVar2),
                                                  lVar12 != 0)) {
                                                    lVar12 = *(long *)(lVar12 + 0x100);
                                                    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_09542000();
                                                    if (lVar12 != 0) {
                                                      FUN_095420d0(lVar12,uVar8,0);
                                                      if ((*(long *)(unaff_x19 + 0x148) != 0) &&
                                                         (lVar12 = FUN_04c6bfdc(*(long *)(unaff_x19
                                                                                         + 0x148),
                                                                                *(undefined8 *)
                                                                                 puVar2),
                                                         lVar12 != 0)) {
                                                        lVar12 = *(long *)(lVar12 + 0x100);
                                                        uVar8 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_09542000();
                                                        if (lVar12 != 0) {
                                                          FUN_095420d0(lVar12,uVar8,0);
                                                          if ((*(long *)(unaff_x19 + 0x188) != 0) &&
                                                             (lVar12 = FUN_04d7a1ac(*(long *)(
                                                  unaff_x19 + 0x188),*(undefined8 *)PTR_DAT_09f2f2e8
                                                  ), lVar12 != 0)) {
                                                    lVar12 = *(long *)(lVar12 + 0x100);
                                                    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_09542000();
                                                    puVar2 = PTR_DAT_09f21ad0;
                                                    puVar3 = PTR_DAT_09f20070;
                                                    if (lVar12 != 0) {
                                                      FUN_095420d0(lVar12,uVar8,0);
                                                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                        thunk_FUN_044a54b4();
                                                      }
                                                      uVar8 = FUN_07a1e8c0(0);
                                                      uVar14 = FUN_07a1e9e8(0);
                                                      uVar8 = FUN_07a2064c(uVar8,uVar14,0);
                                                      *(undefined8 *)(unaff_x19 + 0x2e0) = uVar8;
                                                      *(undefined8 *)(unaff_x19 + 0x2f8) = 0;
                                                      *(undefined8 *)(unaff_x19 + 0x2f0) = 0;
                                                      uVar8 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_09834e40(uVar8,0,0);
                                                      *(undefined8 *)(unaff_x19 + 0x300) = uVar8;
                                                      thunk_FUN_044bb4b4(unaff_x19 + 0x300,uVar8);
                                                      puVar3 = PTR_DAT_09f2f330;
                                                      if (*(char *)(unaff_x19 + 0x40) != '\0') {
                                                        uVar8 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                    PTR_DAT_09f2f330
                                                                                  );
                                                        FUN_094bed1c();
                                                        if (*(int *)(*(long *)PTR_DAT_09f1e6b8 +
                                                                    0xe4) == 0) {
                                                          thunk_FUN_044a54b4();
                                                        }
                                                        UnityEngine_Rigidbody__AddExplosionForce
                                                                  (uVar8,0);
                                                        uVar8 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                    puVar3);
                                                        FUN_094bed1c();
                                                        FUN_094bd318(uVar8,0);
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


