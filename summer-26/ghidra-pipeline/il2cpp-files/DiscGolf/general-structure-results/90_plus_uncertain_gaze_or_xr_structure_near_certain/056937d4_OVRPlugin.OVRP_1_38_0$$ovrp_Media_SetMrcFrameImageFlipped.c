/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameImageFlipped
ENTRY_POINT: 056937d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameImageFlipped(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x668));
  FUN_02d965b8(PTR_DAT_069fc3f8);
  FUN_02d965b8(OVRTask<OVRAnchor_Tracker_AsyncLock>_TypeInfo);
  FUN_02d965b8(Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo);
  FUN_02d965b8(OVRTask<OVRPlugin_Result>_TypeInfo);
  FUN_02d965b8(OVRTask<OVRAnchor>_TypeInfo);
  FUN_02d965b8(OVRTask<object>_TypeInfo);
  FUN_02d965b8(PTR_DAT_069fc010);
  FUN_02d965b8(PTR_DAT_069fc768);
  FUN_02d965b8(UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo);
  FUN_02d965b8(UnityEngine_UIElements_ObjectListPool<string>_TypeInfo);
  FUN_02d965b8(OVRTask<OVRSceneManager_Metrics>_TypeInfo);
  FUN_02d965b8(PTR_DAT_06a0cd70);
  FUN_02d965b8(UnityEngine_Pool_ObjectPool<List<NativeSlice<ushort>>>_TypeInfo);
  FUN_02d965b8(UnityEngine_Pool_ObjectPool<List<NativeSlice<Vertex>>>_TypeInfo);
  FUN_02d965b8(OVRTask<Int32Enum>_TypeInfo);
  FUN_02d965b8(OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 2000) = 1;
  *(undefined8 *)(unaff_x19 + 0x28) = *unaff_x29;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x38) = *unaff_x29;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x48) = *unaff_x28;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x58) = *unaff_x27;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x68) = *unaff_x26;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x78) = *unaff_x20;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x88) = *unaff_x25;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x98) = *unaff_x24;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0xa8) = *unaff_x23;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0xb8) = *unaff_x22;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 200) =
       *(undefined8 *)UnityEngine_Pool_ObjectPool<List<NativeSlice<Vertex>>>_TypeInfo;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0xd8) =
       *(undefined8 *)UnityEngine_Pool_ObjectPool<List<NativeSlice<ushort>>>_TypeInfo;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0xe8) =
       *(undefined8 *)UnityEngine_UIElements_ObjectListPool<string>_TypeInfo;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x100) =
       *(undefined8 *)UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo;
  LeanTween__value(unaff_x19 + 0x100);
  uVar1 = thunk_FUN_02dd3144(*(undefined8 *)OVRTask<OVRAnchor_Tracker_AsyncLock>_TypeInfo);
  FUN_03fd14f4(uVar1,*(undefined8 *)OVRTask<OVRSpatialAnchor_OperationResult>_TypeInfo);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar1;
  LeanTween__value(unaff_x19 + 0x128,uVar1);
  uVar1 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0b668);
  FUN_03f34afc(uVar1,*(undefined8 *)PTR_DAT_06a0b648);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar1;
  LeanTween__value(unaff_x19 + 0x130,uVar1);
  uVar1 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
  FUN_03fb358c(uVar1,*(undefined8 *)PTR_DAT_069fc3f0);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar1;
  LeanTween__value(unaff_x19 + 0x140,uVar1);
  uVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                              Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo);
  FUN_05693a8c();
  *(undefined8 *)(unaff_x19 + 0x1d0) = uVar1;
  LeanTween__value(unaff_x19 + 0x1d0,uVar1);
  FUN_06351f88();
  return;
}


