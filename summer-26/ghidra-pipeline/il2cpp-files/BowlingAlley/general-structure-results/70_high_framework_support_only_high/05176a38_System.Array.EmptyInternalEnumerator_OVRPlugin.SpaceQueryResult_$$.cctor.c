/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 05176a38
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___cctor
               (undefined8 param_1,long param_2)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05935240(5);
  }
  FUN_03b57270();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8(lVar1);
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(long *)(*unaff_x19 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d618c();
  }
  thunk_FUN_032a57f4();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8(lVar1);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar1 + 0x40)) {
      thunk_FUN_032a57f4();
      FUN_051752cc();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_032d618c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


