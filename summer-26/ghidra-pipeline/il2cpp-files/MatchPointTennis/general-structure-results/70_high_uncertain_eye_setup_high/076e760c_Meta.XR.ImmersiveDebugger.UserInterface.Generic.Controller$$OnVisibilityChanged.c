/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$OnVisibilityChanged
ENTRY_POINT: 076e760c
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnVisibilityChanged
               (long *param_1,undefined1 param_2 [16],undefined4 param_3,undefined8 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  long unaff_x19;
  undefined8 uVar13;
  long lVar14;
  long *unaff_x25;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  
  if (*param_1 != param_5) {
LAB_076e80e8:
                    /* WARNING: Subroutine does not return */
    FUN_044481e4(param_1);
  }
  thunk_FUN_044bb4b4(unaff_x19 + 0x100,param_1);
  if (*(long *)(unaff_x19 + 0x1a0) != 0) {
    param_1 = (long *)FUN_095258d0(*(long *)(unaff_x19 + 0x1a0),0);
    if (param_1 == (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
    }
    else {
      lVar11 = *unaff_x25;
      if ((*param_1 != lVar11) || (*(long **)(unaff_x19 + 0x1a8) = param_1, *param_1 != lVar11))
      goto LAB_076e80e8;
    }
    thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x1a8),param_1);
    puVar1 = PTR_DAT_09f2f2b0;
    puVar2 = PTR_DAT_09f2f2a8;
    lVar11 = *(long *)(unaff_x19 + 0x1a8);
    if (lVar11 != 0) {
      uVar15 = FUN_09538f28(lVar11,0);
      *(undefined4 *)(unaff_x19 + 0x1b0) = uVar15;
      *(undefined4 *)(unaff_x19 + 0x1b4) = param_3;
      lVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
      FUN_07375d58(lVar11,*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_09f2f298;
      if (lVar11 != 0) {
        FUN_07376b48(lVar11,3,*(undefined8 *)(unaff_x19 + 0x78),*(undefined8 *)PTR_DAT_09f2f298);
        FUN_07376b48(lVar11,2,*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)puVar2);
        FUN_07376b48(lVar11,0,*(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)puVar2);
        FUN_07376b48(lVar11,4,*(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)puVar2);
        FUN_07376b48(lVar11,1,*(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)puVar2);
        *(long *)(unaff_x19 + 0xa0) = lVar11;
        thunk_FUN_044bb4b4((long *)(unaff_x19 + 0xa0),lVar11);
        plVar7 = *(long **)(unaff_x19 + 0x138);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x2a8))
                    (*(undefined4 *)(unaff_x19 + 0xd8),*(undefined4 *)(unaff_x19 + 0xdc),
                     *(undefined4 *)(unaff_x19 + 0xe0),*(undefined4 *)(unaff_x19 + 0xe4),plVar7,
                     *(undefined8 *)(*plVar7 + 0x2b0));
          plVar7 = *(long **)(unaff_x19 + 0x140);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x2a8))
                      (*(undefined4 *)(unaff_x19 + 0xd8),*(undefined4 *)(unaff_x19 + 0xdc),
                       *(undefined4 *)(unaff_x19 + 0xe0),*(undefined4 *)(unaff_x19 + 0xe4),plVar7,
                       *(undefined8 *)(*plVar7 + 0x2b0));
            plVar7 = *(long **)(unaff_x19 + 0x148);
            if (plVar7 != (long *)0x0) {
              uVar15 = *(undefined4 *)(unaff_x19 + 0xdc);
              uVar18 = 0;
              (**(code **)(*plVar7 + 0x2a8))
                        (*(undefined4 *)(unaff_x19 + 0xd8),uVar15,*(undefined4 *)(unaff_x19 + 0xe0),
                         *(undefined4 *)(unaff_x19 + 0xe4),plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
              puVar4 = PTR_DAT_09f2f2b8;
              puVar3 = PTR_DAT_09f2f2a0;
              puVar1 = PTR_DAT_09f2f230;
              puVar2 = PTR_DAT_09f2f218;
              if (*(long *)(unaff_x19 + 0x180) != 0) {
                lVar11 = 0x98;
                if (*(char *)(unaff_x19 + 0x28) != '\0') {
                  lVar11 = 0x90;
                }
                FUN_096385c4(*(long *)(unaff_x19 + 0x180),*(undefined8 *)(unaff_x19 + lVar11),0);
                uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f320);
                FUN_05bad680(uVar8,0x80,*(undefined8 *)PTR_DAT_09f2f2f8);
                *(undefined8 *)(unaff_x19 + 0x200) = uVar8;
                thunk_FUN_044bb4b4(unaff_x19 + 0x200,uVar8);
                uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
                FUN_0742ff00(uVar8,0x80,*(undefined8 *)puVar3);
                *(undefined8 *)(unaff_x19 + 0x210) = uVar8;
                thunk_FUN_044bb4b4(unaff_x19 + 0x210,uVar8);
                uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                FUN_071c0814(uVar8,*(undefined8 *)puVar2);
                *(undefined8 *)(unaff_x19 + 0x218) = uVar8;
                thunk_FUN_044bb4b4(unaff_x19 + 0x218,uVar8);
                uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                FUN_071c0814(uVar8,*(undefined8 *)puVar2);
                *(undefined8 *)(unaff_x19 + 0x228) = uVar8;
                thunk_FUN_044bb4b4(unaff_x19 + 0x228,uVar8);
                if (*(char *)(unaff_x19 + 0x45) != '\0') {
                  uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f318);
                  FUN_05ab6f08(uVar8,0x80,*(undefined8 *)PTR_DAT_09f2f308);
                  *(undefined8 *)(unaff_x19 + 0x208) = uVar8;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x208,uVar8);
                  puVar1 = PTR_DAT_09f2f228;
                  uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f228);
                  puVar2 = PTR_DAT_09f2f220;
                  FUN_071c06b0(uVar8,*(undefined8 *)PTR_DAT_09f2f220);
                  *(undefined8 *)(unaff_x19 + 0x220) = uVar8;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x220,uVar8);
                  uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                  FUN_071c06b0(uVar8,*(undefined8 *)puVar2);
                  *(undefined8 *)(unaff_x19 + 0x230) = uVar8;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x230,uVar8);
                  if (*(long *)(unaff_x19 + 0x240) == 0) goto LAB_076e80e4;
                  uVar6 = FUN_07593f6c(*(long *)(unaff_x19 + 0x240),*(undefined8 *)PTR_DAT_09f2f2d0)
                  ;
                  uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f2d8);
                  FUN_07593d04(uVar8,uVar6,*(undefined8 *)PTR_DAT_09f2f2c8);
                  *(undefined8 *)(unaff_x19 + 0x248) = uVar8;
                  thunk_FUN_044bb4b4(unaff_x19 + 0x248,uVar8);
                }
                if ((*(long *)(unaff_x19 + 0x68) != 0) &&
                   (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x20), lVar11 != 0)) {
                  lVar14 = *(long *)(unaff_x19 + 0x1b8);
                  FUN_09538f28(lVar11,0);
                  if (lVar14 != 0) {
                    FUN_076e8100(CONCAT44(uVar18,uVar15),lVar14);
                    if (*(long *)(unaff_x19 + 0x1b8) != 0) {
                      FUN_076e817c(*(long *)(unaff_x19 + 0x1b8),1);
                      if (*(float *)(unaff_x19 + 0x2c) < 100.0) {
                        *(undefined4 *)(unaff_x19 + 0x2c) = 0x42c80000;
                      }
                      fVar12 = 200.0;
                      if (*(float *)(unaff_x19 + 0x24) < 200.0) {
                        *(undefined4 *)(unaff_x19 + 0x24) = 0x43480000;
                      }
                      if (*(char *)(unaff_x19 + 0x29) == '\0') {
                        if (((*(long *)(unaff_x19 + 0x180) == 0) ||
                            (lVar11 = FUN_04c6c620(*(long *)(unaff_x19 + 0x180),
                                                   *(undefined8 *)PTR_DAT_09f2f208), lVar11 == 0))
                           || (plVar7 = (long *)FUN_095258d0(lVar11,0), plVar7 == (long *)0x0))
                        goto LAB_076e80e4;
                        if (*plVar7 != *unaff_x25) {
                    /* WARNING: Subroutine does not return */
                          FUN_044481e4(plVar7);
                        }
                        FUN_09538a84(plVar7,0);
                        FUN_09538b4c(0,plVar7,0);
                        FUN_09538c10(plVar7,0);
                        FUN_09538cd8(0,plVar7,0);
                        FUN_095390b4(plVar7,0);
                        FUN_0953917c(0,plVar7,0);
                        if ((*(long *)(unaff_x19 + 0x118) == 0) ||
                           (plVar9 = (long *)FUN_095258d0(*(long *)(unaff_x19 + 0x118),0),
                           plVar9 == (long *)0x0)) goto LAB_076e80e4;
                        if (*plVar9 != *unaff_x25) {
                    /* WARNING: Subroutine does not return */
                          FUN_044481e4(plVar9);
                        }
                        fVar16 = (float)FUN_09538d9c(plVar9,0);
                        fVar17 = (float)FUN_09538f28(plVar7,0);
                        FUN_09538e64(fVar16 + fVar17,fVar12 + 0.0,plVar9,0);
                      }
                      puVar1 = PTR_DAT_09f2f350;
                      puVar2 = PTR_DAT_09f2f348;
                      if (*(char *)(unaff_x19 + 0x38) == '\0') {
                        *(undefined8 *)(unaff_x19 + 0x168) = 0;
                        thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x168),0);
                        if ((*(long *)(unaff_x19 + 0x170) == 0) ||
                           (lVar11 = FUN_095259a0(*(long *)(unaff_x19 + 0x170),0), lVar11 == 0))
                        goto LAB_076e80e4;
                        FUN_0952a454(lVar11,0,0);
                        if ((*(long *)(unaff_x19 + 0x178) == 0) ||
                           (lVar11 = FUN_095259a0(*(long *)(unaff_x19 + 0x178),0), lVar11 == 0))
                        goto LAB_076e80e4;
                        FUN_0952a454(lVar11,0,0);
                      }
                      else {
                        lVar11 = *(long *)(unaff_x19 + 0x168);
                        if ((lVar11 == 0) ||
                           (lVar11 = FUN_04c6bfdc(lVar11,*(undefined8 *)PTR_DAT_09f2f210),
                           lVar11 == 0)) goto LAB_076e80e4;
                        lVar11 = *(long *)(lVar11 + 0x148);
                        uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                        FUN_06a389f0();
                        if (lVar11 == 0) goto LAB_076e80e4;
                        FUN_06a40fa0(lVar11,uVar8,*(undefined8 *)puVar1);
                      }
                      if ((*(long *)(unaff_x19 + 0x138) != 0) &&
                         (lVar11 = FUN_095259a0(*(long *)(unaff_x19 + 0x138),0), lVar11 != 0)) {
                        FUN_0952a454(lVar11,*(undefined1 *)(unaff_x19 + 0x41),0);
                        if ((*(long *)(unaff_x19 + 0x140) != 0) &&
                           (lVar11 = FUN_095259a0(*(long *)(unaff_x19 + 0x140),0), lVar11 != 0)) {
                          FUN_0952a454(lVar11,*(undefined1 *)(unaff_x19 + 0x42),0);
                          if (*(long *)(unaff_x19 + 0x148) != 0) {
                            lVar11 = FUN_095259a0(*(long *)(unaff_x19 + 0x148),0);
                            if (*(char *)(unaff_x19 + 0x43) == '\0') {
                              bVar5 = *(char *)(unaff_x19 + 0x44) != '\0';
                            }
                            else {
                              bVar5 = true;
                            }
                            if (lVar11 != 0) {
                              FUN_0952a454(lVar11,bVar5,0);
                              if ((*(long *)(unaff_x19 + 0x110) != 0) &&
                                 (lVar11 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0), lVar11 != 0
                                 )) {
                                uVar10 = FUN_0952a518(lVar11,0);
                                if ((uVar10 & 1) != 0) {
                                  if ((*(long *)(unaff_x19 + 0x110) == 0) ||
                                     (lVar11 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0),
                                     lVar11 == 0)) goto LAB_076e80e4;
                                  FUN_0952a454(lVar11,0,0);
                                }
                                puVar3 = PTR_DAT_09f2f338;
                                lVar11 = *(long *)(unaff_x19 + 0x118);
                                if (lVar11 != 0) {
                                  uVar13 = *(undefined8 *)(lVar11 + 0x150);
                                  uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f338);
                                  FUN_0980b100();
                                  param_1 = (long *)FUN_07a84204(uVar13,uVar8,0);
                                  if ((param_1 != (long *)0x0) && (*param_1 != *(long *)puVar3))
                                  goto LAB_076e80e8;
                                  FUN_0980bd10(lVar11,param_1,0);
                                  if (*(long *)(unaff_x19 + 0x118) != 0) {
                                    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x148);
                                    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                    FUN_06a389f0();
                                    if (lVar11 != 0) {
                                      FUN_06a40fa0(lVar11,uVar8,*(undefined8 *)puVar1);
                                      if (*(long *)(unaff_x19 + 0x118) != 0) {
                                        lVar11 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x140);
                                        uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                        FUN_06a389f0();
                                        if (lVar11 != 0) {
                                          FUN_06a40fa0(lVar11,uVar8,*(undefined8 *)puVar1);
                                          puVar2 = PTR_DAT_09f1e5e8;
                                          if (*(long *)(unaff_x19 + 0x120) != 0) {
                                            lVar11 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x100)
                                            ;
                                            uVar8 = thunk_FUN_0448520c(*(undefined8 *)
                                                                        PTR_DAT_09f1e5e8);
                                            FUN_09542000();
                                            if (lVar11 != 0) {
                                              FUN_095420d0(lVar11,uVar8,0);
                                              if (*(long *)(unaff_x19 + 0x128) != 0) {
                                                lVar11 = *(long *)(*(long *)(unaff_x19 + 0x128) +
                                                                  0x100);
                                                uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                                FUN_09542000();
                                                if (lVar11 != 0) {
                                                  FUN_095420d0(lVar11,uVar8,0);
                                                  puVar1 = PTR_DAT_09f1e5d8;
                                                  if ((*(long *)(unaff_x19 + 0x130) != 0) &&
                                                     (lVar11 = FUN_04c6bfdc(*(long *)(unaff_x19 +
                                                                                     0x130),
                                                                            *(undefined8 *)
                                                                             PTR_DAT_09f1e5d8),
                                                     lVar11 != 0)) {
                                                    lVar11 = *(long *)(lVar11 + 0x100);
                                                    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_09542000();
                                                    if (lVar11 != 0) {
                                                      FUN_095420d0(lVar11,uVar8,0);
                                                      if ((*(long *)(unaff_x19 + 0x138) != 0) &&
                                                         (lVar11 = FUN_04c6bfdc(*(long *)(unaff_x19
                                                                                         + 0x138),
                                                                                *(undefined8 *)
                                                                                 puVar1),
                                                         lVar11 != 0)) {
                                                        lVar11 = *(long *)(lVar11 + 0x100);
                                                        uVar8 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                    puVar2);
                                                        FUN_09542000();
                                                        if (lVar11 != 0) {
                                                          FUN_095420d0(lVar11,uVar8,0);
                                                          if ((*(long *)(unaff_x19 + 0x140) != 0) &&
                                                             (lVar11 = FUN_04c6bfdc(*(long *)(
                                                  unaff_x19 + 0x140),*(undefined8 *)puVar1),
                                                  lVar11 != 0)) {
                                                    lVar11 = *(long *)(lVar11 + 0x100);
                                                    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_09542000();
                                                    if (lVar11 != 0) {
                                                      FUN_095420d0(lVar11,uVar8,0);
                                                      if ((*(long *)(unaff_x19 + 0x148) != 0) &&
                                                         (lVar11 = FUN_04c6bfdc(*(long *)(unaff_x19
                                                                                         + 0x148),
                                                                                *(undefined8 *)
                                                                                 puVar1),
                                                         lVar11 != 0)) {
                                                        lVar11 = *(long *)(lVar11 + 0x100);
                                                        uVar8 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                    puVar2);
                                                        FUN_09542000();
                                                        if (lVar11 != 0) {
                                                          FUN_095420d0(lVar11,uVar8,0);
                                                          if ((*(long *)(unaff_x19 + 0x188) != 0) &&
                                                             (lVar11 = FUN_04d7a1ac(*(long *)(
                                                  unaff_x19 + 0x188),*(undefined8 *)PTR_DAT_09f2f2e8
                                                  ), lVar11 != 0)) {
                                                    lVar11 = *(long *)(lVar11 + 0x100);
                                                    uVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_09542000();
                                                    puVar1 = PTR_DAT_09f21ad0;
                                                    puVar2 = PTR_DAT_09f20070;
                                                    if (lVar11 != 0) {
                                                      FUN_095420d0(lVar11,uVar8,0);
                                                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                        thunk_FUN_044a54b4();
                                                      }
                                                      uVar8 = FUN_07a1e8c0(0);
                                                      uVar13 = FUN_07a1e9e8(0);
                                                      uVar8 = FUN_07a2064c(uVar8,uVar13,0);
                                                      *(undefined8 *)(unaff_x19 + 0x2e0) = uVar8;
                                                      *(undefined8 *)(unaff_x19 + 0x2f8) = 0;
                                                      *(undefined8 *)(unaff_x19 + 0x2f0) = 0;
                                                      uVar8 = thunk_FUN_0448520c(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_09834e40(uVar8,0,0);
                                                      *(undefined8 *)(unaff_x19 + 0x300) = uVar8;
                                                      thunk_FUN_044bb4b4(unaff_x19 + 0x300,uVar8);
                                                      puVar2 = PTR_DAT_09f2f330;
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
                                                                                    puVar2);
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


