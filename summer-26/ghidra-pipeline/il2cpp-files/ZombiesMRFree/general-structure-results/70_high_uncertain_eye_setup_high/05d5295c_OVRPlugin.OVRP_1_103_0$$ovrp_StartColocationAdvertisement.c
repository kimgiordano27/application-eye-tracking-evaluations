/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StartColocationAdvertisement
ENTRY_POINT: 05d5295c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_103_0__ovrp_StartColocationAdvertisement(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong unaff_x19;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 05d52968 to 05e5296f has its CatchHandler @ 05d52bac */
    FUN_02fe925c(PTR_DAT_06f6de80);
    FUN_02fe925c(PTR_DAT_06fb94c8);
                    /* try { // try from 05d52980 to 05e52993 has its CatchHandler @ 05d52bc0 */
    FUN_02fe925c(PTR_DAT_06f93e98);
    *(undefined1 *)(unaff_x21 + 0xbd5) = 1;
  }
  puVar1 = PTR_DAT_06f93e98;
  if (-1 < (long)unaff_x19) {
    uVar2 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6de80,unaff_x19 & 0xffffffff);
                    /* try { // try from 05d529ac to 05e529af has its CatchHandler @ 05d52b84 */
                    /* try { // try from 05d529b0 to 05e529b7 has its CatchHandler @ 05d52bbc */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)puVar1);
    }
                    /* try { // try from 05d529d8 to 05e529df has its CatchHandler @ 05d52bd4 */
    FUN_05a11d80();
    return uVar2;
  }
  uVar2 = FUN_02fe94f8();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05d529fc to 05e52a13 has its CatchHandler @ 05d52bd0 */
  FUN_02fe93c0(uVar2,*(undefined8 *)PTR_DAT_06fb94c8);
}


