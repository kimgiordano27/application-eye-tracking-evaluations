/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 07a69154
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x860));
  FUN_04077588(PTR_DAT_09285978);
                    /* try { // try from 07a6916c to 07b6916f has its CatchHandler @ 07a6922c */
  *(undefined1 *)(unaff_x22 + 0x5e4) = 1;
  FUN_076bca34();
  uVar2 = FUN_04077674(*unaff_x21,12000);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  thunk_FUN_040ec700();
                    /* try { // try from 07a6919c to 07b691a3 has its CatchHandler @ 07a69224 */
  *(long *)(unaff_x19 + 0x10) = unaff_x20;
                    /* try { // try from 07a691a4 to 07b6920f has its CatchHandler @ 07a68f50 */
  thunk_FUN_040ec700();
  puVar1 = PTR_DAT_09285978;
  if (unaff_x20 != 0) {
    FUN_089693f0();
    FUN_08967ab8(*(undefined8 *)puVar1,12000,1,48000,0,0);
    thunk_FUN_08968c58();
    FUN_07a69208();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


