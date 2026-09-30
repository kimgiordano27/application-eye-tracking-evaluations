/*
FUNCTION_NAME: FUN_0558c0e0
ENTRY_POINT: 0558c0e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0558c0e0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((DAT_066d16ea & 1) == 0) {
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__);
    FUN_02b3c81c(PTR_DAT_0632a950);
    FUN_02b3c81c(PTR_DAT_063217c0);
    DAT_066d16ea = 1;
  }
  FUN_04db368c(param_1,param_2,param_3,param_4,0);
  puVar3 = Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__;
  puVar2 = PTR_DAT_0632a950;
  puVar1 = PTR_DAT_063217c0;
  if (param_2 != 0) {
    FUN_04c8c710(param_2,*(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__
                 ,*(undefined8 *)(param_1 + 0x90),0);
    FUN_04c8c710(param_2,*(undefined8 *)puVar1,*(undefined8 *)(param_1 + 0x98),0);
    FUN_04c8c710(param_2,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


