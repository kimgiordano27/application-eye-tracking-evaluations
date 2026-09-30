/*
FUNCTION_NAME: FUN_054d1020
ENTRY_POINT: 054d1020
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_054d1020(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 local_28;
  
  if ((DAT_066d118d & 1) == 0) {
    FUN_02b3c81c(Method_OVRTask_Awaiter<bool>_get_IsCompleted__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_GetResult__);
    DAT_066d118d = 1;
  }
  local_28 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = FUN_0452f928(*(long *)(param_1 + 0x10),param_2,&local_28,
                         *(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_0452f2dc(*(long *)(param_1 + 0x10),param_2,
                   *(undefined8 *)Method_OVRTask_Awaiter<bool>_get_IsCompleted__);
      uVar1 = FUN_054d0de4(param_1,local_28);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_039a1fcc(*(long *)(param_1 + 0x18),uVar1,
                     *(undefined8 *)Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_GetResult__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


