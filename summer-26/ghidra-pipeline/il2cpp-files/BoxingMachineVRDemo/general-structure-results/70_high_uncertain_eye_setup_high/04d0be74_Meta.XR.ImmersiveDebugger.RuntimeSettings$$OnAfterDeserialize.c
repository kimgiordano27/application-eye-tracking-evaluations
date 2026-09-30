/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnAfterDeserialize
ENTRY_POINT: 04d0be74
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnAfterDeserialize(long param_1)

{
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  
  while( true ) {
    FUN_03aac1c4(param_1,unaff_w21,*(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x88));
    FUN_045ab1a4();
    unaff_w21 = unaff_w21 + 1;
    if (unaff_x20[5] == 0) break;
    if (*(int *)(unaff_x20[5] + 0x18) <= unaff_w21) {
      return;
    }
    (**(code **)(*unaff_x20 + 0x178))();
    param_1 = unaff_x20[5];
    if (param_1 == 0) break;
    in_x9 = *(long *)(unaff_x19 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


