/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 036d6860
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036d770c) */
/* WARNING: Removing unreachable block (ram,0x036d6ef8) */
/* WARNING: Removing unreachable block (ram,0x036d7b00) */
/* WARNING: Removing unreachable block (ram,0x036d7acc) */
/* WARNING: Removing unreachable block (ram,0x036d7af4) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetEnumerator
               (long param_1,long param_2,long param_3,long *param_4,long param_5,int param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  
  if ((DAT_0723993b & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e636c0);
    thunk_FUN_0159f088(PTR_DAT_06e1d6c8);
    thunk_FUN_0159f088(PTR_DAT_06ddc938);
    thunk_FUN_0159f088(PTR_DAT_06db5030);
    thunk_FUN_0159f088(PTR_DAT_06e1fa28);
    thunk_FUN_0159f088(PTR_DAT_06e2c7d8);
    thunk_FUN_0159f088(PTR_DAT_06dd0a58);
    thunk_FUN_0159f088(PTR_DAT_06e32e28);
    thunk_FUN_0159f088(PTR_DAT_06de41e8);
    thunk_FUN_0159f088(PTR_DAT_06ded118);
    thunk_FUN_0159f088(PTR_DAT_06deec08);
    thunk_FUN_0159f088(PTR_DAT_06e0bd50);
    thunk_FUN_0159f088(PTR_DAT_06dba918);
    thunk_FUN_0159f088(PTR_DAT_06df29d0);
    thunk_FUN_0159f088(PTR_DAT_06e64bf0);
    thunk_FUN_0159f088(PTR_DAT_06ddfb20);
    thunk_FUN_0159f088(PTR_DAT_06dbee20);
    DAT_0723993b = 1;
  }
  puVar4 = PTR_DAT_06ddc938;
  if (param_2 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = *(long *)(param_2 + 0xd8);
  }
  if (param_4 != (long *)0x0) {
    iVar8 = FUN_03f054bc(param_4,0);
    puVar2 = PTR_DAT_06dd0a58;
    if (0 < iVar8) {
      iVar8 = 0;
      do {
        plVar10 = (long *)(**(code **)(*param_4 + 0x308))
                                    (param_4,iVar8,*(undefined8 *)(*param_4 + 0x310));
        if (plVar10 == (long *)0x0) {
LAB_036d69fc:
          plVar10 = (long *)(**(code **)(*param_4 + 0x308))
                                      (param_4,iVar8,*(undefined8 *)(*param_4 + 0x310));
          if (plVar10 == (long *)0x0) goto thunk_FUN_0160eeb4;
          bVar1 = *(byte *)(*(long *)PTR_DAT_06db5030 + 300);
          if ((*(byte *)(*plVar10 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_06db5030)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plVar10);
          }
          if (*(long *)(param_1 + 0x50) == 0) goto thunk_FUN_0160eeb4;
          plVar11 = (long *)FUN_03fbac38(*(long *)(param_1 + 0x50),plVar10[10],0);
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)plVar10[10];
            if (plVar11 == (long *)0x0) goto thunk_FUN_0160eeb4;
            uVar16 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
            FUN_01fbaf30(param_1,*(undefined8 *)PTR_DAT_06ddfb20,uVar16,plVar10,0);
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_06e1fa28 + 300);
            if ((*(byte *)(*plVar11 + 300) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_06e1fa28)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plVar11);
            }
            FUN_036cf09c(param_1,plVar11);
            lVar12 = FUN_036f0df8(plVar11,0);
            if ((lVar12 == 0) || (plVar13 = (long *)FUN_03fbacb0(lVar12,0), plVar13 == (long *)0x0))
            goto thunk_FUN_0160eeb4;
            lVar12 = *plVar13;
            uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_06e1d6c8) {
                  puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_036d6b5c;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar14 = (undefined8 *)FUN_015c2a80(plVar13,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d6b5c:
            plVar13 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
LAB_036d6b70:
            lVar12 = *plVar13;
            uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                  puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_036d6bbc;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar14 = (undefined8 *)FUN_015c2a80(plVar13,*(long *)puVar4,0);
LAB_036d6bbc:
            uVar19 = (*(code *)*puVar14)(plVar13,puVar14[1]);
            if ((uVar19 & 1) != 0) {
              lVar12 = *plVar13;
              uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                    puVar14 = (undefined8 *)(lVar12 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_036d6c1c;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar14 = (undefined8 *)FUN_015c2a80(plVar13,*(long *)puVar4,1);
LAB_036d6c1c:
              plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
              if ((*(byte *)(*plVar15 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
                FUN_0160f170(plVar15);
              }
              if (*(int *)((long)plVar15 + 0x6c) == 2) {
                if (param_6 == 4) {
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                  }
                  if (DAT_0722c1cb == '\0') {
                    thunk_FUN_0159f088(puVar2);
                    DAT_0722c1cb = '\x01';
                  }
                  lVar12 = *(long *)puVar2;
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                    lVar12 = *(long *)puVar2;
                  }
                  if (**(long **)(lVar12 + 0xb8) != param_2) goto LAB_036d6ccc;
                }
                plVar17 = (long *)plVar15[0x10];
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0160eeb4();
                }
                uVar16 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
                FUN_01fbb4d8(param_1,*(undefined8 *)PTR_DAT_06e32e28,uVar16,plVar15,1,0);
              }
              else {
LAB_036d6ccc:
                if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0160eeb4();
                }
                lVar12 = FUN_036f2d10(param_3,0);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0160eeb4();
                }
                lVar12 = FUN_03fbac38(lVar12,plVar15[0x10],0);
                if (lVar12 == 0) {
                  lVar12 = FUN_036f2d10(param_3,0);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0160eeb4();
                  }
                  FUN_03fba610(lVar12,plVar15[0x10],plVar15,0);
                }
                else {
                  plVar15 = (long *)plVar15[0x10];
                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0160eeb4();
                  }
                  uVar16 = (**(code **)(*plVar15 + 0x168))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x170));
                  FUN_01fbaf30(param_1,*(undefined8 *)PTR_DAT_06deec08,uVar16,plVar10,0);
                }
              }
              goto LAB_036d6b70;
            }
            plVar10 = (long *)thunk_FUN_015d0480(plVar13,*(undefined8 *)PTR_DAT_06e636c0);
            if (plVar10 != (long *)0x0) {
              lVar12 = *plVar10;
              uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_06e636c0) {
                    puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_036d6ee0;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar14 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)PTR_DAT_06e636c0,0);
LAB_036d6ee0:
              (*(code *)*puVar14)(plVar10,puVar14[1]);
            }
            param_5 = FUN_036dd3f4(param_1,param_5,plVar11[0x10]);
          }
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
          if ((*(byte *)(*plVar10 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_06e2c7d8)) goto LAB_036d69fc;
          if ((*(int *)((long)plVar10 + 0x6c) == 2) ||
             (FUN_036d1e44(param_1,plVar10), *(int *)((long)plVar10 + 0x6c) == 2)) {
            if (param_6 == 4) {
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              if (DAT_0722c1cb == '\0') {
                thunk_FUN_0159f088(puVar2);
                DAT_0722c1cb = '\x01';
              }
              lVar12 = *(long *)puVar2;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar12 = *(long *)puVar2;
              }
              if (**(long **)(lVar12 + 0xb8) != param_2) goto LAB_036d6e78;
            }
            plVar11 = (long *)plVar10[0x10];
            if (plVar11 == (long *)0x0) goto thunk_FUN_0160eeb4;
            uVar16 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
            FUN_01fbb4d8(param_1,*(undefined8 *)PTR_DAT_06e32e28,uVar16,plVar10,1,0);
          }
          else {
LAB_036d6e78:
            if ((param_3 == 0) || (lVar12 = FUN_036f2d10(param_3,0), lVar12 == 0))
            goto thunk_FUN_0160eeb4;
            lVar12 = FUN_03fbac38(lVar12,plVar10[0x10],0);
            if (lVar12 == 0) {
              lVar12 = FUN_036f2d10(param_3,0);
              if (lVar12 == 0) goto thunk_FUN_0160eeb4;
              FUN_03fba610(lVar12,plVar10[0x10],plVar10,0);
            }
            else {
              plVar11 = (long *)plVar10[0x10];
              if (plVar11 == (long *)0x0) goto thunk_FUN_0160eeb4;
              uVar16 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
              FUN_01fbaf30(param_1,*(undefined8 *)PTR_DAT_06deec08,uVar16,plVar10,0);
            }
          }
        }
        iVar8 = iVar8 + 1;
        iVar9 = FUN_03f054bc(param_4,0);
      } while (iVar8 < iVar9);
    }
    if (param_2 == 0) {
      if (param_3 != 0) {
        *(long *)(param_3 + 0xd8) = param_5;
        thunk_FUN_01656ef8((long *)(param_3 + 0xd8),param_5);
        return;
      }
    }
    else if (param_6 == 2) {
      uVar16 = FUN_036dd488(param_1,param_5,lVar18);
      if (param_3 != 0) {
        *(undefined8 *)(param_3 + 0xd8) = uVar16;
        thunk_FUN_01656ef8();
        lVar18 = FUN_036f2d10(param_2,0);
        if ((lVar18 != 0) &&
           (plVar10 = (long *)FUN_03fbacb0(lVar18,0), puVar2 = PTR_DAT_06e636c0,
           plVar10 != (long *)0x0)) {
          lVar18 = *plVar10;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_06e1d6c8) {
                puVar14 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_036d70f4;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar14 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d70f4:
          plVar10 = (long *)(*(code *)*puVar14)(plVar10,puVar14[1]);
          puVar3 = PTR_DAT_06e64bf0;
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          do {
            lVar18 = *plVar10;
            uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                  puVar14 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_036d715c;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar14 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)puVar4,0);
LAB_036d715c:
            uVar19 = (*(code *)*puVar14)(plVar10,puVar14[1]);
            if ((uVar19 & 1) == 0) {
              plVar10 = (long *)thunk_FUN_015d0480(plVar10,*(undefined8 *)puVar2);
              if (plVar10 == (long *)0x0) {
                return;
              }
              lVar12 = *plVar10;
              lVar18 = *(long *)puVar2;
              uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar19 == 0) goto LAB_036d7300;
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              goto LAB_036d72e8;
            }
            lVar18 = *plVar10;
            uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                  puVar14 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_036d71bc;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar14 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)puVar4,1);
LAB_036d71bc:
            plVar11 = (long *)(*(code *)*puVar14)(plVar10,puVar14[1]);
            if (plVar11 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
              if ((*(byte *)(*plVar11 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
                FUN_0160f170(plVar11);
              }
            }
            lVar18 = FUN_036f2d10(param_3,0);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            plVar13 = (long *)FUN_03fbac38(lVar18,plVar11[0x10],0);
            if (plVar13 == (long *)0x0) {
              lVar18 = FUN_036f2d10(param_3,0);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              FUN_03fba610(lVar18,plVar11[0x10],plVar11,0);
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
              if ((*(byte *)(*plVar13 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
                FUN_0160f170(plVar13);
              }
              if ((*(int *)((long)plVar11 + 0x6c) != 2) && (plVar13[0x12] != plVar11[0x12])) {
                FUN_01fbafc0(param_1,*(undefined8 *)puVar3,plVar13,0);
              }
            }
          } while( true );
        }
      }
    }
    else {
      if ((param_5 == 0) ||
         (((lVar18 != 0 && (uVar19 = FUN_036f0858(param_5,lVar18,0), (uVar19 & 1) != 0)) &&
          (uVar19 = FUN_036dd51c(uVar19,param_2,param_5,lVar18), (uVar19 & 1) != 0)))) {
        if (param_3 == 0) goto thunk_FUN_0160eeb4;
        *(long *)(param_3 + 0xd8) = param_5;
        thunk_FUN_01656ef8((long *)(param_3 + 0xd8),param_5);
      }
      else {
        FUN_01fbafc0(param_1,*(undefined8 *)PTR_DAT_06de41e8,param_3,0);
      }
      lVar12 = FUN_036f2d10(param_2,0);
      if ((lVar12 != 0) && (plVar10 = (long *)FUN_03fbacb0(lVar12,0), plVar10 != (long *)0x0)) {
        lVar12 = *plVar10;
        uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_06e1d6c8) {
              puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_036d7410;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar14 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d7410:
        plVar10 = (long *)(*(code *)*puVar14)(plVar10,puVar14[1]);
        puVar6 = PTR_DAT_06e0bd50;
        puVar5 = PTR_DAT_06df29d0;
        puVar3 = PTR_DAT_06dbee20;
        puVar2 = PTR_DAT_06dba918;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        do {
          lVar12 = *plVar10;
          uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_036d7490;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar14 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)puVar4,0);
LAB_036d7490:
          uVar19 = (*(code *)*puVar14)(plVar10,puVar14[1]);
          puVar7 = PTR_DAT_06e636c0;
          if ((uVar19 & 1) == 0) {
            plVar10 = (long *)thunk_FUN_015d0480(plVar10,*(undefined8 *)PTR_DAT_06e636c0);
            if (plVar10 == (long *)0x0) goto LAB_036d7700;
            lVar12 = *plVar10;
            uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar19 == 0) goto LAB_036d76d8;
            piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_036d76c0;
          }
          lVar12 = *plVar10;
          uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                puVar14 = (undefined8 *)(lVar12 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_036d74f0;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar14 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)puVar4,1);
LAB_036d74f0:
          plVar11 = (long *)(*(code *)*puVar14)(plVar10,puVar14[1]);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
            if ((*(byte *)(*plVar11 + 300) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plVar11);
            }
          }
          if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar12 = FUN_036f2d10(param_3,0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          plVar13 = (long *)FUN_03fbac38(lVar12,plVar11[0x10],0);
          if (plVar13 == (long *)0x0) {
            lVar12 = FUN_036f2d10(param_3,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            FUN_03fba610(lVar12,plVar11[0x10],plVar11,0);
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
            if ((*(byte *)(*plVar13 + 300) < bVar1) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plVar13);
            }
            if (*(int *)((long)plVar11 + 0x6c) == 3) {
              if (*(int *)((long)plVar13 + 0x6c) == 3) goto LAB_036d7624;
              FUN_01fbafc0(param_1,*(undefined8 *)puVar3,plVar13,0);
            }
            else if (*(int *)((long)plVar11 + 0x6c) == 2) {
              if (*(int *)((long)plVar13 + 0x6c) != 2) {
                FUN_01fbafc0(param_1,*(undefined8 *)puVar5,plVar13,0);
              }
            }
            else if (*(int *)((long)plVar13 + 0x6c) != 2) {
LAB_036d7624:
              if (((plVar11[0x12] == 0) || (plVar13[0x12] == 0)) ||
                 (uVar19 = FUN_03fc5448(plVar13[0x12],plVar11[0x12],0,0), (uVar19 & 1) == 0)) {
                FUN_01fbafc0(param_1,*(undefined8 *)puVar2,plVar13,0);
              }
              else {
                uVar19 = FUN_036dc9b0(uVar19,plVar11[0x13],plVar13[0x13]);
                if ((uVar19 & 1) == 0) {
                  FUN_01fbafc0(param_1,*(undefined8 *)puVar6,plVar13,0);
                }
              }
            }
          }
        } while( true );
      }
    }
  }
  goto thunk_FUN_0160eeb4;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_036d72e8:
    if (*(long *)(piVar20 + -2) == lVar18) {
      puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_036d731c;
    }
  }
LAB_036d7300:
  puVar14 = (undefined8 *)FUN_015c2a80(plVar10,lVar18,0);
LAB_036d731c:
  (*(code *)*puVar14)(plVar10,puVar14[1]);
  return;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_036d7964:
    if (*(long *)(piVar20 + -2) == lVar18) {
      puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_036d7998;
    }
  }
LAB_036d797c:
  puVar14 = (undefined8 *)FUN_015c2a80(plVar10,lVar18,0);
LAB_036d7998:
  (*(code *)*puVar14)(plVar10,puVar14[1]);
  return;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_036d76c0:
    if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
      puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_036d76f4;
    }
  }
LAB_036d76d8:
  puVar14 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)puVar7,0);
LAB_036d76f4:
  (*(code *)*puVar14)(plVar10,puVar14[1]);
LAB_036d7700:
  if (((param_3 != 0) && (lVar12 = FUN_036f2d10(param_3,0), lVar12 != 0)) &&
     (plVar10 = (long *)FUN_03fbacb0(lVar12,0), puVar2 = PTR_DAT_06e636c0, plVar10 != (long *)0x0))
  {
    lVar12 = *plVar10;
    uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_06e1d6c8) {
          puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_036d7794;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar14 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d7794:
    plVar10 = (long *)(*(code *)*puVar14)(plVar10,puVar14[1]);
    puVar3 = PTR_DAT_06ded118;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    do {
      lVar12 = *plVar10;
      uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
            puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_036d77fc;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar14 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)puVar4,0);
LAB_036d77fc:
      uVar19 = (*(code *)*puVar14)(plVar10,puVar14[1]);
      if ((uVar19 & 1) == 0) {
        plVar10 = (long *)thunk_FUN_015d0480(plVar10,*(undefined8 *)puVar2);
        if (plVar10 == (long *)0x0) {
          return;
        }
        lVar12 = *plVar10;
        lVar18 = *(long *)puVar2;
        uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar19 == 0) goto LAB_036d797c;
        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_036d7964;
      }
      lVar12 = *plVar10;
      uVar19 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
            puVar14 = (undefined8 *)(lVar12 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_036d785c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar14 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)puVar4,1);
LAB_036d785c:
      plVar11 = (long *)(*(code *)*puVar14)(plVar10,puVar14[1]);
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
        if ((*(byte *)(*plVar11 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plVar11);
        }
      }
      lVar12 = FUN_036f2d10(param_2,0);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      plVar13 = (long *)FUN_03fbac38(lVar12,plVar11[0x10],0);
      if (plVar13 == (long *)0x0) {
        if ((lVar18 == 0) || (uVar19 = FUN_036f0830(lVar18,plVar11[0x10],0), (uVar19 & 1) == 0)) {
          FUN_01fbafc0(param_1,*(undefined8 *)puVar3,plVar11,0);
        }
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
        if ((*(byte *)(*plVar13 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170();
        }
      }
    } while( true );
  }
thunk_FUN_0160eeb4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


