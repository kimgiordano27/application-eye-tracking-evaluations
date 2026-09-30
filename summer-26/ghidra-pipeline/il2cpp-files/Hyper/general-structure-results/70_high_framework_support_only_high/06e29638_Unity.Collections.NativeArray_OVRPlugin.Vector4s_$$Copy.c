/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 06e29638
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  int unaff_w20;
  
  uVar1 = *(int *)(unaff_x19 + 0x18) - 1;
  *(uint *)(unaff_x19 + 0x18) = uVar1;
  if (uVar1 - unaff_w20 != 0 && unaff_w20 <= (int)uVar1) {
    FUN_08d9f1fc(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20 + 1,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w20,uVar1 - unaff_w20,0);
    uVar1 = *(uint *)(unaff_x19 + 0x18);
  }
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 != 0) {
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)uVar1 * 0x40;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      thunk_FUN_049ee3d8((undefined8 *)(lVar2 + 0x20),0);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


