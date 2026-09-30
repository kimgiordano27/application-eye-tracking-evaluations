/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 0469a418
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  FUN_054c6628();
  param_1[1] = in_stack_00000008;
  *param_1 = in_stack_00000000;
                    /* try { // try from 0469a444 to 0479a447 has its CatchHandler @ 0469a450 */
                    /* try { // try from 0469a448 to 0479a473 has its CatchHandler @ 04699fc0 */
  param_1[3] = in_stack_00000018;
  param_1[2] = in_stack_00000010;
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0469a444 with catch @ 0469a450
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0469a378 with catch @ 0469a454
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0469a2c0 with catch @ 0469a458
                        */
  return;
}


