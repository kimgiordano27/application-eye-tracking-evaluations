/*
FUNCTION_NAME: QFSW.QC.BasicQcSerializer<__Il2CppFullySharedGenericType>$$get_Priority
ENTRY_POINT: 02065774
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0206579c) */

undefined1  [16]
QFSW_QC_BasicQcSerializer<__Il2CppFullySharedGenericType>__get_Priority(undefined1 param_1 [16])

{
  undefined1 auVar1 [16];
  long unaff_x21;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 in_stack_00000038;
  
  uStack0000000000000028 = param_1._8_8_;
  uStack0000000000000020 = param_1._0_8_;
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  auVar1._8_8_ = uStack0000000000000028;
  auVar1._0_8_ = uStack0000000000000020;
  return auVar1;
}


