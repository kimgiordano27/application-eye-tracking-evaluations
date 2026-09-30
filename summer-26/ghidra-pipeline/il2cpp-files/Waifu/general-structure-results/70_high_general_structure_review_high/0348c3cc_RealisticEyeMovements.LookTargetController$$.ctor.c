/*
FUNCTION_NAME: RealisticEyeMovements.LookTargetController$$.ctor
ENTRY_POINT: 0348c3cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_14;strong_file_logging_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void RealisticEyeMovements_LookTargetController___ctor
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  float *pfVar12;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x28;
  long unaff_x29;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  
  pcVar11 = *(code **)(unaff_x21 + 400);
  if (pcVar11 == (code *)0x0) {
    pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    *(code **)(unaff_x21 + 400) = pcVar11;
  }
  lVar5 = (*pcVar11)();
  if (lVar5 != 0) {
    if (DAT_086ef288 == (code *)0x0) {
      DAT_086ef288 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeInHierarchy()");
    }
    uVar6 = (*DAT_086ef288)(lVar5);
    lVar5 = *(long *)(unaff_x19 + 0x18);
    if (lVar5 != 0) {
      if ((uVar6 & 1) == 0) {
        pcVar11 = *(code **)(unaff_x23 + 0x188);
        if (pcVar11 == (code *)0x0) {
          pcVar11 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          *(code **)(unaff_x23 + 0x188) = pcVar11;
        }
        lVar5 = (*pcVar11)(lVar5);
        uVar7 = DAT_08435940;
        if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
          FUN_033b9870(DAT_083ca458);
          uVar7 = DAT_08435940;
        }
LAB_0348c5ec:
        FUN_079ca1d0(uVar7,lVar5,0);
        return;
      }
      if (DAT_086f2358 == (code *)0x0) {
        DAT_086f2358 = (code *)FUN_033d1b68(
                                           "UnityEngine.ConfigurableJoint::set_configuredInWorldSpace(System.Boolean)"
                                           );
      }
      (*DAT_086f2358)(lVar5,0);
      lVar5 = *(long *)(unaff_x19 + 0x18);
      if (lVar5 != 0) {
        if (DAT_086f2328 == (code *)0x0) {
          DAT_086f2328 = (code *)FUN_033d1b68(
                                             "UnityEngine.ConfigurableJoint::set_projectionMode(UnityEngine.JointProjectionMode)"
                                             );
        }
        (*DAT_086f2328)(lVar5,0);
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          fVar13 = (float)FUN_07a87c30(*(long *)(unaff_x19 + 0x18),0);
          if (DAT_086d7cc6 == '\0') {
            FUN_0335b6c8(&DAT_083d2c90,1);
            DataMemoryBarrier(2,3);
            DAT_086d7cc6 = '\x01';
          }
          pfVar12 = *(float **)(DAT_083d2c90 + 0xb8);
          param_3 = param_3 - pfVar12[2];
          fVar16 = param_3 * param_3;
          if (fVar16 + (fVar13 - *pfVar12) * (fVar13 - *pfVar12) +
                       (param_2 - pfVar12[1]) * (param_2 - pfVar12[1]) < DAT_012ed8ec) {
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              fVar13 = DAT_012ed8ec;
              uVar14 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x20),0);
              *(undefined4 *)(unaff_x19 + 200) = uVar14;
              *(float *)(unaff_x19 + 0xcc) = fVar16;
              *(float *)(unaff_x19 + 0xd0) = param_3;
              if (*(long *)(unaff_x19 + 0xb8) != 0) {
                uVar14 = FUN_07a85684(*(long *)(unaff_x19 + 0xb8),0);
                *(undefined4 *)(unaff_x19 + 0x334) = uVar14;
                *(float *)(unaff_x19 + 0x338) = fVar16;
                *(float *)(unaff_x19 + 0x33c) = param_3;
                if (*(long *)(unaff_x19 + 0x20) != 0) {
                  uVar14 = FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
                  *(undefined4 *)(unaff_x19 + 0xd4) = uVar14;
                  *(float *)(unaff_x19 + 0xd8) = fVar16;
                  *(float *)(unaff_x19 + 0xdc) = param_3;
                  *(float *)(unaff_x19 + 0xe0) = fVar13;
                  fVar15 = (float)FUN_0348d1dc();
                  fVar20 = *(float *)(unaff_x19 + 0x254);
                  fVar21 = *(float *)(unaff_x19 + 0x260);
                  fVar22 = *(float *)(unaff_x19 + 0x25c);
                  fVar23 = *(float *)(unaff_x19 + 600);
                  fVar18 = param_3 * fVar22;
                  fVar17 = (fVar16 * fVar22 + fVar13 * fVar20 + fVar15 * fVar21) - param_3 * fVar23;
                  fVar19 = (param_3 * fVar20 + fVar13 * fVar23 + fVar16 * fVar21) - fVar15 * fVar22;
                  *(float *)(unaff_x19 + 0x294) = fVar17;
                  *(float *)(unaff_x19 + 0x298) = fVar19;
                  *(float *)(unaff_x19 + 0x29c) =
                       (fVar15 * fVar23 + fVar13 * fVar22 + param_3 * fVar21) - fVar16 * fVar20;
                  *(float *)(unaff_x19 + 0x2a0) =
                       ((fVar13 * fVar21 - fVar15 * fVar20) - fVar16 * fVar23) - fVar18;
                  FUN_0348d588();
                  if (DAT_086ef688 == (code *)0x0) {
                    DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
                  }
                  uVar14 = (*DAT_086ef688)();
                  *(undefined4 *)(unaff_x19 + 0x310) = uVar14;
                  if (DAT_086ef688 == (code *)0x0) {
                    DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
                  }
                  uVar14 = (*DAT_086ef688)();
                  *(undefined4 *)(unaff_x19 + 0x314) = uVar14;
                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                    uVar14 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x20),0);
                    *(undefined4 *)(unaff_x19 + 0x238) = uVar14;
                    *(float *)(unaff_x19 + 0x23c) = fVar17;
                    *(float *)(unaff_x19 + 0x240) = fVar18;
                    if (*(long *)(unaff_x19 + 0x20) != 0) {
                      uVar14 = FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
                      *(undefined4 *)(unaff_x19 + 0x2d4) = uVar14;
                      *(float *)(unaff_x19 + 0x2d8) = fVar17;
                      *(float *)(unaff_x19 + 0x2dc) = fVar18;
                      *(float *)(unaff_x19 + 0x2e0) = fVar19;
                      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                         (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x30), lVar5 != 0)) {
                        plVar9 = (long *)FUN_03398188(DAT_083c81e0,*(undefined4 *)(lVar5 + 0x18));
                        *(long **)(unaff_x19 + 800) = plVar9;
                        plVar1 = (long *)(unaff_x19 + 800);
                        if (*(int *)(unaff_x29 + 0xcd0) != 0) {
                          puVar2 = (ulong *)(unaff_x28 + ((ulong)plVar1 >> 0x12 & 0x7fff) * 8 +
                                            0x464e0);
                          do {
                            cVar3 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                            if (bVar4) {
                              *puVar2 = *puVar2 | 1L << ((ulong)plVar1 >> 0xc & 0x3f);
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          plVar9 = (long *)*plVar1;
                        }
                        if (plVar9 != (long *)0x0) {
                          uVar6 = 0;
                          do {
                            if ((long)(int)plVar9[3] <= (long)uVar6) {
                              *(undefined1 *)(unaff_x19 + 0x305) = 1;
                              return;
                            }
                            if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                               (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x30), lVar5 == 0))
                            break;
                            if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_0348c8d4:
                    /* WARNING: Subroutine does not return */
                              FUN_033d1d44();
                            }
                            uVar7 = *(undefined8 *)(lVar5 + uVar6 * 8 + 0x20);
                            lVar5 = FUN_03398a84(DAT_083d8080);
                            FUN_0348d8b4(lVar5,uVar7);
                            if ((lVar5 != 0) &&
                               (lVar10 = FUN_0339898c(lVar5,*(undefined8 *)(*plVar9 + 0x40)),
                               lVar10 == 0)) {
                              uVar7 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
                              FUN_033d1c20(uVar7,0);
                            }
                            if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_0348c8d4;
                            plVar9 = plVar9 + uVar6 + 4;
                            *plVar9 = lVar5;
                            if (*(int *)(unaff_x29 + 0xcd0) != 0) {
                              puVar2 = (ulong *)(unaff_x28 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 +
                                                0x464e0);
                              do {
                                cVar3 = '\x01';
                                bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                                if (bVar4) {
                                  *puVar2 = *puVar2 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                                  cVar3 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar3 != '\0');
                            }
                            plVar9 = (long *)*plVar1;
                            uVar6 = uVar6 + 1;
                          } while (plVar9 != (long *)0x0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else if (*unaff_x22 != 0) {
            uVar7 = FUN_07a11ba4(*unaff_x22,0);
            if (*(long *)(unaff_x19 + 0x18) != 0) {
              uStack0000000000000008 = FUN_07a87c30(*(long *)(unaff_x19 + 0x18),0);
              fStack000000000000000c = fVar16;
              in_stack_00000010 = param_3;
              uVar8 = FUN_034a8148(&stack0x00000008,0,0,0);
              uVar7 = FUN_0666ed44(DAT_08444048,uVar7,DAT_0842e6b0,uVar8,0);
              lVar5 = *unaff_x22;
              if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
                FUN_033b9870(DAT_083ca458);
              }
              goto LAB_0348c5ec;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


