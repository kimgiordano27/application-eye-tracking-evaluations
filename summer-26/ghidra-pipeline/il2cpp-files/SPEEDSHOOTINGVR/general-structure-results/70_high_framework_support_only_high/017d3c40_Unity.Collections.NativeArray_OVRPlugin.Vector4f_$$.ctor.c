/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 017d3c40
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  uint unaff_w21;
  
  FUN_01d68fac(param_1,0x1b,0);
  iVar1 = *(int *)(unaff_x19 + 0x18);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    if (iVar1 == *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18)) {
      FUN_017d3600();
      iVar1 = *(int *)(unaff_x19 + 0x18);
    }
    if (iVar1 - unaff_w21 != 0 && (int)unaff_w21 <= iVar1) {
      FUN_01d6ade4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,*(undefined8 *)(unaff_x19 + 0x10),
                   unaff_w21 + 1,iVar1 - unaff_w21,0);
    }
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 != 0) {
      if (unaff_w21 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + (long)(int)unaff_w21 * 8 + 0x20) = unaff_x20;
        thunk_FUN_0106e12c();
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


