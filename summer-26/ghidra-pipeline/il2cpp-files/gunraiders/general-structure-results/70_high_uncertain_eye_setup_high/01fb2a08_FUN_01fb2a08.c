/*
FUNCTION_NAME: FUN_01fb2a08
ENTRY_POINT: 01fb2a08
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01fb2a08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo;
  puVar3 = 
  System_Action<bool,_Nullable<Vector3>,_Nullable<Quaternion>,_Nullable<Quaternion>>_TypeInfo;
  puVar2 = 
  System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
  ;
  puVar1 = 
  System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
  ;
  if ((DAT_0452ebfb & 1) == 0) {
    FUN_01c5d288(
                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
                );
    FUN_01c5d288(System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo);
    FUN_01c5d288(
                System_Action<bool,_Nullable<Vector3>,_Nullable<Quaternion>,_Nullable<Quaternion>>_TypeInfo
                );
    FUN_01c5d288(
                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                );
    DAT_0452ebfb = 1;
  }
  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_02d4f880(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_02d4f880(uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(undefined4 *)(param_1 + 0x104) = 5;
  *(undefined4 *)(param_1 + 300) = 0x3df5c28f;
  *(undefined4 *)(param_1 + 0x1b4) = 0x3fc00000;
  thunk_FUN_03d45eb0(param_1,0);
  return;
}


