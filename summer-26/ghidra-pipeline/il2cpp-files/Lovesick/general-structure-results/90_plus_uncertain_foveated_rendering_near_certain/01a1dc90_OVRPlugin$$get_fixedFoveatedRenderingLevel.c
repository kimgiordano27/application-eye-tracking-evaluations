/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 01a1dc90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingLevel(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long in_x11;
  
  do {
    if (in_x11 == param_3) {
                    /* try { // try from 01a1dcc8 to 01b1dccb has its CatchHandler @ 01a1dfec */
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 10) * 0x10 + 0x138);
LAB_01a1dcd0:
                    /* try { // try from 01a1dcd8 to 01b1dcdf has its CatchHandler @ 01a1dfc8 */
                    /* WARNING: Could not recover jumptable at 0x01a1dce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)();
      return;
    }
    in_x9 = in_x9 + -1;
                    /* try { // try from 01a1dc9c to 01b1dc9f has its CatchHandler @ 01a1dfcc */
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_00d59724();
                    /* try { // try from 01a1dcb0 to 01b1dcb7 has its CatchHandler @ 01a1dffc */
      goto LAB_01a1dcd0;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


