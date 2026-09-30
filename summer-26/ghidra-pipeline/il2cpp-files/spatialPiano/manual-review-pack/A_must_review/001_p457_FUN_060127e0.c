/*
FUNCTION_NAME: FUN_060127e0
ENTRY_POINT: 060127e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 286
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_18;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_permission_setup;functionality_gaze_interaction_hits_10;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_060127e0(long param_1)

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
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar9 = Method_OVRNetwork_OVRNetworkTcpServer_DoAcceptTcpClientCallback__;
  puVar8 = Method_OVRNetwork_OVRNetworkTcpClient_OnReadDataCallback__;
  puVar7 = Method_OVRNetwork_OVRNetworkTcpClient_ConnectCallback__;
  puVar6 = Method_OVRNativeList_CapacityHelper_AllocateEmpty<ulong>__;
  puVar5 = Method_OVRNativeList_CapacityHelper_AllocateEmpty<OVRLocatable>__;
  puVar4 = Method_OVRNativeList_CapacityHelper_AllocateEmpty<long>__;
  puVar3 = 
  Method_OVRMicrogesturesSample_<ShowGestureLabel>d__26_System_Collections_IEnumerator_Reset__;
  puVar2 = Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>__ctor__;
  puVar1 = Method_UnityEngine_Events_UnityEvent<Quaternion>_Invoke__;
  if ((DAT_06bc530c & 1) == 0) {
    FUN_02f08768(Method_Unity_AI_Navigation_NavMeshSurface_<>c_<AppendModifierVolumes>b__86_0__);
    FUN_02f08768(Method_Unity_AI_Navigation_NavMeshSurface_<>c_<CollectSources>b__87_0__);
    FUN_02f08768(Method_Unity_AI_Navigation_NavMeshSurface_<>c_<CollectSources>b__87_1__);
    FUN_02f08768(Method_Unity_AI_Navigation_NavMeshSurface_<>c_<CollectSources>b__87_2__);
    FUN_02f08768(Method_UnityEngine_UIElements_NavigationCancelEvent_<>c_<_cctor>b__0_0__);
    FUN_02f08768(Method_TMPro_KerningTable_<>c__DisplayClass3_0_<AddKerningPair>b__0__);
    FUN_02f08768(Method_UnityEngine_UIElements_NavigationMoveEvent_<>c_<_cctor>b__0_0__);
    FUN_02f08768(Method_UnityEngine_UIElements_NavigationSubmitEvent_<>c_<_cctor>b__0_0__);
    FUN_02f08768(
                Method_System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt16_Run__
                );
    FUN_02f08768(
                Method_System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt32_Run__
                );
    FUN_02f08768(
                Method_System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt64_Run__
                );
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Quaternion>_Invoke__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>__ctor__);
    FUN_02f08768(Method_Meta_XR_MRUtilityKit_MRUKRoom_<ShareRoomAsync>d__50_MoveNext__);
    FUN_02f08768(Method_UnityEngine_Mesh_MeshData_GetIndexData<int>__);
    FUN_02f08768(Method_OVRNetwork_OVRNetworkTcpServer_DoWriteDataCallback__);
    FUN_02f08768(Method_OVROverlayCanvas_<>c__DisplayClass70_0_<RenderCamera>b__0__);
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
    DAT_06bc530c = 1;
  }
  FUN_05b297dc(param_1,0);
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
  uVar12 = *(undefined8 *)puVar4;
  uVar13 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x1a8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar12,uVar13);
  uVar12 = *(undefined8 *)puVar5;
  uVar13 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x1b0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar12,uVar13);
  uVar12 = *(undefined8 *)puVar6;
  uVar13 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x1b8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar12,uVar13);
  uVar12 = *(undefined8 *)puVar7;
  uVar13 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x1c0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar12,uVar13);
  uVar12 = *(undefined8 *)puVar8;
  uVar13 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x1c8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar12,uVar13);
  uVar12 = *(undefined8 *)puVar9;
  uVar13 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x1d0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar12,uVar13);
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_1__;
  uVar12 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x1d8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar3,uVar12);
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__16_1__;
  uVar12 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x1e0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar3,uVar12);
  puVar3 = Method_UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_<Spherecast>b__16_0__;
  uVar12 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x1e8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar3,uVar12);
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_0__;
  uVar12 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x1f0) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar3,uVar12);
  puVar1 = Method_UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_<Raycast>b__15_0__;
  uVar12 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x1f8) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar12);
  puVar1 = Method_OVRPassthroughLayer_<>c__DisplayClass9_0_<RemoveSurfaceGeometry>b__0__;
  uVar12 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x200) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar12);
  puVar1 = Method_OVRPassthroughLayer_StylesHandler_GetStyleHandler__;
  uVar12 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x208) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar12);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__16_0__;
  uVar12 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x210) = uVar10;
  uVar10 = FUN_03440bb0(param_1,*(undefined8 *)puVar1,uVar12);
  puVar1 = Method_UnityEngine_Events_UnityEvent<Vector3>__ctor__;
  uVar12 = *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_10__;
  *(undefined8 *)(param_1 + 0x218) = uVar10;
  uVar10 = FUN_03440bb0(param_1,uVar12,*(undefined8 *)puVar1);
  puVar1 = Method_UnityEngine_Mesh_MeshData_GetIndexData<int>__;
  *(undefined8 *)(param_1 + 0x220) = uVar10;
  lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_060066ec(lVar11,0);
  puVar1 = Method_Unity_AI_Navigation_NavMeshSurface_<>c_<AppendModifierVolumes>b__86_0__;
  *(long *)(param_1 + 0x228) = lVar11;
  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_0476105c(uVar10,param_1,*(undefined8 *)Method_OVROverlayCanvasManager_<>c_<Update>b__10_0__,0)
  ;
  puVar3 = Method_OVRNetwork_OVRNetworkTcpServer_DoWriteDataCallback__;
  puVar2 = Method_Unity_AI_Navigation_NavMeshSurface_<>c_<CollectSources>b__87_1__;
  puVar1 = Method_TMPro_KerningTable_<>c__DisplayClass3_0_<AddKerningPair>b__0__;
  if (lVar11 != 0) {
    FUN_04e2d668(lVar11,uVar10,
                 *(undefined8 *)
                  Method_System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt16_Run__
                );
    lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    UnityEngine_Jobs_TransformAccess__get_localScale(lVar11,0);
    uVar10 = *(undefined8 *)puVar2;
    *(long *)(param_1 + 0x230) = lVar11;
    uVar10 = thunk_FUN_02f45270(uVar10);
    FUN_0476105c(uVar10,param_1,*(undefined8 *)puVar3,0);
    puVar3 = Method_OVROverlayCanvas_<>c__DisplayClass70_0_<RenderCamera>b__0__;
    puVar2 = Method_UnityEngine_UIElements_NavigationCancelEvent_<>c_<_cctor>b__0_0__;
    puVar1 = Method_Meta_XR_MRUtilityKit_MRUKRoom_<ShareRoomAsync>d__50_MoveNext__;
    if (lVar11 != 0) {
      FUN_04e2d668(lVar11,uVar10,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_NavigationMoveEvent_<>c_<_cctor>b__0_0__);
      lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_06005a80(lVar11,0);
      uVar10 = *(undefined8 *)puVar2;
      *(long *)(param_1 + 0x238) = lVar11;
      uVar10 = thunk_FUN_02f45270(uVar10);
      FUN_0476105c(uVar10,param_1,*(undefined8 *)puVar3,0);
      puVar3 = Method_OVRPassthroughColorLut_ColorLutTextureConverter_GetTextureSettings__;
      puVar2 = Method_Unity_AI_Navigation_NavMeshSurface_<>c_<CollectSources>b__87_2__;
      puVar1 = Method_MetaXRAcousticGeometry_<>c_<_cctor>b__95_0__;
      if (lVar11 != 0) {
        FUN_04e2d668(lVar11,uVar10,
                     *(undefined8 *)
                      Method_System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt32_Run__
                    );
        lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
        FUN_060077c0(lVar11,0);
        uVar10 = *(undefined8 *)puVar2;
        *(long *)(param_1 + 0x240) = lVar11;
        uVar10 = thunk_FUN_02f45270(uVar10);
        FUN_0476105c(uVar10,param_1,*(undefined8 *)puVar3,0);
        puVar3 = Method_OVRPassthroughLayer_<>c__DisplayClass10_0_<IsSurfaceGeometry>b__0__;
        puVar2 = Method_Unity_AI_Navigation_NavMeshSurface_<>c_<CollectSources>b__87_0__;
        puVar1 = Method_UnityEngine_UIElements_MouseCaptureOutEvent_<>c_<_cctor>b__0_0__;
        if (lVar11 != 0) {
          FUN_04e2d668(lVar11,uVar10,
                       *(undefined8 *)
                        Method_System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt64_Run__
                      );
          lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
          UnityEngine_Networking_PlayerConnection_PlayerConnection__OnEnable();
          uVar10 = *(undefined8 *)puVar2;
          *(long *)(param_1 + 0x248) = lVar11;
          uVar10 = thunk_FUN_02f45270(uVar10);
          FUN_0476105c(uVar10,param_1,*(undefined8 *)puVar3,0);
          if (lVar11 != 0) {
            FUN_04e2d668(lVar11,uVar10,
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


