/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_NumberOfDisplayStrings
ENTRY_POINT: 01ac2078
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_NumberOfDisplayStrings(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  
                    /* try { // try from 01ac207c to 01bc20df has its CatchHandler @ 01ac2188 */
  FUN_021af390();
  if (unaff_x21 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0)
    {
      FUN_0103c244();
    }
    FUN_021af390();
  }
  else {
    FUN_01ac1ba0();
  }
                    /* try { // try from 01ac20f0 to 01bc2133 has its CatchHandler @ 01ac218c */
  thunk_FUN_010400dc(*unaff_x26);
  FUN_016065a0();
  FUN_0118a564();
  thunk_FUN_010400dc(*unaff_x24);
  FUN_016065a0();
  FUN_0118a564();
  *(undefined8 *)(unaff_x19 + 1000) = 0;
  thunk_FUN_0106e12c(unaff_x19 + 1000,0);
  return;
}


