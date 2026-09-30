/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$op_Equality
ENTRY_POINT: 0469bfb8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__op_Equality(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x23;
  
  *(undefined1 *)(unaff_x23 + 0x4dc) = in_w8;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  if (*unaff_x20 != 0) {
                    /* try { // try from 0469bfdc to 0479bfef has its CatchHandler @ 0469bffc */
    if (0x3f < *(int *)((long)unaff_x20 + 0xc)) {
                    /* try { // try from 0469c02c to 0479c053 has its CatchHandler @ 0469bf9c */
      thunk_FUN_03037804(PTR_DAT_06f6d640);
      uVar1 = thunk_FUN_0301080c();
      uVar2 = thunk_FUN_03037804(PTR_DAT_06f9b0c8);
                    /* try { // try from 0469c054 to 0479c063 has its CatchHandler @ 0469c064 */
      FUN_05aeefcc(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar1);
    }
    if (*(int *)((long)unaff_x20 + 0xc) < 2) {
      *unaff_x20 = 0;
    }
    else {
                    /* try { // try from 0469bff0 to 0479c013 has its CatchHandler @ 0469bf9c */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 0469bfdc with catch @ 0469bffc
                        */
      FUN_03c8a1fc();
      *unaff_x20 = 0;
      *(undefined4 *)((long)unaff_x20 + 0xc) = 0;
    }
  }
  return;
}


