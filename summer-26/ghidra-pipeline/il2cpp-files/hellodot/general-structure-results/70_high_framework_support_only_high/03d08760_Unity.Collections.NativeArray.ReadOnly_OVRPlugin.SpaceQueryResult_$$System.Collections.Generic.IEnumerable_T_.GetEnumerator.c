/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03d08760
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  undefined8 uVar1;
  ulong uVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  do {
    if ((*(uint *)(unaff_x23 + 0x18) <= unaff_w19) ||
       (uVar1 = thunk_FUN_02cea4e8(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0)),
       *(uint *)(unaff_x23 + 0x18) <= unaff_w19)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar2 = FUN_03c6c680(unaff_x24,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8));
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x25 = unaff_x25 + -1;
    unaff_x24 = unaff_x24 + 0x10;
  } while (unaff_x25 != 0);
  return 0xffffffff;
}


