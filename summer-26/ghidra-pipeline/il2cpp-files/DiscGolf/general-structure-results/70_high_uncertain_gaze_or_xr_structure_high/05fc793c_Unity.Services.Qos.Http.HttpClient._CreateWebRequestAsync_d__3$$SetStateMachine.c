/*
FUNCTION_NAME: Unity.Services.Qos.Http.HttpClient.<CreateWebRequestAsync>d__3$$SetStateMachine
ENTRY_POINT: 05fc793c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_5;functionality_data_collection_or_telemetry_hits_3
*/


void Unity_Services_Qos_Http_HttpClient_<CreateWebRequestAsync>d__3__SetStateMachine
               (undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_02979e58();
  uVar1 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  uVar2 = thunk_FUN_02dfd288(Method_System_Array_Resize<OVRPlugin_Vector3f>__);
  uVar3 = thunk_FUN_02dfd288(Method_System_Array_Resize<OvrAvatarEntity_PrimitiveRenderData>__);
  uVar1 = FUN_0536d554(uVar2,uVar1,uVar3,0);
  thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
  uVar2 = thunk_FUN_02dd3144();
  FUN_054e8008(uVar2,uVar1,0);
  uVar1 = thunk_FUN_02dfd288(Method_System_Array_Resize<OvrAvatarManager_LoadRequest>__);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar2,uVar1);
}


