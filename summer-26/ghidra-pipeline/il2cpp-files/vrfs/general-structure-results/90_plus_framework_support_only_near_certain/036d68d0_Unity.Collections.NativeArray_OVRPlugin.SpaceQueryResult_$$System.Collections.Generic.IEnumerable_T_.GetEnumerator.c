/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 036d68d0
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

void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  int unaff_w24;
  long unaff_x25;
  long *unaff_x28;
  long unaff_x29;
  
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
  *(undefined1 *)(unaff_x20 + 0x93b) = 1;
  puVar3 = PTR_DAT_06ddc938;
  if (unaff_x25 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(unaff_x25 + 0xd8);
  }
  if (unaff_x28 != (long *)0x0) {
    iVar4 = FUN_03f054bc();
    puVar2 = PTR_DAT_06dd0a58;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        plVar6 = (long *)(**(code **)(*unaff_x28 + 0x308))
                                   (unaff_x28,iVar4,*(undefined8 *)(*unaff_x28 + 0x310));
        if (plVar6 == (long *)0x0) {
LAB_036d69fc:
          plVar6 = (long *)(**(code **)(*unaff_x28 + 0x308))
                                     (unaff_x28,iVar4,*(undefined8 *)(*unaff_x28 + 0x310));
          if (plVar6 == (long *)0x0) goto thunk_FUN_0160eeb4;
          bVar1 = *(byte *)(*(long *)PTR_DAT_06db5030 + 300);
          if ((*(byte *)(*plVar6 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_06db5030)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plVar6);
          }
          if (*(long *)(unaff_x22 + 0x50) == 0) goto thunk_FUN_0160eeb4;
          plVar7 = (long *)FUN_03fbac38(*(long *)(unaff_x22 + 0x50),plVar6[10],0);
          if (plVar7 == (long *)0x0) {
            plVar6 = (long *)plVar6[10];
            if (plVar6 == (long *)0x0) goto thunk_FUN_0160eeb4;
            (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            FUN_01fbaf30();
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_06e1fa28 + 300);
            if ((*(byte *)(*plVar7 + 300) < bVar1) ||
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_06e1fa28)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plVar7);
            }
            FUN_036cf09c();
            lVar8 = FUN_036f0df8(plVar7,0);
            if ((lVar8 == 0) || (plVar6 = (long *)FUN_03fbacb0(lVar8,0), plVar6 == (long *)0x0))
            goto thunk_FUN_0160eeb4;
            lVar8 = *plVar6;
            uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06e1d6c8) {
                  puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_036d6b5c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d6b5c:
            plVar6 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
LAB_036d6b70:
            lVar8 = *plVar6;
            uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_036d6bbc;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar3,0);
LAB_036d6bbc:
            uVar13 = (*(code *)*puVar9)(plVar6,puVar9[1]);
            if ((uVar13 & 1) != 0) {
              lVar8 = *plVar6;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                    puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_036d6c1c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar3,1);
LAB_036d6c1c:
              plVar7 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
              if ((*(byte *)(*plVar7 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
                FUN_0160f170(plVar7);
              }
              if (*(int *)((long)plVar7 + 0x6c) == 2) {
                if (unaff_w24 == 4) {
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                  }
                  if (DAT_0722c1cb == '\0') {
                    thunk_FUN_0159f088(puVar2);
                    DAT_0722c1cb = '\x01';
                  }
                  lVar8 = *(long *)puVar2;
                  if (*(int *)(lVar8 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                    lVar8 = *(long *)puVar2;
                  }
                  if (**(long **)(lVar8 + 0xb8) != unaff_x25) goto LAB_036d6ccc;
                }
                plVar7 = (long *)plVar7[0x10];
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0160eeb4();
                }
                (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                FUN_01fbb4d8();
              }
              else {
LAB_036d6ccc:
                if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0160eeb4();
                }
                lVar8 = FUN_036f2d10();
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0160eeb4();
                }
                lVar8 = FUN_03fbac38(lVar8,plVar7[0x10],0);
                if (lVar8 == 0) {
                  lVar8 = FUN_036f2d10();
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0160eeb4();
                  }
                  FUN_03fba610(lVar8,plVar7[0x10],plVar7,0);
                }
                else {
                  plVar7 = (long *)plVar7[0x10];
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0160eeb4();
                  }
                  (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                  FUN_01fbaf30();
                }
              }
              goto LAB_036d6b70;
            }
            plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)PTR_DAT_06e636c0);
            if (plVar6 != (long *)0x0) {
              lVar8 = *plVar6;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06e636c0) {
                    puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_036d6ee0;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e636c0,0);
LAB_036d6ee0:
              (*(code *)*puVar9)(plVar6,puVar9[1]);
            }
            unaff_x29 = FUN_036dd3f4();
          }
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
          if ((*(byte *)(*plVar6 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_06e2c7d8)) goto LAB_036d69fc;
          if ((*(int *)((long)plVar6 + 0x6c) == 2) ||
             (FUN_036d1e44(), *(int *)((long)plVar6 + 0x6c) == 2)) {
            if (unaff_w24 == 4) {
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              if (DAT_0722c1cb == '\0') {
                thunk_FUN_0159f088(puVar2);
                DAT_0722c1cb = '\x01';
              }
              lVar8 = *(long *)puVar2;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar8 = *(long *)puVar2;
              }
              if (**(long **)(lVar8 + 0xb8) != unaff_x25) goto LAB_036d6e78;
            }
            plVar6 = (long *)plVar6[0x10];
            if (plVar6 == (long *)0x0) goto thunk_FUN_0160eeb4;
            (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            FUN_01fbb4d8();
          }
          else {
LAB_036d6e78:
            if ((unaff_x19 == 0) || (lVar8 = FUN_036f2d10(), lVar8 == 0)) goto thunk_FUN_0160eeb4;
            lVar8 = FUN_03fbac38(lVar8,plVar6[0x10],0);
            if (lVar8 == 0) {
              lVar8 = FUN_036f2d10();
              if (lVar8 == 0) goto thunk_FUN_0160eeb4;
              FUN_03fba610(lVar8,plVar6[0x10],plVar6,0);
            }
            else {
              plVar6 = (long *)plVar6[0x10];
              if (plVar6 == (long *)0x0) goto thunk_FUN_0160eeb4;
              (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
              FUN_01fbaf30();
            }
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = FUN_03f054bc(unaff_x28,0);
      } while (iVar4 < iVar5);
    }
    if (unaff_x25 == 0) {
      if (unaff_x19 != 0) {
        *(long *)(unaff_x19 + 0xd8) = unaff_x29;
        thunk_FUN_01656ef8((long *)(unaff_x19 + 0xd8),unaff_x29);
        return;
      }
    }
    else if (unaff_w24 == 2) {
      uVar10 = FUN_036dd488();
      if (unaff_x19 != 0) {
        *(undefined8 *)(unaff_x19 + 0xd8) = uVar10;
        thunk_FUN_01656ef8();
        lVar12 = FUN_036f2d10(unaff_x25,0);
        if ((lVar12 != 0) &&
           (plVar6 = (long *)FUN_03fbacb0(lVar12,0), puVar2 = PTR_DAT_06e636c0,
           plVar6 != (long *)0x0)) {
          lVar12 = *plVar6;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06e1d6c8) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_036d70f4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d70f4:
          plVar6 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          do {
            lVar12 = *plVar6;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_036d715c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar3,0);
LAB_036d715c:
            uVar13 = (*(code *)*puVar9)(plVar6,puVar9[1]);
            if ((uVar13 & 1) == 0) {
              plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)puVar2);
              if (plVar6 == (long *)0x0) {
                return;
              }
              lVar8 = *plVar6;
              lVar12 = *(long *)puVar2;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar13 == 0) goto LAB_036d7300;
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_036d72e8;
            }
            lVar12 = *plVar6;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_036d71bc;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar3,1);
LAB_036d71bc:
            plVar7 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
            if (plVar7 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
              if ((*(byte *)(*plVar7 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
                FUN_0160f170(plVar7);
              }
            }
            lVar12 = FUN_036f2d10();
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            plVar11 = (long *)FUN_03fbac38(lVar12,plVar7[0x10],0);
            if (plVar11 == (long *)0x0) {
              lVar12 = FUN_036f2d10();
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              FUN_03fba610(lVar12,plVar7[0x10],plVar7,0);
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
              if ((*(byte *)(*plVar11 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
                FUN_0160f170(plVar11);
              }
              if ((*(int *)((long)plVar7 + 0x6c) != 2) && (plVar11[0x12] != plVar7[0x12])) {
                FUN_01fbafc0();
              }
            }
          } while( true );
        }
      }
    }
    else {
      if ((unaff_x29 == 0) ||
         (((lVar12 != 0 && (uVar13 = FUN_036f0858(unaff_x29,lVar12,0), (uVar13 & 1) != 0)) &&
          (uVar13 = FUN_036dd51c(uVar13,unaff_x25,unaff_x29,lVar12), (uVar13 & 1) != 0)))) {
        if (unaff_x19 == 0) goto thunk_FUN_0160eeb4;
        *(long *)(unaff_x19 + 0xd8) = unaff_x29;
        thunk_FUN_01656ef8((long *)(unaff_x19 + 0xd8),unaff_x29);
      }
      else {
        FUN_01fbafc0();
      }
      lVar8 = FUN_036f2d10(unaff_x25,0);
      if ((lVar8 != 0) && (plVar6 = (long *)FUN_03fbacb0(lVar8,0), plVar6 != (long *)0x0)) {
        lVar8 = *plVar6;
        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06e1d6c8) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_036d7410;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d7410:
        plVar6 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        do {
          lVar8 = *plVar6;
          uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_036d7490;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar3,0);
LAB_036d7490:
          uVar13 = (*(code *)*puVar9)(plVar6,puVar9[1]);
          puVar2 = PTR_DAT_06e636c0;
          if ((uVar13 & 1) == 0) {
            plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)PTR_DAT_06e636c0);
            if (plVar6 == (long *)0x0) goto LAB_036d7700;
            lVar8 = *plVar6;
            uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar13 == 0) goto LAB_036d76d8;
            piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_036d76c0;
          }
          lVar8 = *plVar6;
          uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_036d74f0;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar3,1);
LAB_036d74f0:
          plVar7 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
          if (plVar7 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
            if ((*(byte *)(*plVar7 + 300) < bVar1) ||
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plVar7);
            }
          }
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar8 = FUN_036f2d10();
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          plVar11 = (long *)FUN_03fbac38(lVar8,plVar7[0x10],0);
          if (plVar11 == (long *)0x0) {
            lVar8 = FUN_036f2d10();
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            FUN_03fba610(lVar8,plVar7[0x10],plVar7,0);
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
            if ((*(byte *)(*plVar11 + 300) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plVar11);
            }
            if (*(int *)((long)plVar7 + 0x6c) == 3) {
              if (*(int *)((long)plVar11 + 0x6c) == 3) goto LAB_036d7624;
              FUN_01fbafc0();
            }
            else if (*(int *)((long)plVar7 + 0x6c) == 2) {
              if (*(int *)((long)plVar11 + 0x6c) != 2) {
                FUN_01fbafc0();
              }
            }
            else if (*(int *)((long)plVar11 + 0x6c) != 2) {
LAB_036d7624:
              if (((plVar7[0x12] == 0) || (plVar11[0x12] == 0)) ||
                 (uVar13 = FUN_03fc5448(plVar11[0x12],plVar7[0x12],0,0), (uVar13 & 1) == 0)) {
                FUN_01fbafc0();
              }
              else {
                uVar13 = FUN_036dc9b0(uVar13,plVar7[0x13],plVar11[0x13]);
                if ((uVar13 & 1) == 0) {
                  FUN_01fbafc0();
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
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_036d72e8:
    if (*(long *)(piVar14 + -2) == lVar12) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_036d731c;
    }
  }
LAB_036d7300:
  puVar9 = (undefined8 *)FUN_015c2a80(plVar6,lVar12,0);
LAB_036d731c:
  (*(code *)*puVar9)(plVar6,puVar9[1]);
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_036d7964:
    if (*(long *)(piVar14 + -2) == lVar12) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_036d7998;
    }
  }
LAB_036d797c:
  puVar9 = (undefined8 *)FUN_015c2a80(plVar6,lVar12,0);
LAB_036d7998:
  (*(code *)*puVar9)(plVar6,puVar9[1]);
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_036d76c0:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_036d76f4;
    }
  }
LAB_036d76d8:
  puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar2,0);
LAB_036d76f4:
  (*(code *)*puVar9)(plVar6,puVar9[1]);
LAB_036d7700:
  if (((unaff_x19 != 0) && (lVar8 = FUN_036f2d10(), lVar8 != 0)) &&
     (plVar6 = (long *)FUN_03fbacb0(lVar8,0), puVar2 = PTR_DAT_06e636c0, plVar6 != (long *)0x0)) {
    lVar8 = *plVar6;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06e1d6c8) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_036d7794;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d7794:
    plVar6 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    do {
      lVar8 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_036d77fc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar3,0);
LAB_036d77fc:
      uVar13 = (*(code *)*puVar9)(plVar6,puVar9[1]);
      if ((uVar13 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)puVar2);
        if (plVar6 == (long *)0x0) {
          return;
        }
        lVar8 = *plVar6;
        lVar12 = *(long *)puVar2;
        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar13 == 0) goto LAB_036d797c;
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_036d7964;
      }
      lVar8 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_036d785c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar3,1);
LAB_036d785c:
      plVar7 = (long *)(*(code *)*puVar9)(plVar6,puVar9[1]);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
        if ((*(byte *)(*plVar7 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plVar7);
        }
      }
      lVar8 = FUN_036f2d10(unaff_x25,0);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      plVar11 = (long *)FUN_03fbac38(lVar8,plVar7[0x10],0);
      if (plVar11 == (long *)0x0) {
        if ((lVar12 == 0) || (uVar13 = FUN_036f0830(lVar12,plVar7[0x10],0), (uVar13 & 1) == 0)) {
          FUN_01fbafc0();
        }
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
        if ((*(byte *)(*plVar11 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
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


