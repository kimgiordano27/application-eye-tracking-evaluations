/*
FUNCTION_NAME: OVRPlugin.Quatf$$ToString
ENTRY_POINT: 033908e0
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


void OVRPlugin_Quatf__ToString(ulong param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uVar12;
  long unaff_x21;
  undefined8 uVar13;
  long unaff_x24;
  undefined8 *puVar14;
  long unaff_x25;
  long *plVar15;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  puVar14 = *(undefined8 **)(unaff_x24 + 0x118);
  plVar15 = *(long **)(unaff_x25 + 0xb28);
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x21 + 0x688) = 1;
  }
  puVar1 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  FUN_0338eae8(param_2,param_3);
  *(undefined4 *)(param_2 + 0x24) = 5;
  uVar12 = *(undefined8 *)(param_2 + 0x18);
  uVar13 = *puVar14;
  if (*(int *)(*plVar15 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar13 = FUN_032e04b8(uVar13,0);
  plVar8 = (long *)(param_2 + 0xe0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar2 = MQTTConnecter_<>c__DisplayClass21_0_TypeInfo;
  uVar5 = OVRPlugin__GetTrackerPose(uVar12,uVar13,plVar8,0);
  puVar3 = Method_System_Collections_Generic_List_Enumerator<TMP_Dropdown_OptionData>_get_Current__;
  if ((uVar5 & 1) == 0) {
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    uVar13 = *(undefined8 *)
              Method_System_Collections_Generic_List_Enumerator<TMP_Dropdown_OptionData>_get_Current__
    ;
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar13 = FUN_032e04b8(uVar13,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar1);
    }
    uVar5 = OVRPlugin__GetTrackerPose(uVar12,uVar13,plVar8,0);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)*plVar8;
      if (plVar6 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      lVar7 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
      if (lVar7 == 0) goto OVRPlugin_Sizei__GetHashCode;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_03391258;
      lVar7 = *(long *)(lVar7 + 0x20);
      plVar8 = (long *)*plVar8;
      in_stack_00000018 = lVar7;
      if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      lVar9 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
      if (lVar9 == 0) goto OVRPlugin_Sizei__GetHashCode;
      if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_03391258;
      in_stack_00000010 = *(long *)(lVar9 + 0x28);
      uVar13 = *(undefined8 *)puVar3;
      uVar12 = *(undefined8 *)(param_2 + 0x18);
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar13 = FUN_032e04b8(uVar13,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar1);
      }
      uVar5 = FUN_0337ffa8(uVar12,uVar13,0);
      if ((uVar5 & 1) != 0) {
        uVar12 = *(undefined8 *)Method_FastList<string>_ToArray__;
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar8 = (long *)FUN_032e04b8(uVar12,0);
        plVar6 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
        if (plVar6 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
        if ((lVar7 != 0) &&
           (lVar9 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
        goto LAB_0339125c;
        lVar9 = in_stack_00000010;
        uVar11 = *(uint *)(plVar6 + 3);
        if (uVar11 == 0) goto LAB_03391258;
        plVar6[4] = lVar7;
        if (in_stack_00000010 != 0) {
          lVar7 = thunk_FUN_01c495e4(in_stack_00000010,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar7 == 0) goto LAB_0339125c;
          uVar11 = *(uint *)(plVar6 + 3);
        }
        if (uVar11 < 2) goto LAB_03391258;
        plVar6[5] = lVar9;
        if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
        uVar12 = (**(code **)(*plVar8 + 0x8f8))(plVar8,plVar6,*(undefined8 *)(*plVar8 + 0x900));
        FUN_0338ebf4(param_2,uVar12);
      }
      bVar4 = 1;
      goto LAB_03390eb8;
    }
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_033807d8(uVar12,&stack0x00000018,&stack0x00000010,0);
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    uVar13 = *(undefined8 *)puVar2;
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar13 = FUN_032e04b8(uVar13,0);
    uVar5 = FUN_032e935c(uVar12,uVar13,0);
    if ((uVar5 & 1) != 0) {
      uVar12 = *(undefined8 *)Method_FastList<string>_Clear__;
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_032e04b8(uVar12,0);
      FUN_0338ebf4(param_2,uVar12);
    }
  }
  else {
    plVar6 = (long *)*plVar8;
    if (plVar6 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
    lVar7 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
    if (lVar7 == 0) goto OVRPlugin_Sizei__GetHashCode;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_03391258;
    lVar7 = *(long *)(lVar7 + 0x20);
    plVar8 = (long *)*plVar8;
    in_stack_00000018 = lVar7;
    if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
    lVar9 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
    if (lVar9 == 0) goto OVRPlugin_Sizei__GetHashCode;
    if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_03391258;
    in_stack_00000010 = *(long *)(lVar9 + 0x28);
    uVar13 = *puVar14;
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar13 = FUN_032e04b8(uVar13,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar1);
    }
    uVar5 = FUN_0337ffa8(uVar12,uVar13,0);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_0337a7b4(*(undefined8 *)(param_2 + 0x18),0);
      if ((uVar5 & 1) != 0) {
        plVar8 = *(long **)(param_2 + 0x18);
        if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
        plVar8 = (long *)(**(code **)(*plVar8 + 0x438))(plVar8,*(undefined8 *)(*plVar8 + 0x440));
        if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
        uVar12 = (**(code **)(*plVar8 + 0x2d8))(plVar8,*(undefined8 *)(*plVar8 + 0x2e0));
        uVar5 = thunk_FUN_03152714(uVar12,*(undefined8 *)
                                           Method_UnityEngine_UIElements_EventBase<FocusEvent>_TypeId__
                                   ,0);
        if ((uVar5 & 1) != 0) {
          *(undefined1 *)(param_2 + 0x100) = 1;
        }
      }
    }
    else {
      uVar12 = *(undefined8 *)System_ComponentModel_ListSortDescription_TypeInfo;
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar8 = (long *)FUN_032e04b8(uVar12,0);
      plVar6 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
      if (plVar6 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      if ((lVar7 != 0) &&
         (lVar9 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
      goto LAB_0339125c;
      lVar9 = in_stack_00000010;
      uVar11 = *(uint *)(plVar6 + 3);
      if (uVar11 == 0) goto LAB_03391258;
      plVar6[4] = lVar7;
      if (in_stack_00000010 != 0) {
        lVar7 = thunk_FUN_01c495e4(in_stack_00000010,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) goto LAB_0339125c;
        uVar11 = *(uint *)(plVar6 + 3);
      }
      if (uVar11 < 2) goto LAB_03391258;
      plVar6[5] = lVar9;
      if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      uVar12 = (**(code **)(*plVar8 + 0x8f8))(plVar8,plVar6,*(undefined8 *)(*plVar8 + 0x900));
      FUN_0338ebf4(param_2,uVar12);
    }
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    uVar13 = *(undefined8 *)Method_FastList<string>_ToArray__;
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar13 = FUN_032e04b8(uVar13,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar1);
    }
    bVar4 = FUN_033802b8(uVar12,uVar13,0);
    bVar4 = bVar4 & 1;
LAB_03390eb8:
    *(byte *)(param_2 + 0x28) = bVar4;
  }
  lVar7 = in_stack_00000018;
  if (*(int *)(*plVar15 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar5 = FUN_032ea0d4(lVar7,0,0);
  lVar7 = in_stack_00000010;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar5 = FUN_032ea0d4(lVar7,0,0);
    if ((uVar5 & 1) != 0) {
      uVar12 = *(undefined8 *)(param_2 + 0x58);
      uVar13 = *(undefined8 *)
                VoxelBusters_EssentialKit_GameServicesCore_LoadAchievementDescriptionsInternalCallback_TypeInfo
      ;
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar8 = (long *)FUN_032e04b8(uVar13,0);
      puVar1 = PTR_DAT_04230910;
      plVar6 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
      lVar7 = in_stack_00000018;
      if (plVar6 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      if ((in_stack_00000018 != 0) &&
         (lVar9 = thunk_FUN_01c495e4(in_stack_00000018,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)
         ) goto LAB_0339125c;
      lVar9 = in_stack_00000010;
      uVar11 = *(uint *)(plVar6 + 3);
      if (uVar11 == 0) {
LAB_03391258:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar6[4] = lVar7;
      if (in_stack_00000010 != 0) {
        lVar7 = thunk_FUN_01c495e4(in_stack_00000010,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) goto LAB_0339125c;
        uVar11 = *(uint *)(plVar6 + 3);
      }
      if (uVar11 < 2) goto LAB_03391258;
      plVar6[5] = lVar9;
      if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      uVar13 = (**(code **)(*plVar8 + 0x8f8))(plVar8,plVar6,*(undefined8 *)(*plVar8 + 0x900));
      plVar8 = (long *)FUN_032e04b8(*puVar14,0);
      plVar6 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,2);
      lVar7 = in_stack_00000018;
      if (plVar6 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      if ((in_stack_00000018 != 0) &&
         (lVar9 = thunk_FUN_01c495e4(in_stack_00000018,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)
         ) {
LAB_0339125c:
        uVar12 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar12,0);
      }
      lVar9 = in_stack_00000010;
      uVar11 = *(uint *)(plVar6 + 3);
      if (uVar11 == 0) goto LAB_03391258;
      plVar6[4] = lVar7;
      if (in_stack_00000010 != 0) {
        lVar7 = thunk_FUN_01c495e4(in_stack_00000010,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) goto LAB_0339125c;
        uVar11 = *(uint *)(plVar6 + 3);
      }
      if (uVar11 < 2) goto LAB_03391258;
      plVar6[5] = lVar9;
      if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      uVar10 = (**(code **)(*plVar8 + 0x8f8))(plVar8,plVar6,*(undefined8 *)(*plVar8 + 0x900));
      uVar12 = FUN_0336db0c(uVar12,uVar13,uVar10,0);
      *(undefined8 *)(param_2 + 0x108) = uVar12;
      uVar5 = FUN_03390838(param_2);
      if ((uVar5 & 1) == 0) {
        plVar8 = *(long **)(param_2 + 0x18);
        if (plVar8 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
        uVar12 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
        uVar5 = thunk_FUN_03152714(uVar12,*(undefined8 *)
                                           Method_UnityEngine_UIElements_EventBase<ContextualMenuPopulateEvent>_SetCreateFunction__
                                   ,0);
        if ((uVar5 & 1) != 0) {
          uVar12 = FUN_0337a7dc(*(undefined8 *)(param_2 + 0x18),0);
          puVar1 = 
          Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
          ;
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
                              );
          }
          FUN_03379e44(uVar12,0);
          if (DAT_045336f7 == '\0') {
            FUN_01c5d288(
                        Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
                        );
            DAT_045336f7 = '\x01';
          }
          lVar7 = *(long *)puVar1;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar7 = *(long *)puVar1;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          if (lVar7 == 0) goto OVRPlugin_Sizei__GetHashCode;
          uVar12 = FUN_0337a0b0(lVar7,in_stack_00000018,in_stack_00000010,0);
          *(undefined8 *)(param_2 + 0x118) = uVar12;
        }
      }
    }
  }
  uVar12 = *(undefined8 *)puVar2;
  if (*(int *)(*plVar15 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar8 = (long *)FUN_032e04b8(uVar12,0);
  if (plVar8 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar8 + 0x298))
                      (plVar8,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(*plVar8 + 0x2a0));
    lVar7 = in_stack_00000018;
    if ((uVar5 & 1) == 0) {
      *(undefined1 *)(param_2 + 0x100) = 1;
    }
    *(long *)(param_2 + 200) = in_stack_00000018;
    *(long *)(param_2 + 0xd0) = in_stack_00000010;
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar5 = FUN_032ea0d4(lVar7,0,0);
    if ((uVar5 & 1) != 0) {
      uVar12 = *(undefined8 *)(param_2 + 0xd0);
      if (*(int *)(*plVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar5 = FUN_032ea0d4(uVar12,0,0);
      if ((uVar5 & 1) != 0) {
        uVar10 = *(undefined8 *)(param_2 + 0x18);
        uVar12 = *(undefined8 *)(param_2 + 200);
        uVar13 = *(undefined8 *)(param_2 + 0xd0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_Player>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar5 = FUN_0337a7fc(uVar10,uVar12,uVar13,&stack0x00000008);
        if ((uVar5 & 1) != 0) {
          FUN_0338ebf4(param_2,in_stack_00000008);
          *(undefined1 *)(param_2 + 0x28) = 1;
          *(undefined8 *)(param_2 + 0x118) = 0;
        }
      }
    }
    return;
  }
OVRPlugin_Sizei__GetHashCode:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


