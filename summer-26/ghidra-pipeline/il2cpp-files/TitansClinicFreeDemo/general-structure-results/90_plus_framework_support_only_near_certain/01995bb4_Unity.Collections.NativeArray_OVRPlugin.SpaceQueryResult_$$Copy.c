/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 01995bb4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(long param_1,long param_2)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined4 unaff_w22;
  long unaff_x23;
  
                    /* try { // try from 01995bb4 to 01a95bb7 has its CatchHandler @ 01995c40 */
                    /* try { // try from 01995bb8 to 01a95bdf has its CatchHandler @ 01995b78 */
  FUN_01996158(param_2,unaff_w22,*(undefined8 *)(param_1 + 0x78));
  lVar1 = *(long *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x18) = unaff_w22;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if ((uint)unaff_x23 < *(uint *)(lVar1 + 0x18)) {
    lVar1 = lVar1 + unaff_x23 * 0x10;
                    /* try { // try from 01995be0 to 01a95bef has its CatchHandler @ 01995c44 */
    *(undefined8 *)(lVar1 + 0x20) = unaff_x20;
    *(undefined8 *)(lVar1 + 0x28) = unaff_x19;
                    /* try { // try from 01995bf0 to 01a95c0b has its CatchHandler @ 01995b78 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


