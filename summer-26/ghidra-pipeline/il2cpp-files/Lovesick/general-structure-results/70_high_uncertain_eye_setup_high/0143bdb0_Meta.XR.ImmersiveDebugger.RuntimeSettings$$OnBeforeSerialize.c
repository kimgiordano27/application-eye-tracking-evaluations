/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 0143bdb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize
               (undefined8 param_1,long param_2,long param_3)

{
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000078;
  long in_stack_00000098;
  
  while( true ) {
    FUN_01436444(param_1,param_2,param_3);
    FUN_0132138c();
    if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_014359a0();
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(unaff_x19 + 0x18) <= unaff_w20) break;
    FUN_0132138c();
    param_2 = in_stack_00000098;
    param_1 = FUN_0132138c(in_stack_00000078,unaff_w20,&stack0x00000098,*unaff_x23);
    param_3 = in_stack_00000098;
  }
  FUN_01325140();
  return;
}


