/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$CheckBox
ENTRY_POINT: 01465b90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__CheckBox(void)

{
  undefined8 uVar1;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long in_stack_00000008;
  
  while( true ) {
    FUN_0132138c();
    if ((in_stack_00000008 == 0) || (uVar1 = FUN_0268fd4c(in_stack_00000008,0), unaff_x21 == 0))
    break;
    FUN_00ac8520(unaff_x21,uVar1,*unaff_x23);
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(unaff_x19 + 0x18) <= unaff_w20) {
      return;
    }
    unaff_x21 = (**(code **)(*unaff_x22 + 0x198))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


