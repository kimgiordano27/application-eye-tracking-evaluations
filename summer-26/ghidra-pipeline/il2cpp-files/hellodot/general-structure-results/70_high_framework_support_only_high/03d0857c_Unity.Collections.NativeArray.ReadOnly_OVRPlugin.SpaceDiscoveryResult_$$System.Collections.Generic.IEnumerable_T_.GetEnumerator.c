/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03d0857c
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


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  undefined1 in_CY;
  undefined8 uVar1;
  ulong uVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x23;
  int unaff_w24;
  
  while( true ) {
    if (((bool)in_CY) ||
       (uVar1 = thunk_FUN_02cea4e8(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0)),
       *(uint *)(unaff_x23 + 0x18) <= unaff_w19)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar2 = FUN_03c6bfd8(unaff_x23 + (long)(int)unaff_w19 * 0x10 + 0x20,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8));
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) break;
    in_CY = *(uint *)(unaff_x23 + 0x18) <= unaff_w19;
  }
  return 0xffffffff;
}


