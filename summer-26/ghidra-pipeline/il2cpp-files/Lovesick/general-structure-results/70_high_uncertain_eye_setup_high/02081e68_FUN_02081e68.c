/*
FUNCTION_NAME: FUN_02081e68
ENTRY_POINT: 02081e68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_02081e68(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_03780caa & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_8_0_TypeInfo);
    DAT_03780caa = 1;
  }
  puVar1 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__;
  lVar3 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      lVar3 = 0;
    }
    else {
      uVar2 = FUN_015f5b28(*(undefined8 *)OVRPlugin_OVRP_1_8_0_TypeInfo,param_1,0);
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01fc3894(lVar3,uVar2,0);
    }
  }
  return lVar3;
}


