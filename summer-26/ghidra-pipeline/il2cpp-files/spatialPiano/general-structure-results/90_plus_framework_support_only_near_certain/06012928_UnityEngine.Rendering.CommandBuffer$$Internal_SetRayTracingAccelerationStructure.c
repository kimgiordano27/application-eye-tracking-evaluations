/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$Internal_SetRayTracingAccelerationStructure
ENTRY_POINT: 06012928
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 137
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_9;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Rendering_CommandBuffer__Internal_SetRayTracingAccelerationStructure(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x25;
  
  FUN_02f08768(Method_OVROverlayCanvasManager_<>c_<Update>b__10_0__);
  FUN_02f08768(Method_OVRPassthroughColorLut_ColorLutTextureConverter_GetTextureSettings__);
  FUN_02f08768(Method_OVRPassthroughLayer_<>c__DisplayClass10_0_<IsSurfaceGeometry>b__0__);
  FUN_02f08768(Method_MetaXRAcousticGeometry_<>c_<_cctor>b__95_0__);
  FUN_02f08768(Method_UnityEngine_UIElements_MouseCaptureOutEvent_<>c_<_cctor>b__0_0__);
  FUN_02f08768(Method_OVRPassthroughLayer_<>c__DisplayClass9_0_<RemoveSurfaceGeometry>b__0__);
  FUN_02f08768(Method_OVRNativeList_CapacityHelper_AllocateEmpty<ulong>__);
  FUN_02f08768(Method_OVRNetwork_OVRNetworkTcpClient_OnReadDataCallback__);
  FUN_02f08768(Method_OVRNativeList_CapacityHelper_AllocateEmpty<long>__);
  FUN_02f08768(Method_OVRNetwork_OVRNetworkTcpServer_DoAcceptTcpClientCallback__);
  FUN_02f08768(Method_OVRPassthroughLayer_StylesHandler_GetStyleHandler__);
  FUN_02f08768(
              Method_OVRMicrogesturesSample_<ShowGestureLabel>d__26_System_Collections_IEnumerator_Reset__
              );
  FUN_02f08768(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__16_0__);
  FUN_02f08768(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__16_1__);
  FUN_02f08768(Method_UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_<Raycast>b__15_0__);
  FUN_02f08768(Method_OVRNetwork_OVRNetworkTcpClient_ConnectCallback__);
  FUN_02f08768(Method_UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_<Spherecast>b__16_0__);
  FUN_02f08768(Method_OVRNativeList_CapacityHelper_AllocateEmpty<OVRLocatable>__);
  FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_0__);
  FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_1__);
  FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_10__);
  *(undefined1 *)(unaff_x25 + 0x30c) = 1;
  FUN_05b297dc();
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1a8) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1b8) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1c0) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1c8) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1d0) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1d8) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1e0) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1e8) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x1f8) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x200) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x208) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x210) = uVar3;
  uVar3 = FUN_03440bb0();
  *(undefined8 *)(unaff_x19 + 0x218) = uVar3;
  uVar3 = FUN_03440bb0();
  puVar1 = Method_UnityEngine_Mesh_MeshData_GetIndexData<int>__;
  *(undefined8 *)(unaff_x19 + 0x220) = uVar3;
  lVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_060066ec(lVar4,0);
  puVar1 = Method_Unity_AI_Navigation_NavMeshSurface_<>c_<AppendModifierVolumes>b__86_0__;
  *(long *)(unaff_x19 + 0x228) = lVar4;
  uVar3 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_0476105c();
  puVar2 = Method_Unity_AI_Navigation_NavMeshSurface_<>c_<CollectSources>b__87_1__;
  puVar1 = Method_TMPro_KerningTable_<>c__DisplayClass3_0_<AddKerningPair>b__0__;
  if (lVar4 != 0) {
    FUN_04e2d668(lVar4,uVar3,
                 *(undefined8 *)
                  Method_System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt16_Run__
                );
    lVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    UnityEngine_Jobs_TransformAccess__get_localScale(lVar4,0);
    uVar3 = *(undefined8 *)puVar2;
    *(long *)(unaff_x19 + 0x230) = lVar4;
    uVar3 = thunk_FUN_02f45270(uVar3);
    FUN_0476105c();
    puVar2 = Method_UnityEngine_UIElements_NavigationCancelEvent_<>c_<_cctor>b__0_0__;
    puVar1 = Method_Meta_XR_MRUtilityKit_MRUKRoom_<ShareRoomAsync>d__50_MoveNext__;
    if (lVar4 != 0) {
      FUN_04e2d668(lVar4,uVar3,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_NavigationMoveEvent_<>c_<_cctor>b__0_0__);
      lVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_06005a80(lVar4,0);
      uVar3 = *(undefined8 *)puVar2;
      *(long *)(unaff_x19 + 0x238) = lVar4;
      uVar3 = thunk_FUN_02f45270(uVar3);
      FUN_0476105c();
      puVar2 = Method_Unity_AI_Navigation_NavMeshSurface_<>c_<CollectSources>b__87_2__;
      puVar1 = Method_MetaXRAcousticGeometry_<>c_<_cctor>b__95_0__;
      if (lVar4 != 0) {
        FUN_04e2d668(lVar4,uVar3,
                     *(undefined8 *)
                      Method_System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt32_Run__
                    );
        lVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
        FUN_060077c0(lVar4,0);
        uVar3 = *(undefined8 *)puVar2;
        *(long *)(unaff_x19 + 0x240) = lVar4;
        uVar3 = thunk_FUN_02f45270(uVar3);
        FUN_0476105c();
        puVar2 = Method_Unity_AI_Navigation_NavMeshSurface_<>c_<CollectSources>b__87_0__;
        puVar1 = Method_UnityEngine_UIElements_MouseCaptureOutEvent_<>c_<_cctor>b__0_0__;
        if (lVar4 != 0) {
          FUN_04e2d668(lVar4,uVar3,
                       *(undefined8 *)
                        Method_System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt64_Run__
                      );
          lVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
          UnityEngine_Networking_PlayerConnection_PlayerConnection__OnEnable();
          uVar3 = *(undefined8 *)puVar2;
          *(long *)(unaff_x19 + 0x248) = lVar4;
          uVar3 = thunk_FUN_02f45270(uVar3);
          FUN_0476105c();
          if (lVar4 != 0) {
            FUN_04e2d668(lVar4,uVar3,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_NavigationSubmitEvent_<>c_<_cctor>b__0_0__);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


