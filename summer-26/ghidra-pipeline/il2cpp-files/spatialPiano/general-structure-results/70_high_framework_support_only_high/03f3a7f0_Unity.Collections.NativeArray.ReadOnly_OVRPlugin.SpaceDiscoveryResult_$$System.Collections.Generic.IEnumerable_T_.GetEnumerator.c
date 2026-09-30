/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03f3a7f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1)

{
  undefined8 uVar1;
  undefined8 *in_x9;
  long unaff_x19;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  uVar1 = thunk_FUN_02f45270(*in_x9);
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c(*(long *)(unaff_x19 + 0x20));
  }
  FUN_05054f60(uVar1);
  if (lVar2 != 0) {
                    /* try { // try from 03f3a838 to 0403a85f has its CatchHandler @ 03f3a9c0 */
    FUN_0470de18(lVar2,uVar1,*(undefined8 *)PTR_DAT_067cc510);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


