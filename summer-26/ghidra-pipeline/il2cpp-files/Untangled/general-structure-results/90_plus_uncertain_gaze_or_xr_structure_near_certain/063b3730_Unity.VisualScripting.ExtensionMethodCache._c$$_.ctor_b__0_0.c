/*
FUNCTION_NAME: Unity.VisualScripting.ExtensionMethodCache.<>c$$<.ctor>b__0_0
ENTRY_POINT: 063b3730
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_VisualScripting_ExtensionMethodCache_<>c__<_ctor>b__0_0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_062a6880(param_1,*unaff_x21,0);
  *(undefined8 *)(unaff_x19 + 0x128) = param_1;
  thunk_FUN_02f411dc(unaff_x19 + 0x128,param_1);
  if (*(int *)(*(long *)PlayFab_CloudScriptModels_ExecuteCloudScriptResult_var + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_0633d610();
  uVar2 = thunk_FUN_02ef1808(*unaff_x22);
  FUN_062a6880(uVar2,*unaff_x28,0);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x38),uVar2);
  *(undefined4 *)(unaff_x19 + 0x10) = unaff_w20;
  uVar2 = FUN_02f07f14(*unaff_x27,5);
  *(undefined8 *)(unaff_x19 + 0x100) = uVar2;
  thunk_FUN_02f411dc(unaff_x19 + 0x100);
  uVar2 = FUN_02f07f14(*unaff_x26,4);
  *(undefined8 *)(unaff_x19 + 0x108) = uVar2;
  thunk_FUN_02f411dc(unaff_x19 + 0x108);
  uVar2 = FUN_02f07f14(*unaff_x25,4);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
  thunk_FUN_02f411dc(unaff_x19 + 0x110);
  uVar1 = FUN_066a0664(*unaff_x23,0);
  **(undefined4 **)(*unaff_x24 + 0xb8) = uVar1;
  uVar1 = FUN_066a0664(*unaff_x29,0);
  *(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 4) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)System_Action<int,_int,_object>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 8) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        System_Action<WebClient,_UploadStringCompletedEventHandler>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0xc) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)System_Action<Column,_int,_int>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)System_Action<XRLayout,_Camera>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x14) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x18) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        System_Action<WebClient,_UploadFileCompletedEventHandler>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x1c) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x20) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        System_Action<EngineProfiler_InternalSimulationType,_int>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x24) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                       ,0);
  *(undefined4 *)(unaff_x19 + 0xec) = uVar1;
  uVar2 = FUN_066ae9f0(0);
  if (*(int *)(*(long *)PTR_DAT_06d96748 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)PTR_DAT_06d96748);
  }
  uVar2 = FUN_062ccc34(uVar2,0);
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar2;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0xf8),uVar2);
  return;
}


