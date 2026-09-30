/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 06e257d8
PROGRAM: Hyper-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (code *param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  while( true ) {
                    /* try { // try from 06e257d8 to 06f257e7 has its CatchHandler @ 06e25838 */
    uVar1 = (*param_1)(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar1 & 1) != 0) {
                    /* try { // try from 06e25804 to 06f2581b has its CatchHandler @ 06e2583c */
      return unaff_w19;
    }
    unaff_x22 = unaff_x22 + -1;
    unaff_x23 = unaff_x23 + 0x48;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x22 == 0) {
      return 0xffffffff;
    }
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x20 == 0) break;
    memcpy(&stack0x00000000,(void *)(lVar2 + unaff_x23),0x48);
    memcpy(&stack0x00000048,&stack0x00000000,0x48);
    param_1 = *(code **)(unaff_x20 + 0x18);
    param_2 = *(undefined8 *)(unaff_x20 + 0x40);
    param_3 = &stack0x00000048;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


