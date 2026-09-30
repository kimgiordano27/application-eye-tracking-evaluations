/*
FUNCTION_NAME: FUN_0569373c
ENTRY_POINT: 0569373c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0569373c(long param_1)

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
  
  puVar9 = OVRTask<OVRSceneManager_Metrics>_TypeInfo;
  puVar8 = OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo;
  puVar7 = OVRTask<OVRPlugin_Result>_TypeInfo;
  puVar6 = OVRTask<object>_TypeInfo;
  puVar5 = OVRTask<OVRAnchor>_TypeInfo;
  puVar4 = OVRTask<Int32Enum>_TypeInfo;
  puVar3 = PTR_DAT_06a0cd70;
  puVar2 = PTR_DAT_069fc768;
  puVar1 = PTR_DAT_069fc010;
  if ((DAT_06dbc7d0 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc3f0);
    FUN_02d965b8(PTR_DAT_06a0b648);
    FUN_02d965b8(OVRTask<OVRSpatialAnchor_OperationResult>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0b668);
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
    DAT_06dbc7d0 = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)puVar2;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)puVar2;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)puVar4;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)puVar5;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)puVar3;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)puVar6;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)puVar7;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)puVar8;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)puVar1;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)puVar9;
  LeanTween__value();
  *(undefined8 *)(param_1 + 200) =
       *(undefined8 *)UnityEngine_Pool_ObjectPool<List<NativeSlice<Vertex>>>_TypeInfo;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0xd8) =
       *(undefined8 *)UnityEngine_Pool_ObjectPool<List<NativeSlice<ushort>>>_TypeInfo;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0xe8) =
       *(undefined8 *)UnityEngine_UIElements_ObjectListPool<string>_TypeInfo;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0x100) =
       *(undefined8 *)UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo;
  LeanTween__value(param_1 + 0x100);
  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)OVRTask<OVRAnchor_Tracker_AsyncLock>_TypeInfo);
  FUN_03fd14f4(uVar10,*(undefined8 *)OVRTask<OVRSpatialAnchor_OperationResult>_TypeInfo);
  *(undefined8 *)(param_1 + 0x128) = uVar10;
  LeanTween__value(param_1 + 0x128,uVar10);
  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0b668);
  FUN_03f34afc(uVar10,*(undefined8 *)PTR_DAT_06a0b648);
  *(undefined8 *)(param_1 + 0x130) = uVar10;
  LeanTween__value(param_1 + 0x130,uVar10);
  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
  FUN_03fb358c(uVar10,*(undefined8 *)PTR_DAT_069fc3f0);
  *(undefined8 *)(param_1 + 0x140) = uVar10;
  LeanTween__value(param_1 + 0x140,uVar10);
  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                               Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo);
  FUN_05693a8c();
  *(undefined8 *)(param_1 + 0x1d0) = uVar10;
  LeanTween__value(param_1 + 0x1d0,uVar10);
  FUN_06351f88(param_1,0);
  return;
}


