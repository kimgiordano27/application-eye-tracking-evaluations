/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$ToArray
ENTRY_POINT: 05f1aab8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__ToArray
               (long param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* try { // try from 05f1aac0 to 0601aaff has its CatchHandler @ 05f1aac0
                       catch() { ... } // from try @ 05f1aac0 with catch @ 05f1aac0
                       catch() { ... } // from try @ 05f1ab14 with catch @ 05f1aac0
                       catch() { ... } // from try @ 05f1ab50 with catch @ 05f1aac0
                       catch() { ... } // from try @ 05f1ab90 with catch @ 05f1aac0 */
  if (param_2 < *(uint *)(param_1 + 0x18)) {
    lVar1 = param_1 + (long)(int)param_2 * 0x30;
    uVar9 = *(undefined8 *)(lVar1 + 0x38);
    uVar7 = *(undefined8 *)(lVar1 + 0x30);
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    uVar12 = *(undefined8 *)(lVar1 + 0x28);
    uVar10 = *(undefined8 *)(lVar1 + 0x20);
    if (param_3 < *(uint *)(param_1 + 0x18)) {
                    /* try { // try from 05f1ab00 to 0601ab13 has its CatchHandler @ 05f1ab20 */
      puVar2 = (undefined8 *)(param_1 + 0x20 + (long)(int)param_3 * 0x30);
      uVar8 = puVar2[2];
      uVar6 = puVar2[5];
      uVar4 = puVar2[4];
      uVar13 = puVar2[1];
      uVar11 = *puVar2;
                    /* try { // try from 05f1ab14 to 0601ab37 has its CatchHandler @ 05f1aac0 */
      *(undefined8 *)(lVar1 + 0x38) = puVar2[3];
      *(undefined8 *)(lVar1 + 0x30) = uVar8;
      *(undefined8 *)(lVar1 + 0x48) = uVar6;
      *(undefined8 *)(lVar1 + 0x40) = uVar4;
      *(undefined8 *)(lVar1 + 0x28) = uVar13;
      *(undefined8 *)(lVar1 + 0x20) = uVar11;
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 05f1ab00 with catch @ 05f1ab20
                        */
      thunk_FUN_044bb4b4(param_1 + 0x20 + (long)(int)param_2 * 0x30,0);
                    /* try { // try from 05f1ab38 to 0601ab4f has its CatchHandler @ 05f1ab88 */
      if (param_3 < *(uint *)(param_1 + 0x18)) {
        puVar2[3] = uVar9;
        puVar2[2] = uVar7;
        puVar2[5] = uVar5;
        puVar2[4] = uVar3;
        puVar2[1] = uVar12;
        *puVar2 = uVar10;
        thunk_FUN_044bb4b4(param_1 + (long)(int)param_3 * 0x30 + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05f1ab78 to 0601ab87 has its CatchHandler @ 05f1ab88 */
  FUN_04447e4c();
}


