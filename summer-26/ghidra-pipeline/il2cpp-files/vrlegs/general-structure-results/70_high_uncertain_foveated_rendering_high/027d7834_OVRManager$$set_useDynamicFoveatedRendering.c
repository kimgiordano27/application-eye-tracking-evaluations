/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 027d7834
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFoveatedRendering(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (*(int *)(**(long **)(param_1 + 0x210) + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027e063c(0);
  FUN_027d7ab8(&stack0x00000008);
                    /* try { // try from 027d7870 to 028d787f has its CatchHandler @ 027d7880 */
  unaff_x19[2] = in_stack_00000018;
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
                    /* catch() { ... } // from try @ 027d77dc with catch @ 027d7880
                       catch() { ... } // from try @ 027d7870 with catch @ 027d7880 */
                    /* try { // try from 027d7884 to 028d7887 has its CatchHandler @ 027d7890 */
  return;
}


