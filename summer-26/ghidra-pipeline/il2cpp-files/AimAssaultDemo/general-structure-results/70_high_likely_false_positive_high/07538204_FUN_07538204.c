/*
FUNCTION_NAME: FUN_07538204
ENTRY_POINT: 07538204
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void FUN_07538204(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined4 local_c0;
  uint local_bc;
  uint local_b8;
  undefined4 local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  
  puVar3 = OVR_OpenVR_IVRSpatialAnchors__CreateSpatialAnchorFromPose_TypeInfo;
  puVar2 = OVR_OpenVR_IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor_TypeInfo;
  puVar1 = PTR_DAT_07d8c838;
  if ((DAT_0826b250 & 1) == 0) {
    FUN_0373b518(OVR_OpenVR_IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorDescriptor_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__AcknowledgeQuit_Exiting_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__AcknowledgeQuit_UserPrompt_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__ApplyTransform_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__ComputeDistortion_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__DriverDebugRequest_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetArrayTrackedDeviceProperty_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetBoolTrackedDeviceProperty_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetControllerAxisTypeNameFromEnum_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetControllerRoleForTrackedDeviceIndex_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetControllerState_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo);
    FUN_0373b518(PTR_DAT_07d8c838);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetD3D9AdapterIndex_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetDXGIOutputInfo_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetEventTypeNameFromEnum_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetEyeToHeadTransform_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetFloatTrackedDeviceProperty_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetHiddenAreaMesh_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetInt32TrackedDeviceProperty_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetMatrix34TrackedDeviceProperty_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetOutputDevice_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetProjectionMatrix_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetProjectionRaw_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetPropErrorNameFromEnum_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetRecommendedRenderTargetSize_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetSortedTrackedDeviceIndicesOfClass_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetStringTrackedDeviceProperty_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetTimeSinceLastVsync_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetTrackedDeviceActivityLevel_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetTrackedDeviceClass_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetTrackedDeviceIndexForControllerRole_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__GetUint64TrackedDeviceProperty_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSpatialAnchors__CreateSpatialAnchorFromPose_TypeInfo);
    FUN_0373b518(OVR_OpenVR_IVRSystem__IsDisplayOnDesktop_TypeInfo);
    DAT_0826b250 = 1;
  }
  plVar10 = (long *)thunk_FUN_037788cc(*(undefined8 *)puVar1);
  FUN_060cc728(plVar10,0);
  local_64 = *(uint *)(param_1 + 0x10) & 0xc;
  uVar11 = thunk_FUN_037784fc(*(undefined8 *)puVar2,&local_64);
  uVar11 = FUN_060b76a8(*(undefined8 *)puVar3,uVar11,0);
  puVar9 = OVR_OpenVR_IVRSystem__GetTrackedDeviceIndexForControllerRole_TypeInfo;
  puVar8 = OVR_OpenVR_IVRSystem__GetPropErrorNameFromEnum_TypeInfo;
  puVar7 = OVR_OpenVR_IVRSystem__GetProjectionMatrix_TypeInfo;
  puVar6 = OVR_OpenVR_IVRSystem__GetOutputDevice_TypeInfo;
  puVar5 = OVR_OpenVR_IVRSystem__GetMatrix34TrackedDeviceProperty_TypeInfo;
  puVar4 = OVR_OpenVR_IVRSystem__GetFloatTrackedDeviceProperty_TypeInfo;
  puVar3 = OVR_OpenVR_IVRSystem__AcknowledgeQuit_UserPrompt_TypeInfo;
  puVar2 = OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose_TypeInfo;
  puVar1 = OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorDescriptor_TypeInfo;
  if (plVar10 != (long *)0x0) {
    FUN_060ce568(plVar10,uVar11,0);
    local_68 = *(uint *)(param_1 + 0x10) & 3;
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)puVar1,&local_68);
    uVar11 = FUN_060b76a8(*(undefined8 *)puVar6,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    puVar1 = PTR_DAT_07d86548;
    local_6c = *(undefined4 *)(param_1 + 0x14);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&local_6c);
    uVar11 = FUN_060b76a8(*(undefined8 *)puVar8,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_70 = *(undefined4 *)(param_1 + 0x18);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x78),&local_70);
    uVar11 = FUN_060b76a8(*(undefined8 *)puVar4,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_74 = *(undefined4 *)(param_1 + 0x1c);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_74);
    uVar11 = FUN_060b76a8(*(undefined8 *)puVar5,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_78 = *(undefined4 *)(param_1 + 0x20);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)puVar3,&local_78);
    uVar11 = FUN_060b76a8(*(undefined8 *)puVar7,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_7c = *(undefined4 *)(param_1 + 0x24);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)puVar2,&local_7c);
    uVar11 = FUN_060b76a8(*(undefined8 *)puVar9,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_80 = *(undefined4 *)(param_1 + 0x28);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)
                                 OVR_OpenVR_IVRSystem__AcknowledgeQuit_Exiting_TypeInfo,&local_80);
    uVar11 = FUN_060b76a8(*(undefined8 *)
                           OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose_TypeInfo
                          ,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_84 = *(undefined4 *)(param_1 + 0x2c);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_84);
    uVar11 = FUN_060b76a8(*(undefined8 *)
                           OVR_OpenVR_IVRSystem__GetStringTrackedDeviceProperty_TypeInfo,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_88 = *(undefined4 *)(param_1 + 0x30);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_88);
    uVar11 = FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetDXGIOutputInfo_TypeInfo,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_8c = *(undefined4 *)(param_1 + 0x34);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)OVR_OpenVR_IVRSystem__ComputeDistortion_TypeInfo,
                                &local_8c);
    uVar11 = FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetEyeToHeadTransform_TypeInfo,uVar11
                          ,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_90 = *(undefined4 *)(param_1 + 0x38);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)OVR_OpenVR_IVRSystem__ApplyTransform_TypeInfo,
                                &local_90);
    uVar11 = FUN_060b76a8(*(undefined8 *)
                           OVR_OpenVR_IVRSystem__GetTrackedDeviceActivityLevel_TypeInfo,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_94 = *(undefined4 *)(param_1 + 0x3c);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)OVR_OpenVR_IVRSystem__DriverDebugRequest_TypeInfo,
                                &local_94);
    uVar11 = FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetD3D9AdapterIndex_TypeInfo,uVar11,0
                         );
    FUN_060ce568(plVar10,uVar11,0);
    local_98 = *(undefined4 *)(param_1 + 0x40);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_98);
    uVar11 = FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetHiddenAreaMesh_TypeInfo,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_9c = *(undefined4 *)(param_1 + 0x44);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_9c);
    uVar11 = FUN_060b76a8(*(undefined8 *)
                           OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeInfo
                          ,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_a0 = *(undefined4 *)(param_1 + 0x48);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_a0);
    uVar11 = FUN_060b76a8(*(undefined8 *)
                           OVR_OpenVR_IVRSystem__GetInt32TrackedDeviceProperty_TypeInfo,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_a4 = *(uint *)(param_1 + 0x4c) & 0xc0;
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)
                                 OVR_OpenVR_IVRSystem__GetArrayTrackedDeviceProperty_TypeInfo,
                                &local_a4);
    uVar11 = FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetEventTypeNameFromEnum_TypeInfo,
                          uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_a8 = *(uint *)(param_1 + 0x4c) & 0xf;
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)
                                 OVR_OpenVR_IVRSystem__GetControllerAxisTypeNameFromEnum_TypeInfo,
                                &local_a8);
    uVar11 = FUN_060b76a8(*(undefined8 *)
                           OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose_TypeInfo,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_ac = *(uint *)(param_1 + 0x4c) & 0x30;
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)
                                 OVR_OpenVR_IVRSystem__GetBoolTrackedDeviceProperty_TypeInfo,
                                &local_ac);
    uVar11 = FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetProjectionRaw_TypeInfo,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_b0 = *(uint *)(param_1 + 0x4c) & 0x300;
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)
                                 OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum_TypeInfo,&local_b0);
    uVar11 = FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetTrackedDeviceClass_TypeInfo,uVar11
                          ,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_b4 = *(undefined4 *)(param_1 + 0x50);
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)
                                 OVR_OpenVR_IVRSystem__GetControllerRoleForTrackedDeviceIndex_TypeInfo
                                ,&local_b4);
    uVar11 = FUN_060b76a8(*(undefined8 *)
                           OVR_OpenVR_IVRSystem__GetSortedTrackedDeviceIndicesOfClass_TypeInfo,
                          uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_b8 = *(uint *)(param_1 + 0x54) & 0x30;
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)OVR_OpenVR_IVRSystem__GetControllerState_TypeInfo,
                                &local_b8);
    uVar11 = FUN_060b76a8(*(undefined8 *)
                           OVR_OpenVR_IVRSystem__GetUint64TrackedDeviceProperty_TypeInfo,uVar11,0);
    FUN_060ce568(plVar10,uVar11,0);
    local_bc = *(uint *)(param_1 + 0x54) & 0xf;
    uVar11 = thunk_FUN_037784fc(*(undefined8 *)
                                 OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo,&local_bc
                               );
    uVar11 = FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetTimeSinceLastVsync_TypeInfo,uVar11
                          ,0);
    FUN_060ce568(plVar10,uVar11,0);
    lVar12 = FUN_075380a0(param_1);
    puVar2 = OVR_OpenVR_IVRSystem__IsDisplayOnDesktop_TypeInfo;
    if (lVar12 != 0) {
      local_c0 = (undefined4)*(undefined8 *)(lVar12 + 0x18);
      uVar11 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_c0);
      uVar11 = FUN_060b76a8(*(undefined8 *)puVar2,uVar11,0);
      FUN_060ce568(plVar10,uVar11,0);
      lVar12 = FUN_075380a0(param_1);
      puVar2 = OVR_OpenVR_IVRSystem__GetRecommendedRenderTargetSize_TypeInfo;
      if (lVar12 != 0) {
        lVar14 = 0;
        do {
          uVar13 = (uint)lVar14;
          if (*(int *)(lVar12 + 0x18) <= (int)uVar13) {
            (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
            return;
          }
          lVar12 = FUN_075380a0(param_1);
          if (lVar12 == 0) break;
          if (*(uint *)(lVar12 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          lVar12 = *(long *)(lVar12 + lVar14 * 8 + 0x20);
          local_64 = uVar13;
          uVar11 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_64);
          if (lVar12 == 0) break;
          uVar11 = FUN_060c2018(*(undefined8 *)puVar2,uVar11,*(undefined8 *)(lVar12 + 0x10),
                                *(undefined8 *)(lVar12 + 0x18),0);
          FUN_060ce568(plVar10,uVar11,0);
          lVar12 = FUN_075380a0(param_1);
          lVar14 = lVar14 + 1;
        } while (lVar12 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


