/*
FUNCTION_NAME: FoveationFeature$$SessionCreate
ENTRY_POINT: 05ab000c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_5;telemetry_or_network_hits_2;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void FoveationFeature__SessionCreate(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int in_w9;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  uVar2 = (**(code **)(param_1 + (long)(in_w9 + 6) * 0x10 + 0x138))();
                    /* try { // try from 05ab003c to 05bb0067 has its CatchHandler @ 05ab0874 */
  if (((uVar2 & 1) != 0) && (uVar2 = (**(code **)(*unaff_x20 + 0x4b8))(), (uVar2 & 1) == 0)) {
    return;
  }
  puVar1 = Method_EmeraldAI_EmeraldSounds_PlayBlockSound__;
  if (unaff_x20[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  _in_stack_00000018 =
       FUN_03630c28(unaff_x20[0x21],&stack0x00000028,
                    *(undefined8 *)
                     Method_EmeraldAI_SoundDetection_EmeraldSoundDetector_<InvokeReactionListInternal>b__54_3__
                   );
                    /* try { // try from 05ab0074 to 05bb007b has its CatchHandler @ 05ab0878 */
  if (in_stack_00000028 != 0) {
    *(long **)(in_stack_00000028 + 0x20) = unaff_x20;
    thunk_FUN_02bb0e9c();
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    *(undefined8 *)(in_stack_00000028 + 0x10) = unaff_x19;
    thunk_FUN_02bb0e9c();
                    /* try { // try from 05ab00a4 to 05bb00ab has its CatchHandler @ 05ab07b8 */
    if (in_stack_00000028 != 0) {
      *(undefined8 *)(in_stack_00000028 + 0x18) = unaff_x21;
      thunk_FUN_02bb0e9c();
      (**(code **)(*unaff_x20 + 0x448))();
      FUN_03bf3b34(&stack0x00000018,*(undefined8 *)puVar1);
      lVar3 = thunk_FUN_02b79548();
      if (lVar3 != 0) {
        (**(code **)(*unaff_x20 + 0x398))();
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05ab0130 to 05bb013f has its CatchHandler @ 05ab07a4 */
  FUN_02b3cac4();
}


