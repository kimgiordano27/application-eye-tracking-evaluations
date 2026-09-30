/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 054db680
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  bool in_CY;
  undefined8 in_x9;
  long lVar1;
  long unaff_x19;
  int unaff_w29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (!in_CY) {
    lVar1 = unaff_x19 + (long)unaff_w29 * 0x18;
    *(undefined8 *)(lVar1 + 0x30) = in_x9;
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000018;
    *(undefined8 *)(lVar1 + 0x20) = in_stack_00000010;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


