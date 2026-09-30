/*
FUNCTION_NAME: FUN_06647668
ENTRY_POINT: 06647668
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_06647668(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = StringLiteral_3716;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<ConnectionModule_<OnSessionChanged>d__22>__
  ;
  puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
  if ((DAT_06dce8b0 & 1) == 0) {
    FUN_02d965b8(StringLiteral_3716);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<ConnectionModule_<OnSessionChanged>d__22>__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    DAT_06dce8b0 = 1;
  }
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_06647490(uVar4,(param_2 ^ 0xffffffff) & 1);
  uVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_06644aec(uVar5,param_1,*(undefined8 *)puVar1,uVar4,0,0);
  return uVar5;
}


