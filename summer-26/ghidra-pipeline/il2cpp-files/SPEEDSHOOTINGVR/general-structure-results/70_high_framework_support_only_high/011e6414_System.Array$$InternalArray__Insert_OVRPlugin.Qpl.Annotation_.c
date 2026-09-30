/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 011e6414
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array__InternalArray__Insert<OVRPlugin_Qpl_Annotation>
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  uint uVar1;
  long in_stack_00000070;
  long in_stack_00000078;
  
                    /* try { // try from 011e6414 to 012e6447 has its CatchHandler @ 011e58d4 */
                    /* catch() { ... } // from try @ 011e6410 with catch @ 011e6438 */
                    /* try { // try from 011e6448 to 012e645b has its CatchHandler @ 011e6850 */
  if (*(long *)(in_stack_00000078 + 0x38) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234c608);
    if (*(long *)(in_stack_00000078 + 0x38) == 0) {
      FUN_0103c2a0(in_stack_00000078);
    }
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_0144871c(*(long *)(param_1 + 0x98),param_3,in_stack_00000070,*(undefined8 *)PTR_DAT_0234c608
                );
    FUN_021bfcec(param_1,0);
    if (in_stack_00000070 != 0) {
      uVar1 = FUN_01b7e778(in_stack_00000070,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                          );
      FUN_011e7650(param_1,in_stack_00000070,
                   *(undefined8 *)(*(long *)(in_stack_00000078 + 0x38) + 0x18));
      return uVar1 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


