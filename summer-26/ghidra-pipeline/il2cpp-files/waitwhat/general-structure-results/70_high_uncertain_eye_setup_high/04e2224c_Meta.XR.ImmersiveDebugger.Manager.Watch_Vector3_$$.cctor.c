/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.cctor
ENTRY_POINT: 04e2224c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___cctor(undefined8 param_1)

{
  undefined8 uVar1;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x24;
  
  if ((0xd < in_w8) && (*(undefined8 *)(unaff_x19 + 0x88) = param_1, in_w8 != 0xe)) {
    *(undefined8 *)(unaff_x19 + 0x90) = *unaff_x24;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    uVar1 = FUN_04db3034();
    if ((0xf < *(uint *)(unaff_x19 + 0x18)) &&
       (*(undefined8 *)(unaff_x19 + 0x98) = uVar1, *(uint *)(unaff_x19 + 0x18) != 0x10)) {
      *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)PTR_DAT_070c3400;
      FUN_057bfff0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


