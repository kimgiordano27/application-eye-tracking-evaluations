/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04e7b198
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04e7b208) */

void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_Reset
               (void)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
    uVar1 = FUN_04e77a20();
    if ((uVar1 & 1) == 0) {
      FUN_04e7a1f4();
    }
    uVar1 = System_Collections_Generic_EqualityComparer<TempAllocator_Page<ushort>>___ctor
                      (&stack0x00000020,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1c8));
  } while ((uVar1 & 1) != 0);
  FUN_04a0e704(&stack0x00000020,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1d0));
  return;
}


