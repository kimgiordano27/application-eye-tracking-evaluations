/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_Update2
ENTRY_POINT: 02814cb8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_8_0__ovrp_Update2(undefined8 param_1,long *param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_02814d20();
  bVar1 = param_4 < iVar2;
  if ((iVar2 <= param_4) && ((param_3 & 1) != 0)) {
    if (iVar2 == param_4) {
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(bVar1);
      }
      iVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      bVar1 = iVar2 - 1U < 3;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


