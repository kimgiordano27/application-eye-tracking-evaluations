/*
FUNCTION_NAME: FUN_033908b8
ENTRY_POINT: 033908b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 166
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void FUN_033908b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  
  puVar3 = Oculus_Platform_Models_LivestreamingApplicationStatus_TypeInfo;
  puVar1 = PTR_DAT_0422fb28;
  if ((DAT_04533688 & 1) == 0) {
    FUN_01c5d288(Method_FastList<string>_Clear__);
    FUN_01c5d288(System_ComponentModel_ListSortDescription_TypeInfo);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
                );
    FUN_01c5d288(Oculus_Platform_Models_LivestreamingApplicationStatus_TypeInfo);
    FUN_01c5d288(MQTTConnecter_<>c__DisplayClass21_0_TypeInfo);
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<TMP_Dropdown_OptionData>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_Player>_MoveNext__
                );
    FUN_01c5d288(
                VoxelBusters_EssentialKit_GameServicesCore_LoadAchievementDescriptionsInternalCallback_TypeInfo
                );
    FUN_01c5d288(Method_FastList<string>_ToArray__);
    FUN_01c5d288(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230910);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<FocusEvent>_TypeId__);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_EventBase<ContextualMenuPopulateEvent>_SetCreateFunction__
                );
    DAT_04533688 = 1;
  }
  puVar2 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_0338eae8(param_1,param_2);
  *(undefined4 *)(param_1 + 0x24) = 5;
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar15 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar15 = FUN_032e04b8(uVar15,0);
  plVar10 = (long *)(param_1 + 0xe0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar4 = MQTTConnecter_<>c__DisplayClass21_0_TypeInfo;
  uVar7 = OVRPlugin__GetTrackerPose(uVar14,uVar15,plVar10,0);
  puVar5 = Method_System_Collections_Generic_List_Enumerator<TMP_Dropdown_OptionData>_get_Current__;
  if ((uVar7 & 1) == 0) {
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    uVar15 = *(undefined8 *)
              Method_System_Collections_Generic_List_Enumerator<TMP_Dropdown_OptionData>_get_Current__
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar15 = FUN_032e04b8(uVar15,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar2);
    }
    uVar7 = OVRPlugin__GetTrackerPose(uVar14,uVar15,plVar10,0);
    if ((uVar7 & 1) != 0) {
      plVar8 = (long *)*plVar10;
      if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      lVar9 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
      if (lVar9 == 0) goto OVRPlugin_Sizei__GetHashCode;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_03391258;
      lVar9 = *(long *)(lVar9 + 0x20);
      plVar10 = (long *)*plVar10;
      local_58 = lVar9;
      if (plVar10 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      lVar11 = (**(code **)(*plVar10 + 0x458))(plVar10,*(undefined8 *)(*plVar10 + 0x460));
      if (lVar11 == 0) goto OVRPlugin_Sizei__GetHashCode;
      if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_03391258;
      local_60 = *(long *)(lVar11 + 0x28);
      uVar15 = *(undefined8 *)puVar5;
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar15 = FUN_032e04b8(uVar15,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar2);
      }
      uVar7 = FUN_0337ffa8(uVar14,uVar15,0);
      if ((uVar7 & 1) != 0) {
        uVar14 = *(undefined8 *)Method_FastList<string>_ToArray__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar10 = (long *)FUN_032e04b8(uVar14,0);
        plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
        if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
        if ((lVar9 != 0) &&
           (lVar11 = thunk_FUN_01c495e4(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
        goto LAB_0339125c;
        lVar11 = local_60;
        uVar13 = *(uint *)(plVar8 + 3);
        if (uVar13 == 0) goto LAB_03391258;
        plVar8[4] = lVar9;
        if (local_60 != 0) {
          lVar9 = thunk_FUN_01c495e4(local_60,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) goto LAB_0339125c;
          uVar13 = *(uint *)(plVar8 + 3);
        }
        if (uVar13 < 2) goto LAB_03391258;
        plVar8[5] = lVar11;
        if (plVar10 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
        uVar14 = (**(code **)(*plVar10 + 0x8f8))(plVar10,plVar8,*(undefined8 *)(*plVar10 + 0x900));
        FUN_0338ebf4(param_1,uVar14);
      }
      bVar6 = 1;
      goto LAB_03390eb8;
    }
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_033807d8(uVar14,&local_58,&local_60,0);
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    uVar15 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar15 = FUN_032e04b8(uVar15,0);
    uVar7 = FUN_032e935c(uVar14,uVar15,0);
    if ((uVar7 & 1) != 0) {
      uVar14 = *(undefined8 *)Method_FastList<string>_Clear__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar14 = FUN_032e04b8(uVar14,0);
      FUN_0338ebf4(param_1,uVar14);
    }
  }
  else {
    plVar8 = (long *)*plVar10;
    if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
    lVar9 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
    if (lVar9 == 0) goto OVRPlugin_Sizei__GetHashCode;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_03391258;
    lVar9 = *(long *)(lVar9 + 0x20);
    plVar10 = (long *)*plVar10;
    local_58 = lVar9;
    if (plVar10 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
    lVar11 = (**(code **)(*plVar10 + 0x458))(plVar10,*(undefined8 *)(*plVar10 + 0x460));
    if (lVar11 == 0) goto OVRPlugin_Sizei__GetHashCode;
    if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_03391258;
    local_60 = *(long *)(lVar11 + 0x28);
    uVar15 = *(undefined8 *)puVar3;
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar15 = FUN_032e04b8(uVar15,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar2);
    }
    uVar7 = FUN_0337ffa8(uVar14,uVar15,0);
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_0337a7b4(*(undefined8 *)(param_1 + 0x18),0);
      if ((uVar7 & 1) != 0) {
        plVar10 = *(long **)(param_1 + 0x18);
        if (plVar10 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
        plVar10 = (long *)(**(code **)(*plVar10 + 0x438))(plVar10,*(undefined8 *)(*plVar10 + 0x440))
        ;
        if (plVar10 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
        uVar14 = (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0));
        uVar7 = thunk_FUN_03152714(uVar14,*(undefined8 *)
                                           Method_UnityEngine_UIElements_EventBase<FocusEvent>_TypeId__
                                   ,0);
        if ((uVar7 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x100) = 1;
        }
      }
    }
    else {
      uVar14 = *(undefined8 *)System_ComponentModel_ListSortDescription_TypeInfo;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar10 = (long *)FUN_032e04b8(uVar14,0);
      plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
      if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      if ((lVar9 != 0) &&
         (lVar11 = thunk_FUN_01c495e4(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
      goto LAB_0339125c;
      lVar11 = local_60;
      uVar13 = *(uint *)(plVar8 + 3);
      if (uVar13 == 0) goto LAB_03391258;
      plVar8[4] = lVar9;
      if (local_60 != 0) {
        lVar9 = thunk_FUN_01c495e4(local_60,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) goto LAB_0339125c;
        uVar13 = *(uint *)(plVar8 + 3);
      }
      if (uVar13 < 2) goto LAB_03391258;
      plVar8[5] = lVar11;
      if (plVar10 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      uVar14 = (**(code **)(*plVar10 + 0x8f8))(plVar10,plVar8,*(undefined8 *)(*plVar10 + 0x900));
      FUN_0338ebf4(param_1,uVar14);
    }
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    uVar15 = *(undefined8 *)Method_FastList<string>_ToArray__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar15 = FUN_032e04b8(uVar15,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar2);
    }
    bVar6 = FUN_033802b8(uVar14,uVar15,0);
    bVar6 = bVar6 & 1;
LAB_03390eb8:
    *(byte *)(param_1 + 0x28) = bVar6;
  }
  lVar9 = local_58;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar7 = FUN_032ea0d4(lVar9,0,0);
  lVar9 = local_60;
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_032ea0d4(lVar9,0,0);
    if ((uVar7 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_1 + 0x58);
      uVar15 = *(undefined8 *)
                VoxelBusters_EssentialKit_GameServicesCore_LoadAchievementDescriptionsInternalCallback_TypeInfo
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar10 = (long *)FUN_032e04b8(uVar15,0);
      puVar2 = PTR_DAT_04230910;
      plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
      lVar9 = local_58;
      if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      if ((local_58 != 0) &&
         (lVar11 = thunk_FUN_01c495e4(local_58,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
      goto LAB_0339125c;
      lVar11 = local_60;
      uVar13 = *(uint *)(plVar8 + 3);
      if (uVar13 == 0) {
LAB_03391258:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar8[4] = lVar9;
      if (local_60 != 0) {
        lVar9 = thunk_FUN_01c495e4(local_60,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) goto LAB_0339125c;
        uVar13 = *(uint *)(plVar8 + 3);
      }
      if (uVar13 < 2) goto LAB_03391258;
      plVar8[5] = lVar11;
      if (plVar10 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      uVar15 = (**(code **)(*plVar10 + 0x8f8))(plVar10,plVar8,*(undefined8 *)(*plVar10 + 0x900));
      plVar10 = (long *)FUN_032e04b8(*(undefined8 *)puVar3,0);
      plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,2);
      lVar9 = local_58;
      if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      if ((local_58 != 0) &&
         (lVar11 = thunk_FUN_01c495e4(local_58,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
LAB_0339125c:
        uVar14 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar14,0);
      }
      lVar11 = local_60;
      uVar13 = *(uint *)(plVar8 + 3);
      if (uVar13 == 0) goto LAB_03391258;
      plVar8[4] = lVar9;
      if (local_60 != 0) {
        lVar9 = thunk_FUN_01c495e4(local_60,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) goto LAB_0339125c;
        uVar13 = *(uint *)(plVar8 + 3);
      }
      if (uVar13 < 2) goto LAB_03391258;
      plVar8[5] = lVar11;
      if (plVar10 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      uVar12 = (**(code **)(*plVar10 + 0x8f8))(plVar10,plVar8,*(undefined8 *)(*plVar10 + 0x900));
      uVar14 = FUN_0336db0c(uVar14,uVar15,uVar12,0);
      *(undefined8 *)(param_1 + 0x108) = uVar14;
      uVar7 = FUN_03390838(param_1);
      if ((uVar7 & 1) == 0) {
        plVar10 = *(long **)(param_1 + 0x18);
        if (plVar10 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
        uVar14 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
        uVar7 = thunk_FUN_03152714(uVar14,*(undefined8 *)
                                           Method_UnityEngine_UIElements_EventBase<ContextualMenuPopulateEvent>_SetCreateFunction__
                                   ,0);
        if ((uVar7 & 1) != 0) {
          uVar14 = FUN_0337a7dc(*(undefined8 *)(param_1 + 0x18),0);
          puVar3 = 
          Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
          ;
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
                              );
          }
          FUN_03379e44(uVar14,0);
          if (DAT_045336f7 == '\0') {
            FUN_01c5d288(
                        Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
                        );
            DAT_045336f7 = '\x01';
          }
          lVar9 = *(long *)puVar3;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar9 = *(long *)puVar3;
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
          if (lVar9 == 0) goto OVRPlugin_Sizei__GetHashCode;
          uVar14 = FUN_0337a0b0(lVar9,local_58,local_60,0);
          *(undefined8 *)(param_1 + 0x118) = uVar14;
        }
      }
    }
  }
  uVar14 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar10 = (long *)FUN_032e04b8(uVar14,0);
  if (plVar10 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar10 + 0x298))
                      (plVar10,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(*plVar10 + 0x2a0));
    lVar9 = local_58;
    if ((uVar7 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x100) = 1;
    }
    *(long *)(param_1 + 200) = local_58;
    *(long *)(param_1 + 0xd0) = local_60;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_032ea0d4(lVar9,0,0);
    if ((uVar7 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_1 + 0xd0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032ea0d4(uVar14,0,0);
      if ((uVar7 & 1) != 0) {
        uVar12 = *(undefined8 *)(param_1 + 0x18);
        uVar14 = *(undefined8 *)(param_1 + 200);
        uVar15 = *(undefined8 *)(param_1 + 0xd0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_Player>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar7 = FUN_0337a7fc(uVar12,uVar14,uVar15,&local_68,&local_70,0);
        if ((uVar7 & 1) != 0) {
          FUN_0338ebf4(param_1,local_68);
          *(undefined1 *)(param_1 + 0x28) = 1;
          *(undefined8 *)(param_1 + 0x118) = local_70;
        }
      }
    }
    return;
  }
OVRPlugin_Sizei__GetHashCode:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


