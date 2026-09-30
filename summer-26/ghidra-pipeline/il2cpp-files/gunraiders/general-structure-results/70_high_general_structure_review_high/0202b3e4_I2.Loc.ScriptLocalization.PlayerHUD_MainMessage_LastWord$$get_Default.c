/*
FUNCTION_NAME: I2.Loc.ScriptLocalization.PlayerHUD_MainMessage_LastWord$$get_Default
ENTRY_POINT: 0202b3e4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;strong_file_logging_hits_16;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0202bea8) */
/* WARNING: Removing unreachable block (ram,0x0202c058) */

undefined4 I2_Loc_ScriptLocalization_PlayerHUD_MainMessage_LastWord__get_Default(void)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long unaff_x19;
  long unaff_x20;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_01c5d288(System_Func<Vector2Int,_int>_TypeInfo);
  FUN_01c5d288(System_Func<Vector3,_float>_TypeInfo);
  FUN_01c5d288(System_Func<Vector3Int,_int>_TypeInfo);
  FUN_01c5d288(System_Func<Vector4,_float>_TypeInfo);
  FUN_01c5d288(System_Func<Vector4,_Vector2>_TypeInfo);
  FUN_01c5d288(System_Func<Vertex,_Vector3>_TypeInfo);
  FUN_01c5d288(System_Func<VisualElement,_StyleValues>_TypeInfo);
  FUN_01c5d288(System_Func<Volume,_bool>_TypeInfo);
  FUN_01c5d288(PTR_DAT_0422fce8);
  FUN_01c5d288(PTR_DAT_04230960);
  FUN_01c5d288(PTR_DAT_04232388);
  FUN_01c5d288(System_Func<Type,_ReflectionObject>_TypeInfo);
  FUN_01c5d288(PTR_DAT_0422f9e8);
  FUN_01c5d288(PTR_DAT_042314b0);
  FUN_01c5d288(System_Func<WingedEdge,_bool>_TypeInfo);
  FUN_01c5d288(System_Func<WingedEdge,_Edge>_TypeInfo);
  FUN_01c5d288(System_Func<Transform,_bool>_TypeInfo);
  FUN_01c5d288(System_Func<Triangle,_IEnumerable<int>>_TypeInfo);
  FUN_01c5d288(System_Func<XRPassCreateInfo,_XRPass>_TypeInfo);
  FUN_01c5d288(System_Func<DebugUI_Widget,_bool>_TypeInfo);
  uVar10 = FUN_01c5d288(PTR_DAT_04230f30);
  *(undefined1 *)(unaff_x20 + 0x22) = 1;
  puVar5 = PTR_DAT_04230f30;
  in_stack_00000028 = 0;
  iVar9 = *(int *)(unaff_x19 + 0x10);
  lVar20 = *(long *)(unaff_x19 + 0x28);
  if (iVar9 == 2) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar20 == 0) goto LAB_0202c700;
    uVar11 = FUN_0202a494(uVar10,*(undefined8 *)(unaff_x19 + 0x20));
    puVar3 = PTR_DAT_0422f9e8;
    if ((uVar11 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
      uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x60);
      if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar11 = FUN_03d4dc54(uVar10,0,0);
      if ((uVar11 & 1) == 0) {
        puVar1 = (undefined8 *)(unaff_x19 + 0x60);
        iVar9 = FUN_026c4b80(puVar1,*(undefined8 *)PTR_DAT_042394c0);
        puVar4 = PTR_DAT_04239428;
        if (iVar9 == 1) {
          uVar10 = FUN_026c4b1c(puVar1,*(undefined8 *)PTR_DAT_04239428);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar3);
          }
          uVar11 = FUN_03d4dc54(uVar10,0,0);
          if ((uVar11 & 1) == 0) {
            lVar14 = *(long *)(unaff_x19 + 0x20);
            uVar10 = FUN_026c4b1c(puVar1,*(undefined8 *)puVar4);
            if (lVar14 == 0) goto LAB_0202c700;
            *(undefined8 *)(lVar14 + 0xb8) = uVar10;
            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
               (lVar14 = *(long *)(lVar20 + 0x20), lVar14 == 0)) goto LAB_0202c700;
            uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xb8);
            lVar17 = *(long *)(lVar14 + 0x10);
            lVar18 = *(long *)PTR_DAT_04232388;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar17 == 0) goto LAB_0202c700;
            uVar15 = *(uint *)(lVar14 + 0x18);
            if (uVar15 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar15 + 1;
              *(undefined8 *)(lVar17 + (long)(int)uVar15 * 8 + 0x20) = uVar10;
            }
            else {
              FUN_02d5004c(lVar14,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
            uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xb8);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar11 = FUN_03d4dc54(uVar10,0,0);
            lVar14 = *(long *)(unaff_x19 + 0x20);
            if ((uVar11 & 1) == 0) {
              if ((lVar14 != 0) && (*(long *)(lVar14 + 0xb8) != 0)) {
                uVar10 = FUN_02363904(*(long *)(lVar14 + 0xb8),1,
                                      *(undefined8 *)
                                       System_Func<VisualElement,_StyleValues>_TypeInfo);
                puVar4 = System_Func<Transform,_bool>_TypeInfo;
                lVar17 = *(long *)System_Func<Transform,_bool>_TypeInfo;
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(lVar17);
                  lVar17 = *(long *)puVar4;
                }
                lVar18 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
                if (lVar18 == 0) {
                  if (*(int *)(lVar17 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(lVar17);
                    lVar17 = *(long *)puVar4;
                  }
                  uVar21 = **(undefined8 **)(lVar17 + 0xb8);
                  lVar18 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<Vector4,_Vector2>_TypeInfo)
                  ;
                  FUN_02b67c90(lVar18,uVar21,*(undefined8 *)System_Func<WingedEdge,_bool>_TypeInfo,0
                              );
                  *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar18;
                }
                uVar10 = FUN_02358a2c(uVar10,lVar18,
                                      *(undefined8 *)System_Func<Vector3Int,_int>_TypeInfo);
                uVar10 = FUN_02355b80(uVar10,*(undefined8 *)System_Func<Vector2Int,_int>_TypeInfo);
                *(undefined8 *)(lVar14 + 0x88) = uVar10;
                lVar14 = *(long *)(unaff_x19 + 0x20);
                if ((lVar14 != 0) && (*(long *)(lVar14 + 0xb8) != 0)) {
                  uVar10 = FUN_02363904(*(long *)(lVar14 + 0xb8),1,
                                        *(undefined8 *)System_Func<Volume,_bool>_TypeInfo);
                  lVar17 = *(long *)puVar4;
                  if (*(int *)(lVar17 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(lVar17);
                    lVar17 = *(long *)puVar4;
                  }
                  lVar18 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
                  if (lVar18 == 0) {
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(lVar17);
                      lVar17 = *(long *)puVar4;
                    }
                    uVar21 = **(undefined8 **)(lVar17 + 0xb8);
                    lVar18 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<Vertex,_Vector3>_TypeInfo
                                               );
                    FUN_02b67c90(lVar18,uVar21,*(undefined8 *)System_Func<WingedEdge,_Edge>_TypeInfo
                                 ,0);
                    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = lVar18;
                  }
                  uVar10 = FUN_02358a2c(uVar10,lVar18,
                                        *(undefined8 *)System_Func<Vector4,_float>_TypeInfo);
                  uVar10 = FUN_02355b80(uVar10,*(undefined8 *)System_Func<Vector3,_float>_TypeInfo);
                  *(undefined8 *)(lVar14 + 0x90) = uVar10;
                  uVar10 = *(undefined8 *)(unaff_x19 + 0x38);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  uVar11 = FUN_03d4f3bc(uVar10,0,0);
                  if ((uVar11 & 1) != 0) {
                    plVar22 = *(long **)(unaff_x19 + 0x20);
                    if (plVar22 == (long *)0x0) goto LAB_0202c700;
                    (**(code **)(*plVar22 + 0x1d8))
                              (plVar22,*(undefined8 *)(unaff_x19 + 0x38),
                               *(undefined4 *)(unaff_x19 + 0x30),*(undefined8 *)(*plVar22 + 0x1e0));
                  }
                  lVar14 = *(long *)(unaff_x19 + 0x20);
                  if (lVar14 != 0) {
                    lVar17 = *(long *)(lVar14 + 0x88);
                    if ((lVar17 != 0) && (0 < (int)*(ulong *)(lVar17 + 0x18))) {
                      uVar11 = 0;
                      uVar16 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
                      do {
                        if (uVar16 <= uVar11)
                        goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                        lVar14 = *(long *)(lVar17 + 0x20 + uVar11 * 8);
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8();
                        }
                        uVar16 = FUN_03d4f3bc(lVar14,0,0);
                        if ((uVar16 & 1) != 0) {
                          if ((lVar14 == 0) || (lVar18 = FUN_03d468e8(lVar14,0), lVar18 == 0))
                          goto LAB_0202c700;
                          FUN_03d499ec(lVar18,1,0);
                          lVar14 = FUN_03d468e8(lVar14,0);
                          if (lVar14 == 0) goto LAB_0202c700;
                          FUN_03d49928(lVar14,*(undefined4 *)(lVar20 + 0x28),0);
                        }
                        uVar16 = (ulong)*(uint *)(lVar17 + 0x18);
                        uVar11 = uVar11 + 1;
                      } while ((long)uVar11 < (long)(int)*(uint *)(lVar17 + 0x18));
                      lVar14 = *(long *)(unaff_x19 + 0x20);
                      if (lVar14 == 0) goto LAB_0202c700;
                    }
                    lVar17 = *(long *)(lVar14 + 0x90);
                    if ((lVar17 != 0) && (0 < (int)*(ulong *)(lVar17 + 0x18))) {
                      uVar11 = 0;
                      uVar16 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
                      do {
                        if (uVar16 <= uVar11)
                        goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                        lVar14 = *(long *)(lVar17 + 0x20 + uVar11 * 8);
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8();
                        }
                        uVar16 = FUN_03d4f3bc(lVar14,0,0);
                        if ((uVar16 & 1) != 0) {
                          if ((lVar14 == 0) || (lVar18 = FUN_03d468e8(lVar14,0), lVar18 == 0))
                          goto LAB_0202c700;
                          FUN_03d499ec(lVar18,1,0);
                          lVar14 = FUN_03d468e8(lVar14,0);
                          if (lVar14 == 0) goto LAB_0202c700;
                          FUN_03d49928(lVar14,*(undefined4 *)(lVar20 + 0x28),0);
                        }
                        uVar16 = (ulong)*(uint *)(lVar17 + 0x18);
                        uVar11 = uVar11 + 1;
                      } while ((long)uVar11 < (long)(int)*(uint *)(lVar17 + 0x18));
                      lVar14 = *(long *)(unaff_x19 + 0x20);
                      if (lVar14 == 0) goto LAB_0202c700;
                    }
                    if ((*(long *)(lVar14 + 0xb8) != 0) &&
                       (lVar14 = FUN_03d498b0(*(long *)(lVar14 + 0xb8),0), lVar14 != 0)) {
                      plVar22 = (long *)FUN_03d5845c(lVar14,0);
                      puVar8 = System_Func<Vector2,_Vector2>_TypeInfo;
                      puVar7 = System_Func<Triangle,_IEnumerable<int>>_TypeInfo;
                      puVar6 = PTR_DAT_042314b0;
                      puVar4 = PTR_DAT_04230960;
                      if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      do {
                        do {
                          do {
                            lVar17 = *plVar22;
                            lVar14 = *(long *)puVar4;
                            uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
                            if (uVar11 != 0) {
                              piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar19 + -2) == lVar14) {
                                  puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                                  goto LAB_0202bcf4;
                                }
                                uVar11 = uVar11 - 1;
                                piVar19 = piVar19 + 4;
                              } while (uVar11 != 0);
                            }
                            puVar12 = (undefined8 *)FUN_01c72498(plVar22,lVar14,0);
LAB_0202bcf4:
                            uVar11 = (*(code *)*puVar12)(plVar22,puVar12[1]);
                            if ((uVar11 & 1) == 0) goto LAB_0202be20;
                            lVar17 = *plVar22;
                            lVar14 = *(long *)puVar4;
                            uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
                            if (uVar11 != 0) {
                              piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar19 + -2) == lVar14) {
                                  puVar12 = (undefined8 *)
                                            (lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                                  goto LAB_0202bd54;
                                }
                                uVar11 = uVar11 - 1;
                                piVar19 = piVar19 + 4;
                              } while (uVar11 != 0);
                            }
                            puVar12 = (undefined8 *)FUN_01c72498(plVar22,lVar14,1);
LAB_0202bd54:
                            plVar13 = (long *)(*(code *)*puVar12)(plVar22,puVar12[1]);
                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01c5d4a4();
                            }
                            bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                            if ((*(byte *)(*plVar13 + 0x130) < bVar2) ||
                               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                                *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
                              FUN_01c5d748();
                            }
                            uVar11 = FUN_0230cff0(plVar13,&stack0x00000028,*(undefined8 *)puVar8);
                          } while ((uVar11 & 1) == 0);
                          if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01c5d4a4();
                          }
                          uVar10 = FUN_03d13860(in_stack_00000028,0);
                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                          }
                          uVar11 = FUN_03d4f3bc(uVar10,0,0);
                        } while ((uVar11 & 1) == 0);
                        if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01c5d4a4();
                        }
                        lVar14 = FUN_03d13860(in_stack_00000028,0);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01c5d4a4();
                        }
                        lVar14 = FUN_03d4ded0(lVar14,0);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01c5d4a4();
                        }
                        uVar11 = FUN_03157254(lVar14,*(undefined8 *)puVar7,0);
                      } while ((uVar11 & 1) == 0);
                      lVar14 = *(long *)(unaff_x19 + 0x20);
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      *(long *)(lVar14 + 0xd0) = in_stack_00000028;
                      FUN_020ea738(lVar14,0);
LAB_0202be20:
                      puVar4 = PTR_DAT_0422fce8;
                      plVar22 = (long *)thunk_FUN_01c495e4(plVar22,*(undefined8 *)PTR_DAT_0422fce8);
                      if (plVar22 != (long *)0x0) {
                        lVar14 = *plVar22;
                        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
                        if (uVar11 != 0) {
                          piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
                              puVar12 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
                              goto LAB_0202be90;
                            }
                            uVar11 = uVar11 - 1;
                            piVar19 = piVar19 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar12 = (undefined8 *)FUN_01c72498(plVar22,*(long *)puVar4,0);
LAB_0202be90:
                        (*(code *)*puVar12)(plVar22,puVar12[1]);
                      }
                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                        if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x20) != '\0') {
                          if ((**(long **)(*(long *)PTR_DAT_04239450 + 0xb8) == 0) ||
                             (lVar14 = *(long *)(**(long **)(*(long *)PTR_DAT_04239450 + 0xb8) +
                                                0x120), lVar14 == 0)) {
                            uVar10 = 0;
                          }
                          else {
                            uVar10 = *(undefined8 *)(lVar14 + 0x200);
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                          }
                          uVar11 = FUN_03d4dc54(uVar10,0,0);
                          if ((uVar11 & 1) != 0) {
                            if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
                              thunk_FUN_01c1d1e8();
                            }
                            FUN_03d046d0(*(undefined8 *)
                                          System_Func<XRPassCreateInfo,_XRPass>_TypeInfo,0);
                          }
                          if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                             (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x88), lVar14 == 0))
                          goto LAB_0202c700;
                          if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
                            uVar11 = 0;
                            uVar16 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
                            do {
                              if (uVar16 <= uVar11)
                              goto 
                              I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed
                              ;
                              lVar17 = *(long *)(lVar14 + 0x20 + uVar11 * 8);
                              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                thunk_FUN_01c1d1e8();
                              }
                              uVar16 = FUN_03d4f3bc(lVar17,0,0);
                              if ((uVar16 & 1) != 0) {
                                if (lVar17 == 0) goto LAB_0202c700;
                                FUN_03d136e4(lVar17,uVar10,0);
                              }
                              uVar16 = (ulong)*(uint *)(lVar14 + 0x18);
                              uVar11 = uVar11 + 1;
                            } while ((long)uVar11 < (long)(int)*(uint *)(lVar14 + 0x18));
                          }
                          if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                             (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x90), lVar14 == 0))
                          goto LAB_0202c700;
                          if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
                            uVar11 = 0;
                            uVar16 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
                            do {
                              if (uVar16 <= uVar11)
                              goto 
                              I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed
                              ;
                              lVar17 = *(long *)(lVar14 + 0x20 + uVar11 * 8);
                              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                thunk_FUN_01c1d1e8();
                              }
                              uVar16 = FUN_03d4f3bc(lVar17,0,0);
                              if ((uVar16 & 1) != 0) {
                                if (lVar17 == 0) goto LAB_0202c700;
                                FUN_03d136e4(lVar17,uVar10,0);
                              }
                              uVar16 = (ulong)*(uint *)(lVar14 + 0x18);
                              uVar11 = uVar11 + 1;
                            } while ((long)uVar11 < (long)(int)*(uint *)(lVar14 + 0x18));
                          }
                        }
                        *(undefined8 *)(unaff_x19 + 0x68) = 0;
                        *puVar1 = 0;
                        *(undefined8 *)(unaff_x19 + 0x78) = 0;
                        *(undefined8 *)(unaff_x19 + 0x70) = 0;
                        do {
                          plVar22 = *(long **)(unaff_x19 + 0x20);
                          if ((plVar22 == (long *)0x0) ||
                             (uVar10 = (**(code **)(*plVar22 + 0x188))
                                                 (plVar22,*(undefined8 *)(*plVar22 + 400)),
                             lVar20 == 0)) goto LAB_0202c700;
                          FUN_0202a780(uVar10,*(undefined8 *)(unaff_x19 + 0x20),
                                       *(undefined4 *)(unaff_x19 + 0x30));
                          FUN_0202a6b0(lVar20,*(undefined8 *)(unaff_x19 + 0x20));
                          uVar15 = *(uint *)(unaff_x19 + 0x34);
                          *(undefined8 *)(unaff_x19 + 0x38) = 0;
                          do {
                            iVar9 = uVar15 + 1;
                            *(int *)(unaff_x19 + 0x34) = iVar9;
LAB_0202c584:
                            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                               (lVar14 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar14 == 0))
                            goto LAB_0202c700;
                            if (*(int *)(lVar14 + 0x18) <= iVar9) {
                              return 0;
                            }
                            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                               (lVar14 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar14 == 0))
                            goto LAB_0202c700;
                            uVar15 = *(uint *)(unaff_x19 + 0x34);
                            if (*(uint *)(lVar14 + 0x18) <= uVar15)
                            goto 
                            I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                            lVar14 = *(long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
                            if (lVar14 == 0) goto LAB_0202c700;
                          } while (*(int *)(lVar14 + 0x10) != *(int *)(unaff_x19 + 0x30));
                          if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                             (lVar14 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar14 == 0))
                          goto LAB_0202c700;
                          if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x34)) {
I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed:
                    /* WARNING: Subroutine does not return */
                            FUN_01c5d4ac();
                          }
                          lVar17 = *(long *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 +
                                            0x20);
                          if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x18), lVar17 == 0))
                          goto LAB_0202c700;
                          if (*(int *)(lVar17 + 0x18) == 0)
                          goto 
                          I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                          if (*(long *)(lVar17 + 0x20) == 0) goto LAB_0202c700;
                          plVar22 = *(long **)(unaff_x19 + 0x20);
                          if (*(char *)(*(long *)(lVar17 + 0x20) + 0x20) != '\0') {
                            if (lVar20 == 0) goto LAB_0202c700;
                            FUN_0202a780(lVar14,plVar22,*(undefined4 *)(unaff_x19 + 0x30));
                            goto LAB_0202c224;
                          }
                          if ((plVar22 == (long *)0x0) ||
                             (lVar14 = FUN_020e9968(plVar22,0), lVar14 == 0)) goto LAB_0202c700;
                          if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
                          goto 
                          I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
                          (**(code **)(*plVar22 + 0x1e8))
                                    (plVar22,*(undefined8 *)
                                              (lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 +
                                              0x20),
                                     *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x78),
                                     *(undefined8 *)(*plVar22 + 0x1f0));
                          lVar14 = *(long *)(unaff_x19 + 0x20);
                          *(undefined8 *)(unaff_x19 + 0x38) = 0;
                          if ((lVar14 == 0) || (lVar17 = FUN_020e9968(lVar14,0), lVar17 == 0))
                          goto LAB_0202c700;
                          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
                          goto 
                          I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                          lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 +
                                            0x20);
                          if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x18), lVar17 == 0))
                          goto LAB_0202c700;
                          if (*(int *)(lVar17 + 0x18) == 0)
                          goto 
                          I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                          if (*(long *)(lVar17 + 0x20) == 0) goto LAB_0202c700;
                          uVar11 = thunk_FUN_03152714(*(undefined8 *)
                                                       (*(long *)(lVar17 + 0x20) + 0x10),
                                                      *(undefined8 *)puVar5,0);
                          if ((uVar11 & 1) == 0) {
LAB_0202c3d4:
                            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                               (lVar17 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar17 == 0))
                            goto LAB_0202c700;
                            if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
                            goto 
                            I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                            lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 +
                                              0x20);
                            if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x18), lVar17 == 0))
                            goto LAB_0202c700;
                            if (*(int *)(lVar17 + 0x18) == 0)
                            goto 
                            I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                            lVar17 = *(long *)(lVar17 + 0x20);
                          }
                          else {
                            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                               (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78), lVar17 == 0)
                               ) goto LAB_0202c700;
                            uVar11 = FUN_031529f8(*(undefined8 *)(lVar17 + 0x10),
                                                  *(undefined8 *)puVar5,0);
                            if ((uVar11 & 1) == 0) goto LAB_0202c3d4;
                            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
                            lVar17 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78);
                          }
                          if (lVar17 == 0) goto LAB_0202c700;
                          *(undefined8 *)(lVar14 + 0xa8) = *(undefined8 *)(lVar17 + 0x10);
                          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
                          uVar11 = FUN_031529f8(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xa8),
                                                *(undefined8 *)puVar5,0);
                          if ((uVar11 & 1) != 0) {
                            if (*(long *)(unaff_x19 + 0x20) != 0) {
                              uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xa8);
                              if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
                                thunk_FUN_01c1d1e8();
                              }
                              FUN_021f45cc(&stack0x00000030,uVar10,
                                           *(undefined8 *)System_Func<Triangle,_bool>_TypeInfo);
                              puVar5 = System_Func<Type,_JsonContract>_TypeInfo;
                              *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000038;
                              *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000030;
                              *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000048;
                              *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000040;
                              uVar10 = thunk_FUN_01c49334(*(undefined8 *)puVar5);
                              *(undefined8 *)(unaff_x19 + 0x18) = uVar10;
                              *(undefined4 *)(unaff_x19 + 0x10) = 1;
                              return 1;
                            }
                            goto LAB_0202c700;
                          }
LAB_0202c440:
                          lVar14 = *(long *)(unaff_x19 + 0x20);
                          if ((lVar14 == 0) || (lVar17 = FUN_020e9968(lVar14,0), lVar17 == 0))
                          goto LAB_0202c700;
                          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
                          goto 
                          I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                          lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 +
                                            0x20);
                          if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x18), lVar17 == 0))
                          goto LAB_0202c700;
                          if (*(int *)(lVar17 + 0x18) == 0)
                          goto 
                          I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                          if (*(long *)(lVar17 + 0x20) == 0) goto LAB_0202c700;
                          uVar11 = thunk_FUN_03152714(*(undefined8 *)
                                                       (*(long *)(lVar17 + 0x20) + 0x18),
                                                      *(undefined8 *)puVar5,0);
                          if ((uVar11 & 1) == 0) {
LAB_0202c4d8:
                            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                               (lVar17 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar17 == 0))
                            goto LAB_0202c700;
                            if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
                            goto 
                            I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                            lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 +
                                              0x20);
                            if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x18), lVar17 == 0))
                            goto LAB_0202c700;
                            if (*(int *)(lVar17 + 0x18) == 0)
                            goto 
                            I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                            lVar17 = *(long *)(lVar17 + 0x20);
                          }
                          else {
                            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                               (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78), lVar17 == 0)
                               ) goto LAB_0202c700;
                            uVar11 = FUN_031529f8(*(undefined8 *)(lVar17 + 0x18),
                                                  *(undefined8 *)puVar5,0);
                            if ((uVar11 & 1) == 0) goto LAB_0202c4d8;
                            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
                            lVar17 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78);
                          }
                          if (lVar17 == 0) goto LAB_0202c700;
                          *(undefined8 *)(lVar14 + 0xa0) = *(undefined8 *)(lVar17 + 0x18);
                          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
                          uVar11 = FUN_031529f8(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xa0),
                                                *(undefined8 *)puVar5,0);
                        } while ((uVar11 & 1) == 0);
                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                          uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x60);
                          if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                          }
                          uVar11 = FUN_03d4dc54(uVar10,0,0);
                          lVar14 = *(long *)(unaff_x19 + 0x20);
                          if ((uVar11 & 1) == 0) {
                            if ((lVar14 != 0) && (*(long *)(lVar14 + 0x60) != 0)) {
                              uVar21 = *(undefined8 *)(lVar14 + 0xa0);
                              uVar10 = FUN_03d498b0(*(long *)(lVar14 + 0x60),0);
                              if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
                                thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042394b8);
                              }
                              FUN_03a1e7c0(uVar21,uVar10,0,1,0);
                              puVar5 = PTR_DAT_042394c8;
                              in_stack_00000038 = in_stack_00000008;
                              in_stack_00000030 = in_stack_00000000;
                              in_stack_00000048 = in_stack_00000018;
                              in_stack_00000040 = in_stack_00000010;
                              *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000008;
                              *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000000;
                              *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000018;
                              *(undefined8 *)(unaff_x19 + 0x70) = in_stack_00000010;
                              uVar10 = thunk_FUN_01c49334(*(undefined8 *)puVar5);
                              *(undefined8 *)(unaff_x19 + 0x18) = uVar10;
                              *(undefined4 *)(unaff_x19 + 0x10) = 2;
                              return 1;
                            }
                          }
                          else if (lVar20 != 0) goto LAB_0202c22c;
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_0202c700;
            }
            goto LAB_0202c22c;
          }
        }
        goto LAB_0202c224;
      }
    }
    lVar14 = unaff_x19 + 0x60;
    iVar9 = FUN_026c4b80(lVar14,*(undefined8 *)PTR_DAT_042394c0);
    puVar5 = PTR_DAT_04239428;
    if (iVar9 == 1) {
      uVar10 = FUN_026c4b1c(lVar14,*(undefined8 *)PTR_DAT_04239428);
      puVar3 = PTR_DAT_0422f9e8;
      if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
      }
      uVar11 = FUN_03d4f3bc(uVar10,0,0);
      if ((uVar11 & 1) != 0) {
        uVar10 = FUN_026c4b1c(lVar14,*(undefined8 *)puVar5);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        FUN_03d4ea0c(uVar10,0);
      }
    }
  }
  else if (iVar9 == 1) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar20 == 0) goto LAB_0202c700;
    uVar11 = FUN_0202a494(uVar10,*(undefined8 *)(unaff_x19 + 0x20));
    if ((uVar11 & 1) != 0) {
      uVar21 = *(undefined8 *)(unaff_x19 + 0x48);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x40);
      uVar24 = *(undefined8 *)(unaff_x19 + 0x58);
      uVar23 = *(undefined8 *)(unaff_x19 + 0x50);
      if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      in_stack_00000030 = uVar10;
      in_stack_00000038 = uVar21;
      in_stack_00000040 = uVar23;
      in_stack_00000048 = uVar24;
      FUN_021f5250(&stack0x00000030,
                   *(undefined8 *)System_Func<Type,_Func<object[],_object>>_TypeInfo);
      return 0;
    }
    puVar1 = (undefined8 *)(unaff_x19 + 0x40);
    uVar11 = FUN_026c492c(puVar1,*(undefined8 *)System_Func<Type,_IEnumerable<MemberInfo>>_TypeInfo)
    ;
    if (((uVar11 & 1) != 0) &&
       (iVar9 = FUN_026c4b80(puVar1,*(undefined8 *)System_Func<Type,_bool>_TypeInfo), iVar9 == 1)) {
      uVar10 = FUN_026c4b1c(puVar1,*(undefined8 *)
                                    System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo);
      if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar10 = FUN_02398da0(uVar10,*(undefined8 *)System_Func<Type,_ReflectionObject>_TypeInfo);
      *(undefined8 *)(unaff_x19 + 0x38) = uVar10;
      in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x48);
      in_stack_00000000 = *puVar1;
      in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x58);
      in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x50);
      if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      in_stack_00000030 = in_stack_00000000;
      in_stack_00000038 = in_stack_00000008;
      in_stack_00000040 = in_stack_00000010;
      in_stack_00000048 = in_stack_00000018;
      FUN_021f5250(&stack0x00000030,
                   *(undefined8 *)System_Func<Type,_Func<object[],_object>>_TypeInfo);
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      *puVar1 = 0;
      *(undefined8 *)(unaff_x19 + 0x58) = 0;
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      goto LAB_0202c440;
    }
  }
  else {
    if (iVar9 != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    puVar3 = PTR_DAT_0422f9e8;
    uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar11 = FUN_03d4dc54(uVar10,0,0);
    if ((uVar11 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_020e9b4c(*(long *)(unaff_x19 + 0x20),0);
        lVar14 = *(long *)(unaff_x19 + 0x20);
        if (lVar14 != 0) {
          uVar10 = *(undefined8 *)(lVar14 + 0xb8);
          *(undefined4 *)(lVar14 + 0xdc) = *(undefined4 *)(unaff_x19 + 0x30);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_03d4f3bc(uVar10,0,0);
          if ((uVar11 & 1) == 0) {
LAB_0202b740:
            iVar9 = 0;
            *(undefined4 *)(unaff_x19 + 0x34) = 0;
            goto LAB_0202c584;
          }
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xb8);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03d4ea0c(uVar10,0);
            lVar14 = *(long *)(unaff_x19 + 0x20);
            if (lVar14 != 0) {
              *(undefined8 *)(lVar14 + 0xb8) = 0;
              *(undefined8 *)(lVar14 + 0x88) = 0;
              *(undefined8 *)(lVar14 + 0x90) = 0;
              goto LAB_0202b740;
            }
          }
        }
      }
LAB_0202c700:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03d04168(*(undefined8 *)System_Func<DebugUI_Widget,_bool>_TypeInfo,0);
    if (lVar20 == 0) goto LAB_0202c700;
  }
LAB_0202c224:
  lVar14 = *(long *)(unaff_x19 + 0x20);
LAB_0202c22c:
  FUN_0202a6b0(lVar20,lVar14);
  return 0;
}


