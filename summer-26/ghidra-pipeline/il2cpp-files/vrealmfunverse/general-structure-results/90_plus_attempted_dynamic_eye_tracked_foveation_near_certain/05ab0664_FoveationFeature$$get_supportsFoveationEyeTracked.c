/*
FUNCTION_NAME: FoveationFeature$$get_supportsFoveationEyeTracked
ENTRY_POINT: 05ab0664
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_4;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FoveationFeature__get_supportsFoveationEyeTracked
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *puVar1;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
                    /* try { // try from 05ab0664 to 05bb066b has its CatchHandler @ 05ab0818 */
  puVar1 = *(undefined8 **)(unaff_x22 + 0x5b0);
  _in_stack_00000010 = FUN_03630c28(param_2,param_3,**(undefined8 **)(param_1 + 0x5a8));
                    /* try { // try from 05ab0684 to 05bb0693 has its CatchHandler @ 05ab0788 */
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05ab070c to 05bb070f has its CatchHandler @ 05ab08d4 */
    FUN_02b3cac4();
  }
  *(long **)(in_stack_00000028 + 0x20) = unaff_x21;
  thunk_FUN_02bb0e9c();
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05ab0710 to 05bb0713 has its CatchHandler @ 05ab0888 */
    FUN_02b3cac4();
  }
                    /* try { // try from 05ab06a0 to 05bb06b3 has its CatchHandler @ 05ab0790 */
  *(undefined8 *)(in_stack_00000028 + 0x10) = unaff_x20;
  thunk_FUN_02bb0e9c();
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05ab0714 to 05bb0717 has its CatchHandler @ 05ab082c */
    FUN_02b3cac4();
  }
                    /* try { // try from 05ab06b4 to 05bb06ff has its CatchHandler @ 05aafd08 */
  *(undefined8 *)(in_stack_00000028 + 0x18) = unaff_x19;
  thunk_FUN_02bb0e9c();
  if (in_stack_00000028 != 0) {
    *(undefined1 *)(in_stack_00000028 + 0x28) = 0;
    (**(code **)(*unaff_x21 + 0x478))();
    FUN_03bf3b34(&stack0x00000010,*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05ab0718 to 05bb071b has its CatchHandler @ 05ab0820 */
  FUN_02b3cac4();
}


