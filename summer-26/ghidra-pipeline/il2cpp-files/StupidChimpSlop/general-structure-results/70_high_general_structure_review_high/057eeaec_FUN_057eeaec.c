/*
FUNCTION_NAME: FUN_057eeaec
ENTRY_POINT: 057eeaec
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x057ef4e0) */

void FUN_057eeaec(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  uint uVar22;
  ulong uVar23;
  
  puVar2 = PTR_DAT_0664de38;
  if ((DAT_06a55635 & 1) == 0) {
    FUN_02d4dc40(Method_System_Collections_Generic_List<CallRequestContainer>_get_Item__);
    FUN_02d4dc40(Method_System_Collections_Generic_List<Action>__ctor__);
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<OnScreenControl_OnScreenDeviceInfo>_Append__
                );
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(PTR_DAT_066479b0);
    FUN_02d4dc40(PTR_DAT_0664bda8);
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<Nullable<float>>_Create__
                );
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
                );
    FUN_02d4dc40(Method_System_Collections_Generic_List<Camera>__ctor__);
    FUN_02d4dc40(Method_System_Collections_Generic_List<Action>_GetEnumerator__);
    FUN_02d4dc40(PTR_DAT_0664de38);
    FUN_02d4dc40(PTR_DAT_06648658);
    FUN_02d4dc40(PTR_DAT_0664fbc8);
    FUN_02d4dc40(UnityEngine_InputSystem_Layouts_InputDeviceBuilder_TypeInfo);
    DAT_06a55635 = 1;
  }
  uVar7 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)puVar2);
  }
  lVar8 = FUN_057ef544(uVar7);
  puVar6 = Method_System_Collections_Generic_List<Action>__ctor__;
  puVar5 = 
  Method_UnityEngine_InputSystem_Utilities_InlinedArray<OnScreenControl_OnScreenDeviceInfo>_Append__
  ;
  puVar4 = PTR_DAT_0664bda8;
  puVar3 = PTR_DAT_066479b0;
  puVar2 = PTR_DAT_066479a8;
  if (lVar8 != 0) {
    plVar9 = (long *)FUN_057bf7b8(lVar8,0);
    do {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar16 = *plVar9;
      lVar8 = *(long *)puVar3;
      uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_057eecac;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d87540(plVar9,lVar8,0);
LAB_057eecac:
      uVar20 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar20 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_02d8a53c(plVar9,*(undefined8 *)puVar2);
        if (plVar9 == (long *)0x0) goto LAB_057eee38;
        lVar16 = *plVar9;
        lVar8 = *(long *)puVar2;
        uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar20 == 0) goto LAB_057eee10;
        piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_057eedf8;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar16 = *plVar9;
      lVar8 = *(long *)puVar3;
      uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar16 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_057eed14;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d87540(plVar9,lVar8,1);
LAB_057eed14:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(plVar11);
        }
      }
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar8 = *param_2;
      uVar20 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar21 + 2) * 0x10 + 0x138);
            goto LAB_057eeda8;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d87540(param_2,*(long *)puVar4,2);
LAB_057eeda8:
      (*(code *)*puVar10)(param_2,plVar11,puVar10[1]);
    } while( true );
  }
LAB_057ef4bc:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_057eedf8:
    if (*(long *)(piVar21 + -2) == lVar8) {
      puVar10 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_057eee2c;
    }
  }
LAB_057eee10:
  puVar10 = (undefined8 *)FUN_02d87540(plVar9,lVar8,0);
LAB_057eee2c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_057eee38:
  puVar2 = PTR_DAT_066462a0;
  plVar9 = (long *)param_1[0x11];
  uVar22 = 0;
  do {
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar20 = FUN_0501bc88(plVar9,0,0);
    if ((uVar20 & 1) == 0) {
LAB_057eeec8:
      if ((int)uVar22 < 1) goto LAB_057ef3e8;
      plVar11 = (long *)param_1[0x11];
      plVar9 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar6,uVar22);
      break;
    }
    lVar8 = *(long *)(puVar2 + 0x10);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar7 = FUN_050121a8(lVar8 + 0x20,0);
    uVar20 = FUN_0501bc88(plVar9,uVar7,0);
    if ((uVar20 & 1) == 0) goto LAB_057eeec8;
    if (plVar9 == (long *)0x0) goto LAB_057ef4bc;
    uVar22 = uVar22 + 1;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x868))(plVar9,*(undefined8 *)(*plVar9 + 0x870));
  } while( true );
Unity_Collections_FixedString512Bytes__TryResize:
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar20 = FUN_0501bc88(plVar11,0,0);
  if ((uVar20 & 1) == 0) {
LAB_057ef108:
    puVar3 = Method_System_Collections_Generic_List<CallRequestContainer>_get_Item__;
    if (plVar9 == (long *)0x0) goto LAB_057ef4bc;
    uVar20 = plVar9[3] & 0xffffffff;
    if ((int)plVar9[3] < 1) goto LAB_057ef31c;
    uVar23 = 0;
    goto LAB_057ef128;
  }
  lVar8 = *(long *)(puVar2 + 0x10);
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar7 = FUN_050121a8(lVar8 + 0x20,0);
  uVar20 = FUN_0501bc88(plVar11,uVar7,0);
  if ((uVar20 & 1) == 0) goto LAB_057ef108;
  uVar20 = FUN_057ecba0(param_1);
  uVar7 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  if ((uVar20 & 1) == 0) {
    uVar13 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
    uVar14 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06648658,0);
    uVar15 = FUN_02d4dd2c(*(undefined8 *)
                           Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder<Nullable<float>>_Create__
                          ,0);
    if (plVar11 == (long *)0x0) goto LAB_057ef4bc;
    uVar7 = FUN_0501d700(plVar11,uVar7,0x36,0,uVar13,uVar14,uVar15,0);
  }
  else {
    uVar7 = FUN_04e723e0(*(undefined8 *)UnityEngine_InputSystem_Layouts_InputDeviceBuilder_TypeInfo,
                         uVar7,0);
    plVar12 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06648658,1);
    if (plVar12 == (long *)0x0) goto LAB_057ef4bc;
    lVar8 = param_1[0x1c];
    if ((lVar8 != 0) &&
       (lVar16 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar16 == 0))
    goto LAB_057ef4d4;
    if ((int)plVar12[3] == 0) goto LAB_057ef4b8;
    plVar12[4] = lVar8;
    thunk_FUN_02dc1ef0(plVar12 + 4,lVar8);
    if (plVar11 == (long *)0x0) goto LAB_057ef4bc;
    uVar7 = FUN_0501d42c(plVar11,uVar7,0x36,0,plVar12,0,0);
  }
  uVar20 = FUN_04f40038(uVar7,0,0);
  if ((uVar20 & 1) != 0) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Action>_GetEnumerator__ + 0xe4) ==
        0) {
      thunk_FUN_02dabd98();
    }
    lVar8 = FUN_057ef690(uVar7);
    if (plVar9 == (long *)0x0) goto LAB_057ef4bc;
    if ((lVar8 != 0) &&
       (lVar16 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar16 == 0)) {
LAB_057ef4d4:
      uVar7 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar7,0);
    }
    uVar22 = uVar22 - 1;
    if (*(uint *)(plVar9 + 3) <= uVar22) goto LAB_057ef4b8;
    plVar9[(long)(int)uVar22 + 4] = lVar8;
    thunk_FUN_02dc1ef0(plVar9 + (long)(int)uVar22 + 4,lVar8);
  }
  plVar11 = (long *)(**(code **)(*plVar11 + 0x868))(plVar11,*(undefined8 *)(*plVar11 + 0x870));
  goto Unity_Collections_FixedString512Bytes__TryResize;
LAB_057ef128:
  do {
    if (uVar20 <= uVar23) goto LAB_057ef4b8;
    lVar8 = plVar9[uVar23 + 4];
    if ((lVar8 != 0) && (0 < (int)*(ulong *)(lVar8 + 0x18))) {
      uVar20 = 0;
      uVar17 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar17 <= uVar20) goto LAB_057ef4b8;
        plVar11 = *(long **)(lVar8 + uVar20 * 8 + 0x20);
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
            lVar16 = plVar11[2];
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar16 = FUN_02d4e0d0(lVar16,*(undefined8 *)PTR_DAT_0664fbc8,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_List<Camera>__ctor__);
            uVar17 = FUN_0501bc88(lVar16,0,0);
            if ((uVar17 & 1) != 0) {
              uVar17 = FUN_04e7faf0(plVar11[3],0);
              if ((uVar17 & 1) == 0) {
                if ((lVar16 == 0) || (lVar16 = FUN_0501d30c(lVar16,plVar11[3],0), lVar16 == 0))
                goto LAB_057ef4bc;
                if (*(long *)(lVar16 + 0x18) != 0) {
                  if ((int)*(long *)(lVar16 + 0x18) == 0) goto LAB_057ef4b8;
                  uVar17 = FUN_04f40038(*(undefined8 *)(lVar16 + 0x20),0,0);
                  if ((uVar17 & 1) != 0) {
                    if (*(int *)(lVar16 + 0x18) != 0) {
                      lVar16 = *(long *)(lVar16 + 0x20);
                      goto LAB_057ef244;
                    }
                    goto LAB_057ef4b8;
                  }
                }
              }
              else {
LAB_057ef244:
                if (*(int *)(*(long *)Method_System_Collections_Generic_List<Action>_GetEnumerator__
                            + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                lVar16 = FUN_057ef690(lVar16);
                if ((lVar16 != 0) && (0 < (int)*(ulong *)(lVar16 + 0x18))) {
                  uVar17 = 0;
                  uVar18 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
                  do {
                    if (uVar18 <= uVar17) goto LAB_057ef4b8;
                    if (param_2 == (long *)0x0) goto LAB_057ef4bc;
                    lVar19 = *param_2;
                    uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    uVar7 = *(undefined8 *)(lVar16 + uVar17 * 8 + 0x20);
                    if (uVar18 != 0) {
                      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
                          puVar10 = (undefined8 *)(lVar19 + (long)(*piVar21 + 2) * 0x10 + 0x138);
                          goto LAB_057ef2dc;
                        }
                        uVar18 = uVar18 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_02d87540(param_2,*(long *)puVar4,2);
LAB_057ef2dc:
                    (*(code *)*puVar10)(param_2,uVar7,puVar10[1]);
                    uVar18 = (ulong)*(uint *)(lVar16 + 0x18);
                    uVar17 = uVar17 + 1;
                  } while ((long)uVar17 < (long)(int)*(uint *)(lVar16 + 0x18));
                }
              }
            }
          }
        }
        uVar17 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar20 = uVar20 + 1;
      } while ((long)uVar20 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    uVar20 = (ulong)*(uint *)(plVar9 + 3);
    uVar23 = uVar23 + 1;
  } while ((long)uVar23 < (long)(int)*(uint *)(plVar9 + 3));
LAB_057ef31c:
  if (0 < (int)uVar20) {
    uVar23 = 0;
    do {
      if (uVar20 <= uVar23) {
LAB_057ef4b8:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      lVar8 = plVar9[uVar23 + 4];
      if ((lVar8 != 0) && (0 < (int)*(ulong *)(lVar8 + 0x18))) {
        uVar20 = 0;
        uVar17 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        do {
          if (uVar17 <= uVar20) goto LAB_057ef4b8;
          if (param_2 == (long *)0x0) goto LAB_057ef4bc;
          lVar16 = *param_2;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          uVar7 = *(undefined8 *)(lVar8 + uVar20 * 8 + 0x20);
          if (uVar17 != 0) {
            piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar16 + (long)(*piVar21 + 2) * 0x10 + 0x138);
                goto LAB_057ef3b8;
              }
              uVar17 = uVar17 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar17 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d87540(param_2,*(long *)puVar4,2);
LAB_057ef3b8:
          (*(code *)*puVar10)(param_2,uVar7,puVar10[1]);
          uVar17 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar20 = uVar20 + 1;
        } while ((long)uVar20 < (long)(int)*(uint *)(lVar8 + 0x18));
        uVar20 = (ulong)*(uint *)(plVar9 + 3);
      }
      uVar23 = uVar23 + 1;
    } while ((long)uVar23 < (long)(int)uVar20);
  }
LAB_057ef3e8:
  FUN_057d90d0(param_1,param_2,0);
  uVar7 = FUN_057ecccc(param_1);
  uVar20 = FUN_04f4028c(uVar7,0,0);
  puVar2 = 
  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
  ;
  if ((uVar20 & 1) != 0) {
    lVar8 = *(long *)
             Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
    ;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar8 = *(long *)puVar2;
    }
    if (param_2 == (long *)0x0) goto LAB_057ef4bc;
    lVar16 = *param_2;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12e);
    uVar7 = **(undefined8 **)(lVar8 + 0xb8);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar16 + (long)(*piVar21 + 2) * 0x10 + 0x138);
          goto LAB_057ef488;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d87540(param_2,*(long *)puVar4,2);
LAB_057ef488:
    (*(code *)*puVar10)(param_2,uVar7,puVar10[1]);
  }
  return;
}


