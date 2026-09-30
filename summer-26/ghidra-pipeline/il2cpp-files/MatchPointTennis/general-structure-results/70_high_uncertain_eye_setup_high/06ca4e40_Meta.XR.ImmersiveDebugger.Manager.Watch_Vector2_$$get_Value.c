/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Value
ENTRY_POINT: 06ca4e40
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Value
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = FUN_0614c210(param_1,param_2,0,0);
  if (4 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x40),uVar1);
    if (5 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)PTR_DAT_09f21930;
      thunk_FUN_044bb4b4();
      FUN_078b57fc();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


