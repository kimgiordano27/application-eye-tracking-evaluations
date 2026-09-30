/*
FUNCTION_NAME: System.Data.Common.SqlConvert$$ConvertToSqlMoney
ENTRY_POINT: 0550f314
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_13;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_12
*/


void System_Data_Common_SqlConvert__ConvertToSqlMoney(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long in_stack_00000008;
  
  FUN_02f08768();
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
  *(undefined1 *)(unaff_x20 + 0x63b) = 1;
  puVar1 = OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer_TypeInfo;
  if (unaff_x19 == 0) {
LAB_0550f888:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(unaff_x19 + 0x18) < 0x12) {
    lVar2 = *(long *)OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer_TypeInfo;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar2 = *(long *)puVar1;
    }
    puVar6 = *(undefined8 **)(lVar2 + 0xb8);
    if (puVar6[1] == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar7 = *puVar6;
      uVar3 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9e60);
      FUN_04e0200c(uVar3,uVar7,*(undefined8 *)OVRSpatialAnchor_OperationResult_TypeInfo,0);
      *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar3;
    }
    uVar4 = FUN_033875b4();
    puVar1 = PTR_DAT_067c9338;
    if ((uVar4 & 1) == 0) {
      if (*(uint *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar2 = *(long *)(PTR_DAT_067c9338 + 0x20);
      uVar3 = *(undefined8 *)
               (unaff_x19 +
                ((long)(((ulong)*(uint *)(unaff_x19 + 0x18) << 0x20) + -0x100000000) >> 0x1d) + 0x20
               );
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_050e4454(lVar2 + 0x20,0);
      uVar4 = FUN_050ed374(uVar3,uVar7,0);
      if ((uVar4 & 1) != 0) {
        FUN_0328bfa0(&stack0x00000008,*(int *)(unaff_x19 + 0x18) + -1,
                     *(undefined8 *)OVRSceneManager_<>c__DisplayClass45_0_TypeInfo);
        if (in_stack_00000008 == 0) goto LAB_0550f888;
        switch(*(undefined4 *)(in_stack_00000008 + 0x18)) {
        case 0:
          uVar3 = *(undefined8 *)OVRSceneLoader_<onCheckSceneCoroutine>d__25_TypeInfo;
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_050e4454(uVar3,0);
          return;
        case 1:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRPlugin_Vector4f_TypeInfo;
          break;
        case 2:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRPlugin_Vector4s_TypeInfo;
          break;
        case 3:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo;
          break;
        case 4:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo
          ;
          break;
        case 5:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo;
          break;
        case 6:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRRaycaster_<>c_TypeInfo;
          break;
        case 7:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRResources_<>c__DisplayClass2_0_TypeInfo;
          break;
        case 8:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRRuntimeController_<UpdateControllerModel>d__16_TypeInfo;
          break;
        case 9:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo;
          break;
        case 10:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRPlugin_SkeletonType_TypeInfo;
          break;
        case 0xb:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo;
          break;
        case 0xc:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRPlugin_SystemHeadset_TypeInfo;
          break;
        case 0xd:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
          break;
        case 0xe:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo;
          break;
        case 0xf:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRPlugin_UnityOpenXR_TypeInfo;
          break;
        case 0x10:
          lVar2 = *(long *)(puVar1 + 0xe0);
          puVar6 = (undefined8 *)OVRPlugin_Vector3f_TypeInfo;
          break;
        default:
          goto switchD_0550f5a0_default;
        }
        uVar3 = *puVar6;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        plVar5 = (long *)FUN_050e4454(uVar3,0);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x938))(plVar5,in_stack_00000008,*(undefined8 *)(*plVar5 + 0x940));
          return;
        }
        goto LAB_0550f888;
      }
      switch(*(int *)(unaff_x19 + 0x18)) {
      case 1:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSkeleton_BoneId_TypeInfo;
        break;
      case 2:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSkeleton_IOVRSkeletonDataProvider_TypeInfo;
        break;
      case 3:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSkeletonRenderer_BoneVisualization_TypeInfo;
        break;
      case 4:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSkeletonRenderer_CapsuleVisualization_TypeInfo;
        break;
      case 5:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_TypeInfo;
        break;
      case 6:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSpace_StorageLocation_TypeInfo;
        break;
      case 7:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSpatialAnchor_<>c_TypeInfo;
        break;
      case 8:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSpatialAnchor_<>c__DisplayClass71_0_TypeInfo;
        break;
      case 9:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSpatialAnchor_MultiAnchorActionType_TypeInfo;
        break;
      case 10:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSceneManager_<>c__DisplayClass53_0_TypeInfo;
        break;
      case 0xb:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSceneManager_Classification_TypeInfo;
        break;
      case 0xc:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSceneManager_Metrics_TypeInfo;
        break;
      case 0xd:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSceneManager_RoomLayoutInformation_TypeInfo;
        break;
      case 0xe:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSceneModelLoader_<>c__DisplayClass9_0_TypeInfo;
        break;
      case 0xf:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_TypeInfo;
        break;
      case 0x10:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo;
        break;
      case 0x11:
        lVar2 = *(long *)(puVar1 + 0xe0);
        puVar6 = (undefined8 *)OVRScreenFade_<Fade>d__25_TypeInfo;
        break;
      default:
        goto switchD_0550f5a0_default;
      }
      uVar3 = *puVar6;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      plVar5 = (long *)FUN_050e4454(uVar3,0);
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0550f740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x938))();
        return;
      }
      goto LAB_0550f888;
    }
  }
switchD_0550f5a0_default:
  uVar3 = FUN_05529ac0(0);
  uVar7 = thunk_FUN_02f6ef30(OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar3,uVar7);
}


