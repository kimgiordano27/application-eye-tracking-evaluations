/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 0199656c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  int in_w8;
  long lVar1;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  
  while( true ) {
    unaff_x22 = unaff_x22 + 0x10;
    if ((in_x9 <= (long)unaff_x23) || (unaff_w21 != in_w8)) {
      if (unaff_w21 == in_w8) {
        return;
      }
      FUN_01f88158(0);
      return;
    }
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    if (unaff_x19 == 0) break;
    (**(code **)(unaff_x19 + 0x18))
              (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(lVar1 + unaff_x22 + 0x20),
               *(undefined8 *)(lVar1 + unaff_x22 + 0x28),*(undefined8 *)(unaff_x19 + 0x28));
    in_w8 = *(int *)(unaff_x20 + 0x1c);
    unaff_x23 = unaff_x23 + 1;
    in_x9 = (long)*(int *)(unaff_x20 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


