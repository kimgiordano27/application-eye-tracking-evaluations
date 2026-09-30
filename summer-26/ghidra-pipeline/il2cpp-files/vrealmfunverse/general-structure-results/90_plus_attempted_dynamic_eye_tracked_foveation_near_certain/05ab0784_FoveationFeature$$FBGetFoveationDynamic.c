/*
FUNCTION_NAME: FoveationFeature$$FBGetFoveationDynamic
ENTRY_POINT: 05ab0784
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;ray_interaction;foveation_rendering;frame_behavior;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;strong_foveation_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FoveationFeature__FBGetFoveationDynamic(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
                    /* catch() { ... } // from try @ 05ab074c with catch @ 05ab0784 */
                    /* catch() { ... } // from try @ 05ab0684 with catch @ 05ab0788 */
                    /* catch() { ... } // from try @ 05ab0748 with catch @ 05ab078c */
                    /* catch() { ... } // from try @ 05ab06a0 with catch @ 05ab0790 */
                    /* catch() { ... } // from try @ 05ab0548 with catch @ 05ab0794 */
                    /* catch() { ... } // from try @ 05ab0744 with catch @ 05ab0798 */
                    /* catch() { ... } // from try @ 05ab0740 with catch @ 05ab079c */
                    /* catch() { ... } // from try @ 05ab014c with catch @ 05ab07a0 */
  if ((DAT_066d42d3 & 1) == 0) {
                    /* catch() { ... } // from try @ 05ab0130 with catch @ 05ab07a4 */
                    /* catch() { ... } // from try @ 05ab0110 with catch @ 05ab07a8 */
                    /* catch() { ... } // from try @ 05ab00fc with catch @ 05ab07ac */
    FUN_02b3c81c(Method_EmeraldAI_EmeraldUI_UpdateAIUI__);
                    /* catch() { ... } // from try @ 05ab00e4 with catch @ 05ab07b0 */
                    /* catch() { ... } // from try @ 05ab073c with catch @ 05ab07b4 */
                    /* catch() { ... } // from try @ 05ab00a4 with catch @ 05ab07b8 */
    FUN_02b3c81c(Method_EmeraldAI_EmeraldWeaponCollision_DisableWeaponCollider__);
                    /* catch() { ... } // from try @ 05ab0610 with catch @ 05ab07bc */
                    /* catch() { ... } // from try @ 05ab05c0 with catch @ 05ab07c0 */
    DAT_066d42d3 = 1;
  }
  puVar1 = Method_EmeraldAI_EmeraldWeaponCollision_DisableWeaponCollider__;
                    /* catch() { ... } // from try @ 05ab04cc with catch @ 05ab07c4 */
                    /* catch() { ... } // from try @ 05aaffc8 with catch @ 05ab07c8 */
  in_stack_00000028 = 0;
                    /* catch() { ... } // from try @ 05aaff8c with catch @ 05ab07cc */
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
                    /* catch() { ... } // from try @ 05aaff60 with catch @ 05ab07d0 */
  if (param_1[0x24] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
                    /* catch() { ... } // from try @ 05aaff20 with catch @ 05ab07d4 */
  _in_stack_00000010 =
       FUN_03630c28(param_1[0x24],&stack0x00000028,
                    *(undefined8 *)Method_EmeraldAI_EmeraldUI_UpdateAIUI__);
                    /* try { // try from 05ab07f4 to 05bb07f7 has its CatchHandler @ 05ab0800 */
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(long *)(in_stack_00000028 + 0x20) = (long)param_1;
  thunk_FUN_02bb0e9c((long *)(in_stack_00000028 + 0x20),param_1);
  if (in_stack_00000028 != 0) {
    *(undefined8 *)(in_stack_00000028 + 0x10) = param_2;
    thunk_FUN_02bb0e9c((undefined8 *)(in_stack_00000028 + 0x10),param_2);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    *(undefined8 *)(in_stack_00000028 + 0x18) = param_3;
    thunk_FUN_02bb0e9c((undefined8 *)(in_stack_00000028 + 0x18),param_3);
    if (in_stack_00000028 != 0) {
      *(undefined1 *)(in_stack_00000028 + 0x28) = 1;
      (**(code **)(*param_1 + 0x478))
                (param_1,param_2,param_3,in_stack_00000028,*(undefined8 *)(*param_1 + 0x480));
      FUN_03bf3b34(&stack0x00000010,*(undefined8 *)puVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


