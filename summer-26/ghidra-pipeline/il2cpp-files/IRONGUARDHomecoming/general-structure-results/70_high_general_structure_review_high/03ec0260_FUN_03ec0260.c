/*
FUNCTION_NAME: FUN_03ec0260
ENTRY_POINT: 03ec0260
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_03ec0260(undefined8 param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  int iVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined4 local_68;
  undefined4 local_64;
  
  if ((DAT_0483ac5d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_RuntimeType_CreateInstanceImpl__);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
    ;
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<Collider>__);
    thunk_FUN_01efb3a4(PTR_DAT_0457baf8);
    thunk_FUN_01efb3a4(PTR_DAT_0457bac8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0457bb00);
    thunk_FUN_01efb3a4(PTR_DAT_0457bad0);
    thunk_FUN_01efb3a4(PTR_DAT_0457baf0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_0483ac5d = 1;
  }
  puVar9 = PTR_DAT_0457bad0;
  puVar7 = PTR_DAT_0457bac8;
  puVar10 = Method_UnityEngine_Component_GetComponents<Collider>__;
  puVar8 = Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__;
  if (param_2 != (long *)0x0) {
    iVar23 = 0;
    do {
      lVar19 = *param_2;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar8) {
            puVar14 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_03ec0390;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar8,1);
LAB_03ec0390:
      iVar12 = (*(code *)*puVar14)(param_2,puVar14[1]);
      if (iVar12 <= iVar23) {
        iVar23 = 0;
        goto LAB_03ec08d8;
      }
      lVar19 = *param_2;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar10) {
            puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto Unity_VisualScripting_SelectUnit__get_condition;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar10,0);
Unity_VisualScripting_SelectUnit__get_condition:
      plVar15 = (long *)(*(code *)*puVar14)(param_2,iVar23,puVar14[1]);
      if (plVar15 != (long *)0x0) {
        bVar5 = *(byte *)(*plVar15 + 0x130);
        bVar6 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
        if ((bVar5 < bVar6) ||
           (lVar19 = *(long *)(*plVar15 + 200),
           *(long *)(lVar19 + (ulong)bVar6 * 8 + -8) != *(long *)PTR_DAT_0457baf0))
        goto LAB_03ec10b4;
        bVar6 = *(byte *)(*(long *)puVar9 + 0x130);
        if ((bVar6 <= bVar5) && (*(long *)(lVar19 + (ulong)bVar6 * 8 + -8) == *(long *)puVar9)) {
          lVar19 = *param_2;
          uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar10) {
                puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_03ec04ac;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar14 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar10,0);
LAB_03ec04ac:
          plVar16 = (long *)(*(code *)*puVar14)(param_2,iVar23,puVar14[1]);
          if (plVar16 != (long *)0x0) {
            bVar5 = *(byte *)(*(long *)puVar9 + 0x130);
            if ((*(byte *)(*plVar16 + 0x130) < bVar5) ||
               (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar9))
            goto LAB_03ec1300;
          }
          uVar24 = *(undefined8 *)PTR_DAT_0457baf8;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar24 = FUN_03579868(uVar24,0);
          plVar17 = (long *)FUN_03ec1308(uVar24,param_2,uVar24,iVar23);
          if (plVar17 != (long *)0x0) {
            iVar12 = 0;
            do {
              lVar19 = *plVar17;
              uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar21 != 0) {
                piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)puVar8) {
                    puVar14 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                    goto LAB_03ec058c;
                  }
                  uVar21 = uVar21 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar21 != 0);
              }
              puVar14 = (undefined8 *)FUN_01ecb238(plVar17,*(long *)puVar8,1);
LAB_03ec058c:
              iVar13 = (*(code *)*puVar14)(plVar17,puVar14[1]);
              if (iVar13 <= iVar12) goto LAB_03ec06bc;
              lVar19 = *plVar17;
              uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar21 != 0) {
                piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)puVar10) {
                    puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                    goto LAB_03ec05ec;
                  }
                  uVar21 = uVar21 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar21 != 0);
              }
              puVar14 = (undefined8 *)FUN_01ecb238(plVar17,*(long *)puVar10,0);
LAB_03ec05ec:
              plVar15 = (long *)(*(code *)*puVar14)(plVar17,iVar12,puVar14[1]);
              if (plVar15 == (long *)0x0) break;
              bVar5 = *(byte *)(*(long *)puVar7 + 0x130);
              if ((*(byte *)(*plVar15 + 0x130) < bVar5) ||
                 (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar7))
              goto LAB_03ec10b4;
              if (plVar16 == (long *)0x0) break;
              if ((*(int *)((long)plVar16 + 0x14) <= *(int *)((long)plVar15 + 0x14)) &&
                 (*(int *)((long)plVar15 + 0x14) <= (int)plVar16[5])) {
                lVar20 = *param_2;
                lVar19 = plVar15[2];
                uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)puVar10) {
                      puVar14 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                      goto Unity_VisualScripting_SelectUnit__Unity_VisualScripting_IUnit_get_graph;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                puVar14 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar10,1);
Unity_VisualScripting_SelectUnit__Unity_VisualScripting_IUnit_get_graph:
                (*(code *)*puVar14)(param_2,(int)lVar19,0,puVar14[1]);
              }
              iVar12 = iVar12 + 1;
            } while( true );
          }
          break;
        }
      }
LAB_03ec0458:
      iVar23 = iVar23 + 1;
    } while( true );
  }
LAB_03ec10ac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_03ec08d8:
  lVar19 = *param_2;
  uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar8) {
        puVar14 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
        goto LAB_03ec0928;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar14 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar8,1);
LAB_03ec0928:
  iVar12 = (*(code *)*puVar14)(param_2,puVar14[1]);
  if (iVar12 <= iVar23) {
    plVar15 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_System_RuntimeType_CreateInstanceImpl__);
    FUN_03546db4(plVar15,0);
    puVar9 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
    puVar7 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    iVar23 = 0;
    goto LAB_03ec0e8c;
  }
  lVar19 = *param_2;
  uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar10) {
        puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_03ec0988;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar14 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar10,0);
LAB_03ec0988:
  plVar15 = (long *)(*(code *)*puVar14)(param_2,iVar23,puVar14[1]);
  if (plVar15 != (long *)0x0) {
    bVar5 = *(byte *)(*plVar15 + 0x130);
    bVar6 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
    if ((bVar5 < bVar6) ||
       (lVar19 = *(long *)(*plVar15 + 200),
       *(long *)(lVar19 + (ulong)bVar6 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) {
LAB_03ec10b4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar15);
    }
    bVar6 = *(byte *)(*(long *)puVar7 + 0x130);
    if ((bVar6 <= bVar5) && (*(long *)(lVar19 + (ulong)bVar6 * 8 + -8) == *(long *)puVar7)) {
      lVar19 = *param_2;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar10) {
            puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03ec0a44;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar10,0);
LAB_03ec0a44:
      plVar16 = (long *)(*(code *)*puVar14)(param_2,iVar23,puVar14[1]);
      if (plVar16 != (long *)0x0) {
        bVar5 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar7)) {
LAB_03ec1300:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar16);
        }
      }
      uVar24 = *(undefined8 *)PTR_DAT_0457baf8;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar24 = FUN_03579868(uVar24,0);
      plVar17 = (long *)FUN_03ec1308(uVar24,param_2,uVar24,iVar23);
      if (plVar17 != (long *)0x0) {
        iVar12 = 0;
        plVar2 = plVar16 + 3;
        do {
          lVar19 = *plVar17;
          uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar8) {
                puVar14 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_03ec0b28;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar14 = (undefined8 *)FUN_01ecb238(plVar17,*(long *)puVar8,1);
LAB_03ec0b28:
          iVar13 = (*(code *)*puVar14)(plVar17,puVar14[1]);
          if (iVar13 <= iVar12) goto LAB_03ec0c6c;
          lVar19 = *plVar17;
          uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar10) {
                puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_03ec0b88;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar14 = (undefined8 *)FUN_01ecb238(plVar17,*(long *)puVar10,0);
LAB_03ec0b88:
          plVar15 = (long *)(*(code *)*puVar14)(plVar17,iVar12,puVar14[1]);
          if (plVar15 == (long *)0x0) break;
          bVar5 = *(byte *)(*(long *)puVar7 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar7))
          goto LAB_03ec10b4;
          if (plVar16 == (long *)0x0) break;
          if (*(int *)((long)plVar15 + 0x14) == *(int *)((long)plVar16 + 0x14)) {
            lVar19 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar15,*plVar2,plVar15[3]);
            *plVar2 = lVar19;
            thunk_FUN_01f51358(plVar2,lVar19);
            lVar20 = *param_2;
            lVar19 = plVar15[2];
            uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)puVar10) {
                  puVar14 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                  goto LAB_03ec0c50;
                }
                uVar21 = uVar21 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar21 != 0);
            }
            puVar14 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar10,1);
LAB_03ec0c50:
            (*(code *)*puVar14)(param_2,(int)lVar19,0,puVar14[1]);
          }
          iVar12 = iVar12 + 1;
        } while( true );
      }
      goto LAB_03ec10ac;
    }
  }
LAB_03ec09f0:
  iVar23 = iVar23 + 1;
  goto LAB_03ec08d8;
LAB_03ec0e8c:
  lVar19 = *param_2;
  uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar8) {
        puVar14 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
        goto LAB_03ec0edc;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar14 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar8,1);
LAB_03ec0edc:
  iVar12 = (*(code *)*puVar14)(param_2,puVar14[1]);
  if (iVar12 <= iVar23) {
    return plVar15;
  }
  lVar19 = *param_2;
  uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)puVar10) {
        puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_03ec0f3c;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar14 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar10,0);
LAB_03ec0f3c:
  plVar16 = (long *)(*(code *)*puVar14)(param_2,iVar23,puVar14[1]);
  if (plVar16 != (long *)0x0) {
    bVar5 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
    if ((*(byte *)(*plVar16 + 0x130) < bVar5) ||
       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)PTR_DAT_0457baf0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar16);
    }
    local_64 = *(undefined4 *)((long)plVar16 + 0x14);
    uVar24 = thunk_FUN_01f113fc(*(undefined8 *)puVar7,&local_64);
    if (plVar15 == (long *)0x0) goto LAB_03ec10ac;
    lVar20 = *plVar15;
    lVar19 = *(long *)puVar9;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar19) {
          puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03ec0ff0;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar14 = (undefined8 *)FUN_01ecb238(plVar15,lVar19,0);
LAB_03ec0ff0:
    lVar19 = (*(code *)*puVar14)(plVar15,uVar24,puVar14[1]);
    if (lVar19 != 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
      uVar24 = thunk_FUN_01f117cc();
      uVar18 = thunk_FUN_01efb3a4(PTR_DAT_0457bb30);
      Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar24,uVar18,0);
      uVar18 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar24,uVar18);
    }
    local_68 = *(undefined4 *)((long)plVar16 + 0x14);
    uVar24 = thunk_FUN_01f113fc(*(undefined8 *)puVar7,&local_68);
    lVar20 = *plVar15;
    lVar19 = *(long *)puVar9;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar19) {
          puVar14 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto LAB_03ec106c;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar14 = (undefined8 *)FUN_01ecb238(plVar15,lVar19,1);
LAB_03ec106c:
    (*(code *)*puVar14)(plVar15,uVar24,plVar16,puVar14[1]);
  }
  iVar23 = iVar23 + 1;
  goto LAB_03ec0e8c;
LAB_03ec0c6c:
  uVar24 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar24 = FUN_03579868(uVar24,0);
  plVar17 = (long *)FUN_03ec1308(uVar24,param_2,uVar24,iVar23);
  if (plVar17 != (long *)0x0) {
    iVar12 = 0;
    do {
      lVar19 = *plVar17;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar8) {
            puVar14 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_03ec0d08;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(plVar17,*(long *)puVar8,1);
LAB_03ec0d08:
      iVar13 = (*(code *)*puVar14)(plVar17,puVar14[1]);
      if (iVar13 <= iVar12) goto LAB_03ec09f0;
      lVar19 = *plVar17;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar10) {
            puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(plVar17,*(long *)puVar10,0);
Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext:
      plVar15 = (long *)(*(code *)*puVar14)(plVar17,iVar12,puVar14[1]);
      if (plVar15 == (long *)0x0) break;
      bVar5 = *(byte *)(*(long *)puVar9 + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar9))
      goto LAB_03ec10b4;
      if (plVar16 == (long *)0x0) break;
      iVar13 = *(int *)((long)plVar16 + 0x14);
      if (iVar13 == *(int *)((long)plVar15 + 0x14)) {
        plVar25 = plVar15 + 3;
        lVar19 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar15,*plVar2,*plVar25);
        *plVar25 = lVar19;
        thunk_FUN_01f51358(plVar25,lVar19);
        lVar19 = *param_2;
        uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar10) {
              puVar14 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto LAB_03ec0e40;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar14 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar10,1);
LAB_03ec0e40:
        (*(code *)*puVar14)(param_2,iVar23,0,puVar14[1]);
      }
      else if ((*(int *)((long)plVar15 + 0x14) <= iVar13) && (iVar13 <= (int)plVar15[5])) {
        uVar24 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                   );
        uVar24 = FUN_01f08890(uVar24,4);
        FUN_01bc50c0();
        puVar8 = PTR_DAT_0457bb18;
        uVar18 = thunk_FUN_01efb3a4(PTR_DAT_0457bb18);
        FUN_01bc56ec(uVar24,uVar18);
        uVar18 = thunk_FUN_01efb3a4(puVar8);
        FUN_01bc5408(uVar24,0,uVar18);
        FUN_01bc50c0(uVar24);
        FUN_01bc56ec(uVar24,plVar16);
        FUN_01bc5408(uVar24,1,plVar16);
        FUN_01bc50c0(uVar24);
        puVar8 = PTR_DAT_0457bb20;
        uVar18 = thunk_FUN_01efb3a4(PTR_DAT_0457bb20);
        FUN_01bc56ec(uVar24,uVar18);
        uVar18 = thunk_FUN_01efb3a4(puVar8);
        FUN_01bc5408(uVar24,2,uVar18);
        FUN_01bc50c0(uVar24);
        FUN_01bc56ec(uVar24,plVar15);
        goto LAB_03ec126c;
      }
      iVar12 = iVar12 + 1;
    } while( true );
  }
  goto LAB_03ec10ac;
LAB_03ec06bc:
  uVar24 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar24 = FUN_03579868(uVar24,0);
  plVar17 = (long *)FUN_03ec1308(uVar24,param_2,uVar24,iVar23);
  if (plVar17 != (long *)0x0) {
    iVar12 = 0;
    do {
      lVar19 = *plVar17;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar8) {
            puVar14 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_03ec0758;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(plVar17,*(long *)puVar8,1);
LAB_03ec0758:
      iVar13 = (*(code *)*puVar14)(plVar17,puVar14[1]);
      if (iVar13 <= iVar12) goto LAB_03ec0458;
      lVar19 = *plVar17;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar10) {
            puVar14 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03ec07b8;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(plVar17,*(long *)puVar10,0);
LAB_03ec07b8:
      plVar15 = (long *)(*(code *)*puVar14)(plVar17,iVar12,puVar14[1]);
      if (plVar15 == (long *)0x0) break;
      bVar5 = *(byte *)(*(long *)puVar9 + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)puVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar15);
      }
      if (plVar16 == (long *)0x0) break;
      iVar13 = *(int *)((long)plVar15 + 0x14);
      iVar3 = *(int *)((long)plVar16 + 0x14);
      iVar4 = (int)plVar15[5];
      if ((iVar13 < iVar3) || ((int)plVar16[5] < iVar4)) {
        if (iVar4 < iVar3) {
          bVar1 = true;
        }
        else {
          bVar1 = (int)plVar16[5] < iVar13;
        }
        if (iVar13 == iVar3) {
          bVar11 = iVar4 == (int)plVar16[5];
        }
        else {
          bVar11 = false;
        }
        if (!bVar11 && !bVar1) {
          uVar24 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
          uVar24 = FUN_01f08890(uVar24,4);
          FUN_01bc50c0();
          puVar8 = PTR_DAT_0457bb08;
          uVar18 = thunk_FUN_01efb3a4(PTR_DAT_0457bb08);
          FUN_01bc56ec(uVar24,uVar18);
          uVar18 = thunk_FUN_01efb3a4(puVar8);
          FUN_01bc5408(uVar24,0,uVar18);
          FUN_01bc50c0(uVar24);
          FUN_01bc56ec(uVar24,plVar16);
          FUN_01bc5408(uVar24,1,plVar16);
          FUN_01bc50c0(uVar24);
          puVar8 = PTR_DAT_0457bb10;
          uVar18 = thunk_FUN_01efb3a4(PTR_DAT_0457bb10);
          FUN_01bc56ec(uVar24,uVar18);
          uVar18 = thunk_FUN_01efb3a4(puVar8);
          FUN_01bc5408(uVar24,2,uVar18);
          FUN_01bc50c0(uVar24);
          FUN_01bc56ec(uVar24,plVar15);
LAB_03ec126c:
          FUN_01bc5408(uVar24,3,plVar15);
          uVar24 = FUN_0340ec80(uVar24,0);
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar18 = thunk_FUN_01f117cc();
          FUN_034f7db4(uVar18,uVar24,0);
          uVar24 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar18,uVar24);
        }
      }
      else {
        lVar20 = *param_2;
        lVar19 = plVar15[2];
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)puVar10) {
              puVar14 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto LAB_03ec08b8;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar14 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar10,1);
LAB_03ec08b8:
        (*(code *)*puVar14)(param_2,(int)lVar19,0,puVar14[1]);
      }
      iVar12 = iVar12 + 1;
    } while( true );
  }
  goto LAB_03ec10ac;
}


