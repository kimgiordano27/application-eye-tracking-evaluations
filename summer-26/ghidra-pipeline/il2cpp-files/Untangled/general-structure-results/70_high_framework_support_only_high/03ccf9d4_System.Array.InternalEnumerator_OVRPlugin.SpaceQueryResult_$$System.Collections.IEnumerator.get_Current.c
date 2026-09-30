/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03ccf9d4
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  long in_x10;
  int *piVar2;
  long unaff_x20;
  uint unaff_w21;
  
  piVar2 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar2 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
      goto LAB_03ccfa0c;
    }
    in_x9 = in_x9 + -1;
    piVar2 = piVar2 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_03ccfa0c:
  (*(code *)*puVar1)();
  if (unaff_x20 == 0) {
    return unaff_w21 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ecbb70();
}


