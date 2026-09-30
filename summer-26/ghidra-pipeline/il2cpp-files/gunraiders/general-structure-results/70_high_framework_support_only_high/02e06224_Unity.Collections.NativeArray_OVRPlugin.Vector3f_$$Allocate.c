/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Allocate
ENTRY_POINT: 02e06224
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


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Allocate(void)

{
  undefined1 in_ZR;
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  while( true ) {
    if ((bool)in_ZR) {
      return 0xffffffff;
    }
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    if (unaff_x20 == 0) break;
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar2 + unaff_x22 + 0x20),
                       *(undefined8 *)(lVar2 + unaff_x22 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x23 = unaff_x23 + -1;
    in_ZR = unaff_x23 == 0;
    unaff_x22 = unaff_x22 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


