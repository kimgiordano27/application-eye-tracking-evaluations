/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Allocate
ENTRY_POINT: 017d30bc
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


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Allocate(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  
  FUN_011ef54c();
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    FUN_0103c244(lVar3);
  }
  if (unaff_x20 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_0103ffe0();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0();
    }
  }
  lVar2 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(long *)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = lVar3;
      thunk_FUN_0106e12c();
    }
    else {
      FUN_017d3030();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


