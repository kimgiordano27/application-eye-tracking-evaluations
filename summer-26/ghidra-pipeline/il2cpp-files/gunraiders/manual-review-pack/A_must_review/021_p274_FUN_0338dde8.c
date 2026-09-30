/*
FUNCTION_NAME: FUN_0338dde8
ENTRY_POINT: 0338dde8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 197
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_5
*/


void FUN_0338dde8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_04533671 & 1) == 0) {
    FUN_01c5d288(UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo);
    FUN_01c5d288(Method_TMPro_FastAction<Object>_Add__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UIRStylePainter_Entry>_Dispose__)
    ;
    FUN_01c5d288(UnityEngine_EventSystems_ISelectHandler_TypeInfo);
    FUN_01c5d288(Method_TMPro_FastAction<Object>_Call__);
    FUN_01c5d288(Method_TMPro_FastAction<Object>_Remove__);
    FUN_01c5d288(Method_TMPro_FastAction<bool,_Material>__ctor__);
    FUN_01c5d288(Oculus_Platform_Models_LivestreamingVideoStats_TypeInfo);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_Player>_MoveNext__
                );
    FUN_01c5d288(
                VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeScheduleNotificationListener_OnFailureDelegate_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_EssentialKit_GameServicesCore_LoadAchievementsInternalCallback_TypeInfo
                );
    FUN_01c5d288(Method_TMPro_FastAction<bool,_Material>_Call__);
    FUN_01c5d288(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230910);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_TMPro_FastAction<bool,_Object>__ctor__);
    DAT_04533671 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_78 = 0;
  FUN_0338eae8(param_1,param_2);
  *(undefined4 *)(param_1 + 0x24) = 2;
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_0338ead4;
  uVar10 = FUN_032eaf80(*(long *)(param_1 + 0x58),0);
  if ((uVar10 & 1) == 0) {
    uVar10 = FUN_0337a7b4(*(undefined8 *)(param_1 + 0x18),0);
    if ((uVar10 & 1) == 0) {
      bVar8 = 0;
    }
    else {
      plVar11 = *(long **)(param_1 + 0x18);
      if (plVar11 == (long *)0x0) goto LAB_0338ead4;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x438))(plVar11,*(undefined8 *)(*plVar11 + 0x440));
      if (plVar11 == (long *)0x0) goto LAB_0338ead4;
      uVar16 = (**(code **)(*plVar11 + 0x2d8))(plVar11,*(undefined8 *)(*plVar11 + 0x2e0));
      bVar8 = thunk_FUN_03152714(uVar16,*(undefined8 *)Method_TMPro_FastAction<bool,_Object>__ctor__
                                 ,0);
      bVar8 = bVar8 & 1;
    }
  }
  else {
    bVar8 = 1;
  }
  puVar4 = VoxelBusters_EssentialKit_GameServicesCore_LoadAchievementsInternalCallback_TypeInfo;
  puVar3 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  puVar2 = PTR_DAT_04230910;
  puVar1 = PTR_DAT_0422fb28;
  *(byte *)(param_1 + 0xf0) = bVar8;
  puVar5 = Method_TMPro_FastAction<Object>_Call__;
  if (bVar8 != 0) {
    uVar16 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar16 = FUN_033805b8(uVar16,0);
    *(undefined8 *)(param_1 + 0xc0) = uVar16;
    *(undefined1 *)(param_1 + 0x28) = 1;
    uVar16 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar11 = (long *)FUN_032e04b8(uVar16,0);
    plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,1);
    if (plVar12 == (long *)0x0) goto LAB_0338ead4;
    lVar18 = *(long *)(param_1 + 0xc0);
    if ((lVar18 != 0) &&
       (lVar13 = thunk_FUN_01c495e4(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
    goto LAB_0338eadc;
    if ((int)plVar12[3] == 0) goto LAB_0338ead8;
    plVar12[4] = lVar18;
    if (plVar11 == (long *)0x0) goto LAB_0338ead4;
    uVar16 = (**(code **)(*plVar11 + 0x8f8))(plVar11,plVar12,*(undefined8 *)(*plVar11 + 0x900));
    *(undefined8 *)(param_1 + 0xd0) = uVar16;
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_0338ead4;
    uVar10 = FUN_032eaf80(*(long *)(param_1 + 0x58),0);
    if ((uVar10 & 1) == 0) {
      bVar15 = false;
    }
    else {
      plVar11 = *(long **)(param_1 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_0338ead4;
      iVar9 = (**(code **)(*plVar11 + 0x428))(plVar11,*(undefined8 *)(*plVar11 + 0x430));
      bVar15 = 1 < iVar9;
    }
    *(bool *)(param_1 + 200) = bVar15;
LAB_0338e500:
    bVar8 = 1;
    goto LAB_0338e504;
  }
  uVar16 = *(undefined8 *)Method_TMPro_FastAction<Object>_Call__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar11 = (long *)FUN_032e04b8(uVar16,0);
  if (plVar11 == (long *)0x0) goto LAB_0338ead4;
  uVar10 = (**(code **)(*plVar11 + 0x298))
                     (plVar11,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*plVar11 + 0x2a0));
  puVar6 = Method_TMPro_FastAction<Object>_Add__;
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  uVar17 = *(undefined8 *)Method_TMPro_FastAction<Object>_Add__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar1);
  }
  uVar17 = FUN_032e04b8(uVar17,0);
  plVar11 = (long *)(param_1 + 0xd0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar14 = OVRPlugin__GetTrackerPose(uVar16,uVar17,plVar11,0);
  puVar7 = Method_TMPro_FastAction<Object>_Remove__;
  if ((uVar10 & 1) != 0) {
    if ((uVar14 & 1) == 0) {
      uVar16 = *(undefined8 *)(param_1 + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar16 = FUN_033805b8(uVar16,0);
    }
    else {
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) goto LAB_0338ead4;
      lVar18 = (**(code **)(*plVar11 + 0x458))(plVar11,*(undefined8 *)(*plVar11 + 0x460));
      if (lVar18 == 0) goto LAB_0338ead4;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0338ead8;
      uVar16 = *(undefined8 *)(lVar18 + 0x20);
    }
    *(undefined8 *)(param_1 + 0xc0) = uVar16;
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    uVar17 = *(undefined8 *)puVar5;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar17 = FUN_032e04b8(uVar17,0);
    uVar10 = FUN_032e935c(uVar16,uVar17,0);
    if ((uVar10 & 1) != 0) {
      uVar16 = *(undefined8 *)
                VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeScheduleNotificationListener_OnFailureDelegate_TypeInfo
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar16 = FUN_032e04b8(uVar16,0);
      FUN_0338ebf4(param_1,uVar16);
    }
    uVar16 = *(undefined8 *)(param_1 + 0xc0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar10 = FUN_032ea0d4(uVar16,0,0);
    if ((uVar10 & 1) != 0) {
      uVar16 = FUN_0336d9fc(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0xc0),0);
      *(undefined8 *)(param_1 + 0xf8) = uVar16;
    }
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    uVar17 = *(undefined8 *)Method_TMPro_FastAction<bool,_Material>_Call__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar17 = FUN_032e04b8(uVar17,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar3);
    }
    bVar8 = FUN_033802b8(uVar16,uVar17,0);
    *(byte *)(param_1 + 0x28) = bVar8 & 1;
    goto LAB_0338e500;
  }
  if ((uVar14 & 1) == 0) {
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    uVar17 = *(undefined8 *)Method_TMPro_FastAction<Object>_Remove__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar17 = FUN_032e04b8(uVar17,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar3);
    }
    uVar10 = OVRPlugin__GetTrackerPose(uVar16,uVar17,&local_68,0);
    puVar5 = Method_System_Collections_Generic_List_Enumerator<UIRStylePainter_Entry>_Dispose__;
    if ((uVar10 & 1) == 0) {
      uVar16 = *(undefined8 *)(param_1 + 0x18);
      uVar17 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<UIRStylePainter_Entry>_Dispose__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar17 = FUN_032e04b8(uVar17,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar3);
      }
      uVar10 = OVRPlugin__GetTrackerPose(uVar16,uVar17,&local_68,0);
      if ((uVar10 & 1) == 0) {
        bVar8 = 0;
        *(undefined1 *)(param_1 + 0xf1) = 1;
        goto LAB_0338e504;
      }
      if (local_68 == (long *)0x0) goto LAB_0338ead4;
      lVar18 = (**(code **)(*local_68 + 0x458))(local_68,*(undefined8 *)(*local_68 + 0x460));
      if (lVar18 == 0) goto LAB_0338ead4;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0338ead8;
      uVar16 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar18 + 0x20);
      uVar17 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar17 = FUN_032e04b8(uVar17,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar3);
      }
      uVar10 = FUN_0337ffa8(uVar16,uVar17,0);
      if ((uVar10 & 1) != 0) {
        uVar16 = *(undefined8 *)puVar4;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar11 = (long *)FUN_032e04b8(uVar16,0);
        plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,1);
        if (plVar12 == (long *)0x0) goto LAB_0338ead4;
        lVar18 = *(long *)(param_1 + 0xc0);
        if ((lVar18 != 0) &&
           (lVar13 = thunk_FUN_01c495e4(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
        goto LAB_0338eadc;
        if ((int)plVar12[3] == 0) goto LAB_0338ead8;
        plVar12[4] = lVar18;
        if (plVar11 == (long *)0x0) goto LAB_0338ead4;
        uVar16 = (**(code **)(*plVar11 + 0x8f8))(plVar11,plVar12,*(undefined8 *)(*plVar11 + 0x900));
        FUN_0338ebf4(param_1,uVar16);
      }
      uVar16 = FUN_0336d9fc(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0xc0),0);
      *(undefined8 *)(param_1 + 0xf8) = uVar16;
      FUN_0338ec9c(param_1,*(undefined8 *)(param_1 + 0x18));
      uVar10 = FUN_0337a7b4(*(undefined8 *)(param_1 + 0x18),0);
      if ((uVar10 & 1) != 0) {
        plVar11 = *(long **)(param_1 + 0x18);
        if (plVar11 == (long *)0x0) goto LAB_0338ead4;
        uVar16 = (**(code **)(*plVar11 + 0x438))(plVar11,*(undefined8 *)(*plVar11 + 0x440));
        uVar17 = *(undefined8 *)puVar5;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar1);
        }
        uVar17 = FUN_032e04b8(uVar17,0);
        uVar10 = FUN_032e935c(uVar16,uVar17,0);
        if ((uVar10 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x28) = 0;
          *(undefined1 *)(param_1 + 0xf1) = 0;
          bVar8 = 1;
          *(long **)(param_1 + 0xd0) = local_68;
          goto LAB_0338e504;
        }
      }
      uVar16 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar11 = (long *)FUN_032e04b8(uVar16,0);
      plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,1);
      if (plVar12 == (long *)0x0) goto LAB_0338ead4;
      lVar18 = *(long *)(param_1 + 0xc0);
      if ((lVar18 != 0) &&
         (lVar13 = thunk_FUN_01c495e4(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
      goto LAB_0338eadc;
      if ((int)plVar12[3] == 0) goto LAB_0338ead8;
      plVar12[4] = lVar18;
      if (plVar11 == (long *)0x0) goto LAB_0338ead4;
      uVar16 = (**(code **)(*plVar11 + 0x8f8))(plVar11,plVar12,*(undefined8 *)(*plVar11 + 0x900));
      *(undefined8 *)(param_1 + 0xd0) = uVar16;
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(undefined1 *)(param_1 + 0xf1) = 1;
    }
    else {
      if (local_68 == (long *)0x0) goto LAB_0338ead4;
      lVar18 = (**(code **)(*local_68 + 0x458))(local_68,*(undefined8 *)(*local_68 + 0x460));
      if (lVar18 == 0) goto LAB_0338ead4;
      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0338ead8;
      uVar16 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar18 + 0x20);
      uVar17 = *(undefined8 *)puVar7;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar17 = FUN_032e04b8(uVar17,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar3);
      }
      uVar10 = FUN_0337ffa8(uVar16,uVar17,0);
      if ((uVar10 & 1) == 0) {
        uVar16 = *(undefined8 *)(param_1 + 0x18);
        uVar17 = *(undefined8 *)Method_TMPro_FastAction<bool,_Material>__ctor__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar17 = FUN_032e04b8(uVar17,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar10 = FUN_0337ffa8(uVar16,uVar17,0);
        if ((uVar10 & 1) != 0) goto LAB_0338e6e0;
      }
      else {
LAB_0338e6e0:
        uVar16 = *(undefined8 *)Method_TMPro_FastAction<bool,_Material>_Call__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar11 = (long *)FUN_032e04b8(uVar16,0);
        plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,1);
        if (plVar12 == (long *)0x0) goto LAB_0338ead4;
        lVar18 = *(long *)(param_1 + 0xc0);
        if ((lVar18 != 0) &&
           (lVar13 = thunk_FUN_01c495e4(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
        goto LAB_0338eadc;
        if ((int)plVar12[3] == 0) goto LAB_0338ead8;
        plVar12[4] = lVar18;
        if (plVar11 == (long *)0x0) goto LAB_0338ead4;
        uVar16 = (**(code **)(*plVar11 + 0x8f8))(plVar11,plVar12,*(undefined8 *)(*plVar11 + 0x900));
        FUN_0338ebf4(param_1,uVar16);
      }
      uVar16 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar11 = (long *)FUN_032e04b8(uVar16,0);
      plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,1);
      if (plVar12 == (long *)0x0) goto LAB_0338ead4;
      lVar18 = *(long *)(param_1 + 0xc0);
      if ((lVar18 != 0) &&
         (lVar13 = thunk_FUN_01c495e4(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
      goto LAB_0338eadc;
      if ((int)plVar12[3] == 0) goto LAB_0338ead8;
      plVar12[4] = lVar18;
      if (plVar11 == (long *)0x0) goto LAB_0338ead4;
      uVar16 = (**(code **)(*plVar11 + 0x8f8))(plVar11,plVar12,*(undefined8 *)(*plVar11 + 0x900));
      *(undefined8 *)(param_1 + 0xd0) = uVar16;
      uVar16 = FUN_0336d9fc(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0xc0),0);
      *(undefined8 *)(param_1 + 0xf8) = uVar16;
      FUN_0338ec9c(param_1,*(undefined8 *)(param_1 + 0x18));
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    bVar8 = FUN_0338dd68(param_1);
    goto LAB_0338e504;
  }
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) goto LAB_0338ead4;
  lVar18 = (**(code **)(*plVar11 + 0x458))(plVar11,*(undefined8 *)(*plVar11 + 0x460));
  if (lVar18 == 0) goto LAB_0338ead4;
  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_0338ead8;
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar18 + 0x20);
  uVar17 = *(undefined8 *)puVar6;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar17 = FUN_032e04b8(uVar17,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar3);
  }
  uVar10 = FUN_0337ffa8(uVar16,uVar17,0);
  if ((uVar10 & 1) == 0) {
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    uVar17 = *(undefined8 *)UnityEngine_EventSystems_ISelectHandler_TypeInfo;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar17 = FUN_032e04b8(uVar17,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar3);
    }
    uVar10 = FUN_0337ffa8(uVar16,uVar17,0);
    if ((uVar10 & 1) != 0) goto LAB_0338e240;
  }
  else {
LAB_0338e240:
    uVar16 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar11 = (long *)FUN_032e04b8(uVar16,0);
    plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,1);
    if (plVar12 == (long *)0x0) goto LAB_0338ead4;
    lVar18 = *(long *)(param_1 + 0xc0);
    if ((lVar18 != 0) &&
       (lVar13 = thunk_FUN_01c495e4(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
    goto LAB_0338eadc;
    if ((int)plVar12[3] == 0) goto LAB_0338ead8;
    plVar12[4] = lVar18;
    if (plVar11 == (long *)0x0) goto LAB_0338ead4;
    uVar16 = (**(code **)(*plVar11 + 0x8f8))(plVar11,plVar12,*(undefined8 *)(*plVar11 + 0x900));
    FUN_0338ebf4(param_1,uVar16);
  }
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  uVar17 = *(undefined8 *)Oculus_Platform_Models_LivestreamingVideoStats_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar17 = FUN_032e04b8(uVar17,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar3);
  }
  uVar10 = FUN_0337ffa8(uVar16,uVar17,0);
  if ((uVar10 & 1) != 0) {
    uVar16 = *(undefined8 *)UnityEngine_UIElements_ListViewReorderableDragAndDropController_TypeInfo
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar11 = (long *)FUN_032e04b8(uVar16,0);
    plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,1);
    if (plVar12 == (long *)0x0) {
LAB_0338ead4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar18 = *(long *)(param_1 + 0xc0);
    if ((lVar18 != 0) &&
       (lVar13 = thunk_FUN_01c495e4(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
LAB_0338eadc:
      uVar16 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar16,0);
    }
    if ((int)plVar12[3] == 0) {
LAB_0338ead8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    plVar12[4] = lVar18;
    if (plVar11 == (long *)0x0) goto LAB_0338ead4;
    uVar16 = (**(code **)(*plVar11 + 0x8f8))(plVar11,plVar12,*(undefined8 *)(*plVar11 + 0x900));
    FUN_0338ebf4(param_1,uVar16);
  }
  uVar16 = FUN_0336d9fc(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0xc0),0);
  *(undefined8 *)(param_1 + 0xf8) = uVar16;
  bVar8 = 1;
  *(undefined1 *)(param_1 + 0xf1) = 1;
LAB_0338e504:
  *(byte *)(param_1 + 0xf2) = bVar8 & 1;
  uVar16 = *(undefined8 *)(param_1 + 0xc0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar10 = FUN_032ea0d4(uVar16,0,0);
  if ((uVar10 & 1) != 0) {
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    uVar17 = *(undefined8 *)(param_1 + 0xc0);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_Player>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar10 = FUN_0337a364(uVar16,uVar17,&local_70,&local_78,0);
    if ((uVar10 & 1) != 0) {
      FUN_0338ebf4(param_1,local_70);
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(undefined1 *)(param_1 + 0xf2) = 1;
      *(undefined8 *)(param_1 + 0x100) = local_78;
    }
  }
  return;
}


