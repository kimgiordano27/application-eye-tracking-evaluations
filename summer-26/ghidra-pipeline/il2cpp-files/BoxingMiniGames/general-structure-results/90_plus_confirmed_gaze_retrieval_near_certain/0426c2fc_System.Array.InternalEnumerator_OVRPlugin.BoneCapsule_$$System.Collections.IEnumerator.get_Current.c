/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0426c2fc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 148
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_get_Current
               (ushort *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  
                    /* try { // try from 0426c2fc to 0436c2ff has its CatchHandler @ 0426c978 */
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_0367c9fc();
  }
                    /* try { // try from 0426c308 to 0436c31f has its CatchHandler @ 0426c974 */
  lVar3 = **(long **)(param_2 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar3);
                    /* try { // try from 0426c324 to 0436c32b has its CatchHandler @ 0426c970 */
  }
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 0426c330 to 0436c337 has its CatchHandler @ 0426c96c */
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 0426c33c to 0436c347 has its CatchHandler @ 0426c968 */
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>___ctor;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0367cd30();
System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>___ctor:
  uVar2 = (*(code *)*puVar1)();
  *(undefined8 *)(unaff_x19 + 8) = uVar2;
  *(undefined4 *)(unaff_x19 + 0x20) = 0xffffffff;
  return;
}


