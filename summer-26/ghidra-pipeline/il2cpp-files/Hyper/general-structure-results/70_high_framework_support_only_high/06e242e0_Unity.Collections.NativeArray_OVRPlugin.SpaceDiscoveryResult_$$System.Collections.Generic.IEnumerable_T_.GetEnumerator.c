/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 06e242e0
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34();
  }
                    /* try { // try from 06e242f8 to 06f24313 has its CatchHandler @ 06e24330 */
  lVar2 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar1 + 0xb8) = unaff_x20;
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04980b34();
  }
                    /* try { // try from 06e24314 to 06f24347 has its CatchHandler @ 06e24280 */
  lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34();
  }
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e242bc with catch @ 06e24328
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e242dc with catch @ 06e2432c
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 06e242f8 with catch @ 06e24330
                        */
  thunk_FUN_049ee3d8(*(undefined8 *)(lVar1 + 0xb8));
  return;
}


