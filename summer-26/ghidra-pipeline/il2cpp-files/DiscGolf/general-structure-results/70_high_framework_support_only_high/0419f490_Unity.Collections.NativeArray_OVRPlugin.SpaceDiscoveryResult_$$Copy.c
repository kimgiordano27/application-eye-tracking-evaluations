/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 0419f490
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  undefined8 unaff_x22;
  
  param_1 = param_1 + (long)unaff_w21 * 0x10;
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *puVar1 = unaff_x22;
  *(undefined8 *)(param_1 + 0x28) = unaff_x20;
  LeanTween__value(puVar1,0);
  *(ulong *)(unaff_x19 + 0x18) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
                    /* try { // try from 0419f4b8 to 0429f513 has its CatchHandler @ 0419f514 */
  return;
}


