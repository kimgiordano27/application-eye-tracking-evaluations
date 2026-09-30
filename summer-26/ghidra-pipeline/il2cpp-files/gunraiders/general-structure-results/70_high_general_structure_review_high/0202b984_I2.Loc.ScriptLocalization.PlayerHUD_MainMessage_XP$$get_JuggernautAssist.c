/*
FUNCTION_NAME: I2.Loc.ScriptLocalization.PlayerHUD_MainMessage_XP$$get_JuggernautAssist
ENTRY_POINT: 0202b984
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

undefined4 I2_Loc_ScriptLocalization_PlayerHUD_MainMessage_XP__get_JuggernautAssist(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(param_1);
    param_1 = *unaff_x28;
  }
  uVar16 = **(undefined8 **)(param_1 + 0xb8);
  uVar6 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<Vector4,_Vector2>_TypeInfo);
  FUN_02b67c90(uVar6,uVar16,*(undefined8 *)System_Func<WingedEdge,_bool>_TypeInfo,0);
  *(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 8) = uVar6;
  uVar6 = FUN_02358a2c();
  uVar6 = FUN_02355b80(uVar6,*(undefined8 *)System_Func<Vector2Int,_int>_TypeInfo);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
  lVar17 = *(long *)(unaff_x19 + 0x20);
  if ((lVar17 != 0) && (*(long *)(lVar17 + 0xb8) != 0)) {
    uVar6 = FUN_02363904(*(long *)(lVar17 + 0xb8),1,
                         *(undefined8 *)System_Func<Volume,_bool>_TypeInfo);
    lVar12 = *unaff_x28;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar12);
      lVar12 = *unaff_x28;
    }
    lVar15 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
    if (lVar15 == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar12);
        lVar12 = *unaff_x28;
      }
      uVar16 = **(undefined8 **)(lVar12 + 0xb8);
      lVar15 = thunk_FUN_01c496e0(*(undefined8 *)System_Func<Vertex,_Vector3>_TypeInfo);
      FUN_02b67c90(lVar15,uVar16,*(undefined8 *)System_Func<WingedEdge,_Edge>_TypeInfo,0);
      *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10) = lVar15;
    }
    uVar6 = FUN_02358a2c(uVar6,lVar15,*(undefined8 *)System_Func<Vector4,_float>_TypeInfo);
    uVar6 = FUN_02355b80(uVar6,*(undefined8 *)System_Func<Vector3,_float>_TypeInfo);
    *(undefined8 *)(lVar17 + 0x90) = uVar6;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_03d4f3bc(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      plVar8 = *(long **)(unaff_x19 + 0x20);
      if (plVar8 == (long *)0x0) goto LAB_0202c700;
      (**(code **)(*plVar8 + 0x1d8))
                (plVar8,*(undefined8 *)(unaff_x19 + 0x38),*(undefined4 *)(unaff_x19 + 0x30),
                 *(undefined8 *)(*plVar8 + 0x1e0));
    }
    lVar17 = *(long *)(unaff_x19 + 0x20);
    if (lVar17 != 0) {
      lVar12 = *(long *)(lVar17 + 0x88);
      if ((lVar12 != 0) && (0 < (int)*(ulong *)(lVar12 + 0x18))) {
        uVar7 = 0;
        uVar13 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
        do {
          if (uVar13 <= uVar7)
          goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
          lVar17 = *(long *)(lVar12 + 0x20 + uVar7 * 8);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = FUN_03d4f3bc(lVar17,0,0);
          if ((uVar13 & 1) != 0) {
            if ((lVar17 == 0) || (lVar15 = FUN_03d468e8(lVar17,0), lVar15 == 0)) goto LAB_0202c700;
            FUN_03d499ec(lVar15,1,0);
            lVar17 = FUN_03d468e8(lVar17,0);
            if (lVar17 == 0) goto LAB_0202c700;
            FUN_03d49928(lVar17,*(undefined4 *)(unaff_x20 + 0x28),0);
          }
          uVar13 = (ulong)*(uint *)(lVar12 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar12 + 0x18));
        lVar17 = *(long *)(unaff_x19 + 0x20);
        if (lVar17 == 0) goto LAB_0202c700;
      }
      lVar12 = *(long *)(lVar17 + 0x90);
      if ((lVar12 != 0) && (0 < (int)*(ulong *)(lVar12 + 0x18))) {
        uVar7 = 0;
        uVar13 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
        do {
          if (uVar13 <= uVar7)
          goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
          lVar17 = *(long *)(lVar12 + 0x20 + uVar7 * 8);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = FUN_03d4f3bc(lVar17,0,0);
          if ((uVar13 & 1) != 0) {
            if ((lVar17 == 0) || (lVar15 = FUN_03d468e8(lVar17,0), lVar15 == 0)) goto LAB_0202c700;
            FUN_03d499ec(lVar15,1,0);
            lVar17 = FUN_03d468e8(lVar17,0);
            if (lVar17 == 0) goto LAB_0202c700;
            FUN_03d49928(lVar17,*(undefined4 *)(unaff_x20 + 0x28),0);
          }
          uVar13 = (ulong)*(uint *)(lVar12 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar12 + 0x18));
        lVar17 = *(long *)(unaff_x19 + 0x20);
        if (lVar17 == 0) goto LAB_0202c700;
      }
      if ((*(long *)(lVar17 + 0xb8) != 0) &&
         (lVar17 = FUN_03d498b0(*(long *)(lVar17 + 0xb8),0), lVar17 != 0)) {
        plVar8 = (long *)FUN_03d5845c(lVar17,0);
        puVar5 = System_Func<Vector2,_Vector2>_TypeInfo;
        puVar4 = System_Func<Triangle,_IEnumerable<int>>_TypeInfo;
        puVar3 = PTR_DAT_042314b0;
        puVar2 = PTR_DAT_04230960;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        do {
          do {
            do {
              lVar12 = *plVar8;
              lVar17 = *(long *)puVar2;
              uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar7 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar17) {
                    puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_0202bcf4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar7 != 0);
              }
              puVar9 = (undefined8 *)FUN_01c72498(plVar8,lVar17,0);
LAB_0202bcf4:
              uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
              if ((uVar7 & 1) == 0) goto LAB_0202be20;
              lVar12 = *plVar8;
              lVar17 = *(long *)puVar2;
              uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar7 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar17) {
                    puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_0202bd54;
                  }
                  uVar7 = uVar7 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar7 != 0);
              }
              puVar9 = (undefined8 *)FUN_01c72498(plVar8,lVar17,1);
LAB_0202bd54:
              plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
              {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748();
              }
              uVar7 = FUN_0230cff0(plVar10,&stack0x00000028,*(undefined8 *)puVar5);
            } while ((uVar7 & 1) == 0);
            if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar6 = FUN_03d13860(in_stack_00000028,0);
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar7 = FUN_03d4f3bc(uVar6,0,0);
          } while ((uVar7 & 1) == 0);
          if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar17 = FUN_03d13860(in_stack_00000028,0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar17 = FUN_03d4ded0(lVar17,0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar7 = FUN_03157254(lVar17,*(undefined8 *)puVar4,0);
        } while ((uVar7 & 1) == 0);
        lVar17 = *(long *)(unaff_x19 + 0x20);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(long *)(lVar17 + 0xd0) = in_stack_00000028;
        FUN_020ea738(lVar17,0);
LAB_0202be20:
        puVar2 = PTR_DAT_0422fce8;
        plVar8 = (long *)thunk_FUN_01c495e4(plVar8,*(undefined8 *)PTR_DAT_0422fce8);
        if (plVar8 != (long *)0x0) {
          lVar17 = *plVar8;
          uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar7 != 0) {
            piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0202be90;
              }
              uVar7 = uVar7 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar2,0);
LAB_0202be90:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x20) != '\0') {
            if ((**(long **)(*(long *)PTR_DAT_04239450 + 0xb8) == 0) ||
               (lVar17 = *(long *)(**(long **)(*(long *)PTR_DAT_04239450 + 0xb8) + 0x120),
               lVar17 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined8 *)(lVar17 + 0x200);
            }
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar7 = FUN_03d4dc54(uVar6,0,0);
            if ((uVar7 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              FUN_03d046d0(*(undefined8 *)System_Func<XRPassCreateInfo,_XRPass>_TypeInfo,0);
            }
            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
               (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x88), lVar17 == 0))
            goto LAB_0202c700;
            if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
              uVar7 = 0;
              uVar13 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
              do {
                if (uVar13 <= uVar7)
                goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                lVar12 = *(long *)(lVar17 + 0x20 + uVar7 * 8);
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                uVar13 = FUN_03d4f3bc(lVar12,0,0);
                if ((uVar13 & 1) != 0) {
                  if (lVar12 == 0) goto LAB_0202c700;
                  FUN_03d136e4(lVar12,uVar6,0);
                }
                uVar13 = (ulong)*(uint *)(lVar17 + 0x18);
                uVar7 = uVar7 + 1;
              } while ((long)uVar7 < (long)(int)*(uint *)(lVar17 + 0x18));
            }
            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
               (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x90), lVar17 == 0))
            goto LAB_0202c700;
            if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
              uVar7 = 0;
              uVar13 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
              do {
                if (uVar13 <= uVar7)
                goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
                lVar12 = *(long *)(lVar17 + 0x20 + uVar7 * 8);
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                uVar13 = FUN_03d4f3bc(lVar12,0,0);
                if ((uVar13 & 1) != 0) {
                  if (lVar12 == 0) goto LAB_0202c700;
                  FUN_03d136e4(lVar12,uVar6,0);
                }
                uVar13 = (ulong)*(uint *)(lVar17 + 0x18);
                uVar7 = uVar7 + 1;
              } while ((long)uVar7 < (long)(int)*(uint *)(lVar17 + 0x18));
            }
          }
          unaff_x21[1] = 0;
          *unaff_x21 = 0;
          unaff_x21[3] = 0;
          unaff_x21[2] = 0;
          do {
            plVar8 = *(long **)(unaff_x19 + 0x20);
            if ((plVar8 == (long *)0x0) ||
               (uVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400)),
               unaff_x20 == 0)) goto LAB_0202c700;
            FUN_0202a780(uVar6,*(undefined8 *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x19 + 0x30));
            FUN_0202a6b0();
            uVar11 = *(uint *)(unaff_x19 + 0x34);
            *(undefined8 *)(unaff_x19 + 0x38) = 0;
            do {
              *(uint *)(unaff_x19 + 0x34) = uVar11 + 1;
              if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                 (lVar17 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar17 == 0))
              goto LAB_0202c700;
              if (*(int *)(lVar17 + 0x18) <= (int)(uVar11 + 1)) {
                return 0;
              }
              if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                 (lVar17 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar17 == 0))
              goto LAB_0202c700;
              uVar11 = *(uint *)(unaff_x19 + 0x34);
              if (*(uint *)(lVar17 + 0x18) <= uVar11)
              goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
              lVar17 = *(long *)(lVar17 + (long)(int)uVar11 * 8 + 0x20);
              if (lVar17 == 0) goto LAB_0202c700;
            } while (*(int *)(lVar17 + 0x10) != *(int *)(unaff_x19 + 0x30));
            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
               (lVar17 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar17 == 0))
            goto LAB_0202c700;
            if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x34)) {
I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed:
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            lVar12 = *(long *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
            if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0))
            goto LAB_0202c700;
            if (*(int *)(lVar12 + 0x18) == 0)
            goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
            if (*(long *)(lVar12 + 0x20) == 0) goto LAB_0202c700;
            plVar8 = *(long **)(unaff_x19 + 0x20);
            if (*(char *)(*(long *)(lVar12 + 0x20) + 0x20) != '\0') {
              if (unaff_x20 == 0) goto LAB_0202c700;
              FUN_0202a780(lVar17,plVar8,*(undefined4 *)(unaff_x19 + 0x30));
              goto LAB_0202c228;
            }
            if ((plVar8 == (long *)0x0) || (lVar17 = FUN_020e9968(plVar8,0), lVar17 == 0))
            goto LAB_0202c700;
            if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
            goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
            (**(code **)(*plVar8 + 0x1e8))
                      (plVar8,*(undefined8 *)
                               (lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20),
                       *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x78),
                       *(undefined8 *)(*plVar8 + 0x1f0));
            lVar17 = *(long *)(unaff_x19 + 0x20);
            *(undefined8 *)(unaff_x19 + 0x38) = 0;
            if ((lVar17 == 0) || (lVar12 = FUN_020e9968(lVar17,0), lVar12 == 0)) goto LAB_0202c700;
            if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
            goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
            lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
            if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0))
            goto LAB_0202c700;
            if (*(int *)(lVar12 + 0x18) == 0)
            goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
            if (*(long *)(lVar12 + 0x20) == 0) goto LAB_0202c700;
            uVar7 = thunk_FUN_03152714(*(undefined8 *)(*(long *)(lVar12 + 0x20) + 0x10),*unaff_x26,0
                                      );
            if ((uVar7 & 1) == 0) {
LAB_0202c3d4:
              if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                 (lVar12 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar12 == 0))
              goto LAB_0202c700;
              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
              goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
              lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
              if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0))
              goto LAB_0202c700;
              if (*(int *)(lVar12 + 0x18) == 0)
              goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
              lVar12 = *(long *)(lVar12 + 0x20);
            }
            else {
              if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                 (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78), lVar12 == 0))
              goto LAB_0202c700;
              uVar7 = FUN_031529f8(*(undefined8 *)(lVar12 + 0x10),*unaff_x26,0);
              if ((uVar7 & 1) == 0) goto LAB_0202c3d4;
              if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
              lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78);
            }
            if (lVar12 == 0) goto LAB_0202c700;
            *(undefined8 *)(lVar17 + 0xa8) = *(undefined8 *)(lVar12 + 0x10);
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
            uVar7 = FUN_031529f8(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xa8),*unaff_x26,0);
            if ((uVar7 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x20) != 0) {
                uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xa8);
                if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                FUN_021f45cc(&stack0x00000030,uVar6,
                             *(undefined8 *)System_Func<Triangle,_bool>_TypeInfo);
                puVar2 = System_Func<Type,_JsonContract>_TypeInfo;
                *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000038;
                *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000030;
                *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000048;
                *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000040;
                uVar6 = thunk_FUN_01c49334(*(undefined8 *)puVar2);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
                *(undefined4 *)(unaff_x19 + 0x10) = 1;
                return 1;
              }
              goto LAB_0202c700;
            }
            lVar17 = *(long *)(unaff_x19 + 0x20);
            if ((lVar17 == 0) || (lVar12 = FUN_020e9968(lVar17,0), lVar12 == 0)) goto LAB_0202c700;
            if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
            goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
            lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
            if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0))
            goto LAB_0202c700;
            if (*(int *)(lVar12 + 0x18) == 0)
            goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
            if (*(long *)(lVar12 + 0x20) == 0) goto LAB_0202c700;
            uVar7 = thunk_FUN_03152714(*(undefined8 *)(*(long *)(lVar12 + 0x20) + 0x18),*unaff_x26,0
                                      );
            if ((uVar7 & 1) == 0) {
LAB_0202c4d8:
              if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                 (lVar12 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar12 == 0))
              goto LAB_0202c700;
              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
              goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
              lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
              if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0))
              goto LAB_0202c700;
              if (*(int *)(lVar12 + 0x18) == 0)
              goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
              lVar12 = *(long *)(lVar12 + 0x20);
            }
            else {
              if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                 (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78), lVar12 == 0))
              goto LAB_0202c700;
              uVar7 = FUN_031529f8(*(undefined8 *)(lVar12 + 0x18),*unaff_x26,0);
              if ((uVar7 & 1) == 0) goto LAB_0202c4d8;
              if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
              lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78);
            }
            if (lVar12 == 0) goto LAB_0202c700;
            *(undefined8 *)(lVar17 + 0xa0) = *(undefined8 *)(lVar12 + 0x18);
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
            uVar7 = FUN_031529f8(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xa0),*unaff_x26,0);
          } while ((uVar7 & 1) == 0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x60);
            if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar7 = FUN_03d4dc54(uVar6,0,0);
            lVar17 = *(long *)(unaff_x19 + 0x20);
            if ((uVar7 & 1) == 0) {
              if ((lVar17 != 0) && (*(long *)(lVar17 + 0x60) != 0)) {
                uVar16 = *(undefined8 *)(lVar17 + 0xa0);
                uVar6 = FUN_03d498b0(*(long *)(lVar17 + 0x60),0);
                if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042394b8);
                }
                FUN_03a1e7c0(uVar16,uVar6,0,1,0);
                puVar2 = PTR_DAT_042394c8;
                in_stack_00000038 = in_stack_00000008;
                in_stack_00000030 = in_stack_00000000;
                in_stack_00000048 = in_stack_00000018;
                in_stack_00000040 = in_stack_00000010;
                *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000008;
                *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000000;
                *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000018;
                *(undefined8 *)(unaff_x19 + 0x70) = in_stack_00000010;
                uVar6 = thunk_FUN_01c49334(*(undefined8 *)puVar2);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
                *(undefined4 *)(unaff_x19 + 0x10) = 2;
                return 1;
              }
            }
            else if (unaff_x20 != 0) {
LAB_0202c228:
              FUN_0202a6b0();
              return 0;
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


