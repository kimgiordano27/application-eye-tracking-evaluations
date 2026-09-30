/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 05749b4c
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__OverrideExternalCameraStaticPose(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *in_x9;
  
  bVar1 = *(byte *)(*in_x9 + 0x130);
  if ((*(byte *)(param_1 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *in_x9)) {
    if (param_1 != *(long *)PTR_DAT_06d028f0) {
      thunk_FUN_02f239f0(PTR_DAT_06d06338);
                    /* try { // try from 05749bb4 to 05849bcf has its CatchHandler @ 05749bb4
                       catch() { ... } // from try @ 05749bb4 with catch @ 05749bb4
                       catch() { ... } // from try @ 05749be0 with catch @ 05749bb4
                       catch() { ... } // from try @ 05749c2c with catch @ 05749bb4
                       catch() { ... } // from try @ 05749c60 with catch @ 05749bb4 */
      FUN_02a55ad4();
      uVar2 = FUN_055b5920(0);
      FUN_02a551a0();
                    /* try { // try from 05749bd0 to 05849bdb has its CatchHandler @ 05749c10 */
      uVar3 = thunk_FUN_02ebbee0();
                    /* try { // try from 05749bdc to 05849bdf has its CatchHandler @ 05749c0c */
                    /* try { // try from 05749be0 to 05849c27 has its CatchHandler @ 05749bb4 */
      uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d58900);
      uVar2 = FUN_056f1630(uVar4,uVar2,uVar3,0);
      thunk_FUN_02f239f0(PTR_DAT_06d02080);
      uVar3 = thunk_FUN_02ef1808();
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05749bdc with catch @ 05749c0c
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05749bd0 with catch @ 05749c10
                        */
      FUN_0555e840(uVar3,uVar2,0);
      uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d592d0);
                    /* try { // try from 05749c28 to 05849c2b has its CatchHandler @ 05749c50 */
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar3,uVar2);
    }
    uVar2 = 0x11;
  }
  else {
    uVar2 = 0x10;
  }
  return uVar2;
}


