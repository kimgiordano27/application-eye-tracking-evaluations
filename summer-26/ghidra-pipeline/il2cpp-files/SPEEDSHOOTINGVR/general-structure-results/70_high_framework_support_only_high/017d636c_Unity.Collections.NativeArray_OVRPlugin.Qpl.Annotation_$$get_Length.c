/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$get_Length
ENTRY_POINT: 017d636c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__get_Length
               (undefined4 param_1,long param_2,uint param_3)

{
  uint in_w8;
  long lVar1;
  long unaff_x21;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  
  if (in_w8 < param_3) {
    FUN_01d68fac(0xd,0x1b,0);
    in_w8 = *(uint *)(param_2 + 0x18);
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    if (in_w8 == *(uint *)(*(long *)(param_2 + 0x10) + 0x18)) {
      FUN_017d5cf0(param_2,in_w8 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x78));
      in_w8 = *(uint *)(param_2 + 0x18);
    }
    if (in_w8 - param_3 != 0 && (int)param_3 <= (int)in_w8) {
      FUN_01d6ade4(*(undefined8 *)(param_2 + 0x10),param_3,*(undefined8 *)(param_2 + 0x10),
                   param_3 + 1,in_w8 - param_3,0);
    }
    lVar1 = *(long *)(param_2 + 0x10);
    if (lVar1 != 0) {
      if (param_3 < *(uint *)(lVar1 + 0x18)) {
        lVar1 = lVar1 + (long)(int)param_3 * 0x10;
        *(undefined4 *)(lVar1 + 0x20) = param_1;
        *(undefined4 *)(lVar1 + 0x24) = unaff_s10;
        *(undefined4 *)(lVar1 + 0x28) = unaff_s9;
        *(undefined4 *)(lVar1 + 0x2c) = unaff_s8;
        *(ulong *)(param_2 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_2 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


