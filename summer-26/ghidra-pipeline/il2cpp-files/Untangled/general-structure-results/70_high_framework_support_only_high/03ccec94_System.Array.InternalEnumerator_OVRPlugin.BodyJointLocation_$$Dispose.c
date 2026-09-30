/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$Dispose
ENTRY_POINT: 03ccec94
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__Dispose
               (long param_1,long param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  ulong in_x9;
  int in_w10;
  uint in_w11;
  long in_x12;
  uint in_w13;
  undefined8 uVar2;
  
  while (in_w11 < in_w13) {
    uVar2 = *(undefined8 *)(in_x12 + param_1 + 0x28);
    lVar1 = param_3 + (long)(int)in_w11 * 0x10;
    in_w10 = in_w10 + 1;
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(in_x12 + param_1 + 0x30);
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    do {
      if (param_5 <= in_w10) {
        return;
      }
      in_x9 = in_x9 + 1;
      param_1 = param_1 + 0x18;
      if ((long)*(int *)(param_2 + 0x24) <= (long)in_x9) {
        return;
      }
      in_x12 = *(long *)(param_2 + 0x18);
      if (in_x12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(in_x12 + 0x18) <= in_x9) goto LAB_03ccece0;
    } while (*(int *)(in_x12 + param_1 + 0x20) < 0);
    in_w13 = *(uint *)(param_3 + 0x18);
    in_w11 = in_w10 + param_4;
  }
LAB_03ccece0:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


