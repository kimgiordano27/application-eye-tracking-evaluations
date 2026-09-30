/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 0426c3e8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *piVar3;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 0426c3f8 to 0436c3ff has its CatchHandler @ 0426c9d8 */
      if (*(long *)(piVar3 + -2) == param_3) {
                    /* try { // try from 0426c428 to 0436c42f has its CatchHandler @ 0426c9b4 */
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar3 + 1) * 0x10 + 0x138);
        goto LAB_0426c430;
      }
                    /* try { // try from 0426c404 to 0436c40b has its CatchHandler @ 0426c9d0 */
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
                    /* try { // try from 0426c410 to 0436c417 has its CatchHandler @ 0426c9b8 */
  puVar1 = (undefined8 *)FUN_0367cd30();
LAB_0426c430:
                    /* WARNING: Could not recover jumptable at 0x0426c43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


