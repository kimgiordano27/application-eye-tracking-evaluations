/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 047a8dc0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a8ccc with catch @ 047a8dc0
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a8ce8 with catch @ 047a8dc4
                        */
  FUN_05e39590(param_1,param_2,0);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a8bfc with catch @ 047a8dc8
                        */
  if (*(int *)(unaff_x19 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_05e390e4(0x17,0);
  }
  if (1 < unaff_w20) {
    FUN_03b5576c(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,unaff_w20,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x188));
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


