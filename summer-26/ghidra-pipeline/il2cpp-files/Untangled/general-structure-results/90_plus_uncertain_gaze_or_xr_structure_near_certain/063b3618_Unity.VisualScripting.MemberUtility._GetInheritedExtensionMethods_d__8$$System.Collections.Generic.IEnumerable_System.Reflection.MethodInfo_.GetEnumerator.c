/*
FUNCTION_NAME: Unity.VisualScripting.MemberUtility.<GetInheritedExtensionMethods>d__8$$System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator
ENTRY_POINT: 063b3618
PROGRAM: Untangled-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_7;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_7
*/


void Unity_VisualScripting_MemberUtility_<GetInheritedExtensionMethods>d__8__System_Collections_Generic_IEnumerable<System_Reflection_MethodInfo>_GetEnumerator
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d96748);
  FUN_02f07e70(PlayFab_CloudScriptModels_ExecuteCloudScriptResult_var);
  FUN_02f07e70(System_Action<Task<IPAddress[]>>_TypeInfo);
  FUN_02f07e70(PTR_DAT_06d45398);
  FUN_02f07e70(System_Action<WebClient,_UploadFileCompletedEventHandler>_TypeInfo);
  FUN_02f07e70(System_Action<WebClient,_UploadStringCompletedEventHandler>_TypeInfo);
  FUN_02f07e70(System_Action<WebClient,_UploadValuesCompletedEventHandler>_TypeInfo);
  FUN_02f07e70(System_Action<XRLayout,_Camera>_TypeInfo);
  FUN_02f07e70(System_Action<WebClient,_OpenWriteCompletedEventHandler>_TypeInfo);
  FUN_02f07e70(System_Action<DebugManager_UIMode,_bool>_TypeInfo);
  FUN_02f07e70(System_Action<EngineProfiler_InternalSimulationType,_int>_TypeInfo);
  FUN_02f07e70(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
  FUN_02f07e70(
              System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
              );
  FUN_02f07e70(System_Action<byte[],_Exception,_AsyncOperation>_TypeInfo);
  FUN_02f07e70(System_Action<Column,_int,_int>_TypeInfo);
  FUN_02f07e70(System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo);
  FUN_02f07e70(System_Action<int,_int,_object>_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x51f) = 1;
  puVar7 = System_Action<byte[],_Exception,_AsyncOperation>_TypeInfo;
  puVar6 = System_Action<DebugManager_UIMode,_bool>_TypeInfo;
  puVar5 = System_Action<WebClient,_UploadValuesCompletedEventHandler>_TypeInfo;
  puVar4 = System_Action<WebClient,_UploadDataCompletedEventHandler>_TypeInfo;
  puVar3 = System_Action<Task<IPAddress[]>>_TypeInfo;
  puVar2 = PTR_DAT_06d45398;
  puVar1 = PTR_DAT_06d438e0;
  uVar9 = thunk_FUN_02ef1808(*unaff_x22);
  FUN_062a6880(uVar9,*unaff_x21,0);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar9;
  thunk_FUN_02f411dc(unaff_x19 + 0x128,uVar9);
  if (*(int *)(*(long *)PlayFab_CloudScriptModels_ExecuteCloudScriptResult_var + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_0633d610();
  uVar9 = thunk_FUN_02ef1808(*unaff_x22);
  FUN_062a6880(uVar9,*(undefined8 *)puVar6,0);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar9;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x38),uVar9);
  *(undefined4 *)(unaff_x19 + 0x10) = unaff_w20;
  uVar9 = FUN_02f07f14(*(undefined8 *)puVar1,5);
  *(undefined8 *)(unaff_x19 + 0x100) = uVar9;
  thunk_FUN_02f411dc(unaff_x19 + 0x100);
  uVar9 = FUN_02f07f14(*(undefined8 *)puVar3,4);
  *(undefined8 *)(unaff_x19 + 0x108) = uVar9;
  thunk_FUN_02f411dc(unaff_x19 + 0x108);
  uVar9 = FUN_02f07f14(*(undefined8 *)puVar2,4);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar9;
  thunk_FUN_02f411dc(unaff_x19 + 0x110);
  uVar8 = FUN_066a0664(*(undefined8 *)puVar7,0);
  **(undefined4 **)(*(long *)puVar4 + 0xb8) = uVar8;
  uVar8 = FUN_066a0664(*(undefined8 *)puVar5,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 4) = uVar8;
  uVar8 = FUN_066a0664(*(undefined8 *)System_Action<int,_int,_object>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = uVar8;
  uVar8 = FUN_066a0664(*(undefined8 *)
                        System_Action<WebClient,_UploadStringCompletedEventHandler>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc) = uVar8;
  uVar8 = FUN_066a0664(*(undefined8 *)System_Action<Column,_int,_int>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = uVar8;
  uVar8 = FUN_066a0664(*(undefined8 *)System_Action<XRLayout,_Camera>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14) = uVar8;
  uVar8 = FUN_066a0664(*(undefined8 *)
                        System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = uVar8;
  uVar8 = FUN_066a0664(*(undefined8 *)
                        System_Action<WebClient,_UploadFileCompletedEventHandler>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1c) = uVar8;
  uVar8 = FUN_066a0664(*(undefined8 *)
                        System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) = uVar8;
  uVar8 = FUN_066a0664(*(undefined8 *)
                        System_Action<EngineProfiler_InternalSimulationType,_int>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x24) = uVar8;
  uVar8 = FUN_066a0664(*(undefined8 *)
                        System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                       ,0);
  *(undefined4 *)(unaff_x19 + 0xec) = uVar8;
  uVar9 = FUN_066ae9f0(0);
  if (*(int *)(*(long *)PTR_DAT_06d96748 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)PTR_DAT_06d96748);
  }
  uVar9 = FUN_062ccc34(uVar9,0);
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar9;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0xf8),uVar9);
  return;
}


