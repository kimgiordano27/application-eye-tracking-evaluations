/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector3>$$.ctor
ENTRY_POINT: 05057cd8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05057d60) */
/* WARNING: Removing unreachable block (ram,0x05057d70) */
/* WARNING: Removing unreachable block (ram,0x05057d78) */
/* WARNING: Removing unreachable block (ram,0x05057dc0) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector3>___ctor(long param_1)

{
  undefined8 *puVar1;
  long in_x9;
  long *in_x10;
  int *piVar2;
  long unaff_x20;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
        goto LAB_05057da8;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_05057da8:
  (*(code *)*puVar1)();
  FUN_0519ac10(&stack0x00000080,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x58));
  return;
}


