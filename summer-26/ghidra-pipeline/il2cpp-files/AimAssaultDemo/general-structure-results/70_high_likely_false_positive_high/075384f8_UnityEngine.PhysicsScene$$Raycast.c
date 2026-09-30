/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Raycast
ENTRY_POINT: 075384f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_4;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_PhysicsScene__Raycast(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  uint uVar5;
  undefined8 *unaff_x22;
  long lVar6;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  uint uStack0000000000000004;
  uint in_stack_00000008;
  undefined4 uStack000000000000000c;
  uint in_stack_00000010;
  uint uStack0000000000000014;
  uint in_stack_00000018;
  uint uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  
  FUN_060b76a8(param_1,param_3,0);
  FUN_060ce568();
  puVar1 = PTR_DAT_07d86548;
  uStack0000000000000054 = *(undefined4 *)(unaff_x19 + 0x14);
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&stack0x00000054);
  FUN_060b76a8(*unaff_x23,uVar3,0);
  FUN_060ce568();
  in_stack_00000050 = *(undefined4 *)(unaff_x19 + 0x18);
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x78),&stack0x00000050);
  FUN_060b76a8(*unaff_x22,uVar3,0);
  FUN_060ce568();
  uStack000000000000004c = *(undefined4 *)(unaff_x19 + 0x1c);
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&stack0x0000004c);
  FUN_060b76a8(*unaff_x29,uVar3,0);
  FUN_060ce568();
  in_stack_00000048 = *(undefined4 *)(unaff_x19 + 0x20);
  uVar3 = thunk_FUN_037784fc(*unaff_x28,&stack0x00000048);
  FUN_060b76a8(*unaff_x27,uVar3,0);
  FUN_060ce568();
  uStack0000000000000044 = *(undefined4 *)(unaff_x19 + 0x24);
  uVar3 = thunk_FUN_037784fc(*unaff_x26,&stack0x00000044);
  FUN_060b76a8(*unaff_x25,uVar3,0);
  FUN_060ce568();
  in_stack_00000040 = *(undefined4 *)(unaff_x19 + 0x28);
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)OVR_OpenVR_IVRSystem__AcknowledgeQuit_Exiting_TypeInfo,
                             &stack0x00000040);
  FUN_060b76a8(*(undefined8 *)
                OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose_TypeInfo,uVar3,0)
  ;
  FUN_060ce568();
  uStack000000000000003c = *(undefined4 *)(unaff_x19 + 0x2c);
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&stack0x0000003c);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetStringTrackedDeviceProperty_TypeInfo,uVar3,0)
  ;
  FUN_060ce568();
  in_stack_00000038 = *(undefined4 *)(unaff_x19 + 0x30);
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&stack0x00000038);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetDXGIOutputInfo_TypeInfo,uVar3,0);
  FUN_060ce568();
  uStack0000000000000034 = *(undefined4 *)(unaff_x19 + 0x34);
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)OVR_OpenVR_IVRSystem__ComputeDistortion_TypeInfo,
                             &stack0x00000034);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetEyeToHeadTransform_TypeInfo,uVar3,0);
  FUN_060ce568();
  in_stack_00000030 = *(undefined4 *)(unaff_x19 + 0x38);
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)OVR_OpenVR_IVRSystem__ApplyTransform_TypeInfo,
                             &stack0x00000030);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetTrackedDeviceActivityLevel_TypeInfo,uVar3,0);
  FUN_060ce568();
  uStack000000000000002c = *(undefined4 *)(unaff_x19 + 0x3c);
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)OVR_OpenVR_IVRSystem__DriverDebugRequest_TypeInfo,
                             &stack0x0000002c);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetD3D9AdapterIndex_TypeInfo,uVar3,0);
  FUN_060ce568();
  in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x40);
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&stack0x00000028);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetHiddenAreaMesh_TypeInfo,uVar3,0);
  FUN_060ce568();
  uStack0000000000000024 = *(undefined4 *)(unaff_x19 + 0x44);
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&stack0x00000024);
  FUN_060b76a8(*(undefined8 *)
                OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeInfo,uVar3
               ,0);
  FUN_060ce568();
  in_stack_00000020 = *(undefined4 *)(unaff_x19 + 0x48);
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&stack0x00000020);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetInt32TrackedDeviceProperty_TypeInfo,uVar3,0);
  FUN_060ce568();
  uStack000000000000001c = *(uint *)(unaff_x19 + 0x4c) & 0xc0;
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)
                              OVR_OpenVR_IVRSystem__GetArrayTrackedDeviceProperty_TypeInfo,
                             &stack0x0000001c);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetEventTypeNameFromEnum_TypeInfo,uVar3,0);
  FUN_060ce568();
  in_stack_00000018 = *(uint *)(unaff_x19 + 0x4c) & 0xf;
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)
                              OVR_OpenVR_IVRSystem__GetControllerAxisTypeNameFromEnum_TypeInfo,
                             &stack0x00000018);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose_TypeInfo,uVar3,0
              );
  FUN_060ce568();
  uStack0000000000000014 = *(uint *)(unaff_x19 + 0x4c) & 0x30;
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)
                              OVR_OpenVR_IVRSystem__GetBoolTrackedDeviceProperty_TypeInfo,
                             &stack0x00000014);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetProjectionRaw_TypeInfo,uVar3,0);
  FUN_060ce568();
  in_stack_00000010 = *(uint *)(unaff_x19 + 0x4c) & 0x300;
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum_TypeInfo,
                             &stack0x00000010);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetTrackedDeviceClass_TypeInfo,uVar3,0);
  FUN_060ce568();
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x50);
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)
                              OVR_OpenVR_IVRSystem__GetControllerRoleForTrackedDeviceIndex_TypeInfo,
                             &stack0x0000000c);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetSortedTrackedDeviceIndicesOfClass_TypeInfo,
               uVar3,0);
  FUN_060ce568();
  in_stack_00000008 = *(uint *)(unaff_x19 + 0x54) & 0x30;
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)OVR_OpenVR_IVRSystem__GetControllerState_TypeInfo,
                             &stack0x00000008);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetUint64TrackedDeviceProperty_TypeInfo,uVar3,0)
  ;
  FUN_060ce568();
  uStack0000000000000004 = *(uint *)(unaff_x19 + 0x54) & 0xf;
  uVar3 = thunk_FUN_037784fc(*(undefined8 *)
                              OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo,
                             &stack0x00000004);
  FUN_060b76a8(*(undefined8 *)OVR_OpenVR_IVRSystem__GetTimeSinceLastVsync_TypeInfo,uVar3,0);
  FUN_060ce568();
  lVar4 = FUN_075380a0();
  puVar2 = OVR_OpenVR_IVRSystem__IsDisplayOnDesktop_TypeInfo;
  if (lVar4 != 0) {
    uVar3 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48));
    FUN_060b76a8(*(undefined8 *)puVar2,uVar3,0);
    FUN_060ce568();
    lVar4 = FUN_075380a0();
    puVar2 = OVR_OpenVR_IVRSystem__GetRecommendedRenderTargetSize_TypeInfo;
    if (lVar4 != 0) {
      lVar6 = 0;
      do {
        uVar5 = (uint)lVar6;
        if (*(int *)(lVar4 + 0x18) <= (int)uVar5) {
          (**(code **)(*unaff_x20 + 0x168))();
          return;
        }
        lVar4 = FUN_075380a0();
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar4 = *(long *)(lVar4 + lVar6 * 8 + 0x20);
        in_stack_00000058._4_4_ = uVar5;
        uVar3 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000058 + 4);
        if (lVar4 == 0) break;
        FUN_060c2018(*(undefined8 *)puVar2,uVar3,*(undefined8 *)(lVar4 + 0x10),
                     *(undefined8 *)(lVar4 + 0x18),0);
        FUN_060ce568();
        lVar4 = FUN_075380a0();
        lVar6 = lVar6 + 1;
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


