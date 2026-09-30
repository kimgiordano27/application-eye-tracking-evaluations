/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 03cb4b3c
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Equals
               (long param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint in_w9;
  
                    /* try { // try from 03cb4b40 to 03db4b53 has its CatchHandler @ 03cb4b60 */
  if (0x7feffffe < in_w9) {
    in_w9 = 0x7fefffff;
  }
                    /* try { // try from 03cb4b54 to 03db4b77 has its CatchHandler @ 03cb4b00 */
  uVar1 = 4;
  if (param_1 != 0) {
    uVar1 = in_w9;
  }
                    /* catch(type#1 @ 06402238) { ... } // from try @ 03cb4b40 with catch @ 03cb4b60
                        */
  if ((int)uVar1 <= (int)param_3) {
    uVar1 = param_3;
  }
  FUN_03cb3f2c(param_2,uVar1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xf0));
  return;
}


