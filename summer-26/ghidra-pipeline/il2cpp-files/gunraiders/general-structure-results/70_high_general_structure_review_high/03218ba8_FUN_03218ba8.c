/*
FUNCTION_NAME: FUN_03218ba8
ENTRY_POINT: 03218ba8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03218ba8(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  
  if ((DAT_045327f9 & 1) == 0) {
    FUN_01c5d288(RoomStatsManager_<RetrieveWholeRoomListCoroutine>d__13_TypeInfo);
    FUN_01c5d288(RotateToMouseScript_<UpdateRay>d__9_TypeInfo);
    FUN_01c5d288(RootMotion_FinalIK_RotationLimitPolygonal_LimitPoint_TypeInfo);
    FUN_01c5d288(RootMotion_FinalIK_RotationLimitPolygonal_ReachCone_TypeInfo);
    FUN_01c5d288(RoundTimer_<_UpdateRoundScore>d__12_TypeInfo);
    FUN_01c5d288(System_Reflection_RuntimeAssembly_UnmanagedMemoryStreamForModule_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb40);
    FUN_01c5d288(PTR_DAT_0422f930);
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(UnityEngine_UIElements_RuntimePanel_<>c_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_RuntimePlatformConstantUtility_<>c__DisplayClass1_0_TypeInfo
                );
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(
                Photon_Voice_Unity_UtilityScripts_SaveIncomingStreamToFile_<>c__DisplayClass5_0_TypeInfo
                );
    FUN_01c5d288(Photon_Voice_IDecoder_TypeInfo);
    FUN_01c5d288(
                Photon_Voice_Unity_UtilityScripts_SaveOutgoingStreamToFile_OutgoingStreamSaverFloat_TypeInfo
                );
    FUN_01c5d288(
                Photon_Voice_Unity_UtilityScripts_SaveOutgoingStreamToFile_OutgoingStreamSaverShort_TypeInfo
                );
    FUN_01c5d288(UnityEngine_ResourceManagement_ResourceProviders_SceneProvider_SceneOp_TypeInfo);
    FUN_01c5d288(
                UnityEngine_ResourceManagement_ResourceProviders_SceneProvider_UnloadSceneOp_TypeInfo
                );
    FUN_01c5d288(UnityEngine_UIElements_ScheduledItem_<>c_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_GameServicesCore_Android_Score_<>c__DisplayClass10_0_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_EssentialKit_GameServicesCore_ScoreBase_<>c__DisplayClass28_0_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_EssentialKit_GameServicesCore_ScoreBase_<>c__DisplayClass29_0_TypeInfo
                );
    FUN_01c5d288(Scoreboard_<>c_TypeInfo);
    FUN_01c5d288(Scoreboard_<SetPlayerScores>d__25_TypeInfo);
    DAT_045327f9 = 1;
  }
  FUN_03313b6c(param_1,0);
  puVar5 = VoxelBusters_EssentialKit_GameServicesCore_ScoreBase_<>c__DisplayClass29_0_TypeInfo;
  puVar4 = UnityEngine_ResourceManagement_ResourceProviders_SceneProvider_SceneOp_TypeInfo;
  puVar3 = Photon_Voice_Unity_UtilityScripts_SaveIncomingStreamToFile_<>c__DisplayClass5_0_TypeInfo;
  puVar2 = PTR_DAT_0422fb28;
  if (param_2 != 0) {
    uVar7 = FUN_031e7d20(param_2,*(undefined8 *)Scoreboard_<SetPlayerScores>d__25_TypeInfo,0);
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    uVar7 = FUN_031e7d20(param_2,*(undefined8 *)puVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    uVar7 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_032e04b8(uVar7,0);
    plVar8 = (long *)FUN_031e5740(param_2,*(undefined8 *)puVar5,uVar7,0);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    else {
      lVar11 = *(long *)Photon_Voice_IDecoder_TypeInfo;
      if ((*plVar8 != lVar11) || (*(long **)(param_1 + 0x60) = plVar8, *plVar8 != lVar11))
      goto LAB_032190a4;
    }
    puVar4 = VoxelBusters_EssentialKit_GameServicesCore_Android_Score_<>c__DisplayClass10_0_TypeInfo
    ;
    puVar3 = PTR_DAT_0422fb40;
    puVar2 = PTR_DAT_0422f930;
    uVar7 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb40,0);
    lVar11 = FUN_031e5740(param_2,*(undefined8 *)puVar4,uVar7,0);
    if (lVar11 == 0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar2;
      lVar9 = thunk_FUN_01c495e4(lVar11,uVar7);
      if (lVar9 == 0) goto LAB_03218e84;
      *(long *)(param_1 + 0x48) = lVar9;
      uVar7 = *(undefined8 *)puVar2;
      lVar9 = thunk_FUN_01c495e4(lVar11,uVar7);
      if (lVar9 == 0) goto LAB_03218e84;
    }
    puVar4 = 
    Photon_Voice_Unity_UtilityScripts_SaveOutgoingStreamToFile_OutgoingStreamSaverShort_TypeInfo;
    uVar7 = FUN_032e04b8(*(undefined8 *)puVar3,0);
    lVar11 = FUN_031e5740(param_2,*(undefined8 *)puVar4,uVar7,0);
    if (lVar11 == 0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar2;
      lVar9 = thunk_FUN_01c495e4(lVar11,uVar7);
      if (lVar9 == 0) {
LAB_03218e84:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar11,uVar7);
      }
      *(long *)(param_1 + 0x50) = lVar9;
      uVar7 = *(undefined8 *)puVar2;
      lVar9 = thunk_FUN_01c495e4(lVar11,uVar7);
      if (lVar9 == 0) goto LAB_03218e84;
    }
    puVar2 = Scoreboard_<>c_TypeInfo;
    uVar7 = FUN_032e04b8(*(undefined8 *)
                          RoomStatsManager_<RetrieveWholeRoomListCoroutine>d__13_TypeInfo,0);
    plVar8 = (long *)FUN_031e5740(param_2,*(undefined8 *)puVar2,uVar7,0);
    puVar3 = UnityEngine_UIElements_ScheduledItem_<>c_TypeInfo;
    puVar2 = UnityEngine_UIElements_RuntimePanel_<>c_TypeInfo;
    if (plVar8 == (long *)0x0) goto LAB_032190a8;
    if (*(long *)(*plVar8 + 0x40) !=
        *(long *)(*(long *)RotateToMouseScript_<UpdateRay>d__9_TypeInfo + 0x40)) goto LAB_032190a4;
    puVar10 = (undefined4 *)thunk_FUN_01c49834();
    *(undefined4 *)(param_1 + 0x3c) = *puVar10;
    uVar7 = FUN_032e04b8(*(undefined8 *)puVar2,0);
    plVar8 = (long *)FUN_031e5740(param_2,*(undefined8 *)puVar3,uVar7,0);
    if (plVar8 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      lVar11 = *(long *)
                VoxelBusters_CoreLibrary_RuntimePlatformConstantUtility_<>c__DisplayClass1_0_TypeInfo
      ;
      bVar1 = *(byte *)(lVar11 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar1 - 1) * 8) != lVar11))
      goto LAB_032190a4;
      *(long **)(param_1 + 0x40) = plVar8;
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar1 - 1) * 8) != lVar11))
      goto LAB_032190a4;
    }
    puVar2 = 
    Photon_Voice_Unity_UtilityScripts_SaveOutgoingStreamToFile_OutgoingStreamSaverFloat_TypeInfo;
    uVar7 = FUN_032e04b8(*(undefined8 *)RoundTimer_<_UpdateRoundScore>d__12_TypeInfo,0);
    plVar8 = (long *)FUN_031e5740(param_2,*(undefined8 *)puVar2,uVar7,0);
    puVar3 = VoxelBusters_EssentialKit_GameServicesCore_ScoreBase_<>c__DisplayClass28_0_TypeInfo;
    puVar2 = RootMotion_FinalIK_RotationLimitPolygonal_LimitPoint_TypeInfo;
    if (plVar8 != (long *)0x0) {
      if (*(long *)(*plVar8 + 0x40) ==
          *(long *)(*(long *)
                     System_Reflection_RuntimeAssembly_UnmanagedMemoryStreamForModule_TypeInfo +
                   0x40)) {
        puVar10 = (undefined4 *)thunk_FUN_01c49834();
        *(undefined4 *)(param_1 + 0x58) = *puVar10;
        uVar7 = FUN_032e04b8(*(undefined8 *)puVar2,0);
        plVar8 = (long *)FUN_031e5740(param_2,*(undefined8 *)puVar3,uVar7,0);
        puVar2 = 
        UnityEngine_ResourceManagement_ResourceProviders_SceneProvider_UnloadSceneOp_TypeInfo;
        if (plVar8 == (long *)0x0) goto LAB_032190a8;
        if (*(long *)(*plVar8 + 0x40) ==
            *(long *)(*(long *)RootMotion_FinalIK_RotationLimitPolygonal_ReachCone_TypeInfo + 0x40))
        {
          puVar10 = (undefined4 *)thunk_FUN_01c49834();
          *(undefined4 *)(param_1 + 0x38) = *puVar10;
          iVar6 = FUN_031e78c4(param_2,*(undefined8 *)puVar2,0);
          if (iVar6 != -1) {
            uVar7 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_042305b0);
            FUN_03295f44(uVar7,iVar6,0);
            *(undefined8 *)(param_1 + 0x30) = uVar7;
          }
          return;
        }
      }
LAB_032190a4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
  }
LAB_032190a8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


