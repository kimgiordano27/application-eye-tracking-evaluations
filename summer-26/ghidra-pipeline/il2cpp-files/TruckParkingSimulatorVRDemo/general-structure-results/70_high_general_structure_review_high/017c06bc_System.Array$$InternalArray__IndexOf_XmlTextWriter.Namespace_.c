/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<XmlTextWriter.Namespace>
ENTRY_POINT: 017c06bc
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x017c1684) */

long System_Array__InternalArray__IndexOf<XmlTextWriter_Namespace>(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar17;
  long *plVar18;
  long *unaff_x27;
  long *in_stack_00000010;
  long *in_stack_00000018;
  undefined *puVar13;
  
  thunk_FUN_011f4b58();
  thunk_FUN_011f4b58(PTR_DAT_02ac3ed8);
  thunk_FUN_011f4b58(PTR_DAT_02ac3e80);
  thunk_FUN_011f4b58(PTR_DAT_02ac3ee0);
  thunk_FUN_011f4b58(PTR_DAT_02ac3ee8);
  thunk_FUN_011f4b58(PTR_DAT_02ac3ef0);
  thunk_FUN_011f4b58(PTR_DAT_02ab7a38);
  thunk_FUN_011f4b58(PTR_DAT_02ac3ef8);
  thunk_FUN_011f4b58(PTR_DAT_02ac3f00);
  thunk_FUN_011f4b58(PTR_DAT_02ac3f08);
  thunk_FUN_011f4b58(PTR_DAT_02ab7b60);
  lVar15 = *unaff_x27;
  if (lVar15 == 0) {
    FUN_012594a8();
    lVar15 = *(long *)(unaff_x20 + 0x38);
  }
  lVar15 = *(long *)(lVar15 + 8);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_0125944c();
  }
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_011ea084();
  }
  uVar5 = (*(code *)**(undefined8 **)*unaff_x27)();
  if ((uVar5 & 1) != 0) {
    lVar15 = *(long *)(*unaff_x27 + 8);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_0125944c();
    }
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_011ea084();
    }
    uVar5 = (*(code *)**(undefined8 **)(*unaff_x27 + 0x10))();
    puVar13 = PTR_DAT_02ab7b60;
    if ((uVar5 & 1) == 0) {
      uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_02ab7b60 + 0xe0) == 0) {
        thunk_FUN_011ea084();
      }
      lVar15 = FUN_022bb958(uVar17,0);
      if (lVar15 == 0) goto LAB_017c168c;
      uVar5 = FUN_022c5920(lVar15,0);
      uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_011ea084(*(long *)puVar13);
      }
      plVar6 = (long *)FUN_022bb958(uVar17,0);
      if (plVar6 == (long *)0x0) goto LAB_017c168c;
      lVar15 = *plVar6;
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(lVar15 + 0x3b8))(plVar6,*(undefined8 *)(lVar15 + 0x3c0));
        if ((uVar5 & 1) != 0) {
          uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_011ea084();
          }
          plVar6 = (long *)FUN_022bb958(uVar17,0);
          if (plVar6 == (long *)0x0) goto LAB_017c168c;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
          uVar17 = FUN_022bb958(*(undefined8 *)PTR_DAT_02ac3ef0,0);
          if (plVar6 == (long *)0x0) goto LAB_017c168c;
          uVar5 = (**(code **)(*plVar6 + 0x298))(plVar6,uVar17,*(undefined8 *)(*plVar6 + 0x2a0));
          if ((uVar5 & 1) == 0) goto LAB_017c0920;
          plVar6 = *(long **)(unaff_x19 + 0x48);
LAB_017c09d4:
          plVar7 = (long *)FUN_01219524(*(undefined8 *)PTR_DAT_02ac3f08,1);
          uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_011ea084(*(long *)puVar13);
          }
          plVar8 = (long *)FUN_022bb958(uVar17,0);
          if (plVar8 == (long *)0x0) goto LAB_017c168c;
          uVar17 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
          lVar15 = FUN_0177ba74(uVar17,*(undefined8 *)PTR_DAT_02ac3e98);
          goto joined_r0x017c0a38;
        }
LAB_017c0920:
        uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_011ea084();
        }
        plVar6 = (long *)FUN_022bb958(uVar17,0);
        if (plVar6 == (long *)0x0) goto LAB_017c168c;
        uVar5 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
        if ((uVar5 & 1) != 0) {
          uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_011ea084();
          }
          plVar6 = (long *)FUN_022bb958(uVar17,0);
          if (plVar6 == (long *)0x0) goto LAB_017c168c;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
          uVar17 = FUN_022bb958(*(undefined8 *)PTR_DAT_02ac3eb8,0);
          if (plVar6 == (long *)0x0) goto LAB_017c168c;
          uVar5 = (**(code **)(*plVar6 + 0x298))(plVar6,uVar17,*(undefined8 *)(*plVar6 + 0x2a0));
          if ((uVar5 & 1) != 0) {
            plVar6 = *(long **)(unaff_x19 + 0x50);
            goto LAB_017c09d4;
          }
        }
        uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_011ea084();
        }
        plVar6 = (long *)FUN_022bb958(uVar17,0);
        if (plVar6 == (long *)0x0) goto LAB_017c168c;
        uVar5 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
        if ((uVar5 & 1) == 0) {
LAB_017c0bec:
          uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_011ea084();
          }
          plVar6 = (long *)FUN_022bb958(uVar17,0);
          if (plVar6 == (long *)0x0) goto LAB_017c168c;
          uVar5 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
          if ((uVar5 & 1) != 0) {
            uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_011ea084();
            }
            plVar6 = (long *)FUN_022bb958(uVar17,0);
            if (plVar6 == (long *)0x0) goto LAB_017c168c;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440))
            ;
            uVar17 = FUN_022bb958(*(undefined8 *)PTR_DAT_02ac3ed8,0);
            if (plVar6 == (long *)0x0) goto LAB_017c168c;
            uVar5 = (**(code **)(*plVar6 + 0x298))(plVar6,uVar17,*(undefined8 *)(*plVar6 + 0x2a0));
            if ((uVar5 & 1) == 0) goto LAB_017c0ca4;
            plVar6 = *(long **)(unaff_x19 + 0x20);
LAB_017c0d58:
            plVar7 = (long *)FUN_01219524(*(undefined8 *)PTR_DAT_02ac3f08,2);
            uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_011ea084(*(long *)puVar13);
            }
            lVar15 = FUN_022bb958(uVar17,0);
            if (plVar7 == (long *)0x0) goto LAB_017c168c;
            if ((lVar15 != 0) &&
               (lVar9 = thunk_FUN_01268d44(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
            goto LAB_017c174c;
            if ((int)plVar7[3] == 0) goto LAB_017c1748;
            plVar7[4] = lVar15;
            plVar8 = (long *)FUN_022bb958(*(undefined8 *)(*unaff_x27 + 0x18),0);
            if (plVar8 == (long *)0x0) goto LAB_017c168c;
            uVar17 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
            lVar15 = FUN_0177ba74(uVar17,*(undefined8 *)PTR_DAT_02ac3e98);
            goto LAB_017c0df8;
          }
LAB_017c0ca4:
          uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_011ea084();
          }
          plVar6 = (long *)FUN_022bb958(uVar17,0);
          if (plVar6 == (long *)0x0) goto LAB_017c168c;
          uVar5 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
          if ((uVar5 & 1) != 0) {
            uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_011ea084();
            }
            plVar6 = (long *)FUN_022bb958(uVar17,0);
            if (plVar6 == (long *)0x0) goto LAB_017c168c;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440))
            ;
            uVar17 = FUN_022bb958(*(undefined8 *)PTR_DAT_02ac3ee0,0);
            if (plVar6 == (long *)0x0) goto LAB_017c168c;
            uVar5 = (**(code **)(*plVar6 + 0x298))(plVar6,uVar17,*(undefined8 *)(*plVar6 + 0x2a0));
            if ((uVar5 & 1) != 0) {
              plVar6 = *(long **)(unaff_x19 + 0x28);
              goto LAB_017c0d58;
            }
          }
          uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_011ea084();
          }
          plVar6 = (long *)FUN_022bb958(uVar17,0);
          if (plVar6 == (long *)0x0) goto LAB_017c168c;
          uVar5 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
          if ((uVar5 & 1) == 0) {
LAB_017c10cc:
            uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_011ea084();
            }
            plVar6 = (long *)FUN_022bb958(uVar17,0);
            if (plVar6 == (long *)0x0) goto LAB_017c168c;
            uVar5 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
            lVar15 = *unaff_x27;
            if ((uVar5 & 1) == 0) {
LAB_017c1238:
              if ((*(byte *)(*(long *)(lVar15 + 0x28) + 0x135) & 1) == 0) {
                FUN_0125944c();
              }
              lVar15 = thunk_FUN_01268e40();
              (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
              uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
              if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                thunk_FUN_011ea084();
              }
              uVar17 = FUN_022bb958(uVar17,0);
              plVar6 = (long *)FUN_027a00dc(uVar17,0);
              if (plVar6 != (long *)0x0) {
                lVar9 = *plVar6;
                uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar5 != 0) {
                  piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_02ac3ec8) {
                      puVar11 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_017c12e8;
                    }
                    uVar5 = uVar5 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar5 != 0);
                }
                puVar11 = (undefined8 *)FUN_01259550(plVar6,*(long *)PTR_DAT_02ac3ec8,0);
LAB_017c12e8:
                plVar6 = (long *)(*(code *)*puVar11)(plVar6,puVar11[1]);
                puVar3 = PTR_DAT_02ab7d90;
                puVar2 = PTR_DAT_02ab7a38;
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012196d8();
                }
                do {
                  lVar9 = *plVar6;
                  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar5 != 0) {
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                        puVar11 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_017c135c;
                      }
                      uVar5 = uVar5 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_01259550(plVar6,*(long *)puVar3,0);
LAB_017c135c:
                  uVar5 = (*(code *)*puVar11)(plVar6,puVar11[1]);
                  if ((uVar5 & 1) == 0) {
                    if (plVar6 == (long *)0x0) {
                      return lVar15;
                    }
                    lVar9 = *plVar6;
                    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar5 == 0) goto LAB_017c1658;
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    goto 
                    System_Array__InternalArray__Insert<StylePropertyAnimationSystem_Values_EmptyData<Color>>
                    ;
                  }
                  lVar9 = *plVar6;
                  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar5 != 0) {
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_02ac3ed0) {
                        puVar11 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_017c13c0;
                      }
                      uVar5 = uVar5 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_01259550(plVar6,*(long *)PTR_DAT_02ac3ed0,0);
LAB_017c13c0:
                  plVar7 = (long *)(*(code *)*puVar11)(plVar6,puVar11[1]);
                  if (plVar7 == (long *)0x0) {
LAB_017c1690:
                    thunk_FUN_011f4b58(PTR_DAT_02ac3708);
                    uVar17 = thunk_FUN_01268e40();
                    FUN_022ad310(uVar17,0);
                    /* WARNING: Subroutine does not return */
                    FUN_012195a4(uVar17,unaff_x20);
                  }
                  lVar9 = *plVar7;
                  bVar1 = *(byte *)(*(long *)PTR_DAT_02ac3ea8 + 0x130);
                  if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_02ac3ea8)) {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_02ac3ef8 + 0x130);
                    if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_02ac3ef8)) goto LAB_017c1690;
                    in_stack_00000018 = plVar7;
                    plVar7 = (long *)thunk_FUN_01268a94(*(undefined8 *)PTR_DAT_02ac3f00,
                                                        &stack0x00000018);
                  }
                  else {
                    in_stack_00000018 = (long *)0x0;
                    FUN_0279c774(&stack0x00000018,plVar7,0);
                    in_stack_00000010 = in_stack_00000018;
                    plVar7 = (long *)thunk_FUN_01268a94(*(undefined8 *)PTR_DAT_02ac3eb0,
                                                        &stack0x00000010);
                  }
                  plVar18 = *(long **)(unaff_x19 + 0x10);
                  plVar8 = (long *)FUN_01219524(*(undefined8 *)PTR_DAT_02ac3f08,2);
                  uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
                  if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                    thunk_FUN_011ea084();
                  }
                  lVar9 = FUN_022bb958(uVar17,0);
                  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012196d8();
                  }
                  if ((lVar9 != 0) &&
                     (lVar10 = thunk_FUN_01268d44(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar10 == 0)) {
                    uVar17 = thunk_FUN_01214298();
                    /* WARNING: Subroutine does not return */
                    FUN_012195a4(uVar17,0);
                  }
                  if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012196e0();
                  }
                  plVar8[4] = lVar9;
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012196d8();
                  }
                  lVar9 = *plVar7;
                  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar5 != 0) {
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_02ac3e80) {
                        puVar11 = (undefined8 *)(lVar9 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                        goto LAB_017c1518;
                      }
                      uVar5 = uVar5 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_01259550(plVar7,*(long *)PTR_DAT_02ac3e80,2);
LAB_017c1518:
                  lVar9 = (*(code *)*puVar11)(plVar7,puVar11[1]);
                  if ((lVar9 != 0) &&
                     (lVar10 = thunk_FUN_01268d44(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar10 == 0)) {
                    uVar17 = thunk_FUN_01214298();
                    /* WARNING: Subroutine does not return */
                    FUN_012195a4(uVar17,0);
                  }
                  if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                    FUN_012196e0();
                  }
                  plVar8[5] = lVar9;
                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012196d8();
                  }
                  lVar9 = (**(code **)(*plVar18 + 0x3c8))
                                    (plVar18,plVar8,*(undefined8 *)(*plVar18 + 0x3d0));
                  plVar8 = (long *)FUN_01219524(*(undefined8 *)puVar2,2);
                  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012196d8();
                  }
                  lVar10 = thunk_FUN_01268d44(plVar7,*(undefined8 *)(*plVar8 + 0x40));
                  if (lVar10 == 0) {
                    uVar17 = thunk_FUN_01214298();
                    /* WARNING: Subroutine does not return */
                    FUN_012195a4(uVar17,0);
                  }
                  uVar14 = *(uint *)(plVar8 + 3);
                  if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012196e0();
                  }
                  plVar8[4] = (long)plVar7;
                  if (lVar15 != 0) {
                    lVar10 = thunk_FUN_01268d44(lVar15,*(undefined8 *)(*plVar8 + 0x40));
                    if (lVar10 == 0) {
                      uVar17 = thunk_FUN_01214298();
                    /* WARNING: Subroutine does not return */
                      FUN_012195a4(uVar17,0);
                    }
                    uVar14 = *(uint *)(plVar8 + 3);
                  }
                  if (uVar14 < 2) {
                    /* WARNING: Subroutine does not return */
                    FUN_012196e0();
                  }
                  plVar8[5] = lVar15;
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012196d8();
                  }
                  FUN_021f9370(lVar9);
                } while( true );
              }
              goto LAB_017c168c;
            }
            uVar17 = *(undefined8 *)(lVar15 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_011ea084();
            }
            plVar6 = (long *)FUN_022bb958(uVar17,0);
            if (plVar6 == (long *)0x0) goto LAB_017c168c;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440))
            ;
            uVar17 = FUN_022bb958(*(undefined8 *)PTR_DAT_02ac3ee8,0);
            if (plVar6 == (long *)0x0) goto LAB_017c168c;
            uVar5 = (**(code **)(*plVar6 + 0x298))(plVar6,uVar17,*(undefined8 *)(*plVar6 + 0x2a0));
            lVar15 = *unaff_x27;
            if ((uVar5 & 1) == 0) goto LAB_017c1238;
            uVar17 = *(undefined8 *)(lVar15 + 0x18);
            if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
              thunk_FUN_011ea084();
            }
            plVar6 = (long *)FUN_022bb958(uVar17,0);
            if (plVar6 == (long *)0x0) goto LAB_017c168c;
            uVar17 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
            lVar15 = FUN_01785ab4(uVar17,*(undefined8 *)PTR_DAT_02ac3ea0);
            plVar6 = *(long **)(unaff_x19 + 0x38);
            plVar7 = (long *)FUN_01219524(*(undefined8 *)PTR_DAT_02ac3f08,2);
            if (lVar15 == 0) goto LAB_017c168c;
            if (*(int *)(lVar15 + 0x18) == 0) goto LAB_017c1748;
            if (plVar7 == (long *)0x0) goto LAB_017c168c;
            lVar9 = *(long *)(lVar15 + 0x20);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01268d44(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
            goto LAB_017c174c;
            uVar14 = *(uint *)(plVar7 + 3);
            if ((uVar14 == 0) || (plVar7[4] = lVar9, *(uint *)(lVar15 + 0x18) < 2))
            goto LAB_017c1748;
            lVar15 = *(long *)(lVar15 + 0x28);
            if (lVar15 != 0) goto LAB_017c0e00;
            goto LAB_017c0e18;
          }
          uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_011ea084();
          }
          plVar6 = (long *)FUN_022bb958(uVar17,0);
          if (plVar6 == (long *)0x0) goto LAB_017c168c;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
          uVar17 = FUN_022bb958(*(undefined8 *)PTR_DAT_02ac3ec0,0);
          if (plVar6 == (long *)0x0) goto LAB_017c168c;
          uVar5 = (**(code **)(*plVar6 + 0x298))(plVar6,uVar17,*(undefined8 *)(*plVar6 + 0x2a0));
          if ((uVar5 & 1) == 0) goto LAB_017c10cc;
          plVar6 = *(long **)(unaff_x19 + 0x30);
          plVar7 = (long *)FUN_01219524(*(undefined8 *)PTR_DAT_02ac3f08,3);
          uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_011ea084(*(long *)puVar13);
          }
          lVar15 = FUN_022bb958(uVar17,0);
          if (plVar7 == (long *)0x0) goto LAB_017c168c;
          if ((lVar15 != 0) &&
             (lVar9 = thunk_FUN_01268d44(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_017c174c;
          if ((int)plVar7[3] == 0) goto LAB_017c1748;
          plVar7[4] = lVar15;
          plVar8 = (long *)FUN_022bb958(*(undefined8 *)(*unaff_x27 + 0x18),0);
          if (plVar8 == (long *)0x0) goto LAB_017c168c;
          uVar17 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
          lVar15 = FUN_0177ba74(uVar17,*(undefined8 *)PTR_DAT_02ac3e98);
          if ((lVar15 != 0) &&
             (lVar9 = thunk_FUN_01268d44(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_017c174c;
          if (*(uint *)(plVar7 + 3) < 2) goto LAB_017c1748;
          plVar7[5] = lVar15;
          plVar8 = (long *)FUN_022bb958(*(undefined8 *)(*unaff_x27 + 0x18),0);
          if (plVar8 == (long *)0x0) goto LAB_017c168c;
          uVar17 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
          lVar15 = FUN_0177a340(uVar17,1,*(undefined8 *)PTR_DAT_02ac3e90);
          if ((lVar15 != 0) &&
             (lVar9 = thunk_FUN_01268d44(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_017c174c;
          if (*(uint *)(plVar7 + 3) < 3) goto LAB_017c1748;
          plVar7[6] = lVar15;
        }
        else {
          uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_011ea084();
          }
          plVar6 = (long *)FUN_022bb958(uVar17,0);
          if (plVar6 == (long *)0x0) goto LAB_017c168c;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
          uVar17 = FUN_022bb958(*(undefined8 *)PTR_DAT_02ac3e88,0);
          if (plVar6 == (long *)0x0) goto LAB_017c168c;
          uVar5 = (**(code **)(*plVar6 + 0x298))(plVar6,uVar17,*(undefined8 *)(*plVar6 + 0x2a0));
          if ((uVar5 & 1) == 0) goto LAB_017c0bec;
          plVar6 = *(long **)(unaff_x19 + 0x58);
          plVar7 = (long *)FUN_01219524(*(undefined8 *)PTR_DAT_02ac3f08,2);
          uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_011ea084(*(long *)puVar13);
          }
          plVar8 = (long *)FUN_022bb958(uVar17,0);
          if (plVar8 == (long *)0x0) goto LAB_017c168c;
          uVar17 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
          lVar15 = FUN_0177ba74(uVar17,*(undefined8 *)PTR_DAT_02ac3e98);
          if (plVar7 == (long *)0x0) goto LAB_017c168c;
          if ((lVar15 != 0) &&
             (lVar9 = thunk_FUN_01268d44(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_017c174c;
          if ((int)plVar7[3] == 0) goto LAB_017c1748;
          plVar7[4] = lVar15;
          plVar8 = (long *)FUN_022bb958(*(undefined8 *)(*unaff_x27 + 0x18),0);
          if (plVar8 == (long *)0x0) goto LAB_017c168c;
          uVar17 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
          lVar15 = FUN_0177a340(uVar17,1,*(undefined8 *)PTR_DAT_02ac3e90);
LAB_017c0df8:
          if (lVar15 != 0) {
LAB_017c0e00:
            lVar9 = thunk_FUN_01268d44(lVar15,*(undefined8 *)(*plVar7 + 0x40));
            if (lVar9 == 0) goto LAB_017c174c;
          }
          uVar14 = *(uint *)(plVar7 + 3);
LAB_017c0e18:
          if (uVar14 < 2) goto LAB_017c1748;
          plVar7[5] = lVar15;
        }
      }
      else {
        iVar4 = (**(code **)(lVar15 + 0x428))(plVar6,*(undefined8 *)(lVar15 + 0x430));
        if (iVar4 != 1) {
          thunk_FUN_011f4b58(PTR_DAT_02ac3708);
          uVar17 = thunk_FUN_01268e40();
          puVar13 = PTR_DAT_02ac3f18;
          goto LAB_017c1704;
        }
        plVar6 = *(long **)(unaff_x19 + 0x40);
        plVar7 = (long *)FUN_01219524(*(undefined8 *)PTR_DAT_02ac3f08,1);
        uVar17 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_011ea084(*(long *)puVar13);
        }
        plVar8 = (long *)FUN_022bb958(uVar17,0);
        if (plVar8 == (long *)0x0) goto LAB_017c168c;
        lVar15 = (**(code **)(*plVar8 + 0x418))(plVar8,*(undefined8 *)(*plVar8 + 0x420));
joined_r0x017c0a38:
        if (plVar7 == (long *)0x0) goto LAB_017c168c;
        if ((lVar15 != 0) &&
           (lVar9 = thunk_FUN_01268d44(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_017c174c:
          uVar17 = thunk_FUN_01214298();
                    /* WARNING: Subroutine does not return */
          FUN_012195a4(uVar17,0);
        }
        if ((int)plVar7[3] == 0) {
LAB_017c1748:
                    /* WARNING: Subroutine does not return */
          FUN_012196e0();
        }
        plVar7[4] = lVar15;
      }
      if (plVar6 != (long *)0x0) {
        lVar15 = (**(code **)(*plVar6 + 0x3c8))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x3d0));
        FUN_01219524(*(undefined8 *)PTR_DAT_02ab7a38,0);
        if (lVar15 != 0) {
          lVar15 = FUN_021f9370(lVar15);
          lVar9 = *(long *)(*unaff_x27 + 0x20);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_0125944c(lVar9);
          }
          if (lVar15 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = thunk_FUN_01268d44(lVar15,lVar9);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01219998(lVar15,lVar9);
            }
          }
          return lVar10;
        }
      }
LAB_017c168c:
                    /* WARNING: Subroutine does not return */
      FUN_012196d8();
    }
  }
  thunk_FUN_011f4b58(PTR_DAT_02ac3708);
  uVar17 = thunk_FUN_01268e40();
  puVar13 = PTR_DAT_02ac3f10;
LAB_017c1704:
  uVar12 = thunk_FUN_011f4b58(puVar13);
  FUN_022ad36c(uVar17,uVar12,0);
                    /* WARNING: Subroutine does not return */
  FUN_012195a4(uVar17);
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar16 = piVar16 + 4;
    if (uVar5 == 0) break;
System_Array__InternalArray__Insert<StylePropertyAnimationSystem_Values_EmptyData<Color>>:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_02ab7b38) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_017c1674;
    }
  }
LAB_017c1658:
  puVar11 = (undefined8 *)FUN_01259550(plVar6,*(long *)PTR_DAT_02ab7b38,0);
LAB_017c1674:
  (*(code *)*puVar11)(plVar6,puVar11[1]);
  return lVar15;
}


