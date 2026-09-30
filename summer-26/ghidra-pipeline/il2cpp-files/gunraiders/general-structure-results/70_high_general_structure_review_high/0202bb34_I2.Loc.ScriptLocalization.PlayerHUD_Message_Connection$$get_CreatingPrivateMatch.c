/*
FUNCTION_NAME: I2.Loc.ScriptLocalization.PlayerHUD_Message_Connection$$get_CreatingPrivateMatch
ENTRY_POINT: 0202bb34
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_16
*/


/* WARNING: Removing unreachable block (ram,0x0202bea8) */
/* WARNING: Removing unreachable block (ram,0x0202c058) */

undefined4 I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_CreatingPrivateMatch(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong in_x9;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 *unaff_x21;
  long lVar17;
  long unaff_x23;
  ulong unaff_x24;
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
  
  uVar13 = in_x9 & 0xffffffff;
  do {
    if (uVar13 <= unaff_x24)
    goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
    lVar17 = *(long *)(unaff_x23 + 0x20 + unaff_x24 * 8);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar13 = FUN_03d4f3bc(lVar17,0,0);
    if ((uVar13 & 1) != 0) {
      if ((lVar17 == 0) || (lVar6 = FUN_03d468e8(lVar17,0), lVar6 == 0)) goto LAB_0202c700;
      FUN_03d499ec(lVar6,1,0);
      lVar17 = FUN_03d468e8(lVar17,0);
      if (lVar17 == 0) goto LAB_0202c700;
      FUN_03d49928(lVar17,*(undefined4 *)(unaff_x20 + 0x28),0);
    }
    uVar13 = (ulong)*(uint *)(unaff_x23 + 0x18);
    unaff_x24 = unaff_x24 + 1;
  } while ((long)unaff_x24 < (long)(int)*(uint *)(unaff_x23 + 0x18));
  lVar17 = *(long *)(unaff_x19 + 0x20);
  if (lVar17 != 0) {
    lVar6 = *(long *)(lVar17 + 0x90);
    if ((lVar6 != 0) && (0 < (int)*(ulong *)(lVar6 + 0x18))) {
      uVar13 = 0;
      uVar14 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar13)
        goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
        lVar17 = *(long *)(lVar6 + 0x20 + uVar13 * 8);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar14 = FUN_03d4f3bc(lVar17,0,0);
        if ((uVar14 & 1) != 0) {
          if ((lVar17 == 0) || (lVar7 = FUN_03d468e8(lVar17,0), lVar7 == 0)) goto LAB_0202c700;
          FUN_03d499ec(lVar7,1,0);
          lVar17 = FUN_03d468e8(lVar17,0);
          if (lVar17 == 0) goto LAB_0202c700;
          FUN_03d49928(lVar17,*(undefined4 *)(unaff_x20 + 0x28),0);
        }
        uVar14 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)(int)*(uint *)(lVar6 + 0x18));
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
            lVar6 = *plVar8;
            lVar17 = *(long *)puVar2;
            uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar17) {
                  puVar9 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_0202bcf4;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar8,lVar17,0);
LAB_0202bcf4:
            uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            if ((uVar13 & 1) == 0) goto LAB_0202be20;
            lVar6 = *plVar8;
            lVar17 = *(long *)puVar2;
            uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar17) {
                  puVar9 = (undefined8 *)(lVar6 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_0202bd54;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
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
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748();
            }
            uVar13 = FUN_0230cff0(plVar10,&stack0x00000028,*(undefined8 *)puVar5);
          } while ((uVar13 & 1) == 0);
          if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar11 = FUN_03d13860(in_stack_00000028,0);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = FUN_03d4f3bc(uVar11,0,0);
        } while ((uVar13 & 1) == 0);
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
        uVar13 = FUN_03157254(lVar17,*(undefined8 *)puVar4,0);
      } while ((uVar13 & 1) == 0);
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
        uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0202be90;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar2,0);
LAB_0202be90:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x20) != '\0') {
          if ((**(long **)(*(long *)PTR_DAT_04239450 + 0xb8) == 0) ||
             (lVar17 = *(long *)(**(long **)(*(long *)PTR_DAT_04239450 + 0xb8) + 0x120), lVar17 == 0
             )) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(undefined8 *)(lVar17 + 0x200);
          }
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = FUN_03d4dc54(uVar11,0,0);
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03d046d0(*(undefined8 *)System_Func<XRPassCreateInfo,_XRPass>_TypeInfo,0);
          }
          if ((*(long *)(unaff_x19 + 0x20) == 0) ||
             (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x88), lVar17 == 0))
          goto LAB_0202c700;
          if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
            uVar13 = 0;
            uVar14 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
            do {
              if (uVar14 <= uVar13)
              goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
              lVar6 = *(long *)(lVar17 + 0x20 + uVar13 * 8);
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar14 = FUN_03d4f3bc(lVar6,0,0);
              if ((uVar14 & 1) != 0) {
                if (lVar6 == 0) goto LAB_0202c700;
                FUN_03d136e4(lVar6,uVar11,0);
              }
              uVar14 = (ulong)*(uint *)(lVar17 + 0x18);
              uVar13 = uVar13 + 1;
            } while ((long)uVar13 < (long)(int)*(uint *)(lVar17 + 0x18));
          }
          if ((*(long *)(unaff_x19 + 0x20) == 0) ||
             (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x90), lVar17 == 0))
          goto LAB_0202c700;
          if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
            uVar13 = 0;
            uVar14 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
            do {
              if (uVar14 <= uVar13)
              goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
              lVar6 = *(long *)(lVar17 + 0x20 + uVar13 * 8);
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar14 = FUN_03d4f3bc(lVar6,0,0);
              if ((uVar14 & 1) != 0) {
                if (lVar6 == 0) goto LAB_0202c700;
                FUN_03d136e4(lVar6,uVar11,0);
              }
              uVar14 = (ulong)*(uint *)(lVar17 + 0x18);
              uVar13 = uVar13 + 1;
            } while ((long)uVar13 < (long)(int)*(uint *)(lVar17 + 0x18));
          }
        }
        unaff_x21[1] = 0;
        *unaff_x21 = 0;
        unaff_x21[3] = 0;
        unaff_x21[2] = 0;
        do {
          plVar8 = *(long **)(unaff_x19 + 0x20);
          if ((plVar8 == (long *)0x0) ||
             (uVar11 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400)),
             unaff_x20 == 0)) goto LAB_0202c700;
          FUN_0202a780(uVar11,*(undefined8 *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x19 + 0x30));
          FUN_0202a6b0();
          uVar12 = *(uint *)(unaff_x19 + 0x34);
          *(undefined8 *)(unaff_x19 + 0x38) = 0;
          do {
            *(uint *)(unaff_x19 + 0x34) = uVar12 + 1;
            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
               (lVar17 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar17 == 0))
            goto LAB_0202c700;
            if (*(int *)(lVar17 + 0x18) <= (int)(uVar12 + 1)) {
              return 0;
            }
            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
               (lVar17 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar17 == 0))
            goto LAB_0202c700;
            uVar12 = *(uint *)(unaff_x19 + 0x34);
            if (*(uint *)(lVar17 + 0x18) <= uVar12)
            goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
            lVar17 = *(long *)(lVar17 + (long)(int)uVar12 * 8 + 0x20);
            if (lVar17 == 0) goto LAB_0202c700;
          } while (*(int *)(lVar17 + 0x10) != *(int *)(unaff_x19 + 0x30));
          if ((*(long *)(unaff_x19 + 0x20) == 0) ||
             (lVar17 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar17 == 0)) goto LAB_0202c700;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x34)) {
I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          lVar6 = *(long *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
          if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x18), lVar6 == 0)) goto LAB_0202c700;
          if (*(int *)(lVar6 + 0x18) == 0)
          goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
          if (*(long *)(lVar6 + 0x20) == 0) goto LAB_0202c700;
          plVar8 = *(long **)(unaff_x19 + 0x20);
          if (*(char *)(*(long *)(lVar6 + 0x20) + 0x20) != '\0') {
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
          if ((lVar17 == 0) || (lVar6 = FUN_020e9968(lVar17,0), lVar6 == 0)) goto LAB_0202c700;
          if (*(uint *)(lVar6 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
          goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
          lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
          if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x18), lVar6 == 0)) goto LAB_0202c700;
          if (*(int *)(lVar6 + 0x18) == 0)
          goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
          if (*(long *)(lVar6 + 0x20) == 0) goto LAB_0202c700;
          uVar13 = thunk_FUN_03152714(*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x10),*unaff_x26,0);
          if ((uVar13 & 1) == 0) {
LAB_0202c3d4:
            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
               (lVar6 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar6 == 0)) goto LAB_0202c700;
            if (*(uint *)(lVar6 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
            goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
            lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
            if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x18), lVar6 == 0)) goto LAB_0202c700;
            if (*(int *)(lVar6 + 0x18) == 0)
            goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
            lVar6 = *(long *)(lVar6 + 0x20);
          }
          else {
            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
               (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78), lVar6 == 0))
            goto LAB_0202c700;
            uVar13 = FUN_031529f8(*(undefined8 *)(lVar6 + 0x10),*unaff_x26,0);
            if ((uVar13 & 1) == 0) goto LAB_0202c3d4;
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
            lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78);
          }
          if (lVar6 == 0) goto LAB_0202c700;
          *(undefined8 *)(lVar17 + 0xa8) = *(undefined8 *)(lVar6 + 0x10);
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
          uVar13 = FUN_031529f8(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xa8),*unaff_x26,0);
          if ((uVar13 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              uVar11 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xa8);
              if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              FUN_021f45cc(&stack0x00000030,uVar11,
                           *(undefined8 *)System_Func<Triangle,_bool>_TypeInfo);
              puVar2 = System_Func<Type,_JsonContract>_TypeInfo;
              *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000038;
              *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000030;
              *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000048;
              *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000040;
              uVar11 = thunk_FUN_01c49334(*(undefined8 *)puVar2);
              *(undefined8 *)(unaff_x19 + 0x18) = uVar11;
              *(undefined4 *)(unaff_x19 + 0x10) = 1;
              return 1;
            }
            goto LAB_0202c700;
          }
          lVar17 = *(long *)(unaff_x19 + 0x20);
          if ((lVar17 == 0) || (lVar6 = FUN_020e9968(lVar17,0), lVar6 == 0)) goto LAB_0202c700;
          if (*(uint *)(lVar6 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
          goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
          lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
          if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x18), lVar6 == 0)) goto LAB_0202c700;
          if (*(int *)(lVar6 + 0x18) == 0)
          goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
          if (*(long *)(lVar6 + 0x20) == 0) goto LAB_0202c700;
          uVar13 = thunk_FUN_03152714(*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x18),*unaff_x26,0);
          if ((uVar13 & 1) == 0) {
LAB_0202c4d8:
            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
               (lVar6 = FUN_020e9968(*(long *)(unaff_x19 + 0x20),0), lVar6 == 0)) goto LAB_0202c700;
            if (*(uint *)(lVar6 + 0x18) <= *(uint *)(unaff_x19 + 0x34))
            goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
            lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(unaff_x19 + 0x34) * 8 + 0x20);
            if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x18), lVar6 == 0)) goto LAB_0202c700;
            if (*(int *)(lVar6 + 0x18) == 0)
            goto I2_Loc_ScriptLocalization_PlayerHUD_Message_Connection__get_RoomClosed;
            lVar6 = *(long *)(lVar6 + 0x20);
          }
          else {
            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
               (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78), lVar6 == 0))
            goto LAB_0202c700;
            uVar13 = FUN_031529f8(*(undefined8 *)(lVar6 + 0x18),*unaff_x26,0);
            if ((uVar13 & 1) == 0) goto LAB_0202c4d8;
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
            lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78);
          }
          if (lVar6 == 0) goto LAB_0202c700;
          *(undefined8 *)(lVar17 + 0xa0) = *(undefined8 *)(lVar6 + 0x18);
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0202c700;
          uVar13 = FUN_031529f8(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0xa0),*unaff_x26,0);
        } while ((uVar13 & 1) == 0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          uVar11 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x60);
          if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = FUN_03d4dc54(uVar11,0,0);
          lVar17 = *(long *)(unaff_x19 + 0x20);
          if ((uVar13 & 1) == 0) {
            if ((lVar17 != 0) && (*(long *)(lVar17 + 0x60) != 0)) {
              uVar16 = *(undefined8 *)(lVar17 + 0xa0);
              uVar11 = FUN_03d498b0(*(long *)(lVar17 + 0x60),0);
              if (*(int *)(*(long *)PTR_DAT_042394b8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042394b8);
              }
              FUN_03a1e7c0(uVar16,uVar11,0,1,0);
              puVar2 = PTR_DAT_042394c8;
              in_stack_00000038 = in_stack_00000008;
              in_stack_00000030 = in_stack_00000000;
              in_stack_00000048 = in_stack_00000018;
              in_stack_00000040 = in_stack_00000010;
              *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000008;
              *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000000;
              *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000018;
              *(undefined8 *)(unaff_x19 + 0x70) = in_stack_00000010;
              uVar11 = thunk_FUN_01c49334(*(undefined8 *)puVar2);
              *(undefined8 *)(unaff_x19 + 0x18) = uVar11;
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
LAB_0202c700:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


