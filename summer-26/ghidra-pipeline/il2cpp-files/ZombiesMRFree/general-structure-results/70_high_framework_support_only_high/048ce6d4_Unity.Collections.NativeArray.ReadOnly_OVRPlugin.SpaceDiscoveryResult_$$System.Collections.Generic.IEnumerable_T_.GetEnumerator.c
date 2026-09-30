/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 048ce6d4
PROGRAM: ZombiesMRFree-libil2cpp.so
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
               (ulong param_1)

{
  undefined8 uVar1;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  long *unaff_x25;
  
  while( true ) {
    if ((param_1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) break;
    uVar1 = thunk_FUN_0301043c(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),
                               &stack0x0000000c);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x25);
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) break;
    param_1 = FUN_05a67ce0(unaff_x21 + (int)unaff_w19 + 0x20,uVar1,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8));
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


