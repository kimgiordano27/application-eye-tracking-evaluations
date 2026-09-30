/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$get_Item
ENTRY_POINT: 02e062b4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_Item
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  
  while( true ) {
    (*in_x9)(param_1,param_2,param_3,*(undefined8 *)(unaff_x19 + 0x28));
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 0x10;
    if (((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x23) ||
       (unaff_w21 != *(int *)(unaff_x20 + 0x1c))) {
      if (unaff_w21 == *(int *)(unaff_x20 + 0x1c)) {
        return;
      }
      FUN_032f2664(0);
      return;
    }
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    if (unaff_x19 == 0) break;
    in_x9 = *(code **)(unaff_x19 + 0x18);
    param_1 = *(undefined8 *)(unaff_x19 + 0x40);
    param_2 = *(undefined8 *)(lVar1 + unaff_x22 + 0x20);
    param_3 = *(undefined8 *)(lVar1 + unaff_x22 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


