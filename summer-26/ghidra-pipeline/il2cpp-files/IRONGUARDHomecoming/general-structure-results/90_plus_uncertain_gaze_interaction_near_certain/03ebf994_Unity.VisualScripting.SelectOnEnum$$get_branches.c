/*
FUNCTION_NAME: Unity.VisualScripting.SelectOnEnum$$get_branches
ENTRY_POINT: 03ebf994
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


void Unity_VisualScripting_SelectOnEnum__get_branches(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x23;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
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
  *(undefined1 *)(unaff_x23 + 0xc5c) = 1;
  puVar3 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  plVar11 = (long *)unaff_x19[8];
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto Unity_VisualScripting_SelectOnEnum__Definition;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_UnityEngine_Component_GetComponents<BaseRaycaster>__,0);
Unity_VisualScripting_SelectOnEnum__Definition:
    plVar13 = (long *)Method_UnityEngine_Component_GetComponents<Collider>__;
    lVar8 = (*(code *)*puVar6)(plVar11);
    if (lVar8 == 0) {
      plVar11 = (long *)0x0;
    }
    else {
      uVar14 = *plVar13;
      plVar11 = (long *)thunk_FUN_01f116d0(lVar8,uVar14);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar8,uVar14);
      }
    }
    plVar16 = (long *)Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__;
    plVar12 = (long *)unaff_x19[3];
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
          {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_03ebfb08;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar12,*(long *)
                                     Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__
                            ,1);
LAB_03ebfb08:
      iVar4 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if (iVar4 + -1 < unaff_w21) {
        plVar12 = (long *)unaff_x19[3];
        if (plVar12 == (long *)0x0) goto LAB_03ec0240;
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *plVar16) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_03ebfb78;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*plVar16,1);
LAB_03ebfb78:
        iVar4 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        unaff_w21 = iVar4 + -1;
      }
      uVar5 = unaff_w20 & ((int)unaff_w20 >> 0x1f ^ 0xffffffffU);
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *plVar16) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_03ebfbe0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*plVar16,1);
LAB_03ebfbe0:
        iVar4 = (*(code *)*puVar6)(plVar11,puVar6[1]);
        if (iVar4 != 0) {
          plVar11 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__
                                              );
          FUN_03416d98(plVar11,0);
          plVar12 = (long *)FUN_03ec0260();
          puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
joined_r0x03ebfc20:
          do {
            if (unaff_w21 < (int)uVar5) goto LAB_03ebff0c;
            plVar15 = (long *)unaff_x19[3];
            if (plVar15 == (long *)0x0) goto LAB_03ec0240;
            lVar8 = *plVar15;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *plVar16) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_03ebfc84;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar15,*plVar16,1);
LAB_03ebfc84:
            iVar4 = (*(code *)*puVar6)(plVar15,puVar6[1]);
            if (iVar4 <= (int)uVar5) goto LAB_03ebff0c;
            uStack000000000000000c = uVar5;
            uVar14 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,(long)&stack0x00000008 + 4);
            if (plVar12 == (long *)0x0) goto LAB_03ec0240;
            lVar8 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_03ebfcfc;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar3,0);
LAB_03ebfcfc:
            plVar15 = (long *)(*(code *)*puVar6)(plVar12,uVar14,puVar6[1]);
            if (plVar15 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
              if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_0457baf0)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar15);
              }
            }
            uStack0000000000000008 = uVar5;
            uVar14 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&stack0x00000008);
            lVar8 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 10) * 0x10 + 0x138);
                  goto LAB_03ebfdac;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar3,10);
LAB_03ebfdac:
            (*(code *)*puVar6)(plVar12,uVar14,puVar6[1]);
            plVar16 = (long *)unaff_x19[3];
            if (plVar16 == (long *)0x0) goto LAB_03ec0240;
            lVar8 = *plVar16;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *plVar13) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_03ebfe10;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar16,*plVar13,0);
LAB_03ebfe10:
            lVar8 = (*(code *)*puVar6)(plVar16,uVar5,puVar6[1]);
            if (lVar8 == 0) {
              if (plVar15 == (long *)0x0) goto LAB_03ec0240;
            }
            else {
              uVar14 = *(undefined8 *)PTR_DAT_0457b5b8;
              plVar7 = (long *)thunk_FUN_01f116d0(lVar8,uVar14);
              plVar13 = (long *)Method_UnityEngine_Component_GetComponents<Collider>__;
              plVar16 = (long *)
                        Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__
              ;
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(lVar8,uVar14);
              }
              if (plVar15 == (long *)0x0) {
                lVar8 = *plVar7;
                uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0457b5b8) {
                      puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 10) * 0x10 + 0x138);
                      goto Unity_VisualScripting_SelectOnFlow__set_branchCount;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_0457b5b8,10);
Unity_VisualScripting_SelectOnFlow__set_branchCount:
                uVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
                if (plVar11 == (long *)0x0) goto LAB_03ec0240;
                FUN_03418748(plVar11,uVar14,0);
                uVar5 = uVar5 + 1;
                goto joined_r0x03ebfc20;
              }
            }
            uVar5 = (**(code **)(*plVar15 + 0x178))
                              (plVar15,plVar11,*(undefined8 *)(*plVar15 + 0x180));
            plVar16 = (long *)
                      Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__;
            plVar13 = (long *)Method_UnityEngine_Component_GetComponents<Collider>__;
          } while( true );
        }
      }
                    /* WARNING: Could not recover jumptable at 0x03ebff88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x638))();
      return;
    }
  }
  goto LAB_03ec0240;
LAB_03ebff0c:
  plVar13 = (long *)unaff_x19[3];
  if (plVar13 != (long *)0x0) {
    lVar8 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *plVar16) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_03ebff9c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar13,*plVar16,1);
LAB_03ebff9c:
    iVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    if (unaff_w21 == iVar4 + -1) {
      if (plVar12 != (long *)0x0) {
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_03ec0008;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar3,3);
LAB_03ec0008:
        puVar6 = (undefined8 *)(*(code *)*puVar6)(plVar12,puVar6[1]);
        if (puVar6 != (undefined8 *)0x0) {
          FUN_042af97c(*puVar6);
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


