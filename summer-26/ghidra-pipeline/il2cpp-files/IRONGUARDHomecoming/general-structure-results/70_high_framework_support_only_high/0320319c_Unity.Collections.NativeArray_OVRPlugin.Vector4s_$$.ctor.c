/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 0320319c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor(long param_1)

{
  uint uVar1;
  ulong in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  do {
    if (in_x9 <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    if (unaff_x19 == 0) {
LAB_032031f8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = (**(code **)(unaff_x19 + 0x18))
                      (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(param_1 + unaff_x21 + 0x20)
                       ,*(undefined4 *)(param_1 + unaff_x21 + 0x28),
                       *(undefined8 *)(unaff_x19 + 0x28));
    if ((uVar1 & 1) == 0) {
LAB_032031e4:
      return uVar1 & 1;
    }
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0xc;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x22) goto LAB_032031e4;
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) goto LAB_032031f8;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  } while( true );
}


