/*
FUNCTION_NAME: FUN_03ebf950
ENTRY_POINT: 03ebf950
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 198
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_8
*/


void FUN_03ebf950(long *param_1,undefined8 param_2,uint param_3,int param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  uint local_68;
  uint local_64;
  
  if ((DAT_0483ac5c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
    ;
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<Collider>__);
    thunk_FUN_01efb3a4(PTR_DAT_0457b5b8);
    thunk_FUN_01efb3a4(PTR_DAT_0457bac8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0457baf0);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    DAT_0483ac5c = 1;
  }
  puVar3 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  plVar10 = (long *)param_1[8];
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto Unity_VisualScripting_SelectOnEnum__Definition;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_UnityEngine_Component_GetComponents<BaseRaycaster>__,0);
Unity_VisualScripting_SelectOnEnum__Definition:
    plVar12 = (long *)Method_UnityEngine_Component_GetComponents<Collider>__;
    lVar7 = (*(code *)*puVar5)(plVar10,param_2,puVar5[1]);
    if (lVar7 == 0) {
      plVar10 = (long *)0x0;
    }
    else {
      uVar13 = *plVar12;
      plVar10 = (long *)thunk_FUN_01f116d0(lVar7,uVar13);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar7,uVar13);
      }
    }
    plVar15 = (long *)Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__;
    plVar11 = (long *)param_1[3];
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
          {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_03ebfb08;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar11,*(long *)
                                     Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__
                            ,1);
LAB_03ebfb08:
      iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if (iVar4 + -1 < param_4) {
        plVar11 = (long *)param_1[3];
        if (plVar11 == (long *)0x0) goto LAB_03ec0240;
        lVar7 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *plVar15) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_03ebfb78;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*plVar15,1);
LAB_03ebfb78:
        param_4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
        param_4 = param_4 + -1;
      }
      param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *plVar15) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_03ebfbe0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*plVar15,1);
LAB_03ebfbe0:
        iVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        if (iVar4 != 0) {
          plVar11 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__
                                              );
          FUN_03416d98(plVar11,0);
          plVar10 = (long *)FUN_03ec0260(param_1,plVar10);
          puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
joined_r0x03ebfc20:
          do {
            if (param_4 < (int)param_3) goto LAB_03ebff0c;
            plVar14 = (long *)param_1[3];
            if (plVar14 == (long *)0x0) goto LAB_03ec0240;
            lVar7 = *plVar14;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *plVar15) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_03ebfc84;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(plVar14,*plVar15,1);
LAB_03ebfc84:
            iVar4 = (*(code *)*puVar5)(plVar14,puVar5[1]);
            if (iVar4 <= (int)param_3) goto LAB_03ebff0c;
            local_64 = param_3;
            uVar13 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_64);
            if (plVar10 == (long *)0x0) goto LAB_03ec0240;
            lVar7 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_03ebfcfc;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_03ebfcfc:
            plVar14 = (long *)(*(code *)*puVar5)(plVar10,uVar13,puVar5[1]);
            if (plVar14 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
              if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_0457baf0)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar14);
              }
            }
            local_68 = param_3;
            uVar13 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_68);
            lVar7 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 10) * 0x10 + 0x138);
                  goto LAB_03ebfdac;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,10);
LAB_03ebfdac:
            (*(code *)*puVar5)(plVar10,uVar13,puVar5[1]);
            plVar15 = (long *)param_1[3];
            if (plVar15 == (long *)0x0) goto LAB_03ec0240;
            lVar7 = *plVar15;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *plVar12) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_03ebfe10;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(plVar15,*plVar12,0);
LAB_03ebfe10:
            lVar7 = (*(code *)*puVar5)(plVar15,param_3,puVar5[1]);
            if (lVar7 == 0) {
              if (plVar14 == (long *)0x0) goto LAB_03ec0240;
            }
            else {
              uVar13 = *(undefined8 *)PTR_DAT_0457b5b8;
              plVar6 = (long *)thunk_FUN_01f116d0(lVar7,uVar13);
              plVar12 = (long *)Method_UnityEngine_Component_GetComponents<Collider>__;
              plVar15 = (long *)
                        Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__
              ;
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(lVar7,uVar13);
              }
              if (plVar14 == (long *)0x0) {
                lVar7 = *plVar6;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0457b5b8) {
                      puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 10) * 0x10 + 0x138);
                      goto Unity_VisualScripting_SelectOnFlow__set_branchCount;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)PTR_DAT_0457b5b8,10);
Unity_VisualScripting_SelectOnFlow__set_branchCount:
                uVar13 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                if (plVar11 == (long *)0x0) goto LAB_03ec0240;
                FUN_03418748(plVar11,uVar13,0);
                param_3 = param_3 + 1;
                goto joined_r0x03ebfc20;
              }
            }
            param_3 = (**(code **)(*plVar14 + 0x178))
                                (plVar14,plVar11,*(undefined8 *)(*plVar14 + 0x180));
            plVar15 = (long *)
                      Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__;
            plVar12 = (long *)Method_UnityEngine_Component_GetComponents<Collider>__;
          } while( true );
        }
      }
                    /* WARNING: Could not recover jumptable at 0x03ebff88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x638))(param_1,param_3,param_4,*(undefined8 *)(*param_1 + 0x640));
      return;
    }
  }
  goto LAB_03ec0240;
LAB_03ebff0c:
  plVar12 = (long *)param_1[3];
  if (plVar12 != (long *)0x0) {
    lVar7 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *plVar15) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_03ebff9c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar12,*plVar15,1);
LAB_03ebff9c:
    iVar4 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if (param_4 == iVar4 + -1) {
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_03ec0008;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,3);
LAB_03ec0008:
        puVar5 = (undefined8 *)(*(code *)*puVar5)(plVar10,puVar5[1]);
        if (puVar5 != (undefined8 *)0x0) {
          FUN_042af97c(*puVar5);
          return;
        }
      }
    }
    else if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      return;
    }
  }
LAB_03ec0240:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


