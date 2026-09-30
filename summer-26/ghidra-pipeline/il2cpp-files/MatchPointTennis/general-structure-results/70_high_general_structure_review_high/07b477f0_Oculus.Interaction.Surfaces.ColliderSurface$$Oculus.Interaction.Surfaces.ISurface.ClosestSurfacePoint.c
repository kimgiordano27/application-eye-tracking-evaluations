/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.ColliderSurface$$Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint
ENTRY_POINT: 07b477f0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07b46d60) */
/* WARNING: Removing unreachable block (ram,0x07b46d64) */
/* WARNING: Removing unreachable block (ram,0x07b474dc) */
/* WARNING: Removing unreachable block (ram,0x07b470fc) */
/* WARNING: Removing unreachable block (ram,0x07b47100) */
/* WARNING: Removing unreachable block (ram,0x07b4734c) */
/* WARNING: Removing unreachable block (ram,0x07b474d0) */

undefined8
Oculus_Interaction_Surfaces_ColliderSurface__Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
          (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *plVar10;
  long unaff_x21;
  long lVar11;
  long *plVar12;
  long lVar13;
  long unaff_x26;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  FUN_0768d01c(&stack0x00000060,**(undefined8 **)(param_1 + 0xc80));
  if (unaff_x26 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e3c();
  }
  if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar3 = (**(code **)(in_stack_00000020 + 0x18))(*(undefined8 *)(in_stack_00000020 + 0x40));
  if (in_stack_00000018 != 0) {
    FUN_07b452e4(in_stack_00000028);
  }
  FUN_07b456a4(in_stack_00000028);
  FUN_05bae95c(&stack0x00000040);
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  in_stack_00000070 = in_stack_00000050;
LAB_07b467b8:
  do {
    while( true ) {
      do {
        uVar4 = FUN_0768d020(&stack0x00000060,*unaff_x19);
        lVar8 = in_stack_00000070;
        if ((uVar4 & 1) == 0) {
          FUN_0768d01c(&stack0x00000060,*(undefined8 *)PTR_DAT_09f4ac80);
          if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
            FUN_05bae95c(&stack0x00000040);
            in_stack_00000068 = in_stack_00000048;
            in_stack_00000060 = in_stack_00000040;
            in_stack_00000070 = in_stack_00000050;
            while (uVar4 = FUN_0768d020(&stack0x00000060,*unaff_x19), (uVar4 & 1) != 0) {
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              if ((*(char *)(in_stack_00000070 + 0x38) == '\0') &&
                 ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 != 0 ||
                  ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) == 0)))) {
                lVar8 = *(long *)(in_stack_00000030 + 0xe0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                (**(code **)(lVar8 + 0x18))
                          (*(undefined8 *)(lVar8 + 0x40),uVar3,
                           *(undefined8 *)(in_stack_00000070 + 0x10),
                           *(undefined8 *)(in_stack_00000070 + 0x30),*(undefined8 *)(lVar8 + 0x28));
              }
            }
            FUN_0768d01c(&stack0x00000060,*(undefined8 *)PTR_DAT_09f4ac80);
          }
          if (in_stack_00000038._4_4_ != 0) {
            FUN_05bae95c(&stack0x00000040);
            in_stack_00000068 = in_stack_00000048;
            in_stack_00000060 = in_stack_00000040;
            in_stack_00000070 = in_stack_00000050;
            while (uVar4 = FUN_0768d020(&stack0x00000060,*unaff_x19), (uVar4 & 1) != 0) {
              if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              if (*(long *)(in_stack_00000070 + 0x18) != 0) {
                if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                (**(code **)(*unaff_x20 + 0x268))();
                FUN_07b47fa4(in_stack_00000028,uVar3);
              }
            }
            FUN_0768d01c(&stack0x00000060,*(undefined8 *)PTR_DAT_09f4ac80);
          }
          FUN_07b458d0(in_stack_00000028);
          return uVar3;
        }
        if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
      } while ((((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
                (lVar13 = *(long *)(in_stack_00000070 + 0x18), lVar13 == 0)) ||
               (*(char *)(lVar13 + 0x80) != '\0')) ||
              ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
               ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
      lVar11 = *(long *)(in_stack_00000070 + 0x30);
      uVar4 = FUN_07b451dc(in_stack_00000028,lVar13,unaff_x21,lVar11);
      if ((uVar4 & 1) == 0) break;
      plVar12 = *(long **)(lVar13 + 0x68);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar13 = *plVar12;
      uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f4ac08) {
            puVar5 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07b468e0;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f4ac08,0);
LAB_07b468e0:
      (*(code *)*puVar5)(plVar12,uVar3,lVar11,puVar5[1]);
      *(undefined1 *)(lVar8 + 0x38) = 1;
    }
  } while ((lVar11 == 0) || (*(char *)(lVar13 + 0x82) != '\0'));
  if (*(long *)(in_stack_00000028 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar12 = *(long **)(*(long *)(in_stack_00000028 + 0x20) + 0x40);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar7 = *plVar12;
  uVar14 = *(undefined8 *)(lVar13 + 0x40);
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f4a8a0) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_07b4690c;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f4a8a0,0);
LAB_07b4690c:
  plVar12 = (long *)(*(code *)*puVar5)(plVar12,uVar14,puVar5[1]);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)((long)plVar12 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_09f4a3d0 + 0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f4a3d0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(plVar12);
    }
    if ((*(char *)((long)plVar12 + 0xf2) != '\0') && ((char)plVar12[5] == '\0')) {
      plVar12 = *(long **)(lVar13 + 0x68);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar13 = *plVar12;
      uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f4ac08) {
            puVar5 = (undefined8 *)(lVar13 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_07b469dc;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f4ac08,1);
LAB_07b469dc:
      lVar13 = (*(code *)*puVar5)(plVar12,uVar3,puVar5[1]);
      if (lVar13 != 0) {
        uVar14 = thunk_FUN_04457f54(lVar13,0);
        plVar12 = (long *)FUN_07b3e6b4(in_stack_00000028,uVar14);
        puVar2 = PTR_DAT_09f21a80;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_09f4a3d0 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_09f4a3d0)) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(plVar12);
        }
        if (*(char *)((long)plVar12 + 0xf1) == '\0') {
          uVar14 = *(undefined8 *)PTR_DAT_09f21a80;
          plVar6 = (long *)thunk_FUN_04485110(lVar13);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_044481e4(lVar13,uVar14);
          }
        }
        else {
          plVar6 = (long *)FUN_07b388a4(plVar12,lVar13);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
        }
        lVar13 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar13 + (long)(*piVar9 + 6) * 0x10 + 0x138);
              goto LAB_07b46ae0;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_044822ac(plVar6,*(long *)puVar2,6);
LAB_07b46ae0:
        uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        plVar10 = (long *)PTR_DAT_09f21a80;
        if ((uVar4 & 1) == 0) {
          if (*(char *)((long)plVar12 + 0xf1) == '\0') {
            uVar14 = *(undefined8 *)PTR_DAT_09f21a80;
            plVar12 = (long *)thunk_FUN_04485110(lVar11,uVar14);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_044481e4(lVar11,uVar14);
            }
          }
          else {
            plVar12 = (long *)FUN_07b388a4(plVar12,lVar11);
            plVar10 = (long *)PTR_DAT_09f21a80;
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
          }
          lVar13 = *plVar12;
          uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f21c40) {
                puVar5 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_07b46b8c;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f21c40,0);
LAB_07b46b8c:
          plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          do {
            lVar13 = *plVar12;
            uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f1f018) {
                  puVar5 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_07b46bf4;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f1f018,0);
LAB_07b46bf4:
            uVar4 = (*(code *)*puVar5)(plVar12,puVar5[1]);
            if ((uVar4 & 1) == 0) goto LAB_07b46cd0;
            lVar13 = *plVar12;
            uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f1f018) {
                  puVar5 = (undefined8 *)(lVar13 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_07b46c5c;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f1f018,1);
LAB_07b46c5c:
            uVar14 = (*(code *)*puVar5)(plVar12,puVar5[1]);
            lVar13 = *plVar6;
            uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *plVar10) {
                  puVar5 = (undefined8 *)(lVar13 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                  goto LAB_07b46cbc;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_044822ac(plVar6,*plVar10,2);
LAB_07b46cbc:
            (*(code *)*puVar5)(plVar6,uVar14,puVar5[1]);
          } while( true );
        }
      }
    }
  }
  else if (*(int *)((long)plVar12 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_09f4a398 + 0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f4a398))
    {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4();
    }
    if ((char)plVar12[5] == '\0') {
      plVar6 = *(long **)(lVar13 + 0x68);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar13 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f4ac08) {
            puVar5 = (undefined8 *)(lVar13 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_07b46e28;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac(plVar6,*(long *)PTR_DAT_09f4ac08,1);
LAB_07b46e28:
      lVar13 = (*(code *)*puVar5)(plVar6,uVar3,puVar5[1]);
      if (lVar13 != 0) {
        if ((char)plVar12[0x20] == '\0') {
          uVar14 = *(undefined8 *)PTR_DAT_09f21b80;
          plVar6 = (long *)thunk_FUN_04485110(lVar13,uVar14);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_044481e4(lVar13,uVar14);
          }
        }
        else {
          plVar6 = (long *)FUN_07b39fa0(plVar12,lVar13);
        }
        if ((char)plVar12[0x20] == '\0') {
          uVar14 = *(undefined8 *)PTR_DAT_09f21b80;
          plVar12 = (long *)thunk_FUN_04485110(lVar11,uVar14);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_044481e4(lVar11,uVar14);
          }
        }
        else {
          plVar12 = (long *)FUN_07b39fa0(plVar12,lVar11);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
        }
        lVar13 = *plVar12;
        uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f21b80) {
              puVar5 = (undefined8 *)(lVar13 + (long)(*piVar9 + 9) * 0x10 + 0x138);
              goto LAB_07b46f14;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f21b80,9);
LAB_07b46f14:
        plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar13 = *plVar12;
          uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f1f018) {
                puVar5 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_07b46f7c;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f1f018,0);
LAB_07b46f7c:
          uVar4 = (*(code *)*puVar5)(plVar12,puVar5[1]);
          if ((uVar4 & 1) == 0) goto LAB_07b4706c;
          lVar13 = *plVar12;
          uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f21bb0) {
                puVar5 = (undefined8 *)(lVar13 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto LAB_07b46fe4;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f21bb0,2);
LAB_07b46fe4:
          auVar15 = (*(code *)*puVar5)(plVar12,puVar5[1]);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar13 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f21b80) {
                puVar5 = (undefined8 *)(lVar13 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_07b47054;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_044822ac(plVar6,*(long *)PTR_DAT_09f21b80,1);
LAB_07b47054:
          (*(code *)*puVar5)(plVar6,auVar15._0_8_,auVar15._8_8_,puVar5[1]);
        } while( true );
      }
    }
  }
  goto LAB_07b46db8;
LAB_07b4706c:
  plVar12 = (long *)thunk_FUN_04485110(plVar12,*(undefined8 *)PTR_DAT_09f1f008);
  if (plVar12 != (long *)0x0) {
    lVar13 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar5 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07b470e4;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f1f008,0);
LAB_07b470e4:
    (*(code *)*puVar5)(plVar12,puVar5[1]);
  }
  goto LAB_07b46db8;
LAB_07b46cd0:
  plVar12 = (long *)thunk_FUN_04485110(plVar12,*(undefined8 *)PTR_DAT_09f1f008);
  if (plVar12 != (long *)0x0) {
    lVar13 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar5 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07b46d48;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f1f008,0);
LAB_07b46d48:
    (*(code *)*puVar5)(plVar12,puVar5[1]);
  }
LAB_07b46db8:
  *(undefined1 *)(lVar8 + 0x38) = 1;
  unaff_x21 = in_stack_00000030;
  goto LAB_07b467b8;
}


