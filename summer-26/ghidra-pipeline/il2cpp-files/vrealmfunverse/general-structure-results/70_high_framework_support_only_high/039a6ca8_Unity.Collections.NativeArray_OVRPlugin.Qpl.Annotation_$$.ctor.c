/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 039a6ca8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000070;
  
                    /* try { // try from 039a6ca8 to 03aa6cb3 has its CatchHandler @ 039a6bd8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039a6ca4 with catch @ 039a6cb0
                        */
  uStack0000000000000040 = param_2;
  uStack0000000000000050 = param_2;
  uStack0000000000000060 = param_2;
  FUN_04774754(&stack0x00000040,param_4,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x138));
  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
            (*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x130));
  return;
}


