/*
FUNCTION_NAME: I2.Loc.ScriptLocalization.PlayerHUD_MainMessage_LastWord$$get_Wall
ENTRY_POINT: 0202b8f4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_structure_only;strong_file_logging_hits_16;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0202bea8) */
/* WARNING: Removing unreachable block (ram,0x0202c058) */

undefined4 I2_Loc_ScriptLocalization_PlayerHUD_MainMessage_LastWord__get_Wall(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
  uVar14 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xb8);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar6 = FUN_03d4dc54(uVar14,0,0);
  lVar15 = *(long *)(unaff_x19 + 0x20);
  if ((uVar6 & 1) == 0) {
    if ((lVar15 != 0) && (*(long *)(lVar15 + 0xb8) != 0)) {
      uVar14 = FUN_02363904(*(long *)(lVar15 + 0xb8),1,
                            *(undefined8 *)System_Func<VisualElement,_StyleValues>_TypeInfo);
      puVar2 = System_Func<Transform,_bool>_TypeInfo;
      lVar11 = *(long *)System_Func<Transform,_bool>_TypeInfo;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar11);
        lVar11 = *(long *)puVar2;
      }
      lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar16 == 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar11);
          lVar11 = *(long *)puVar2;
        }
        uVar17 = **(undefined8 **)(lVar11 + 0xb8);
        lVar16 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<Vector4,_Vector2>_TypeInfo);
        FUN_02b67c90(lVar16,uVar17,*(undefined8 *)System_Func<WingedEdge,_bool>_TypeInfo,0);
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar16;
      }
      uVar14 = FUN_02358a2c(uVar14,lVar16,*(undefined8 *)System_Func<Vector3Int,_int>_TypeInfo);
      uVar14 = FUN_02355b80(uVar14,*(undefined8 *)System_Func<Vector2Int,_int>_TypeInfo);
      *(undefined8 *)(lVar15 + 0x88) = uVar14;
      lVar15 = *(long *)(unaff_x19 + 0x20);
      if ((lVar15 != 0) && (*(long *)(lVar15 + 0xb8) != 0)) {
        uVar14 = FUN_02363904(*(long *)(lVar15 + 0xb8),1,
                              *(undefined8 *)System_Func<Volume,_bool>_TypeInfo);
        lVar11 = *(long *)puVar2;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar11);
          lVar11 = *(long *)puVar2;
        }
        lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
        if (lVar16 == 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar11);
            lVar11 = *(long *)puVar2;
          }
          uVar17 = **(undefined8 **)(lVar11 + 0xb8);
          lVar16 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<Vertex,_Vector3>_TypeInfo);
          FUN_02b67c90(lVar16,uVar17,*(undefined8 *)System_Func<WingedEdge,_Edge>_TypeInfo,0);
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar16;
        }
        uVar14 = FUN_02358a2c(uVar14,lVar16,*(undefined8 *)System_Func<Vector4,_float>_TypeInfo);
        uVar14 = FUN_02355b80(uVar14,*(undefined8 *)System_Func<Vector3,_float>_TypeInfo);
        *(undefined8 *)(lVar15 + 0x90) = uVar14;
        uVar14 = *(undefined8 *)(unaff_x19 + 0x38);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar6 = FUN_03d4f3bc(uVar14,0,0);
        if ((uVar6 & 1) != 0) {
          plVar7 = *(long **)(unaff_x19 + 0x20);
          if (plVar7 == (long *)0x0) goto LAB_0202c700;
          (**(code **)(*plVar7 + 0x1d8))
                    (plVar7,*(undefined8 *)(unaff_x19 + 0x38),*(undefined4 *)(unaff_x19 + 0x30),
                     *(undefined8 *)(*plVar7 + 0x1e0));
        }
        lVar15 = *(long *)(unaff_x19 + 0x20);
        if (lVar15 != 0) {
          lVar11 = *(long *)(lVar15 + 0x88);
          if ((lVar11 != 0) && (0 < (int)*(ulong *)(lVar11 + 0x18))) {
            uVar6 = 0;
            uVar12 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
            do {
              if (uVar12 <= uVar6)
              goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
              lVar15 = *(long *)(lVar11 + 0x20 + uVar6 * 8);
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar12 = FUN_03d4f3bc(lVar15,0,0);
              if ((uVar12 & 1) != 0) {
                if ((lVar15 == 0) || (lVar16 = FUN_03d468e8(lVar15,0), lVar16 == 0))
                goto LAB_0202c700;
                FUN_03d499ec(lVar16,1,0);
                lVar15 = FUN_03d468e8(lVar15,0);
                if (lVar15 == 0) goto LAB_0202c700;
                FUN_03d49928(lVar15,*(undefined4 *)(unaff_x20 + 0x28),0);
              }
              uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar11 + 0x18));
            lVar15 = *(long *)(unaff_x19 + 0x20);
            if (lVar15 == 0) goto LAB_0202c700;
          }
          lVar11 = *(long *)(lVar15 + 0x90);
          if ((lVar11 != 0) && (0 < (int)*(ulong *)(lVar11 + 0x18))) {
            uVar6 = 0;
            uVar12 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
            do {
              if (uVar12 <= uVar6)
              goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
              lVar15 = *(long *)(lVar11 + 0x20 + uVar6 * 8);
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar12 = FUN_03d4f3bc(lVar15,0,0);
              if ((uVar12 & 1) != 0) {
                if ((lVar15 == 0) || (lVar16 = FUN_03d468e8(lVar15,0), lVar16 == 0))
                goto LAB_0202c700;
                FUN_03d499ec(lVar16,1,0);
                lVar15 = FUN_03d468e8(lVar15,0);
                if (lVar15 == 0) goto LAB_0202c700;
                FUN_03d49928(lVar15,*(undefined4 *)(unaff_x20 + 0x28),0);
              }
              uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar11 + 0x18));
            lVar15 = *(long *)(unaff_x19 + 0x20);
            if (lVar15 == 0) goto LAB_0202c700;
          }
          if ((*(long *)(lVar15 + 0xb8) != 0) &&
             (lVar15 = FUN_03d498b0(*(long *)(lVar15 + 0xb8),0), lVar15 != 0)) {
            plVar7 = (long *)FUN_03d5845c(lVar15,0);
            puVar5 = System_Func<Vector2,_Vector2>_TypeInfo;
            puVar4 = System_Func<Triangle,_IEnumerable<int>>_TypeInfo;
            puVar3 = PTR_DAT_042314b0;
            puVar2 = PTR_DAT_04230960;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            do {
              do {
                do {
                  lVar11 = *plVar7;
                  lVar15 = *(long *)puVar2;
                  uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar6 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == lVar15) {
                        puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_0202bcf4;
                      }
                      uVar6 = uVar6 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_01c72498(plVar7,lVar15,0);
LAB_0202bcf4:
                  uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                  if ((uVar6 & 1) == 0) goto LAB_0202be20;
                  lVar11 = *plVar7;
                  lVar15 = *(long *)puVar2;
                  uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar6 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == lVar15) {
                        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                        goto LAB_0202bd54;
                      }
                      uVar6 = uVar6 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_01c72498(plVar7,lVar15,1);
LAB_0202bd54:
                  plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
                  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3
                     )) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d748();
                  }
                  uVar6 = FUN_0230cff0(plVar9,&stack0x00000028,*(undefined8 *)puVar5);
                } while ((uVar6 & 1) == 0);
                if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                uVar14 = FUN_03d13860(in_stack_00000028,0);
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                uVar6 = FUN_03d4f3bc(uVar14,0,0);
              } while ((uVar6 & 1) == 0);
              if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar15 = FUN_03d13860(in_stack_00000028,0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar15 = FUN_03d4ded0(lVar15,0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              uVar6 = FUN_03157254(lVar15,*(undefined8 *)puVar4,0);
            } while ((uVar6 & 1) == 0);
            lVar15 = *(long *)(unaff_x19 + 0x20);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            *(long *)(lVar15 + 0xd0) = in_stack_00000028;
            FUN_020ea738(lVar15,0);
LAB_0202be20:
            puVar2 = PTR_DAT_0422fce8;
            plVar7 = (long *)thunk_FUN_01c495e4(plVar7,*(undefined8 *)PTR_DAT_0422fce8);
            if (plVar7 != (long *)0x0) {
              lVar15 = *plVar7;
              uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_0202be90;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar6 != 0);
              }
              puVar8 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar2,0);
LAB_0202be90:
              (*(code *)*puVar8)(plVar7,puVar8[1]);
            }
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x20) != '\0') {
                if ((**(long **)(*(long *)PTR_DAT_04239450 + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(*(long *)PTR_DAT_04239450 + 0xb8) + 0x120),
                   lVar15 == 0)) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = *(undefined8 *)(lVar15 + 0x200);
                }
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                uVar6 = FUN_03d4dc54(uVar14,0,0);
                if ((uVar6 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  FUN_03d046d0(*(undefined8 *)System_Func<XRPassCreateInfo,_XRPass>_TypeInfo,0);
                }
                if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                   (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x88), lVar15 == 0))
                goto LAB_0202c700;
                if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
                  uVar6 = 0;
                  uVar12 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
                  do {
                    if (uVar12 <= uVar6)
                    goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                    lVar11 = *(long *)(lVar15 + 0x20 + uVar6 * 8);
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    uVar12 = FUN_03d4f3bc(lVar11,0,0);
                    if ((uVar12 & 1) != 0) {
                      if (lVar11 == 0) goto LAB_0202c700;
                      FUN_03d136e4(lVar11,uVar14,0);
                    }
                    uVar12 = (ulong)*(uint *)(lVar15 + 0x18);
                    uVar6 = uVar6 + 1;
                  } while ((long)uVar6 < (long)(int)*(uint *)(lVar15 + 0x18));
                }
                if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                   (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x90), lVar15 == 0))
                goto LAB_0202c700;
                if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
                  uVar6 = 0;
                  uVar12 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
                  do {
                    if (uVar12 <= uVar6)
                    goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                    lVar11 = *(long *)(lVar15 + 0x20 + uVar6 * 8);
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    uVar12 = FUN_03d4f3bc(lVar11,0,0);
                    if ((uVar12 & 1) != 0) {
                      if (lVar11 == 0) goto LAB_0202c700;
                      FUN_03d136e4(lVar11,uVar14,0);
                    }
                    uVar12 = (ulong)*(uint *)(lVar15 + 0x18);
                    uVar6 = uVar6 + 1;
                  } while ((long)uVar6 < (long)(int)*(uint *)(lVar15 + 0x18));
                }
              }
              unaff_x21[1] = 0;
              *unaff_x21 = 0;
              unaff_x21[3] = 0;
              unaff_x21[2] = 0;
              do {
                plVar7 = *(long **)(unaff_x19 + 0x20);
                if ((plVar7 == (long *)0x0) ||
                   (uVar14 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400)),
                   unaff_x20 == 0)) goto LAB_0202c700;
                FUN_0202a780(uVar14,*(undefined8 *)(unaff_x19 + 0x20),
                             *(undefined4 *)(unaff_x19 + 0x30));
                FUN_0202a6b0();
                uVar10 = *(uint *)(unaff_x19 + 0x34);
                *(undefined8 *)(unaff_x19 + 0x38) = 0;
                do {
                  *(uint *)(unaff_x19 + 0x34) = uVar10 + 1;
                  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                     (lVar15 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar15 == 0))
                  goto LAB_0202c700;
                  if (*(int *)(lVar15 + 0x18) <= (int)(uVar10 + 1)) {
                    return 0;
                  }
                  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                     (lVar15 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar15 == 0))
                  goto LAB_0202c700;
                  uVar10 = *(uint *)(unaff_x19 + 0x34);
                  if (*(uint *)(lVar15 + 0x18) <= uVar10)
                  goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                  lVar15 = *(long *)(lVar15 + (long)(int)uVar10 * 8 + 0x20);
                  if (lVar15 == 0) goto LAB_0202c700;
                } while (*(int *)(lVar15 + 0x10) != *(int *)(unaff_x19 + 0x30));
                if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                   (lVar15 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar15 == 0))
                goto LAB_0202c700;
                if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x34)) {
I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed:
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4ac();
                }
                lVar11 = *(long *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
                if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0))
                goto LAB_0202c700;
                if (*(int *)(lVar11 + 0x18) == 0)
                goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                if (*(long *)(lVar11 + 0x20) == 0) goto LAB_0202c700;
                plVar7 = *(long **)(unaff_x19 + 0x20);
                if (*(char *)(*(long *)(lVar11 + 0x20) + 0x20) != '\0') {
                  if (unaff_x20 == 0) goto LAB_0202c700;
                  FUN_0202a780(lVar15,plVar7,*(undefined4 *)(unaff_x19 + 0x30));
                  goto LAB_0202c22c;
                }
                if ((plVar7 == (long *)0x0) || (lVar15 = FUN_020e9968(plVar7,0), lVar15 == 0))
                goto LAB_0202c700;
                if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
                goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
                (**(code **)(*plVar7 + 0x1e8))
                          (plVar7,*(undefined8 *)
                                   (lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20),
                           *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x78),
                           *(undefined8 *)(*plVar7 + 0x1f0));
                lVar15 = *(long *)(unaff_x19 + 0x20);
                *(undefined8 *)(unaff_x19 + 0x38) = 0;
                if ((lVar15 == 0) || (lVar11 = FUN_020e9968(lVar15,0), lVar11 == 0))
                goto LAB_0202c700;
                if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
                goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
                if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0))
                goto LAB_0202c700;
                if (*(int *)(lVar11 + 0x18) == 0)
                goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                if (*(long *)(lVar11 + 0x20) == 0) goto LAB_0202c700;
                uVar6 = thunk_FUN_03152714(*(undefined8 *)(*(long *)(lVar11 + 0x20) + 0x10),
                                           *unaff_x26,0);
                if ((uVar6 & 1) == 0) {
LAB_0202c3d4:
                  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                     (lVar11 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar11 == 0))
                  goto LAB_0202c700;
                  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
                  goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                  lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
                  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0))
                  goto LAB_0202c700;
                  if (*(int *)(lVar11 + 0x18) == 0)
                  goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                  lVar11 = *(long *)(lVar11 + 0x20);
                }
                else {
                  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                     (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78), lVar11 == 0))
                  goto LAB_0202c700;
                  uVar6 = FUN_031529f8(*(undefined8 *)(lVar11 + 0x10),*unaff_x26,0);
                  if ((uVar6 & 1) == 0) goto LAB_0202c3d4;
                  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
                  lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78);
                }
                if (lVar11 == 0) goto LAB_0202c700;
                *(undefined8 *)(lVar15 + 0xa8) = *(undefined8 *)(lVar11 + 0x10);
                if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
                uVar6 = FUN_031529f8(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xa8),*unaff_x26,
                                     0);
                if ((uVar6 & 1) != 0) {
                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                    uVar14 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xa8);
                    if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    FUN_021f45cc(&stack0x00000030,uVar14,
                                 *(undefined8 *)System_Func<Triangle,_bool>_TypeInfo);
                    puVar2 = System_Func<Type,_JsonContract>_TypeInfo;
                    *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000038;
                    *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000030;
                    *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000048;
                    *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000040;
                    uVar14 = thunk_FUN_01c49334(*(undefined8 *)puVar2);
                    *(undefined8 *)(unaff_x19 + 0x18) = uVar14;
                    *(undefined4 *)(unaff_x19 + 0x10) = 1;
                    return 1;
                  }
                  goto LAB_0202c700;
                }
                lVar15 = *(long *)(unaff_x19 + 0x20);
                if ((lVar15 == 0) || (lVar11 = FUN_020e9968(lVar15,0), lVar11 == 0))
                goto LAB_0202c700;
                if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
                goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
                if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0))
                goto LAB_0202c700;
                if (*(int *)(lVar11 + 0x18) == 0)
                goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                if (*(long *)(lVar11 + 0x20) == 0) goto LAB_0202c700;
                uVar6 = thunk_FUN_03152714(*(undefined8 *)(*(long *)(lVar11 + 0x20) + 0x18),
                                           *unaff_x26,0);
                if ((uVar6 & 1) == 0) {
LAB_0202c4d8:
                  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                     (lVar11 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar11 == 0))
                  goto LAB_0202c700;
                  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
                  goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                  lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
                  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0))
                  goto LAB_0202c700;
                  if (*(int *)(lVar11 + 0x18) == 0)
                  goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                  lVar11 = *(long *)(lVar11 + 0x20);
                }
                else {
                  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                     (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78), lVar11 == 0))
                  goto LAB_0202c700;
                  uVar6 = FUN_031529f8(*(undefined8 *)(lVar11 + 0x18),*unaff_x26,0);
                  if ((uVar6 & 1) == 0) goto LAB_0202c4d8;
                  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
                  lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78);
                }
                if (lVar11 == 0) goto LAB_0202c700;
                *(undefined8 *)(lVar15 + 0xa0) = *(undefined8 *)(lVar11 + 0x18);
                if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
                uVar6 = FUN_031529f8(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xa0),*unaff_x26,
                                     0);
              } while ((uVar6 & 1) == 0);
              if (*(long *)(unaff_x19 + 0x20) != 0) {
                uVar14 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x60);
                if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                uVar6 = FUN_03d4dc54(uVar14,0,0);
                lVar15 = *(long *)(unaff_x19 + 0x20);
                if ((uVar6 & 1) == 0) {
                  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x60) != 0)) {
                    uVar17 = *(undefined8 *)(lVar15 + 0xa0);
                    uVar14 = FUN_03d498b0(*(long *)(lVar15 + 0x60),0);
                    if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042394b8);
                    }
                    FUN_03a1e7c0(uVar17,uVar14,0,1,0);
                    puVar2 = PTR_DAT_042394c8;
                    in_stack_00000038 = in_stack_00000008;
                    in_stack_00000030 = in_stack_00000000;
                    in_stack_00000048 = in_stack_00000018;
                    in_stack_00000040 = in_stack_00000010;
                    *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000008;
                    *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000000;
                    *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000018;
                    *(undefined8 *)(unaff_x19 + 0x70) = in_stack_00000010;
                    uVar14 = thunk_FUN_01c49334(*(undefined8 *)puVar2);
                    *(undefined8 *)(unaff_x19 + 0x18) = uVar14;
                    *(undefined4 *)(unaff_x19 + 0x10) = 2;
                    return 1;
                  }
                }
                else if (unaff_x20 != 0) goto LAB_0202c22c;
              }
            }
          }
        }
      }
    }
LAB_0202c700:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
LAB_0202c22c:
  FUN_0202a6b0();
  return 0;
}


