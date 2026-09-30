/*
FUNCTION_NAME: FUN_05588cd8
ENTRY_POINT: 05588cd8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05588cd8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
                    /* try { // try from 05588ce4 to 05688ce7 has its CatchHandler @ 05588cf4 */
  if ((DAT_066d16c5 & 1) == 0) {
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_GetResult__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_get_IsCompleted__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__);
    FUN_02b3c81c(PTR_DAT_0632a950);
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__);
    FUN_02b3c81c(PTR_DAT_063217c0);
    DAT_066d16c5 = 1;
  }
  FUN_04db368c(param_1,param_2,param_3,param_4,0);
  puVar6 = Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__;
  puVar5 = Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__;
  puVar4 = Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_get_IsCompleted__;
  puVar3 = Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_GetResult__;
  puVar2 = PTR_DAT_0632a950;
  puVar1 = PTR_DAT_063217c0;
  if (param_2 != 0) {
    FUN_04c8c710(param_2,*(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__
                 ,*(undefined8 *)(param_1 + 0x90),0);
    FUN_04c8c710(param_2,*(undefined8 *)puVar1,*(undefined8 *)(param_1 + 0x98),0);
    FUN_04c8c8f4(param_2,*(undefined8 *)puVar3,*(undefined4 *)(param_1 + 0xa0),0);
    FUN_04c8c8f4(param_2,*(undefined8 *)puVar5,*(undefined4 *)(param_1 + 0xa4),0);
    FUN_04c8c710(param_2,*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 0xa8),0);
    FUN_04c8c710(param_2,*(undefined8 *)puVar2,*(undefined8 *)puVar6,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


