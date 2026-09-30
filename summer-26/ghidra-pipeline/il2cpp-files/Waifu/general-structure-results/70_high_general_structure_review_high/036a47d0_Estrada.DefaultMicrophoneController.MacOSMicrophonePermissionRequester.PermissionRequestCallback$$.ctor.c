/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.MacOSMicrophonePermissionRequester.PermissionRequestCallback$$.ctor
ENTRY_POINT: 036a47d0
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


void Estrada_DefaultMicrophoneController_MacOSMicrophonePermissionRequester_PermissionRequestCallback___ctor
               (long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  
  FUN_079b2acc(0xff800000,param_2,*(undefined8 *)(param_1 + 0xdc0),0xffffffff);
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x30), lVar1 != 0)) {
    FUN_07a22574(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


