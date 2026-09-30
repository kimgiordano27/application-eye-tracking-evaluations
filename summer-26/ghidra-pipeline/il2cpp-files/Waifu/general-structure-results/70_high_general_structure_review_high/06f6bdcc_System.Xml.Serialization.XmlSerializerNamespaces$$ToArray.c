/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 06f6bdcc
PROGRAM: Waifu-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Xml_Serialization_XmlSerializerNamespaces__ToArray(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong in_x9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  long lVar6;
  long unaff_x21;
  long unaff_x22;
  long *plVar7;
  
  puVar1 = (ulong *)(unaff_x21 + param_1 * 8 + in_x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | in_x11 << (in_x9 & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar7 = *(long **)(unaff_x19 + 0x470);
  if (plVar7 != (long *)0x0) {
    lVar6 = *(long *)(unaff_x19 + 0x178);
    if ((lVar6 != 0) && (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
LAB_06f6e958:
      uVar5 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar5,0);
    }
    if (0x19 < *(uint *)(plVar7 + 3)) {
      plVar7 = plVar7 + 0x1d;
      *plVar7 = lVar6;
      if (*(int *)(unaff_x22 + 0xcd0) != 0) {
        puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar7 = *(long **)(unaff_x19 + 0x470);
      if (plVar7 == (long *)0x0) goto LAB_06f6e954;
      lVar6 = *(long *)(unaff_x19 + 0x180);
      if ((lVar6 != 0) && (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
      goto LAB_06f6e958;
      if (0x1a < *(uint *)(plVar7 + 3)) {
        plVar7 = plVar7 + 0x1e;
        *plVar7 = lVar6;
        if (*(int *)(unaff_x22 + 0xcd0) != 0) {
          puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar7 = *(long **)(unaff_x19 + 0x470);
        if (plVar7 == (long *)0x0) goto LAB_06f6e954;
        lVar6 = *(long *)(unaff_x19 + 0x188);
        if ((lVar6 != 0) &&
           (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
        goto LAB_06f6e958;
        if (0x1b < *(uint *)(plVar7 + 3)) {
          plVar7 = plVar7 + 0x1f;
          *plVar7 = lVar6;
          if (*(int *)(unaff_x22 + 0xcd0) != 0) {
            puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plVar7 = *(long **)(unaff_x19 + 0x470);
          if (plVar7 == (long *)0x0) goto LAB_06f6e954;
          lVar6 = *(long *)(unaff_x19 + 400);
          if ((lVar6 != 0) &&
             (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
          goto LAB_06f6e958;
          if (0x1c < *(uint *)(plVar7 + 3)) {
            plVar7[0x20] = lVar6;
            if (*(int *)(unaff_x22 + 0xcd0) != 0) {
              puVar1 = (ulong *)(unaff_x21 + ((ulong)(plVar7 + 0x20) >> 0x12 & 0x7fff) * 8 + 0x464e0
                                );
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x20) >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            plVar7 = *(long **)(unaff_x19 + 0x470);
            if (plVar7 == (long *)0x0) goto LAB_06f6e954;
            lVar6 = *(long *)(unaff_x19 + 0x198);
            if ((lVar6 != 0) &&
               (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
            goto LAB_06f6e958;
            if (0x1d < *(uint *)(plVar7 + 3)) {
              plVar7[0x21] = lVar6;
              if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                puVar1 = (ulong *)(unaff_x21 + ((ulong)(plVar7 + 0x21) >> 0x12 & 0x7fff) * 8 +
                                  0x464e0);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x21) >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              plVar7 = *(long **)(unaff_x19 + 0x470);
              if (plVar7 == (long *)0x0) goto LAB_06f6e954;
              lVar6 = *(long *)(unaff_x19 + 0x1a0);
              if ((lVar6 != 0) &&
                 (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
              goto LAB_06f6e958;
              if (0x1e < *(uint *)(plVar7 + 3)) {
                plVar7[0x22] = lVar6;
                if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                  puVar1 = (ulong *)(unaff_x21 + ((ulong)(plVar7 + 0x22) >> 0x12 & 0x7fff) * 8 +
                                    0x464e0);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                      *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x22) >> 0xc & 0x3f);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                plVar7 = *(long **)(unaff_x19 + 0x470);
                if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                lVar6 = *(long *)(unaff_x19 + 0x1a8);
                if ((lVar6 != 0) &&
                   (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
                goto LAB_06f6e958;
                if (0x1f < *(uint *)(plVar7 + 3)) {
                  plVar7[0x23] = lVar6;
                  if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                    puVar1 = (ulong *)(unaff_x21 + ((ulong)(plVar7 + 0x23) >> 0x12 & 0x7fff) * 8 +
                                      0x464e0);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar3) {
                        *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x23) >> 0xc & 0x3f);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  plVar7 = *(long **)(unaff_x19 + 0x470);
                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                  lVar6 = *(long *)(unaff_x19 + 0x1b0);
                  if ((lVar6 != 0) &&
                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
                  goto LAB_06f6e958;
                  if (0x20 < *(uint *)(plVar7 + 3)) {
                    plVar7[0x24] = lVar6;
                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                      puVar1 = (ulong *)(unaff_x21 + ((ulong)(plVar7 + 0x24) >> 0x12 & 0x7fff) * 8 +
                                        0x464e0);
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x24) >> 0xc & 0x3f);
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    plVar7 = *(long **)(unaff_x19 + 0x470);
                    if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                    lVar6 = *(long *)(unaff_x19 + 0x1b8);
                    if ((lVar6 != 0) &&
                       (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
                    goto LAB_06f6e958;
                    if (0x21 < *(uint *)(plVar7 + 3)) {
                      plVar7[0x25] = lVar6;
                      if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                        puVar1 = (ulong *)(unaff_x21 + ((ulong)(plVar7 + 0x25) >> 0x12 & 0x7fff) * 8
                                          + 0x464e0);
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar3) {
                            *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x25) >> 0xc & 0x3f);
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      plVar7 = *(long **)(unaff_x19 + 0x470);
                      if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                      lVar6 = *(long *)(unaff_x19 + 0x1c0);
                      if ((lVar6 != 0) &&
                         (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
                      goto LAB_06f6e958;
                      if (0x22 < *(uint *)(plVar7 + 3)) {
                        plVar7[0x26] = lVar6;
                        if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                          puVar1 = (ulong *)(unaff_x21 +
                                             ((ulong)(plVar7 + 0x26) >> 0x12 & 0x7fff) * 8 + 0x464e0
                                            );
                          do {
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar3) {
                              *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x26) >> 0xc & 0x3f);
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                        }
                        plVar7 = *(long **)(unaff_x19 + 0x470);
                        if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                        lVar6 = *(long *)(unaff_x19 + 0x1c8);
                        if ((lVar6 != 0) &&
                           (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)
                           ) goto LAB_06f6e958;
                        if (0x23 < *(uint *)(plVar7 + 3)) {
                          plVar7[0x27] = lVar6;
                          if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                            puVar1 = (ulong *)(unaff_x21 +
                                               ((ulong)(plVar7 + 0x27) >> 0x12 & 0x7fff) * 8 +
                                              0x464e0);
                            do {
                              cVar2 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar3) {
                                *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x27) >> 0xc & 0x3f);
                                cVar2 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar2 != '\0');
                          }
                          plVar7 = *(long **)(unaff_x19 + 0x470);
                          if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                          lVar6 = *(long *)(unaff_x19 + 0x1d0);
                          if ((lVar6 != 0) &&
                             (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                             lVar4 == 0)) goto LAB_06f6e958;
                          if (0x24 < *(uint *)(plVar7 + 3)) {
                            plVar7[0x28] = lVar6;
                            if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                              puVar1 = (ulong *)(unaff_x21 +
                                                 ((ulong)(plVar7 + 0x28) >> 0x12 & 0x7fff) * 8 +
                                                0x464e0);
                              do {
                                cVar2 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar3) {
                                  *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x28) >> 0xc & 0x3f);
                                  cVar2 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar2 != '\0');
                            }
                            plVar7 = *(long **)(unaff_x19 + 0x470);
                            if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                            lVar6 = *(long *)(unaff_x19 + 0x1d8);
                            if ((lVar6 != 0) &&
                               (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                               lVar4 == 0)) goto LAB_06f6e958;
                            if (0x25 < *(uint *)(plVar7 + 3)) {
                              plVar7[0x29] = lVar6;
                              if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                puVar1 = (ulong *)(unaff_x21 +
                                                   ((ulong)(plVar7 + 0x29) >> 0x12 & 0x7fff) * 8 +
                                                  0x464e0);
                                do {
                                  cVar2 = '\x01';
                                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                  if (bVar3) {
                                    *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x29) >> 0xc & 0x3f)
                                    ;
                                    cVar2 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar2 != '\0');
                              }
                              plVar7 = *(long **)(unaff_x19 + 0x470);
                              if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                              lVar6 = *(long *)(unaff_x19 + 0x1e0);
                              if ((lVar6 != 0) &&
                                 (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                                 lVar4 == 0)) goto LAB_06f6e958;
                              if (0x26 < *(uint *)(plVar7 + 3)) {
                                plVar7[0x2a] = lVar6;
                                if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                  puVar1 = (ulong *)(unaff_x21 +
                                                     ((ulong)(plVar7 + 0x2a) >> 0x12 & 0x7fff) * 8 +
                                                    0x464e0);
                                  do {
                                    cVar2 = '\x01';
                                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar3) {
                                      *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x2a) >> 0xc &
                                                                0x3f);
                                      cVar2 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar2 != '\0');
                                }
                                plVar7 = *(long **)(unaff_x19 + 0x470);
                                if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                lVar6 = *(long *)(unaff_x19 + 0x1e8);
                                if ((lVar6 != 0) &&
                                   (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                                   lVar4 == 0)) goto LAB_06f6e958;
                                if (0x27 < *(uint *)(plVar7 + 3)) {
                                  plVar7[0x2b] = lVar6;
                                  if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                    puVar1 = (ulong *)(unaff_x21 +
                                                       ((ulong)(plVar7 + 0x2b) >> 0x12 & 0x7fff) * 8
                                                      + 0x464e0);
                                    do {
                                      cVar2 = '\x01';
                                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                      if (bVar3) {
                                        *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x2b) >> 0xc &
                                                                  0x3f);
                                        cVar2 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar2 != '\0');
                                  }
                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                  lVar6 = *(long *)(unaff_x19 + 0x1f0);
                                  if ((lVar6 != 0) &&
                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                                     lVar4 == 0)) goto LAB_06f6e958;
                                  if (0x28 < *(uint *)(plVar7 + 3)) {
                                    plVar7[0x2c] = lVar6;
                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                      puVar1 = (ulong *)(unaff_x21 +
                                                         ((ulong)(plVar7 + 0x2c) >> 0x12 & 0x7fff) *
                                                         8 + 0x464e0);
                                      do {
                                        cVar2 = '\x01';
                                        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                        if (bVar3) {
                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x2c) >> 0xc &
                                                                    0x3f);
                                          cVar2 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar2 != '\0');
                                    }
                                    plVar7 = *(long **)(unaff_x19 + 0x470);
                                    if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                    lVar6 = *(long *)(unaff_x19 + 0x1f8);
                                    if ((lVar6 != 0) &&
                                       (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                                       lVar4 == 0)) goto LAB_06f6e958;
                                    if (0x29 < *(uint *)(plVar7 + 3)) {
                                      plVar7[0x2d] = lVar6;
                                      if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                        puVar1 = (ulong *)(unaff_x21 +
                                                           ((ulong)(plVar7 + 0x2d) >> 0x12 & 0x7fff)
                                                           * 8 + 0x464e0);
                                        do {
                                          cVar2 = '\x01';
                                          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                          if (bVar3) {
                                            *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x2d) >> 0xc
                                                                      & 0x3f);
                                            cVar2 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar2 != '\0');
                                      }
                                      plVar7 = *(long **)(unaff_x19 + 0x470);
                                      if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                      lVar6 = *(long *)(unaff_x19 + 0x200);
                                      if ((lVar6 != 0) &&
                                         (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)(*plVar7 + 0x40)
                                                              ), lVar4 == 0)) goto LAB_06f6e958;
                                      if (0x2a < *(uint *)(plVar7 + 3)) {
                                        plVar7[0x2e] = lVar6;
                                        if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                          puVar1 = (ulong *)(unaff_x21 +
                                                             ((ulong)(plVar7 + 0x2e) >> 0x12 &
                                                             0x7fff) * 8 + 0x464e0);
                                          do {
                                            cVar2 = '\x01';
                                            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                            if (bVar3) {
                                              *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x2e) >>
                                                                         0xc & 0x3f);
                                              cVar2 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar2 != '\0');
                                        }
                                        plVar7 = *(long **)(unaff_x19 + 0x470);
                                        if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                        lVar6 = *(long *)(unaff_x19 + 0x208);
                                        if ((lVar6 != 0) &&
                                           (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                        (*plVar7 + 0x40)),
                                           lVar4 == 0)) goto LAB_06f6e958;
                                        if (0x2b < *(uint *)(plVar7 + 3)) {
                                          plVar7[0x2f] = lVar6;
                                          if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                            puVar1 = (ulong *)(unaff_x21 +
                                                               ((ulong)(plVar7 + 0x2f) >> 0x12 &
                                                               0x7fff) * 8 + 0x464e0);
                                            do {
                                              cVar2 = '\x01';
                                              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                              if (bVar3) {
                                                *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x2f) >>
                                                                           0xc & 0x3f);
                                                cVar2 = ExclusiveMonitorsStatus();
                                              }
                                            } while (cVar2 != '\0');
                                          }
                                          plVar7 = *(long **)(unaff_x19 + 0x470);
                                          if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                          lVar6 = *(long *)(unaff_x19 + 0x210);
                                          if ((lVar6 != 0) &&
                                             (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                          (*plVar7 + 0x40)),
                                             lVar4 == 0)) goto LAB_06f6e958;
                                          if (0x2c < *(uint *)(plVar7 + 3)) {
                                            plVar7[0x30] = lVar6;
                                            if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                              puVar1 = (ulong *)(unaff_x21 +
                                                                 ((ulong)(plVar7 + 0x30) >> 0x12 &
                                                                 0x7fff) * 8 + 0x464e0);
                                              do {
                                                cVar2 = '\x01';
                                                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar3) {
                                                  *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x30)
                                                                             >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar2 != '\0');
                                            }
                                            plVar7 = *(long **)(unaff_x19 + 0x470);
                                            if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                            lVar6 = *(long *)(unaff_x19 + 0x218);
                                            if ((lVar6 != 0) &&
                                               (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                            (*plVar7 + 0x40)),
                                               lVar4 == 0)) goto LAB_06f6e958;
                                            if (0x2d < *(uint *)(plVar7 + 3)) {
                                              plVar7[0x31] = lVar6;
                                              if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                puVar1 = (ulong *)(unaff_x21 +
                                                                   ((ulong)(plVar7 + 0x31) >> 0x12 &
                                                                   0x7fff) * 8 + 0x464e0);
                                                do {
                                                  cVar2 = '\x01';
                                                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar3) {
                                                    *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 0x31
                                                                                      ) >> 0xc &
                                                                              0x3f);
                                                    cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar2 != '\0');
                                              }
                                              plVar7 = *(long **)(unaff_x19 + 0x470);
                                              if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                              lVar6 = *(long *)(unaff_x19 + 0x220);
                                              if ((lVar6 != 0) &&
                                                 (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                              (*plVar7 + 0x40)),
                                                 lVar4 == 0)) goto LAB_06f6e958;
                                              if (0x2e < *(uint *)(plVar7 + 3)) {
                                                plVar7[0x32] = lVar6;
                                                if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                  puVar1 = (ulong *)(unaff_x21 +
                                                                     ((ulong)(plVar7 + 0x32) >> 0x12
                                                                     & 0x7fff) * 8 + 0x464e0);
                                                  do {
                                                    cVar2 = '\x01';
                                                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                    if (bVar3) {
                                                      *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 
                                                  0x32) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                }
                                                plVar7 = *(long **)(unaff_x19 + 0x470);
                                                if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                lVar6 = *(long *)(unaff_x19 + 0x228);
                                                if ((lVar6 != 0) &&
                                                   (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                (*plVar7 + 0x40)),
                                                   lVar4 == 0)) goto LAB_06f6e958;
                                                if (0x2f < *(uint *)(plVar7 + 3)) {
                                                  plVar7[0x33] = lVar6;
                                                  if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)(plVar7 + 0x33) >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 + 
                                                  0x33) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x230);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x30 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x34] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x34) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x34) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x238);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x31 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x35] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x35) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x35) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x240);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x32 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x36] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x36) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x36) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x248);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x33 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x37] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x37) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x37) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x250);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x34 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x38] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x38) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x38) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 600);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x35 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x39] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x39) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x39) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x260);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x36 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x3a] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x3a) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x3a) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x268);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x37 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x3b] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x3b) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x3b) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x270);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x38 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x3c] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x3c) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x3c) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x278);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x39 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x3d] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x3d) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x3d) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x280);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x3a < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x3e] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x3e) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x3e) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x288);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x3b < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x3f] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x3f) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x3f) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x290);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x3c < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x40] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x40) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x40) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x298);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x3d < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x41] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x41) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x41) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x2a0);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x3e < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x42] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x42) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x42) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x2a8);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x3f < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x43] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x43) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x43) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x2b0);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x40 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x44] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x44) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x44) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x2b8);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x41 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x45] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x45) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x45) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x2c0);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x42 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x46] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x46) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x46) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x2c8);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x43 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x47] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x47) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x47) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x2d0);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x44 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x48] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x48) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x48) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x2f8);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x77 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x7b] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x7b) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x7b) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x300);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x78 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x7c] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x7c) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x7c) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x308);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x79 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x7d] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x7d) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x7d) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x310);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x4a < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x4e] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x4e) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x4e) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x318);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x4b < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x4f] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x4f) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x4f) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 800);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x4c < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x50] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x50) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x50) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x328);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x4d < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x51] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x51) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x51) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x330);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x4e < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x52] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x52) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x52) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x338);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x4f < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x53] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x53) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x53) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x340);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x50 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x54] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x54) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x54) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x348);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x51 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x55] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x55) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x55) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x350);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x52 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x56] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x56) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x56) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x358);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x53 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x57] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x57) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x57) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x360);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x54 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x58] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x58) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x58) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x368);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x55 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x59] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x59) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x59) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x370);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x56 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x5a] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x5a) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x5a) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x378);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x57 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x5b] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x5b) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x5b) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x380);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x58 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x5c] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x5c) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x5c) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x388);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x59 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x5d] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x5d) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x5d) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x390);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x5a < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x5e] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x5e) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x5e) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x398);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x5b < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x5f] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x5f) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x5f) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x3a0);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x5c < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x60] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x60) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x60) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x3a8);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x5d < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x61] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x61) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x61) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x3b0);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x5e < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x62] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x62) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x62) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x3b8);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x5f < *(uint *)(plVar7 + 3)) {
                                                    plVar7[99] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 99) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 99) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x3c0);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x60 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[100] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 100) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 100) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x3d0);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x61 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x65] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x65) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x65) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x3c8);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x62 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x66] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x66) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x66) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x3d8);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (99 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x67] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x67) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x67) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x3e0);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (100 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x68] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x68) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x68) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 1000);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x65 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x69] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x69) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x69) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x3f0);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x66 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x6a] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x6a) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x6a) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x3f8);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x67 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x6b] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x6b) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x6b) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x400);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x68 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x6c] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x6c) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x6c) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x408);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x69 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x6d] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x6d) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x6d) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x458);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x75 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x79] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x79) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x79) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x410);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x6a < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x6e] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x6e) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x6e) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x418);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x6b < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x6f] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x6f) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x6f) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x428);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x6c < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x70] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x70) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x70) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x438);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x6e < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x72] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x72) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x72) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x438);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x71 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x75] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x75) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x75) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x438);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x73 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x77] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x77) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x77) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x440);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x6d < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x71] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x71) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x71) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x440);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x70 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x74] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x74) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x74) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x430);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x6f < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x73] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x73) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x73) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x448);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x74 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x78] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x78) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x78) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x450);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x72 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x76] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x76) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x76) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x460);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x76 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x7a] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x7a) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x7a) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x420);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x45 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x49] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x49) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x49) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x2d8);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x48 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x4c] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x4c) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x4c) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x2e0);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x49 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x4d] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x4d) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x4d) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x2e8);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x47 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x4b] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x4b) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x4b) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0x2f0);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x46 < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x4a] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x4a) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x4a) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(unaff_x19 + 0xb0);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if (0x7a < *(uint *)(plVar7 + 3)) {
                                                    plVar7[0x7e] = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)(plVar7 + 0x7e) >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)(plVar7 
                                                  + 0x7e) >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  plVar7 = *(long **)(unaff_x19 + 0x470);
                                                  if (*(int *)(DAT_083d3b50 + 0xe0) == 0) {
                                                    FUN_033b9870();
                                                  }
                                                  if (plVar7 == (long *)0x0) goto LAB_06f6e954;
                                                  lVar6 = *(long *)(*(long *)(DAT_083d3b50 + 0xb8) +
                                                                   8);
                                                  if ((lVar6 != 0) &&
                                                     (lVar4 = FUN_0339898c(lVar6,*(undefined8 *)
                                                                                  (*plVar7 + 0x40)),
                                                     lVar4 == 0)) goto LAB_06f6e958;
                                                  if ((int)plVar7[3] != 0) {
                                                    plVar7 = plVar7 + 4;
                                                    *plVar7 = lVar6;
                                                    if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)plVar7 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)plVar7
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
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
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
LAB_06f6e954:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


