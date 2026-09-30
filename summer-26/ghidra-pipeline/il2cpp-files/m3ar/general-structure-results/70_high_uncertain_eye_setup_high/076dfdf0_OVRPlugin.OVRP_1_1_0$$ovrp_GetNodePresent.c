/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodePresent
ENTRY_POINT: 076dfdf0
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNodePresent(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  lVar2 = FUN_0752a828(param_1,param_2,0);
  puVar1 = PTR_DAT_08fae278;
  if (lVar2 == 0) {
    *(undefined8 *)(unaff_x19 + 0xa8) = 0;
    return;
  }
  uVar4 = *(undefined8 *)PTR_DAT_08fae278;
  lVar3 = thunk_FUN_0406ddbc(lVar2,uVar4);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)puVar1;
    *(long *)(unaff_x19 + 0xa8) = lVar3;
    lVar3 = thunk_FUN_0406ddbc(lVar2,uVar4);
    if (lVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031c0c(lVar2,uVar4);
}


