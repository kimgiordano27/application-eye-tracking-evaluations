/*
FUNCTION_NAME: QFSW.QC.BasicQcSerializer<__Il2CppFullySharedGenericType>$$CanSerialize
ENTRY_POINT: 0206577c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] QFSW_QC_BasicQcSerializer<__Il2CppFullySharedGenericType>__CanSerialize(void)

{
  undefined1 auVar1 [16];
  int unaff_w20;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x21 == 0) {
    if ((unaff_w20 == 0x11) || (unaff_w20 == 0)) {
      in_stack_00000048 = in_stack_00000028;
      in_stack_00000040 = in_stack_00000020;
    }
    auVar1._8_8_ = in_stack_00000048;
    auVar1._0_8_ = in_stack_00000040;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


