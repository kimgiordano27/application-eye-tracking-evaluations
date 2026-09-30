/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 0745cfbc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
                    /* try { // try from 0745cfbc to 0755cfc3 has its CatchHandler @ 0745d010 */
  FUN_0744c208();
  lVar1 = *(long *)(unaff_x19 + 0x38);
                    /* try { // try from 0745cfd0 to 0755cfdb has its CatchHandler @ 0745d00c */
  if (lVar1 != 0) {
                    /* try { // try from 0745cfdc to 0755cfff has its CatchHandler @ 0745ce24 */
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000078 = in_stack_00000048;
    in_stack_00000070 = in_stack_00000040;
    in_stack_00000088 = in_stack_00000058;
    in_stack_00000080 = in_stack_00000050;
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),&stack0x00000060,*(undefined8 *)(lVar1 + 0x28));
                    /* try { // try from 0745d000 to 0755d003 has its CatchHandler @ 0745d008 */
                    /* try { // try from 0745d004 to 0755d01f has its CatchHandler @ 0745ce24 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


