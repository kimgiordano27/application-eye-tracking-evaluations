/*
FUNCTION_NAME: FUN_03f8c668
ENTRY_POINT: 03f8c668
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 240
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_5
*/


undefined1  [16] FUN_03f8c668(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  int iVar20;
  undefined8 uVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar4 = Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__;
  if ((DAT_0483b6c3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_FirstOrDefault<Type>__);
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDouble__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_FirstOrDefault<string>__);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
    ;
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04581b10);
    thunk_FUN_01efb3a4(PTR_DAT_04581b20);
    thunk_FUN_01efb3a4(PTR_DAT_04581b30);
    thunk_FUN_01efb3a4(PTR_DAT_04581b38);
    thunk_FUN_01efb3a4(PTR_DAT_04581b18);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_FingerPinchValue_HandleHandUpdated__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_FirstHoverInteractorGroup_HandleBestInteractorStateChanged__
                      );
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__)
    ;
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDecimal__);
    DAT_0483b6c3 = 1;
  }
  puVar5 = Method_System_DBNull_System_IConvertible_ToDecimal__;
  lVar9 = *(long *)puVar4;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *(long *)puVar4;
  }
  *param_3 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  thunk_FUN_01f51358(param_3);
  lVar9 = *(long *)puVar5;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *(long *)puVar5;
  }
  puVar4 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  if (param_2 != 0) {
    auVar24 = *(undefined1 (*) [16])(*(long *)(lVar9 + 0xb8) + 8);
    uVar21 = *(undefined8 *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
    plVar10 = (long *)thunk_FUN_01f116d0(param_2,uVar21);
    puVar3 = Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2,uVar21);
    }
    uVar21 = thunk_FUN_01ecaf38(plVar10,0);
    FUN_03f8bcd4(uVar21,&local_68,&local_70);
    lVar9 = *plVar10;
    uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar9 + (long)(*piVar19 + 9) * 0x10 + 0x138);
          goto LAB_03f8c854;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,9);
LAB_03f8c854:
    puVar6 = PTR_DAT_04581b20;
    puVar4 = PTR_DAT_04581b18;
    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    lVar14 = *plVar10;
    lVar9 = *(long *)puVar3;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar14 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_03f8c8c4;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar9,1);
LAB_03f8c8c4:
    uVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_030f23f0(lVar9,uVar8,*(undefined8 *)puVar6);
    lVar15 = *plVar10;
    lVar14 = *(long *)puVar3;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar14) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_03f8c940;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar14,1);
LAB_03f8c940:
    uVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    lVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_030f23f0(lVar14,uVar8,*(undefined8 *)puVar6);
    puVar4 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
    if (plVar12 != (long *)0x0) {
      bVar2 = true;
      do {
        lVar15 = *plVar12;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03f8c9d0;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01ecb238(plVar12,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                               ,0);
LAB_03f8c9d0:
        uVar17 = (*(code *)*puVar11)(plVar12,puVar11[1]);
        uVar21 = local_68;
        if ((uVar17 & 1) == 0) {
          if (bVar2) {
            if (*(int *)(*(long *)
                          Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar15 = FUN_03f8cf14();
            *param_3 = lVar15;
            thunk_FUN_01f51358(param_3,lVar15);
            if ((*param_3 != 0) &&
               (lVar15 = FUN_03f8c2dc(), puVar5 = PTR_DAT_04581b38,
               puVar4 = Method_System_DBNull_System_IConvertible_ToDouble__, lVar9 != 0)) {
              if (*(int *)(lVar9 + 0x18) < 1) {
                return auVar24;
              }
              iVar20 = 0;
              while (((lVar16 = FUN_030f28e4(lVar9,iVar20,*(undefined8 *)puVar5), lVar14 != 0 &&
                      (uVar21 = FUN_030f28e4(lVar14,iVar20,*(undefined8 *)puVar5), lVar16 != 0)) &&
                     (uVar13 = FUN_03f8b518(lVar16), lVar15 != 0))) {
                FUN_02b6b2d0(lVar15,uVar13,uVar21,*(undefined8 *)puVar4);
                iVar20 = iVar20 + 1;
                if (*(int *)(lVar9 + 0x18) <= iVar20) {
                  return auVar24;
                }
              }
            }
          }
          else if (lVar9 != 0) {
            uVar8 = *(undefined4 *)(lVar9 + 0x18);
            if (*(int *)(*(long *)
                          Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar15 = UnityEngine_Rendering_CommandBuffer__ClearRandomWriteTargets(uVar8);
            *param_3 = lVar15;
            thunk_FUN_01f51358(param_3,lVar15);
            if (*param_3 != 0) {
              lVar15 = FUN_03f8a108();
              puVar5 = PTR_DAT_04581b38;
              puVar4 = Method_System_DBNull_System_IConvertible_ToDouble__;
              if (*(int *)(lVar9 + 0x18) < 1) {
                return auVar24;
              }
              iVar20 = 0;
              goto LAB_03f8cda8;
            }
          }
          break;
        }
        lVar16 = *plVar12;
        lVar22 = *(long *)(param_1 + 0x10);
        lVar15 = *(long *)puVar4;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar15) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_03f8ca34;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar12,lVar15,0);
LAB_03f8ca34:
        uVar13 = (*(code *)*puVar11)(plVar12,puVar11[1]);
        if (lVar22 == 0) break;
        auVar23 = FUN_03fa041c(lVar22,uVar21,uVar13,&local_78,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        auVar24 = FUN_03f8a724(auVar24._0_8_,auVar24._8_8_,auVar23._0_8_,auVar23._8_8_);
        uVar21 = local_70;
        if ((auVar24._0_8_ & 0xff) == 0) {
          return auVar24;
        }
        lVar16 = *plVar12;
        lVar22 = *(long *)(param_1 + 0x10);
        lVar15 = *(long *)puVar4;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar15) {
              puVar11 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_03f8caf0;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar12,lVar15,1);
LAB_03f8caf0:
        uVar13 = (*(code *)*puVar11)(plVar12,puVar11[1]);
        if (lVar22 == 0) break;
        auVar23 = FUN_03fa041c(lVar22,uVar21,uVar13,&local_80,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        auVar24 = FUN_03f8a724(auVar24._0_8_,auVar24._8_8_,auVar23._0_8_,auVar23._8_8_);
        if ((auVar24._0_8_ & 0xff) == 0) {
          return auVar24;
        }
        if (lVar9 == 0) break;
        lVar15 = *(long *)(lVar9 + 0x10);
        lVar16 = *(long *)PTR_DAT_04581b10;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar15 == 0) break;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = local_78;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar9,local_78,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        if (lVar14 == 0) break;
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar16 = *(long *)PTR_DAT_04581b10;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) break;
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = local_80;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar14,local_80,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar15 = local_78;
        if (local_78 == 0) break;
        if ((DAT_0483b73e & 1) == 0) {
          thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
          DAT_0483b73e = 1;
        }
        bVar7 = false;
        if (*(long **)(lVar15 + 0x10) != (long *)0x0) {
          bVar7 = **(long **)(lVar15 + 0x10) ==
                  *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
        }
        bVar2 = (bool)(bVar2 & bVar7);
      } while( true );
    }
  }
LAB_03f8cf04:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_03f8cda8:
  uVar21 = FUN_030f28e4(lVar9,iVar20,*(undefined8 *)puVar5);
  if (lVar14 == 0) goto LAB_03f8cf04;
  uVar13 = FUN_030f28e4(lVar14,iVar20,*(undefined8 *)puVar5);
  lVar16 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<string>__)
  ;
  FUN_02b6aa68(lVar16,*(undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<Type>__);
  if (lVar16 == 0) goto LAB_03f8cf04;
  FUN_02b6b2d0(lVar16,*(undefined8 *)
                       Method_Oculus_Interaction_FirstHoverInteractorGroup_HandleBestInteractorStateChanged__
               ,uVar21,*(undefined8 *)puVar4);
  FUN_02b6b2d0(lVar16,*(undefined8 *)Method_Oculus_Interaction_FingerPinchValue_HandleHandUpdated__,
               uVar13,*(undefined8 *)puVar4);
  lVar22 = thunk_FUN_01f117cc(*(undefined8 *)
                               Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                             );
  FUN_035ac8e8(lVar22,0);
  *(long *)(lVar22 + 0x10) = lVar16;
  thunk_FUN_01f51358((long *)(lVar22 + 0x10),lVar16);
  if (lVar15 == 0) goto LAB_03f8cf04;
  lVar16 = *(long *)(lVar15 + 0x10);
  lVar18 = *(long *)PTR_DAT_04581b10;
  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
  if (lVar16 == 0) goto LAB_03f8cf04;
  uVar1 = *(uint *)(lVar15 + 0x18);
  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
    *(uint *)(lVar15 + 0x18) = uVar1 + 1;
    plVar10 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
    *plVar10 = lVar22;
    thunk_FUN_01f51358(plVar10,lVar22);
  }
  else {
    FUN_030f2bb4(lVar15,lVar22,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
  }
  iVar20 = iVar20 + 1;
  if (*(int *)(lVar9 + 0x18) <= iVar20) {
    return auVar24;
  }
  goto LAB_03f8cda8;
}


