/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 03200234
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray
               (undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined4 uStack0000000000000030;
  
                    /* try { // try from 03200248 to 033002a3 has its CatchHandler @ 03200120 */
  uStack0000000000000028 = in_stack_00000008;
  uStack0000000000000020 = in_stack_00000000;
  uStack0000000000000030 = in_stack_00000010;
  FUN_032000fc(param_1,param_2,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x178));
  return;
}


