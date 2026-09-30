/*
FUNCTION_NAME: FUN_0202b31c
ENTRY_POINT: 0202b31c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;strong_file_logging_hits_16;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0202bea8) */
/* WARNING: Removing unreachable block (ram,0x0202c058) */

undefined4 FUN_0202b31c(long param_1)

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
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar10 = param_1;
  if ((DAT_0452f022 & 1) == 0) {
    FUN_01c5d288(System_Func<Triangle,_bool>_TypeInfo);
    FUN_01c5d288(System_Func<Type,_Func<object[],_object>>_TypeInfo);
    FUN_01c5d288(PTR_DAT_042394b8);
    FUN_01c5d288(PTR_DAT_04239450);
    FUN_01c5d288(System_Func<Type,_IEnumerable<MemberInfo>>_TypeInfo);
    FUN_01c5d288(PTR_DAT_04239428);
    FUN_01c5d288(System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo);
    FUN_01c5d288(PTR_DAT_042394c0);
    FUN_01c5d288(System_Func<Type,_bool>_TypeInfo);
    FUN_01c5d288(System_Func<Type,_JsonContract>_TypeInfo);
    FUN_01c5d288(PTR_DAT_042394c8);
    FUN_01c5d288(System_Func<Vector2,_Vector2>_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fae0);
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
    lVar10 = FUN_01c5d288(PTR_DAT_04230f30);
    DAT_0452f022 = 1;
  }
  puVar5 = PTR_DAT_04230f30;
  local_88 = 0;
  iVar9 = *(int *)(param_1 + 0x10);
  lVar19 = *(long *)(param_1 + 0x28);
  if (iVar9 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar19 == 0) goto LAB_0202c700;
    uVar11 = FUN_0202a494(lVar10,*(undefined8 *)(param_1 + 0x20));
    puVar3 = PTR_DAT_0422f9e8;
    if ((uVar11 & 1) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0202c700;
      uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
      if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar11 = FUN_03d4dc54(uVar21,0,0);
      if ((uVar11 & 1) == 0) {
        puVar1 = (undefined8 *)(param_1 + 0x60);
        iVar9 = FUN_026c4b80(puVar1,*(undefined8 *)PTR_DAT_042394c0);
        puVar4 = PTR_DAT_04239428;
        if (iVar9 == 1) {
          uVar21 = FUN_026c4b1c(puVar1,*(undefined8 *)PTR_DAT_04239428);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar3);
          }
          uVar11 = FUN_03d4dc54(uVar21,0,0);
          if ((uVar11 & 1) == 0) {
            lVar10 = *(long *)(param_1 + 0x20);
            uVar21 = FUN_026c4b1c(puVar1,*(undefined8 *)puVar4);
            if (lVar10 == 0) goto LAB_0202c700;
            *(undefined8 *)(lVar10 + 0xb8) = uVar21;
            if ((*(long *)(param_1 + 0x20) == 0) || (lVar10 = *(long *)(lVar19 + 0x20), lVar10 == 0)
               ) goto LAB_0202c700;
            uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
            lVar16 = *(long *)(lVar10 + 0x10);
            lVar17 = *(long *)PTR_DAT_04232388;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_0202c700;
            uVar14 = *(uint *)(lVar10 + 0x18);
            if (uVar14 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar14 + 1;
              *(undefined8 *)(lVar16 + (long)(int)uVar14 * 8 + 0x20) = uVar21;
            }
            else {
              FUN_02d5004c(lVar10,uVar21,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_0202c700;
            uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar11 = FUN_03d4dc54(uVar21,0,0);
            lVar10 = *(long *)(param_1 + 0x20);
            if ((uVar11 & 1) == 0) {
              if ((lVar10 != 0) && (*(long *)(lVar10 + 0xb8) != 0)) {
                uVar21 = FUN_02363904(*(long *)(lVar10 + 0xb8),1,
                                      *(undefined8 *)
                                       System_Func<VisualElement,_StyleValues>_TypeInfo);
                puVar4 = System_Func<Transform,_bool>_TypeInfo;
                lVar16 = *(long *)System_Func<Transform,_bool>_TypeInfo;
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(lVar16);
                  lVar16 = *(long *)puVar4;
                }
                lVar17 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
                if (lVar17 == 0) {
                  if (*(int *)(lVar16 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(lVar16);
                    lVar16 = *(long *)puVar4;
                  }
                  uVar20 = **(undefined8 **)(lVar16 + 0xb8);
                  lVar17 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<Vector4,_Vector2>_TypeInfo)
                  ;
                  FUN_02b67c90(lVar17,uVar20,*(undefined8 *)System_Func<WingedEdge,_bool>_TypeInfo,0
                              );
                  *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar17;
                }
                uVar21 = FUN_02358a2c(uVar21,lVar17,
                                      *(undefined8 *)System_Func<Vector3Int,_int>_TypeInfo);
                uVar21 = FUN_02355b80(uVar21,*(undefined8 *)System_Func<Vector2Int,_int>_TypeInfo);
                *(undefined8 *)(lVar10 + 0x88) = uVar21;
                lVar10 = *(long *)(param_1 + 0x20);
                if ((lVar10 != 0) && (*(long *)(lVar10 + 0xb8) != 0)) {
                  uVar21 = FUN_02363904(*(long *)(lVar10 + 0xb8),1,
                                        *(undefined8 *)System_Func<Volume,_bool>_TypeInfo);
                  lVar16 = *(long *)puVar4;
                  if (*(int *)(lVar16 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(lVar16);
                    lVar16 = *(long *)puVar4;
                  }
                  lVar17 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x10);
                  if (lVar17 == 0) {
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(lVar16);
                      lVar16 = *(long *)puVar4;
                    }
                    uVar20 = **(undefined8 **)(lVar16 + 0xb8);
                    lVar17 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<Vertex,_Vector3>_TypeInfo
                                               );
                    FUN_02b67c90(lVar17,uVar20,*(undefined8 *)System_Func<WingedEdge,_Edge>_TypeInfo
                                 ,0);
                    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = lVar17;
                  }
                  uVar21 = FUN_02358a2c(uVar21,lVar17,
                                        *(undefined8 *)System_Func<Vector4,_float>_TypeInfo);
                  uVar21 = FUN_02355b80(uVar21,*(undefined8 *)System_Func<Vector3,_float>_TypeInfo);
                  *(undefined8 *)(lVar10 + 0x90) = uVar21;
                  uVar21 = *(undefined8 *)(param_1 + 0x38);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  uVar11 = FUN_03d4f3bc(uVar21,0,0);
                  if ((uVar11 & 1) != 0) {
                    plVar22 = *(long **)(param_1 + 0x20);
                    if (plVar22 == (long *)0x0) goto LAB_0202c700;
                    (**(code **)(*plVar22 + 0x1d8))
                              (plVar22,*(undefined8 *)(param_1 + 0x38),
                               *(undefined4 *)(param_1 + 0x30),*(undefined8 *)(*plVar22 + 0x1e0));
                  }
                  lVar10 = *(long *)(param_1 + 0x20);
                  if (lVar10 != 0) {
                    lVar16 = *(long *)(lVar10 + 0x88);
                    if ((lVar16 != 0) && (0 < (int)*(ulong *)(lVar16 + 0x18))) {
                      uVar11 = 0;
                      uVar15 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
                      do {
                        if (uVar15 <= uVar11)
                        goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                        lVar10 = *(long *)(lVar16 + 0x20 + uVar11 * 8);
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8();
                        }
                        uVar15 = FUN_03d4f3bc(lVar10,0,0);
                        if ((uVar15 & 1) != 0) {
                          if ((lVar10 == 0) || (lVar17 = FUN_03d468e8(lVar10,0), lVar17 == 0))
                          goto LAB_0202c700;
                          FUN_03d499ec(lVar17,1,0);
                          lVar10 = FUN_03d468e8(lVar10,0);
                          if (lVar10 == 0) goto LAB_0202c700;
                          FUN_03d49928(lVar10,*(undefined4 *)(lVar19 + 0x28),0);
                        }
                        uVar15 = (ulong)*(uint *)(lVar16 + 0x18);
                        uVar11 = uVar11 + 1;
                      } while ((long)uVar11 < (long)(int)*(uint *)(lVar16 + 0x18));
                      lVar10 = *(long *)(param_1 + 0x20);
                      if (lVar10 == 0) goto LAB_0202c700;
                    }
                    lVar16 = *(long *)(lVar10 + 0x90);
                    if ((lVar16 != 0) && (0 < (int)*(ulong *)(lVar16 + 0x18))) {
                      uVar11 = 0;
                      uVar15 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
                      do {
                        if (uVar15 <= uVar11)
                        goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                        lVar10 = *(long *)(lVar16 + 0x20 + uVar11 * 8);
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8();
                        }
                        uVar15 = FUN_03d4f3bc(lVar10,0,0);
                        if ((uVar15 & 1) != 0) {
                          if ((lVar10 == 0) || (lVar17 = FUN_03d468e8(lVar10,0), lVar17 == 0))
                          goto LAB_0202c700;
                          FUN_03d499ec(lVar17,1,0);
                          lVar10 = FUN_03d468e8(lVar10,0);
                          if (lVar10 == 0) goto LAB_0202c700;
                          FUN_03d49928(lVar10,*(undefined4 *)(lVar19 + 0x28),0);
                        }
                        uVar15 = (ulong)*(uint *)(lVar16 + 0x18);
                        uVar11 = uVar11 + 1;
                      } while ((long)uVar11 < (long)(int)*(uint *)(lVar16 + 0x18));
                      lVar10 = *(long *)(param_1 + 0x20);
                      if (lVar10 == 0) goto LAB_0202c700;
                    }
                    if ((*(long *)(lVar10 + 0xb8) != 0) &&
                       (lVar10 = FUN_03d498b0(*(long *)(lVar10 + 0xb8),0), lVar10 != 0)) {
                      plVar22 = (long *)FUN_03d5845c(lVar10,0);
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
                            lVar16 = *plVar22;
                            lVar10 = *(long *)puVar4;
                            uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
                            if (uVar11 != 0) {
                              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar18 + -2) == lVar10) {
                                  puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                                  goto LAB_0202bcf4;
                                }
                                uVar11 = uVar11 - 1;
                                piVar18 = piVar18 + 4;
                              } while (uVar11 != 0);
                            }
                            puVar12 = (undefined8 *)FUN_01c72498(plVar22,lVar10,0);
LAB_0202bcf4:
                            uVar11 = (*(code *)*puVar12)(plVar22,puVar12[1]);
                            if ((uVar11 & 1) == 0) goto LAB_0202be20;
                            lVar16 = *plVar22;
                            lVar10 = *(long *)puVar4;
                            uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
                            if (uVar11 != 0) {
                              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar18 + -2) == lVar10) {
                                  puVar12 = (undefined8 *)
                                            (lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                                  goto LAB_0202bd54;
                                }
                                uVar11 = uVar11 - 1;
                                piVar18 = piVar18 + 4;
                              } while (uVar11 != 0);
                            }
                            puVar12 = (undefined8 *)FUN_01c72498(plVar22,lVar10,1);
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
                            uVar11 = FUN_0230cff0(plVar13,&local_88,*(undefined8 *)puVar8);
                          } while ((uVar11 & 1) == 0);
                          if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01c5d4a4();
                          }
                          uVar21 = FUN_03d13860(local_88,0);
                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                          }
                          uVar11 = FUN_03d4f3bc(uVar21,0,0);
                        } while ((uVar11 & 1) == 0);
                        if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01c5d4a4();
                        }
                        lVar10 = FUN_03d13860(local_88,0);
                        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01c5d4a4();
                        }
                        lVar10 = FUN_03d4ded0(lVar10,0);
                        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01c5d4a4();
                        }
                        uVar11 = FUN_03157254(lVar10,*(undefined8 *)puVar7,0);
                      } while ((uVar11 & 1) == 0);
                      lVar10 = *(long *)(param_1 + 0x20);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      *(long *)(lVar10 + 0xd0) = local_88;
                      FUN_020ea738(lVar10,0);
LAB_0202be20:
                      puVar4 = PTR_DAT_0422fce8;
                      plVar22 = (long *)thunk_FUN_01c495e4(plVar22,*(undefined8 *)PTR_DAT_0422fce8);
                      if (plVar22 != (long *)0x0) {
                        lVar10 = *plVar22;
                        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                        if (uVar11 != 0) {
                          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                              puVar12 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                              goto LAB_0202be90;
                            }
                            uVar11 = uVar11 - 1;
                            piVar18 = piVar18 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar12 = (undefined8 *)FUN_01c72498(plVar22,*(long *)puVar4,0);
LAB_0202be90:
                        (*(code *)*puVar12)(plVar22,puVar12[1]);
                      }
                      if (*(long *)(param_1 + 0x20) != 0) {
                        if (*(char *)(*(long *)(param_1 + 0x20) + 0x20) != '\0') {
                          if ((**(long **)(*(long *)PTR_DAT_04239450 + 0xb8) == 0) ||
                             (lVar10 = *(long *)(**(long **)(*(long *)PTR_DAT_04239450 + 0xb8) +
                                                0x120), lVar10 == 0)) {
                            uVar21 = 0;
                          }
                          else {
                            uVar21 = *(undefined8 *)(lVar10 + 0x200);
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                          }
                          uVar11 = FUN_03d4dc54(uVar21,0,0);
                          if ((uVar11 & 1) != 0) {
                            if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
                              thunk_FUN_01c1d1e8();
                            }
                            FUN_03d046d0(*(undefined8 *)
                                          System_Func<XRPassCreateInfo,_XRPass>_TypeInfo,0);
                          }
                          if ((*(long *)(param_1 + 0x20) == 0) ||
                             (lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x88), lVar10 == 0))
                          goto LAB_0202c700;
                          if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
                            uVar11 = 0;
                            uVar15 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
                            do {
                              if (uVar15 <= uVar11)
                              goto 
                              I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed
                              ;
                              lVar16 = *(long *)(lVar10 + 0x20 + uVar11 * 8);
                              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                thunk_FUN_01c1d1e8();
                              }
                              uVar15 = FUN_03d4f3bc(lVar16,0,0);
                              if ((uVar15 & 1) != 0) {
                                if (lVar16 == 0) goto LAB_0202c700;
                                FUN_03d136e4(lVar16,uVar21,0);
                              }
                              uVar15 = (ulong)*(uint *)(lVar10 + 0x18);
                              uVar11 = uVar11 + 1;
                            } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
                          }
                          if ((*(long *)(param_1 + 0x20) == 0) ||
                             (lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x90), lVar10 == 0))
                          goto LAB_0202c700;
                          if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
                            uVar11 = 0;
                            uVar15 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
                            do {
                              if (uVar15 <= uVar11)
                              goto 
                              I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed
                              ;
                              lVar16 = *(long *)(lVar10 + 0x20 + uVar11 * 8);
                              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                thunk_FUN_01c1d1e8();
                              }
                              uVar15 = FUN_03d4f3bc(lVar16,0,0);
                              if ((uVar15 & 1) != 0) {
                                if (lVar16 == 0) goto LAB_0202c700;
                                FUN_03d136e4(lVar16,uVar21,0);
                              }
                              uVar15 = (ulong)*(uint *)(lVar10 + 0x18);
                              uVar11 = uVar11 + 1;
                            } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
                          }
                        }
                        *(undefined8 *)(param_1 + 0x68) = 0;
                        *puVar1 = 0;
                        *(undefined8 *)(param_1 + 0x78) = 0;
                        *(undefined8 *)(param_1 + 0x70) = 0;
                        do {
                          plVar22 = *(long **)(param_1 + 0x20);
                          if ((plVar22 == (long *)0x0) ||
                             (uVar21 = (**(code **)(*plVar22 + 0x188))
                                                 (plVar22,*(undefined8 *)(*plVar22 + 400)),
                             lVar19 == 0)) goto LAB_0202c700;
                          FUN_0202a780(uVar21,*(undefined8 *)(param_1 + 0x20),
                                       *(undefined4 *)(param_1 + 0x30));
                          FUN_0202a6b0(lVar19,*(undefined8 *)(param_1 + 0x20));
                          uVar14 = *(uint *)(param_1 + 0x34);
                          *(undefined8 *)(param_1 + 0x38) = 0;
                          do {
                            iVar9 = uVar14 + 1;
                            *(int *)(param_1 + 0x34) = iVar9;
LAB_0202c584:
                            if ((*(long *)(param_1 + 0x20) == 0) ||
                               (lVar10 = FUN_020e9968(*(long *)(param_1 + 0x20),0), lVar10 == 0))
                            goto LAB_0202c700;
                            if (*(int *)(lVar10 + 0x18) <= iVar9) {
                              return 0;
                            }
                            if ((*(long *)(param_1 + 0x20) == 0) ||
                               (lVar10 = FUN_020e9968(*(long *)(param_1 + 0x20),0), lVar10 == 0))
                            goto LAB_0202c700;
                            uVar14 = *(uint *)(param_1 + 0x34);
                            if (*(uint *)(lVar10 + 0x18) <= uVar14)
                            goto 
                            I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                            lVar10 = *(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
                            if (lVar10 == 0) goto LAB_0202c700;
                          } while (*(int *)(lVar10 + 0x10) != *(int *)(param_1 + 0x30));
                          if ((*(long *)(param_1 + 0x20) == 0) ||
                             (lVar10 = FUN_020e9968(*(long *)(param_1 + 0x20),0), lVar10 == 0))
                          goto LAB_0202c700;
                          if (*(uint *)(lVar10 + 0x18) <= *(uint *)(param_1 + 0x34)) {
I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed:
                    /* WARNING: Subroutine does not return */
                            FUN_01c5d4ac();
                          }
                          lVar16 = *(long *)(lVar10 + (long)(int)*(uint *)(param_1 + 0x34) * 8 +
                                            0x20);
                          if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0))
                          goto LAB_0202c700;
                          if (*(int *)(lVar16 + 0x18) == 0)
                          goto 
                          I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                          if (*(long *)(lVar16 + 0x20) == 0) goto LAB_0202c700;
                          plVar22 = *(long **)(param_1 + 0x20);
                          if (*(char *)(*(long *)(lVar16 + 0x20) + 0x20) != '\0') {
                            if (lVar19 == 0) goto LAB_0202c700;
                            FUN_0202a780(lVar10,plVar22,*(undefined4 *)(param_1 + 0x30));
                            goto LAB_0202c224;
                          }
                          if ((plVar22 == (long *)0x0) ||
                             (lVar10 = FUN_020e9968(plVar22,0), lVar10 == 0)) goto LAB_0202c700;
                          if (*(uint *)(lVar10 + 0x18) <= *(uint *)(param_1 + 0x34))
                          goto 
                          I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0202c700;
                          (**(code **)(*plVar22 + 0x1e8))
                                    (plVar22,*(undefined8 *)
                                              (lVar10 + (long)(int)*(uint *)(param_1 + 0x34) * 8 +
                                              0x20),
                                     *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78),
                                     *(undefined8 *)(*plVar22 + 0x1f0));
                          lVar10 = *(long *)(param_1 + 0x20);
                          *(undefined8 *)(param_1 + 0x38) = 0;
                          if ((lVar10 == 0) || (lVar16 = FUN_020e9968(lVar10,0), lVar16 == 0))
                          goto LAB_0202c700;
                          if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0x34))
                          goto 
                          I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                          lVar16 = *(long *)(lVar16 + (long)(int)*(uint *)(param_1 + 0x34) * 8 +
                                            0x20);
                          if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0))
                          goto LAB_0202c700;
                          if (*(int *)(lVar16 + 0x18) == 0)
                          goto 
                          I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                          if (*(long *)(lVar16 + 0x20) == 0) goto LAB_0202c700;
                          uVar11 = thunk_FUN_03152714(*(undefined8 *)
                                                       (*(long *)(lVar16 + 0x20) + 0x10),
                                                      *(undefined8 *)puVar5,0);
                          if ((uVar11 & 1) == 0) {
LAB_0202c3d4:
                            if ((*(long *)(param_1 + 0x20) == 0) ||
                               (lVar16 = FUN_020e9968(*(long *)(param_1 + 0x20),0), lVar16 == 0))
                            goto LAB_0202c700;
                            if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0x34))
                            goto 
                            I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                            lVar16 = *(long *)(lVar16 + (long)(int)*(uint *)(param_1 + 0x34) * 8 +
                                              0x20);
                            if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0))
                            goto LAB_0202c700;
                            if (*(int *)(lVar16 + 0x18) == 0)
                            goto 
                            I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                            lVar16 = *(long *)(lVar16 + 0x20);
                          }
                          else {
                            if ((*(long *)(param_1 + 0x20) == 0) ||
                               (lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x78), lVar16 == 0))
                            goto LAB_0202c700;
                            uVar11 = FUN_031529f8(*(undefined8 *)(lVar16 + 0x10),
                                                  *(undefined8 *)puVar5,0);
                            if ((uVar11 & 1) == 0) goto LAB_0202c3d4;
                            if (*(long *)(param_1 + 0x20) == 0) goto LAB_0202c700;
                            lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x78);
                          }
                          if (lVar16 == 0) goto LAB_0202c700;
                          *(undefined8 *)(lVar10 + 0xa8) = *(undefined8 *)(lVar16 + 0x10);
                          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0202c700;
                          uVar11 = FUN_031529f8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8),
                                                *(undefined8 *)puVar5,0);
                          if ((uVar11 & 1) != 0) {
                            if (*(long *)(param_1 + 0x20) != 0) {
                              uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
                              if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
                                thunk_FUN_01c1d1e8();
                              }
                              FUN_021f45cc(&local_80,uVar21,
                                           *(undefined8 *)System_Func<Triangle,_bool>_TypeInfo);
                              puVar5 = System_Func<Type,_JsonContract>_TypeInfo;
                              *(undefined8 *)(param_1 + 0x48) = uStack_78;
                              *(undefined8 *)(param_1 + 0x40) = local_80;
                              *(undefined8 *)(param_1 + 0x58) = uStack_68;
                              *(undefined8 *)(param_1 + 0x50) = uStack_70;
                              uStack_a8 = uStack_78;
                              local_b0 = local_80;
                              uStack_98 = uStack_68;
                              uStack_a0 = uStack_70;
                              uVar21 = thunk_FUN_01c49334(*(undefined8 *)puVar5,&local_b0);
                              *(undefined8 *)(param_1 + 0x18) = uVar21;
                              *(undefined4 *)(param_1 + 0x10) = 1;
                              return 1;
                            }
                            goto LAB_0202c700;
                          }
LAB_0202c440:
                          lVar10 = *(long *)(param_1 + 0x20);
                          if ((lVar10 == 0) || (lVar16 = FUN_020e9968(lVar10,0), lVar16 == 0))
                          goto LAB_0202c700;
                          if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0x34))
                          goto 
                          I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                          lVar16 = *(long *)(lVar16 + (long)(int)*(uint *)(param_1 + 0x34) * 8 +
                                            0x20);
                          if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0))
                          goto LAB_0202c700;
                          if (*(int *)(lVar16 + 0x18) == 0)
                          goto 
                          I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                          if (*(long *)(lVar16 + 0x20) == 0) goto LAB_0202c700;
                          uVar11 = thunk_FUN_03152714(*(undefined8 *)
                                                       (*(long *)(lVar16 + 0x20) + 0x18),
                                                      *(undefined8 *)puVar5,0);
                          if ((uVar11 & 1) == 0) {
LAB_0202c4d8:
                            if ((*(long *)(param_1 + 0x20) == 0) ||
                               (lVar16 = FUN_020e9968(*(long *)(param_1 + 0x20),0), lVar16 == 0))
                            goto LAB_0202c700;
                            if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0x34))
                            goto 
                            I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                            lVar16 = *(long *)(lVar16 + (long)(int)*(uint *)(param_1 + 0x34) * 8 +
                                              0x20);
                            if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0))
                            goto LAB_0202c700;
                            if (*(int *)(lVar16 + 0x18) == 0)
                            goto 
                            I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                            lVar16 = *(long *)(lVar16 + 0x20);
                          }
                          else {
                            if ((*(long *)(param_1 + 0x20) == 0) ||
                               (lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x78), lVar16 == 0))
                            goto LAB_0202c700;
                            uVar11 = FUN_031529f8(*(undefined8 *)(lVar16 + 0x18),
                                                  *(undefined8 *)puVar5,0);
                            if ((uVar11 & 1) == 0) goto LAB_0202c4d8;
                            if (*(long *)(param_1 + 0x20) == 0) goto LAB_0202c700;
                            lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x78);
                          }
                          if (lVar16 == 0) goto LAB_0202c700;
                          *(undefined8 *)(lVar10 + 0xa0) = *(undefined8 *)(lVar16 + 0x18);
                          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0202c700;
                          uVar11 = FUN_031529f8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0),
                                                *(undefined8 *)puVar5,0);
                        } while ((uVar11 & 1) == 0);
                        if (*(long *)(param_1 + 0x20) != 0) {
                          uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
                          if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                          }
                          uVar11 = FUN_03d4dc54(uVar21,0,0);
                          lVar10 = *(long *)(param_1 + 0x20);
                          if ((uVar11 & 1) == 0) {
                            if ((lVar10 != 0) && (*(long *)(lVar10 + 0x60) != 0)) {
                              uVar20 = *(undefined8 *)(lVar10 + 0xa0);
                              uVar21 = FUN_03d498b0(*(long *)(lVar10 + 0x60),0);
                              if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
                                thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042394b8);
                              }
                              FUN_03a1e7c0(&local_b0,uVar20,uVar21,0,1,0);
                              puVar5 = PTR_DAT_042394c8;
                              uStack_78 = uStack_a8;
                              local_80 = local_b0;
                              uStack_68 = uStack_98;
                              uStack_70 = uStack_a0;
                              *(undefined8 *)(param_1 + 0x68) = uStack_a8;
                              *(undefined8 *)(param_1 + 0x60) = local_b0;
                              *(undefined8 *)(param_1 + 0x78) = uStack_98;
                              *(undefined8 *)(param_1 + 0x70) = uStack_a0;
                              uVar21 = thunk_FUN_01c49334(*(undefined8 *)puVar5,&local_b0);
                              *(undefined8 *)(param_1 + 0x18) = uVar21;
                              *(undefined4 *)(param_1 + 0x10) = 2;
                              return 1;
                            }
                          }
                          else if (lVar19 != 0) goto LAB_0202c22c;
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
    lVar10 = param_1 + 0x60;
    iVar9 = FUN_026c4b80(lVar10,*(undefined8 *)PTR_DAT_042394c0);
    puVar5 = PTR_DAT_04239428;
    if (iVar9 == 1) {
      uVar21 = FUN_026c4b1c(lVar10,*(undefined8 *)PTR_DAT_04239428);
      puVar3 = PTR_DAT_0422f9e8;
      if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
      }
      uVar11 = FUN_03d4f3bc(uVar21,0,0);
      if ((uVar11 & 1) != 0) {
        uVar21 = FUN_026c4b1c(lVar10,*(undefined8 *)puVar5);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        FUN_03d4ea0c(uVar21,0);
      }
    }
  }
  else if (iVar9 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar19 == 0) goto LAB_0202c700;
    uVar11 = FUN_0202a494(lVar10,*(undefined8 *)(param_1 + 0x20));
    if ((uVar11 & 1) != 0) {
      uStack_a8 = *(undefined8 *)(param_1 + 0x48);
      local_b0 = *(undefined8 *)(param_1 + 0x40);
      uStack_98 = *(undefined8 *)(param_1 + 0x58);
      uStack_a0 = *(undefined8 *)(param_1 + 0x50);
      if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
      FUN_021f5250(&local_80,*(undefined8 *)System_Func<Type,_Func<object[],_object>>_TypeInfo);
      return 0;
    }
    puVar1 = (undefined8 *)(param_1 + 0x40);
    uVar11 = FUN_026c492c(puVar1,*(undefined8 *)System_Func<Type,_IEnumerable<MemberInfo>>_TypeInfo)
    ;
    if (((uVar11 & 1) != 0) &&
       (iVar9 = FUN_026c4b80(puVar1,*(undefined8 *)System_Func<Type,_bool>_TypeInfo), iVar9 == 1)) {
      uVar21 = FUN_026c4b1c(puVar1,*(undefined8 *)
                                    System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo);
      if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar21 = FUN_02398da0(uVar21,*(undefined8 *)System_Func<Type,_ReflectionObject>_TypeInfo);
      *(undefined8 *)(param_1 + 0x38) = uVar21;
      uStack_a8 = *(undefined8 *)(param_1 + 0x48);
      local_b0 = *puVar1;
      uStack_98 = *(undefined8 *)(param_1 + 0x58);
      uStack_a0 = *(undefined8 *)(param_1 + 0x50);
      if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
      FUN_021f5250(&local_80,*(undefined8 *)System_Func<Type,_Func<object[],_object>>_TypeInfo);
      *(undefined8 *)(param_1 + 0x48) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      goto LAB_0202c440;
    }
  }
  else {
    if (iVar9 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar3 = PTR_DAT_0422f9e8;
    uVar21 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar11 = FUN_03d4dc54(uVar21,0,0);
    if ((uVar11 & 1) == 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_020e9b4c(*(long *)(param_1 + 0x20),0);
        lVar10 = *(long *)(param_1 + 0x20);
        if (lVar10 != 0) {
          uVar21 = *(undefined8 *)(lVar10 + 0xb8);
          *(undefined4 *)(lVar10 + 0xdc) = *(undefined4 *)(param_1 + 0x30);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_03d4f3bc(uVar21,0,0);
          if ((uVar11 & 1) == 0) {
LAB_0202b740:
            iVar9 = 0;
            *(undefined4 *)(param_1 + 0x34) = 0;
            goto LAB_0202c584;
          }
          if (*(long *)(param_1 + 0x20) != 0) {
            uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03d4ea0c(uVar21,0);
            lVar10 = *(long *)(param_1 + 0x20);
            if (lVar10 != 0) {
              *(undefined8 *)(lVar10 + 0xb8) = 0;
              *(undefined8 *)(lVar10 + 0x88) = 0;
              *(undefined8 *)(lVar10 + 0x90) = 0;
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
    if (lVar19 == 0) goto LAB_0202c700;
  }
LAB_0202c224:
  lVar10 = *(long *)(param_1 + 0x20);
LAB_0202c22c:
  FUN_0202a6b0(lVar19,lVar10);
  return 0;
}


