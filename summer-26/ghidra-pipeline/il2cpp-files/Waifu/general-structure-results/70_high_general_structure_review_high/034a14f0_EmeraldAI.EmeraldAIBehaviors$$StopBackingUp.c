/*
FUNCTION_NAME: EmeraldAI.EmeraldAIBehaviors$$StopBackingUp
ENTRY_POINT: 034a14f0
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_2
*/


void EmeraldAI_EmeraldAIBehaviors__StopBackingUp(void)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  code *pcVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  ulong unaff_x21;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x24;
  long lVar18;
  long unaff_x25;
  long in_stack_00000018;
  
  pcVar7 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeInHierarchy()");
  *(code **)(unaff_x20 + 0x288) = pcVar7;
  uVar8 = (*pcVar7)();
  if ((uVar8 & 1) == 0) {
    bVar6 = 1;
  }
  else {
    lVar15 = *(long *)(unaff_x25 + 0xb8);
    if (lVar15 == 0) goto LAB_034a19ec;
    if (DAT_086f1e40 == (code *)0x0) {
      DAT_086f1e40 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::get_isKinematic()");
    }
    bVar6 = (*DAT_086f1e40)(lVar15);
  }
  lVar15 = *(long *)(unaff_x25 + 0x18);
  iVar2 = *(int *)(in_stack_00000018 + 0x1b8);
  if (lVar15 != 0) {
    pcVar7 = *(code **)(unaff_x24 + 400);
    if (pcVar7 == (code *)0x0) {
      pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      *(code **)(unaff_x24 + 400) = pcVar7;
    }
    lVar15 = (*pcVar7)(lVar15);
    if (lVar15 != 0) {
      pcVar7 = *(code **)(unaff_x20 + 0x288);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeInHierarchy()");
        *(code **)(unaff_x20 + 0x288) = pcVar7;
      }
      uVar8 = (*pcVar7)(lVar15);
      if (((uVar8 & 1) == 0) && ((unaff_x21 & 1) == 0)) {
        FUN_0348ec74();
        lVar15 = *(long *)(unaff_x25 + 0x18);
        if (lVar15 == 0) goto LAB_034a19ec;
        pcVar7 = *(code **)(unaff_x24 + 400);
        if (pcVar7 == (code *)0x0) {
          pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
          *(code **)(unaff_x24 + 400) = pcVar7;
        }
        lVar15 = (*pcVar7)(lVar15);
        if (lVar15 == 0) goto LAB_034a19ec;
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar15,1);
      }
      FUN_0348cad8();
      if (*(long *)(unaff_x25 + 0x18) != 0) {
        FUN_07a8a7b4(*(long *)(unaff_x25 + 0x18),0,0,0);
        if ((unaff_x21 & 1) == 0) {
          lVar15 = *(long *)(in_stack_00000018 + 0x80);
          if (lVar15 != 0) {
            uVar8 = 0;
            do {
              if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar8) {
                if ((bVar6 & iVar2 != 2) == 0) goto LAB_034a18a0;
                if (*(long *)(unaff_x25 + 0xb8) != 0) {
                  FUN_07a84edc(*(undefined4 *)(unaff_x25 + 0x10c),*(undefined4 *)(unaff_x25 + 0x110)
                               ,*(undefined4 *)(unaff_x25 + 0x114),*(long *)(unaff_x25 + 0xb8),0);
                  if (*(long *)(unaff_x25 + 0xb8) != 0) {
                    FUN_07a85014(*(undefined4 *)(unaff_x25 + 0x118),
                                 *(undefined4 *)(unaff_x25 + 0x11c),
                                 *(undefined4 *)(unaff_x25 + 0x120),*(long *)(unaff_x25 + 0xb8),0);
                    goto LAB_034a18a0;
                  }
                }
                break;
              }
              if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_034a19f0;
              lVar13 = *(long *)(lVar15 + uVar8 * 8 + 0x20);
              if (lVar13 != unaff_x25) {
                if (lVar13 == 0) break;
                if (*(char *)(lVar13 + 0x68) == '\0') {
                  lVar13 = *(long *)(unaff_x25 + 0x308);
                  if (lVar13 == 0) break;
                    /* catch() { ... } // from try @ 034a13f0 with catch @ 034a1720 */
                    /* catch() { ... } // from try @ 034a1480 with catch @ 034a1724 */
                  if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                    /* catch() { ... } // from try @ 034a169c with catch @ 034a172c */
                    uVar12 = 0;
                    uVar10 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                    do {
                      if (uVar10 <= uVar12) goto LAB_034a19f0;
                      lVar15 = *(long *)(in_stack_00000018 + 0x80);
                      if (lVar15 == 0) goto LAB_034a19ec;
                      if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_034a19f0;
                      lVar15 = *(long *)(lVar15 + uVar8 * 8 + 0x20);
                      if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x308), lVar15 == 0))
                      goto LAB_034a19ec;
                      if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
                        lVar17 = *(long *)(lVar13 + uVar12 * 8 + 0x20);
                        uVar10 = 0;
                        uVar11 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
                        do {
                          if (uVar11 <= uVar10) goto LAB_034a19f0;
                          if (lVar17 == 0) goto LAB_034a19ec;
                          lVar18 = *(long *)(lVar15 + 0x20 + uVar10 * 8);
                          if (DAT_086f1fc8 == (code *)0x0) {
                            DAT_086f1fc8 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Collider::get_enabled()");
                          }
                          uVar11 = (*DAT_086f1fc8)(lVar17);
                          if ((uVar11 & 1) != 0) {
                            if (lVar18 == 0) goto LAB_034a19ec;
                            if (DAT_086f1fc8 == (code *)0x0) {
                              DAT_086f1fc8 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Collider::get_enabled()");
                            }
                            uVar11 = (*DAT_086f1fc8)(lVar18);
                            if ((uVar11 & 1) != 0) {
                              if (*(int *)(DAT_083cfcf8 + 0xe0) == 0) {
                                FUN_033b9870();
                              }
                              if (DAT_086f1c88 == (code *)0x0) {
                                DAT_086f1c88 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Physics::IgnoreCollision(UnityEngine.Collider,UnityEngine.Collider,System.Boolean)"
                                                  );
                              }
                              (*DAT_086f1c88)(lVar17,lVar18,0);
                            }
                          }
                          uVar11 = (ulong)*(uint *)(lVar15 + 0x18);
                          uVar10 = uVar10 + 1;
                        } while ((long)uVar10 < (long)(int)*(uint *)(lVar15 + 0x18));
                        uVar10 = (ulong)*(uint *)(lVar13 + 0x18);
                      }
                      uVar12 = uVar12 + 1;
                    } while ((long)uVar12 < (long)(int)uVar10);
                    lVar15 = *(long *)(in_stack_00000018 + 0x80);
                  }
                }
              }
              uVar8 = uVar8 + 1;
            } while (lVar15 != 0);
          }
        }
        else {
          lVar15 = *(long *)(unaff_x25 + 0x18);
          if (lVar15 != 0) {
            pcVar7 = *(code **)(unaff_x24 + 400);
            if (pcVar7 == (code *)0x0) {
              pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
              *(code **)(unaff_x24 + 400) = pcVar7;
            }
            lVar15 = (*pcVar7)(lVar15);
            if (lVar15 != 0) {
              if (DAT_086ef278 == (code *)0x0) {
                DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                    /* try { // try from 034a169c to 035a16a3 has its CatchHandler @ 034a172c */
              }
                    /* try { // try from 034a16a4 to 035a173f has its CatchHandler @ 034a12a4 */
              (*DAT_086ef278)(lVar15,0);
LAB_034a18a0:
              if (*(char *)(unaff_x25 + 0x124) != '\0') {
                if ((*(long *)(unaff_x25 + 0x18) == 0) ||
                   (lVar15 = FUN_03c89df4(*(long *)(unaff_x25 + 0x18),DAT_08405b50), lVar15 == 0))
                goto LAB_034a19ec;
                uVar16 = *(undefined8 *)(lVar15 + 0x40);
                if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                uVar8 = FUN_07a0d2c4(uVar16,0,0);
                if ((uVar8 & 1) != 0) {
                  puVar14 = (undefined8 *)(lVar15 + 0x28);
                  *puVar14 = 0;
                  if (DAT_08908cd0 != 0) {
                    puVar1 = &DAT_0873ccb0 + ((ulong)puVar14 >> 0x12 & 0x7fff);
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar5) {
                        *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                }
              }
              *(undefined1 *)(unaff_x25 + 0x68) = 1;
              lVar15 = *(long *)(in_stack_00000018 + 0xe8);
              if (lVar15 != 0) {
                uVar3 = *(uint *)(lVar15 + 0x18);
                if (0 < (int)uVar3) {
                  lVar13 = 0;
                  do {
                    if (uVar3 <= (uint)lVar13) {
LAB_034a19f0:
                    /* WARNING: Subroutine does not return */
                      FUN_033d1d44();
                    }
                    plVar9 = *(long **)(lVar15 + 0x20 + lVar13 * 8);
                    if (plVar9 == (long *)0x0) goto LAB_034a19ec;
                    (**(code **)(*plVar9 + 0x1e8))
                              (plVar9,unaff_x25,*(undefined8 *)(*plVar9 + 0x1f0));
                    uVar3 = *(uint *)(lVar15 + 0x18);
                    lVar13 = lVar13 + 1;
                  } while ((int)lVar13 < (int)uVar3);
                }
                lVar15 = *(long *)(in_stack_00000018 + 200);
                if (lVar15 == 0) {
                  return;
                }
                    /* WARNING: Could not recover jumptable at 0x034a19c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar15 + 0x18))
                          (*(undefined8 *)(lVar15 + 0x40),unaff_x25,*(undefined8 *)(lVar15 + 0x28));
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_034a19ec:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


