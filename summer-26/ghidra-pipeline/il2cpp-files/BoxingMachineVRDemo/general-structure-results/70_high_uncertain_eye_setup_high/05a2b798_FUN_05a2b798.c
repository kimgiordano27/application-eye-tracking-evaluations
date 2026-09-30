/*
FUNCTION_NAME: FUN_05a2b798
ENTRY_POINT: 05a2b798
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint FUN_05a2b798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((DAT_06b81196 & 1) == 0) {
    FUN_02d6084c(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
    DAT_06b81196 = 1;
  }
  puVar1 = Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x40), lVar3 != 0)) {
    uVar2 = FUN_048f6e9c(lVar3,param_2,param_1 + 0x48,
                         *(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x148) = 0;
      uVar4 = FUN_04e8cf70(param_3,0);
      if ((uVar4 & 1) == 0) {
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x40), lVar3 == 0)) goto LAB_05a2b854;
        uVar4 = FUN_048f6e9c(lVar3,param_3,param_1 + 200,*(undefined8 *)puVar1);
        if ((uVar4 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x148) = 1;
        }
      }
    }
    return uVar2 & 1;
  }
LAB_05a2b854:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


