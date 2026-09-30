/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$set_Item
ENTRY_POINT: 017d15b8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__set_Item(long param_1)

{
  undefined8 *puVar1;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  
  if (*(long *)(param_1 + 0x40) == in_x9) {
    puVar1 = (undefined8 *)thunk_FUN_01040230();
    FUN_01209dcc(*(undefined8 *)(unaff_x19 + 0x10),*puVar1,0,*(undefined4 *)(unaff_x19 + 0x18),
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) +
                                                0xd0) + 0x20) + 0xc0) + 0x148));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc8d0();
}


