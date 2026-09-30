/*
FUNCTION_NAME: FUN_0550f264
ENTRY_POINT: 0550f264
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 132
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_0550f264(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long local_38;
  
  local_38 = param_1;
  if ((DAT_06bbf63b & 1) == 0) {
    FUN_02f08768(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02f08768(OVRPlugin_SpaceQueryResult_TypeInfo);
    FUN_02f08768(OVRPlugin_SystemHeadset_TypeInfo);
    FUN_02f08768(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_02f08768(OVRPlugin_TrackingConfidence_TypeInfo);
    FUN_02f08768(OVRPlugin_UnityOpenXR_TypeInfo);
    FUN_02f08768(OVRPlugin_Vector3f_TypeInfo);
    FUN_02f08768(OVRPlugin_Vector4f_TypeInfo);
    FUN_02f08768(OVRPlugin_Vector4s_TypeInfo);
    FUN_02f08768(OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo);
    FUN_02f08768(OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo);
    FUN_02f08768(OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
    FUN_02f08768(OVRRaycaster_<>c_TypeInfo);
    FUN_02f08768(OVRResources_<>c__DisplayClass2_0_TypeInfo);
    FUN_02f08768(OVRRuntimeController_<UpdateControllerModel>d__16_TypeInfo);
    FUN_02f08768(OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo);
    FUN_02f08768(OVRSceneLoader_<onCheckSceneCoroutine>d__25_TypeInfo);
    FUN_02f08768(OVRSceneManager_<>c__DisplayClass45_0_TypeInfo);
    FUN_02f08768(OVRSceneManager_<>c__DisplayClass50_0_TypeInfo);
    FUN_02f08768(OVRSceneManager_<>c__DisplayClass53_0_TypeInfo);
    FUN_02f08768(OVRSceneManager_Classification_TypeInfo);
    FUN_02f08768(OVRSceneManager_Metrics_TypeInfo);
    FUN_02f08768(OVRSceneManager_RoomLayoutInformation_TypeInfo);
    FUN_02f08768(OVRSceneModelLoader_<>c__DisplayClass9_0_TypeInfo);
    FUN_02f08768(OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_TypeInfo);
    FUN_02f08768(OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo);
    FUN_02f08768(OVRScreenFade_<Fade>d__25_TypeInfo);
    FUN_02f08768(OVRSkeleton_BoneId_TypeInfo);
    FUN_02f08768(OVRSkeleton_IOVRSkeletonDataProvider_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9e60);
    FUN_02f08768(OVRSkeletonRenderer_BoneVisualization_TypeInfo);
    FUN_02f08768(OVRSkeletonRenderer_CapsuleVisualization_TypeInfo);
    FUN_02f08768(OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_TypeInfo);
    FUN_02f08768(OVRSpace_StorageLocation_TypeInfo);
    FUN_02f08768(OVRSpatialAnchor_<>c_TypeInfo);
    FUN_02f08768(OVRSpatialAnchor_<>c__DisplayClass71_0_TypeInfo);
    FUN_02f08768(OVRSpatialAnchor_MultiAnchorActionType_TypeInfo);
    FUN_02f08768(OVRSpatialAnchor_OperationResult_TypeInfo);
    FUN_02f08768(OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer_TypeInfo);
    DAT_06bbf63b = 1;
  }
  puVar1 = OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer_TypeInfo;
  if (param_1 == 0) {
LAB_0550f888:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(param_1 + 0x18) < 0x12) {
    lVar3 = *(long *)OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = OVRSceneManager_<>c__DisplayClass50_0_TypeInfo;
    puVar7 = *(undefined8 **)(lVar3 + 0xb8);
    lVar8 = puVar7[1];
    if (lVar8 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar9 = *puVar7;
      lVar8 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9e60);
      FUN_04e0200c(lVar8,uVar9,*(undefined8 *)OVRSpatialAnchor_OperationResult_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar8;
    }
    uVar4 = FUN_033875b4(param_1,lVar8,*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_067c9338;
    if ((uVar4 & 1) == 0) {
      if (*(uint *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar3 = *(long *)(PTR_DAT_067c9338 + 0x20);
      uVar9 = *(undefined8 *)
               (param_1 + ((long)(((ulong)*(uint *)(param_1 + 0x18) << 0x20) + -0x100000000) >> 0x1d
                          ) + 0x20);
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = FUN_050e4454(lVar3 + 0x20,0);
      uVar4 = FUN_050ed374(uVar9,uVar5,0);
      if ((uVar4 & 1) != 0) {
        FUN_0328bfa0(&local_38,*(int *)(param_1 + 0x18) + -1,
                     *(undefined8 *)OVRSceneManager_<>c__DisplayClass45_0_TypeInfo);
        if (local_38 == 0) goto LAB_0550f888;
        switch(*(undefined4 *)(local_38 + 0x18)) {
        case 0:
          uVar9 = *(undefined8 *)OVRSceneLoader_<onCheckSceneCoroutine>d__25_TypeInfo;
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_050e4454(uVar9,0);
          return;
        case 1:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRPlugin_Vector4f_TypeInfo;
          break;
        case 2:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRPlugin_Vector4s_TypeInfo;
          break;
        case 3:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo;
          break;
        case 4:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo
          ;
          break;
        case 5:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo;
          break;
        case 6:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRRaycaster_<>c_TypeInfo;
          break;
        case 7:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRResources_<>c__DisplayClass2_0_TypeInfo;
          break;
        case 8:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRRuntimeController_<UpdateControllerModel>d__16_TypeInfo;
          break;
        case 9:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo;
          break;
        case 10:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRPlugin_SkeletonType_TypeInfo;
          break;
        case 0xb:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo;
          break;
        case 0xc:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRPlugin_SystemHeadset_TypeInfo;
          break;
        case 0xd:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
          break;
        case 0xe:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo;
          break;
        case 0xf:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRPlugin_UnityOpenXR_TypeInfo;
          break;
        case 0x10:
          lVar3 = *(long *)(puVar1 + 0xe0);
          puVar7 = (undefined8 *)OVRPlugin_Vector3f_TypeInfo;
          break;
        default:
          goto switchD_0550f5a0_default;
        }
        uVar9 = *puVar7;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        plVar6 = (long *)FUN_050e4454(uVar9,0);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x938))(plVar6,local_38,*(undefined8 *)(*plVar6 + 0x940));
          return;
        }
        goto LAB_0550f888;
      }
      switch(*(int *)(param_1 + 0x18)) {
      case 1:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSkeleton_BoneId_TypeInfo;
        break;
      case 2:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSkeleton_IOVRSkeletonDataProvider_TypeInfo;
        break;
      case 3:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSkeletonRenderer_BoneVisualization_TypeInfo;
        break;
      case 4:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSkeletonRenderer_CapsuleVisualization_TypeInfo;
        break;
      case 5:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_TypeInfo;
        break;
      case 6:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSpace_StorageLocation_TypeInfo;
        break;
      case 7:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSpatialAnchor_<>c_TypeInfo;
        break;
      case 8:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSpatialAnchor_<>c__DisplayClass71_0_TypeInfo;
        break;
      case 9:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSpatialAnchor_MultiAnchorActionType_TypeInfo;
        break;
      case 10:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSceneManager_<>c__DisplayClass53_0_TypeInfo;
        break;
      case 0xb:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSceneManager_Classification_TypeInfo;
        break;
      case 0xc:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSceneManager_Metrics_TypeInfo;
        break;
      case 0xd:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSceneManager_RoomLayoutInformation_TypeInfo;
        break;
      case 0xe:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSceneModelLoader_<>c__DisplayClass9_0_TypeInfo;
        break;
      case 0xf:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_TypeInfo;
        break;
      case 0x10:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo;
        break;
      case 0x11:
        lVar3 = *(long *)(puVar1 + 0xe0);
        puVar7 = (undefined8 *)OVRScreenFade_<Fade>d__25_TypeInfo;
        break;
      default:
        goto switchD_0550f5a0_default;
      }
      uVar9 = *puVar7;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      plVar6 = (long *)FUN_050e4454(uVar9,0);
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0550f740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x938))(plVar6,param_1,*(undefined8 *)(*plVar6 + 0x940));
        return;
      }
      goto LAB_0550f888;
    }
  }
switchD_0550f5a0_default:
  uVar9 = FUN_05529ac0(0);
  uVar5 = thunk_FUN_02f6ef30(OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar9,uVar5);
}


