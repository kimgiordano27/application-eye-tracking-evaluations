/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Equals
ENTRY_POINT: 0399c85c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Equals(void)

{
  int iVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  
  FUN_04d9c54c(0x10,4,0);
  if (*(int *)(unaff_x19 + 0x18) - unaff_w21 < unaff_w20) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(0x17,0);
  }
  if (0 < unaff_w20) {
    iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w20;
    *(int *)(unaff_x19 + 0x18) = iVar1;
    if (iVar1 - unaff_w21 != 0 && unaff_w21 <= iVar1) {
      FUN_04d9e334(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20 + unaff_w21,
                   *(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
      iVar1 = *(int *)(unaff_x19 + 0x18);
    }
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    FUN_04d9e084(*(undefined8 *)(unaff_x19 + 0x10),iVar1,unaff_w20,0);
    return;
  }
                    /* try { // try from 0399c870 to 03a9c8d3 has its CatchHandler @ 0399c9f0 */
  return;
}


