/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 053ba870
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__Dispose
               (long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint in_w9;
  long unaff_x19;
  uint unaff_w22;
  
  if (in_w9 <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  param_1 = param_1 + (ulong)unaff_w22 * 0x28;
  uVar2 = (**(code **)(*param_2 + 0x1b8))
                    (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                     *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(unaff_x19 + 8),
                     *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x18),param_2,
                     *(undefined8 *)(*param_2 + 0x1c0));
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_053bbc44();
  }
  return bVar1;
}


