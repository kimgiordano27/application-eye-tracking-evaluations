/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 017d4660
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(void)

{
  undefined8 *puVar1;
  int in_w8;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  int unaff_w20;
  
  uVar2 = in_w8 - 1;
  *(uint *)(unaff_x19 + 0x18) = uVar2;
  if (uVar2 - unaff_w20 != 0 && unaff_w20 <= (int)uVar2) {
    FUN_01d6ade4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20 + 1,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w20,uVar2 - unaff_w20,0);
    uVar2 = *(uint *)(unaff_x19 + 0x18);
  }
  lVar3 = *(long *)(unaff_x19 + 0x10);
  if (lVar3 != 0) {
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      puVar1 = (undefined8 *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
      *puVar1 = 0;
      thunk_FUN_0106e12c(puVar1,0);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


