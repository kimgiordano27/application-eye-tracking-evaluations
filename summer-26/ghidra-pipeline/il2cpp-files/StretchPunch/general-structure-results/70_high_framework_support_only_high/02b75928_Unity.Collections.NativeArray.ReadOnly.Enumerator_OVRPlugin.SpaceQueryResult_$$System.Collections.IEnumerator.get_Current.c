/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b75928
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long in_x10;
  long unaff_x19;
  ulong unaff_x20;
  
                    /* try { // try from 02b75928 to 02c7592b has its CatchHandler @ 02b759e4 */
                    /* try { // try from 02b7592c to 02c75943 has its CatchHandler @ 02b7573c */
  param_1 = param_1 + (unaff_x20 & 0xffffffff) * 0x20;
                    /* try { // try from 02b75944 to 02c7595b has its CatchHandler @ 02b759d4 */
  uVar1 = (**(code **)(in_x10 + 0x1b8))
                    (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                     *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(unaff_x19 + 8),
                     *(undefined4 *)(unaff_x19 + 0xc),*(undefined4 *)(unaff_x19 + 0x10),param_2,
                     *(undefined8 *)(in_x10 + 0x1c0));
                    /* try { // try from 02b7595c to 02c759c3 has its CatchHandler @ 02b7573c */
  return (uVar1 & 1) != 0;
}


