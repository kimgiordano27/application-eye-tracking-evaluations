/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Equals
ENTRY_POINT: 041a44a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Equals(long param_1,uint param_2)

{
  long lVar1;
  uint in_w8;
  long unaff_x21;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  if (in_w8 < param_2) {
    FUN_05509450(0xd,0x1b,0);
    in_w8 = *(uint *)(param_1 + 0x18);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (in_w8 == *(uint *)(lVar1 + 0x18)) {
      FUN_041a3d78(param_1,in_w8 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x78));
      in_w8 = *(uint *)(param_1 + 0x18);
      lVar1 = *(long *)(param_1 + 0x10);
    }
    if (in_w8 - param_2 != 0 && (int)param_2 <= (int)in_w8) {
      FUN_0550b264(lVar1,param_2,lVar1,param_2 + 1,in_w8 - param_2,0);
      lVar1 = *(long *)(param_1 + 0x10);
    }
    if (lVar1 != 0) {
      if (param_2 < *(uint *)(lVar1 + 0x18)) {
        lVar1 = lVar1 + (long)(int)param_2 * 0x10;
        *(undefined4 *)(lVar1 + 0x20) = unaff_s11;
        *(undefined4 *)(lVar1 + 0x24) = unaff_s10;
        *(undefined4 *)(lVar1 + 0x28) = unaff_s9;
        *(undefined4 *)(lVar1 + 0x2c) = unaff_s8;
        *(ulong *)(param_1 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_1 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


