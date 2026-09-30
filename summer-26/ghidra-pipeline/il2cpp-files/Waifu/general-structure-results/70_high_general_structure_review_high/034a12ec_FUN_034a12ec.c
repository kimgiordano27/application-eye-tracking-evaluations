/*
FUNCTION_NAME: FUN_034a12ec
ENTRY_POINT: 034a12ec
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


void FUN_034a12ec(long param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  if ((DAT_086d7f6f & 1) == 0) {
    FUN_0335b6c8(&DAT_08405b50,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cfcf8,1);
    DataMemoryBarrier(2,3);
    DAT_086d7f6f = 1;
  }
  if (param_2 == 0) goto LAB_034a19ec;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0x3f80000000000000;
  if ((param_3 & 1) == 0) {
    FUN_0348e7f0(param_2,0);
  }
  else {
    lVar15 = *(long *)(param_2 + 0x18);
    if (lVar15 == 0) goto LAB_034a19ec;
    if (DAT_086f22b8 == (code *)0x0) {
      DAT_086f22b8 = (code *)FUN_033d1b68(
                                         "UnityEngine.ConfigurableJoint::set_xMotion(UnityEngine.ConfigurableJointMotion)"
                                         );
    }
    (*DAT_086f22b8)(lVar15,2);
    lVar15 = *(long *)(param_2 + 0x18);
    if (lVar15 == 0) goto LAB_034a19ec;
    if (DAT_086f22c8 == (code *)0x0) {
      DAT_086f22c8 = (code *)FUN_033d1b68(
                                         "UnityEngine.ConfigurableJoint::set_yMotion(UnityEngine.ConfigurableJointMotion)"
                                         );
    }
    (*DAT_086f22c8)(lVar15,2);
    lVar15 = *(long *)(param_2 + 0x18);
    if (lVar15 == 0) goto LAB_034a19ec;
    if (DAT_086f22d8 == (code *)0x0) {
      DAT_086f22d8 = (code *)FUN_033d1b68(
                                         "UnityEngine.ConfigurableJoint::set_zMotion(UnityEngine.ConfigurableJointMotion)"
                                         );
    }
    (*DAT_086f22d8)(lVar15,2);
    FUN_0348e7f0(param_2,1);
    if (*(char *)(param_1 + 0x112) == '\0') {
      lVar15 = *(long *)(param_2 + 0x18);
      if (lVar15 == 0) goto LAB_034a19ec;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar15 = (*DAT_086ef188)(lVar15);
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar7 = (*DAT_086ef188)(param_1);
      if (lVar15 == 0) goto LAB_034a19ec;
      FUN_07a198f4(lVar15,uVar7,0);
    }
  }
  lVar15 = *(long *)(param_2 + 0x18);
  if (lVar15 != 0) {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar15 = (*DAT_086ef190)(lVar15);
    if (lVar15 != 0) {
      if (DAT_086ef288 == (code *)0x0) {
        DAT_086ef288 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeInHierarchy()");
      }
      uVar8 = (*DAT_086ef288)(lVar15);
      if ((uVar8 & 1) == 0) {
        bVar6 = 1;
      }
      else {
        lVar15 = *(long *)(param_2 + 0xb8);
        if (lVar15 == 0) goto LAB_034a19ec;
        if (DAT_086f1e40 == (code *)0x0) {
          DAT_086f1e40 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::get_isKinematic()");
        }
        bVar6 = (*DAT_086f1e40)(lVar15);
      }
      lVar15 = *(long *)(param_2 + 0x18);
      iVar2 = *(int *)(param_1 + 0x1b8);
      if (lVar15 != 0) {
        if (DAT_086ef190 == (code *)0x0) {
          DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        }
        lVar15 = (*DAT_086ef190)(lVar15);
        if (lVar15 != 0) {
          if (DAT_086ef288 == (code *)0x0) {
            DAT_086ef288 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeInHierarchy()");
          }
          uVar8 = (*DAT_086ef288)(lVar15);
          if (((uVar8 & 1) == 0) && ((param_4 & 1) == 0)) {
            FUN_0348ec74(param_2);
            lVar15 = *(long *)(param_2 + 0x18);
            if (lVar15 == 0) goto LAB_034a19ec;
            if (DAT_086ef190 == (code *)0x0) {
              DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
            }
            lVar15 = (*DAT_086ef190)(lVar15);
            if (lVar15 == 0) goto LAB_034a19ec;
            if (DAT_086ef278 == (code *)0x0) {
              DAT_086ef278 = (code *)FUN_033d1b68(
                                                 "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                 );
            }
            (*DAT_086ef278)(lVar15,1);
          }
          FUN_0348cad8(param_2,0);
          if (*(long *)(param_2 + 0x18) != 0) {
            FUN_07a8a7b4(*(long *)(param_2 + 0x18),0,0,0);
            if ((param_4 & 1) == 0) {
              lVar15 = *(long *)(param_1 + 0x80);
              if (lVar15 != 0) {
                uVar8 = 0;
                do {
                  if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar8) {
                    if ((bVar6 & iVar2 != 2) == 0) goto LAB_034a18a0;
                    if (*(long *)(param_2 + 0xb8) != 0) {
                      FUN_07a84edc(*(undefined4 *)(param_2 + 0x10c),*(undefined4 *)(param_2 + 0x110)
                                   ,*(undefined4 *)(param_2 + 0x114),*(long *)(param_2 + 0xb8),0);
                      if (*(long *)(param_2 + 0xb8) != 0) {
                        FUN_07a85014(*(undefined4 *)(param_2 + 0x118),
                                     *(undefined4 *)(param_2 + 0x11c),
                                     *(undefined4 *)(param_2 + 0x120),*(long *)(param_2 + 0xb8),0);
                        goto LAB_034a18a0;
                      }
                    }
                    break;
                  }
                  if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_034a19f0;
                  lVar13 = *(long *)(lVar15 + uVar8 * 8 + 0x20);
                  if (lVar13 != param_2) {
                    if (lVar13 == 0) break;
                    if (*(char *)(lVar13 + 0x68) == '\0') {
                      lVar13 = *(long *)(param_2 + 0x308);
                      if (lVar13 == 0) break;
                      if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                        uVar12 = 0;
                        uVar10 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                        do {
                          if (uVar10 <= uVar12) goto LAB_034a19f0;
                          lVar15 = *(long *)(param_1 + 0x80);
                          if (lVar15 == 0) goto LAB_034a19ec;
                          if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_034a19f0;
                          lVar15 = *(long *)(lVar15 + uVar8 * 8 + 0x20);
                          if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x308), lVar15 == 0))
                          goto LAB_034a19ec;
                          if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
                            lVar16 = *(long *)(lVar13 + uVar12 * 8 + 0x20);
                            uVar10 = 0;
                            uVar11 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
                            do {
                              if (uVar11 <= uVar10) goto LAB_034a19f0;
                              if (lVar16 == 0) goto LAB_034a19ec;
                              lVar17 = *(long *)(lVar15 + 0x20 + uVar10 * 8);
                              if (DAT_086f1fc8 == (code *)0x0) {
                                DAT_086f1fc8 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Collider::get_enabled()");
                              }
                              uVar11 = (*DAT_086f1fc8)(lVar16);
                              if ((uVar11 & 1) != 0) {
                                if (lVar17 == 0) goto LAB_034a19ec;
                                if (DAT_086f1fc8 == (code *)0x0) {
                                  DAT_086f1fc8 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Collider::get_enabled()");
                                }
                                uVar11 = (*DAT_086f1fc8)(lVar17);
                                if ((uVar11 & 1) != 0) {
                                  if (*(int *)(DAT_083cfcf8 + 0xe0) == 0) {
                                    FUN_033b9870();
                                  }
                                  if (DAT_086f1c88 == (code *)0x0) {
                                    DAT_086f1c88 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Physics::IgnoreCollision(UnityEngine.Collider,UnityEngine.Collider,System.Boolean)"
                                                  );
                                  }
                                  (*DAT_086f1c88)(lVar16,lVar17,0);
                                }
                              }
                              uVar11 = (ulong)*(uint *)(lVar15 + 0x18);
                              uVar10 = uVar10 + 1;
                            } while ((long)uVar10 < (long)(int)*(uint *)(lVar15 + 0x18));
                            uVar10 = (ulong)*(uint *)(lVar13 + 0x18);
                          }
                          uVar12 = uVar12 + 1;
                        } while ((long)uVar12 < (long)(int)uVar10);
                        lVar15 = *(long *)(param_1 + 0x80);
                      }
                    }
                  }
                  uVar8 = uVar8 + 1;
                } while (lVar15 != 0);
              }
            }
            else {
              lVar15 = *(long *)(param_2 + 0x18);
              if (lVar15 != 0) {
                if (DAT_086ef190 == (code *)0x0) {
                  DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                }
                lVar15 = (*DAT_086ef190)(lVar15);
                if (lVar15 != 0) {
                  if (DAT_086ef278 == (code *)0x0) {
                    DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                  }
                  (*DAT_086ef278)(lVar15,0);
LAB_034a18a0:
                  if (*(char *)(param_2 + 0x124) != '\0') {
                    if ((*(long *)(param_2 + 0x18) == 0) ||
                       (lVar15 = FUN_03c89df4(*(long *)(param_2 + 0x18),DAT_08405b50), lVar15 == 0))
                    goto LAB_034a19ec;
                    uVar7 = *(undefined8 *)(lVar15 + 0x40);
                    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                      FUN_033b9870();
                    }
                    uVar8 = FUN_07a0d2c4(uVar7,0,0);
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
                  *(undefined1 *)(param_2 + 0x68) = 1;
                  lVar15 = *(long *)(param_1 + 0xe8);
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
                                  (plVar9,param_2,*(undefined8 *)(*plVar9 + 0x1f0));
                        uVar3 = *(uint *)(lVar15 + 0x18);
                        lVar13 = lVar13 + 1;
                      } while ((int)lVar13 < (int)uVar3);
                    }
                    lVar15 = *(long *)(param_1 + 200);
                    if (lVar15 == 0) {
                      return;
                    }
                    /* WARNING: Could not recover jumptable at 0x034a19c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(lVar15 + 0x18))
                              (*(undefined8 *)(lVar15 + 0x40),param_2,*(undefined8 *)(lVar15 + 0x28)
                              );
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
LAB_034a19ec:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


