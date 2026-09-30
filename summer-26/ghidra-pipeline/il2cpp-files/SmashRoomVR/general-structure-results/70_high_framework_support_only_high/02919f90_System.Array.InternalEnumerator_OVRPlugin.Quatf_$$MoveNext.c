/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$MoveNext
ENTRY_POINT: 02919f90
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Quatf>__MoveNext
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  iVar1 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
  if (iVar1 < 1) {
    return;
  }
  if ((unaff_w21 < *(uint *)(unaff_x20 + 0x18)) && (unaff_w19 < *(uint *)(unaff_x20 + 0x18))) {
    uVar2 = *unaff_x25;
    *unaff_x25 = *unaff_x26;
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      *unaff_x26 = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


