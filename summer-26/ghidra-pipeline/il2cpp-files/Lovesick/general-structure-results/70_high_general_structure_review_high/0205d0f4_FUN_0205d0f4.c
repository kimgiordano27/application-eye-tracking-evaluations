/*
FUNCTION_NAME: FUN_0205d0f4
ENTRY_POINT: 0205d0f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
FUN_0205d0f4(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  int local_58;
  char local_54;
  
  puVar2 = Method_System_Collections_Generic_HashSet<Type>_GetEnumerator__;
  if ((DAT_03780bab & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__
                      );
    thunk_FUN_00d48444(StringLiteral_6008);
    thunk_FUN_00d48444(TinyJSON_JSON_TypeInfo);
    thunk_FUN_00d48444(Method_System_String_LastIndexOf__);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JavaScriptUtils_<WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync>d__16>__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<int,_bool>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Type>_GetEnumerator__);
    thunk_FUN_00d48444(Method_UnityEngine_Timeline_TrackAsset_CreatePlayable__);
    thunk_FUN_00d48444(StringLiteral_2148);
    thunk_FUN_00d48444(Meta_WitAi_WitRequestSettings_TypeInfo);
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Create__);
    thunk_FUN_00d48444(StringLiteral_2681);
    thunk_FUN_00d48444(
                      Method_System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_6781);
    thunk_FUN_00d48444(Method_System_Data_DataTable_set_TableName__);
    thunk_FUN_00d48444(Meta_Conduit_HandleEntityResolutionFailure_var);
    thunk_FUN_00d48444(Method_System_ComponentModel_EventDescriptorCollection_Insert__);
    thunk_FUN_00d48444(StringLiteral_8610);
    DAT_03780bab = 1;
  }
  local_54 = '\0';
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = Method_System_String_LastIndexOf__;
  if (lVar7 == 0) goto LAB_0205d870;
  FUN_017b46ec(lVar7,0);
  *(long *)(lVar7 + 0x10) = param_1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_0205558c();
  puVar3 = StringLiteral_8610;
  if ((uVar8 & 1) != 0) {
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,2);
    uVar15 = *(undefined8 *)puVar3;
    if (param_2 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(param_2 + 0x10);
    }
    if (plVar9 == (long *)0x0) goto LAB_0205d870;
    if ((lVar16 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_0205d878:
      uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar15,0);
    }
    uVar13 = *(uint *)(plVar9 + 3);
    if (uVar13 == 0) {
LAB_0205d874:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar9[4] = lVar16;
    if (param_3 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(param_3 + 0x18);
      if (lVar16 != 0) {
        lVar10 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar10 == 0) goto LAB_0205d878;
        uVar13 = *(uint *)(plVar9 + 3);
      }
    }
    puVar3 = StringLiteral_2681;
    if (uVar13 < 2) goto LAB_0205d874;
    plVar9[5] = lVar16;
    uVar15 = FUN_016a060c(uVar15,plVar9,0);
    lVar16 = *(long *)puVar2;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar16);
    }
    FUN_020555f0(param_1,uVar15,*(undefined8 *)puVar3);
  }
  if (param_3 == 0) {
LAB_0205d558:
    uVar15 = 0;
  }
  else {
    iVar6 = *(int *)(param_3 + 0x14);
    if (iVar6 != 0xdd) {
      *(int *)(param_1 + 0x104) = iVar6;
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_3 + 0x18);
      if (499 < iVar6 - 100U) {
        thunk_FUN_00d48444(System_Collections_Generic_List<fsObjectProcessor>_TypeInfo);
        uVar15 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar11 = thunk_FUN_00d48444(System_Action<XRNodeState>_TypeInfo);
        FUN_020697ac(uVar15,uVar11,7,0);
        goto LAB_0205d8f8;
      }
    }
    if (*(int *)(param_1 + 0x58) == -1) {
      if (iVar6 == 0x78) {
        return 3;
      }
      if (iVar6 != 0xdc) goto LAB_0205d8a0;
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                );
      if (lVar7 == 0) goto LAB_0205d870;
      FUN_0160aa4c(lVar7,0);
      *(long *)(param_1 + 0xa0) = lVar7;
      FUN_0160c430(lVar7,*(undefined8 *)(param_1 + 0x108),0);
    }
    else {
      if (param_2 == 0) goto LAB_0205d870;
      uVar8 = thunk_FUN_015fe514(*(undefined8 *)(param_2 + 0x10),
                                 *(undefined8 *)Meta_WitAi_WitRequestSettings_TypeInfo,0);
      if ((uVar8 & 1) == 0) {
        if (*(long *)(param_2 + 0x10) == 0) goto LAB_0205d870;
        iVar5 = FUN_01604d30(*(long *)(param_2 + 0x10),
                             *(undefined8 *)Method_System_Data_DataTable_set_TableName__,0);
        if ((iVar6 == 0xe6) && (iVar5 != -1)) {
          *(undefined1 *)(param_1 + 0x100) = 1;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        }
        if ((*(int *)(param_3 + 0x14) - 400U < 100) || (*(int *)(param_3 + 0x14) - 500U < 100)) {
          if ((iVar6 == 0x1a5) && (*(int *)(param_1 + 0x58) < 2)) {
            *(undefined1 *)(param_1 + 0x38) = 1;
          }
LAB_0205d8a0:
          uVar15 = FUN_00ac2be8(param_3);
          uVar15 = FUN_0205ab34(uVar15,iVar6,*(undefined8 *)(param_3 + 0x18),0);
LAB_0205d8f8:
          uVar11 = thunk_FUN_00d48444(PTR_DAT_033f3578);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar15,uVar11);
        }
        if (*(char *)(param_1 + 0x100) != '\x01') {
          if (*(long *)(param_2 + 0x10) == 0) goto LAB_0205d870;
          iVar5 = FUN_01604d30(*(long *)(param_2 + 0x10),
                               *(undefined8 *)
                                Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Create__
                               ,0);
          if (iVar5 != -1) {
            if ((iVar6 != 0x14c) && (iVar6 != 0xe6)) goto LAB_0205d8a0;
            *(undefined1 *)(param_1 + 0x100) = 1;
          }
        }
        if (((*(byte *)(param_2 + 0x18) >> 2 & 1) != 0) &&
           (((*(int *)(param_3 + 0x14) - 200U < 100 || (*(int *)(param_3 + 0x14) - 100U < 100)) &&
            (uVar15 = FUN_0205d928(param_1,param_2,param_3,0), local_54 == '\0')))) {
          return uVar15;
        }
        puVar4 = StringLiteral_2148;
        puVar3 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JavaScriptUtils_<WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync>d__16>__
        ;
        puVar2 = TinyJSON_JSON_TypeInfo;
        if (iVar6 == 0x7d) {
LAB_0205d500:
          if (*(long *)(param_1 + 0x88) != 0) {
            if ((*(byte *)(param_2 + 0x18) >> 1 & 1) == 0) {
              local_58 = iVar6;
              uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_6008,&local_58);
              uVar15 = FUN_015e2494(*(undefined8 *)puVar4,uVar15,*(undefined8 *)(param_2 + 0x10),0);
              *(undefined8 *)(param_1 + 0x68) = uVar15;
              return 0;
            }
            FUN_0205df8c(param_1,*(undefined8 *)(param_3 + 0x18));
            plVar9 = *(long **)(param_1 + 0x40);
            if (plVar9 != (long *)0x0) {
              if (*plVar9 != *(long *)puVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(plVar9);
              }
              if (plVar9[10] != 0) {
                if ((*(byte *)(plVar9[10] + 0x1c) >> 6 & 1) != 0) {
                  FUN_0205e084(param_1,*(undefined8 *)(param_3 + 0x18));
                }
                uVar15 = FUN_0205cad4(param_1,param_5);
                return uVar15;
              }
            }
LAB_0205d870:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          goto LAB_0205d558;
        }
        if (iVar6 == 0xe6) {
          if (*(long *)(param_1 + 0xa8) == 0) goto LAB_0205d870;
          FUN_0160c430(*(long *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x108),0);
        }
        else {
          if (iVar6 == 0x96) goto LAB_0205d500;
          if (iVar6 == 0xdd) {
            if (*(long *)(param_1 + 0xb0) == 0) goto LAB_0205d870;
            FUN_0160c430(*(long *)(param_1 + 0xb0),*(undefined8 *)(param_3 + 0x18),0);
            FUN_0205b5fc(param_1);
          }
          else if (iVar6 == 0xd5) {
            if (*(long *)(param_2 + 0x10) == 0) goto LAB_0205d870;
            uVar8 = FUN_015fe854(*(long *)(param_2 + 0x10),
                                 *(undefined8 *)
                                  Method_System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>__ctor__
                                 ,0);
            if ((uVar8 & 1) == 0) {
              if (*(long *)(param_2 + 0x10) == 0) goto LAB_0205d870;
              uVar8 = FUN_015fe854(*(long *)(param_2 + 0x10),
                                   *(undefined8 *)Meta_Conduit_HandleEntityResolutionFailure_var,0);
              if ((uVar8 & 1) != 0) {
                uVar15 = FUN_0205e538(param_1,*(undefined8 *)(param_3 + 0x18));
                *(undefined8 *)(param_1 + 0xd0) = uVar15;
              }
            }
            else {
              uVar15 = FUN_0205e3f8(uVar8,*(undefined8 *)(param_3 + 0x18));
              *(undefined8 *)(param_1 + 200) = uVar15;
            }
          }
          else if (iVar6 == 0x101) {
            uVar8 = thunk_FUN_015fe514(*(undefined8 *)(param_2 + 0x10),
                                       *(undefined8 *)
                                        Method_System_ComponentModel_EventDescriptorCollection_Insert__
                                       ,0);
            if (((uVar8 & 1) != 0) && ((*(byte *)(param_2 + 0x18) & 1) == 0)) {
              uVar15 = FUN_0205e8bc(uVar8,*(undefined8 *)(param_3 + 0x18));
              *(undefined8 *)(param_1 + 0xe0) = uVar15;
            }
          }
          else if (iVar6 == 0xea) {
            plVar9 = *(long **)(param_1 + 0x30);
            if (plVar9 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JavaScriptUtils_<WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync>d__16>__
                               + 300);
              if ((bVar1 <= *(byte *)(*plVar9 + 300)) &&
                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
                  *(long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JavaScriptUtils_<WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync>d__16>__
                 )) goto LAB_0205d5c8;
            }
            plVar14 = *(long **)(param_1 + 0x40);
            if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)TinyJSON_JSON_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar14);
            }
            if ((*(long *)(param_1 + 0x28) == 0) || (plVar14 == (long *)0x0)) goto LAB_0205d870;
            uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
            lVar16 = (**(code **)(*plVar14 + 0x1e8))(plVar14,*(undefined8 *)(*plVar14 + 0x1f0));
            if (lVar16 == 0) goto LAB_0205d870;
            uVar11 = FUN_01fc6760(lVar16,0);
            uVar12 = FUN_0205cf68(plVar14);
            lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            if (lVar16 == 0) goto LAB_0205d870;
            FUN_02057870(lVar16,plVar9,uVar15,uVar11,uVar12);
            *(long *)(lVar7 + 0x18) = lVar16;
            if (*(char *)(param_1 + 0x48) != '\0') {
              lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__
                                         );
              if (lVar10 != 0) {
                FUN_016f4a88(lVar10,lVar7,
                             *(undefined8 *)
                              System_Collections_Generic_Dictionary<int,_bool>_TypeInfo,0);
                FUN_02057a44(lVar16,lVar10,0);
                return 2;
              }
              goto LAB_0205d870;
            }
            FUN_02057944(lVar16);
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar7 + 0x18);
          }
          else {
            if (*(long *)(param_2 + 0x10) == 0) goto LAB_0205d870;
            iVar6 = FUN_01604d30(*(long *)(param_2 + 0x10),*(undefined8 *)StringLiteral_6781,0);
            if (iVar6 != -1) {
              *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xf0);
            }
          }
        }
LAB_0205d5c8:
        if ((*(int *)(param_3 + 0x14) - 100U < 100) ||
           ((uVar8 = FUN_0205ceec(param_1), (uVar8 & 1) == 0 &&
            (uVar8 = thunk_FUN_015fe514(*(undefined8 *)(param_2 + 0x10),
                                        *(undefined8 *)
                                         Method_UnityEngine_Timeline_TrackAsset_CreatePlayable__,0),
            (uVar8 & 1) != 0)))) {
          return 3;
        }
      }
      else {
        if (*(int *)(param_3 + 0x14) - 200U < 100) {
          plVar9 = (long *)FUN_0161b700(0);
        }
        else {
          plVar9 = (long *)FUN_0161c9d8(0);
        }
        *(long **)(param_1 + 0x78) = plVar9;
        if (plVar9 == (long *)0x0) goto LAB_0205d870;
        uVar15 = (**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330));
        *(undefined8 *)(param_1 + 0x80) = uVar15;
      }
    }
    uVar15 = 1;
  }
  return uVar15;
}


