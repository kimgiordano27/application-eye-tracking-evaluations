/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 017d162c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose
               (undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint in_w8;
  long lVar1;
  long unaff_x19;
  
  if (in_w8 < param_2) {
    FUN_01d68fac(0xd,0x1b,0);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    if (in_w8 == *(uint *)(*(long *)(unaff_x19 + 0x10) + 0x18)) {
      FUN_017d100c();
      in_w8 = *(uint *)(unaff_x19 + 0x18);
    }
    if (in_w8 - param_2 != 0 && (int)param_2 <= (int)in_w8) {
      FUN_01d6ade4(*(undefined8 *)(unaff_x19 + 0x10),param_2,*(undefined8 *)(unaff_x19 + 0x10),
                   param_2 + 1,in_w8 - param_2,0);
    }
    lVar1 = *(long *)(unaff_x19 + 0x10);
    if (lVar1 != 0) {
      if (param_2 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + (long)(int)param_2 * 8 + 0x20) = param_3;
        *(ulong *)(unaff_x19 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


