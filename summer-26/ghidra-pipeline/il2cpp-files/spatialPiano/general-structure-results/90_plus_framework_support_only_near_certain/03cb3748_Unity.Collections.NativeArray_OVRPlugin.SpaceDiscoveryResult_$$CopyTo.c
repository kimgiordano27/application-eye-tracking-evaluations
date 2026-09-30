/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 03cb3748
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyTo
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  
  while( true ) {
    uVar1 = (**(code **)(unaff_x19 + 0x18))(param_1,param_2,param_3);
    if (((uVar1 & 1) == 0) ||
       (unaff_x21 = unaff_x21 + 1, (long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x21)) {
      return uVar1 & 1;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (unaff_x19 == 0) break;
    param_1 = *(undefined8 *)(unaff_x19 + 0x40);
    param_3 = *(undefined8 *)(unaff_x19 + 0x28);
    param_2 = *(undefined8 *)(lVar2 + unaff_x21 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


