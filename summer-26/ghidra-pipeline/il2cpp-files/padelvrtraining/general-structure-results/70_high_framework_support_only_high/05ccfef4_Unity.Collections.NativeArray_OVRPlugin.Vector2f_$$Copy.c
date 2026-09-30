/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 05ccfef4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long unaff_x22;
  long unaff_x24;
  
  do {
                    /* try { // try from 05ccfef4 to 05dcff0b has its CatchHandler @ 05ccff78 */
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_03d8f370();
                    /* try { // try from 05ccff0c to 05dcff67 has its CatchHandler @ 05ccfde4 */
      goto LAB_05ccff1c;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
LAB_05ccff1c:
  (*(code *)*puVar3)();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x38))();
  *(undefined4 *)(unaff_x22 + 0x168) = *(undefined4 *)(unaff_x19 + 8);
  return;
}


