/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Values
ENTRY_POINT: 06ca4dcc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Values(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_04481fb8();
  }
  uVar1 = FUN_0614c210();
  if (2 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x30),uVar1);
    if (3 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x38) = *unaff_x23;
      thunk_FUN_044bb4b4();
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      uVar1 = FUN_0614c210(unaff_x20 + 0x20,0,0,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


