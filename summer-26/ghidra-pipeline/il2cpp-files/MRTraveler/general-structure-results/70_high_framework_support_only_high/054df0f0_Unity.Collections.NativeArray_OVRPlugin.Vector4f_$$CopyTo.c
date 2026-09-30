/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyTo
ENTRY_POINT: 054df0f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo(ulong param_1)

{
  int iVar1;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_03cf1244();
  }
  iVar1 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
  if (0 < iVar1) {
    if ((unaff_w21 < *(uint *)(unaff_x19 + 0x18)) && (unaff_w20 < *(uint *)(unaff_x19 + 0x18))) {
      uVar2 = *unaff_x27;
      uVar4 = unaff_x28[1];
      uVar3 = *unaff_x28;
      unaff_x28[1] = unaff_x27[1];
      *unaff_x28 = uVar2;
      thunk_FUN_03d233cc(unaff_x19 + unaff_x29 * 0x10 + 0x20,0);
      if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
        unaff_x27[1] = uVar4;
        *unaff_x27 = uVar3;
        thunk_FUN_03d233cc(unaff_x19 + in_stack_00000018 * 0x10 + 0x20,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  return;
}


