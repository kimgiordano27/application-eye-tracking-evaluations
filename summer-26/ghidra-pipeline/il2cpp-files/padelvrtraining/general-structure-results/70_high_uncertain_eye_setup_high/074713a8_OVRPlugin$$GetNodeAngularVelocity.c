/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularVelocity
ENTRY_POINT: 074713a8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeAngularVelocity
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_4 != 0) {
                    /* try { // try from 074713c0 to 075713cb has its CatchHandler @ 07471524 */
    FUN_08abef90(&stack0x00000008,param_4,0);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
                    /* try { // try from 074713d8 to 075713db has its CatchHandler @ 0747151c */
                    /* try { // try from 074713dc to 075713e3 has its CatchHandler @ 07471518 */
    in_stack_00000030 = in_stack_00000018;
    uVar1 = FUN_08a14544(param_1,param_2,param_3,&stack0x00000020,0);
    if ((uVar1 & 1) != 0) {
                    /* try { // try from 074713f0 to 075713fb has its CatchHandler @ 0747151c */
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_07471448;
      param_1 = FUN_08abf2ec(param_1,param_2,param_3,*(long *)(unaff_x19 + 0x20),0);
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_08abeed4(param_1,param_2,param_3,*(long *)(unaff_x19 + 0x20),0);
                    /* try { // try from 07471434 to 07571437 has its CatchHandler @ 074714e8 */
      return;
    }
  }
LAB_07471448:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


