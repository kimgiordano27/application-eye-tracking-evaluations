/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$set_NumberOfDisplayStrings
ENTRY_POINT: 04e4f708
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__set_NumberOfDisplayStrings(void)

{
  long lVar1;
  uint unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  
  do {
    if (-1 < *(int *)(unaff_x24 + -3)) {
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) break;
      lVar1 = (long)(int)unaff_w19;
      unaff_w19 = unaff_w19 + 1;
      *(undefined8 *)(unaff_x20 + lVar1 * 8 + 0x20) = *unaff_x24;
      thunk_FUN_03048534();
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 4;
    if (unaff_x21 == unaff_x23) {
      return;
    }
  } while (unaff_x23 < *(uint *)(unaff_x22 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


