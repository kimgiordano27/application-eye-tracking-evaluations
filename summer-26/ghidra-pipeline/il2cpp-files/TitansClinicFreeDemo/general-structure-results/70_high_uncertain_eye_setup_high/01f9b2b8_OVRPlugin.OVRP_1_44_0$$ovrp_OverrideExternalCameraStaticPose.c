/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraStaticPose
ENTRY_POINT: 01f9b2b8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraStaticPose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_0103b3e0();
                    /* catch() { ... } // from try @ 01f9b360 with catch @ 01f9b2c4
                       catch() { ... } // from try @ 01f9b390 with catch @ 01f9b2c4
                       catch() { ... } // from try @ 01f9b39c with catch @ 01f9b2c4
                       catch() { ... } // from try @ 01f9b3f0 with catch @ 01f9b2c4 */
  thunk_FUN_01279b34(PTR_DAT_027c1238);
  uVar1 = FUN_01f9b348();
                    /* try { // try from 01f9b2dc to 0209b2e7 has its CatchHandler @ 01f9b3a0 */
  thunk_FUN_01279b34(PTR_DAT_027b3eb0);
  uVar2 = thunk_FUN_0124bba8();
  FUN_01e7d290(uVar2,uVar1,0);
  uVar1 = thunk_FUN_01279b34(PTR_DAT_027c1db0);
                    /* try { // try from 01f9b340 to 0209b343 has its CatchHandler @ 01f9b3a4 */
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar2,uVar1);
}


