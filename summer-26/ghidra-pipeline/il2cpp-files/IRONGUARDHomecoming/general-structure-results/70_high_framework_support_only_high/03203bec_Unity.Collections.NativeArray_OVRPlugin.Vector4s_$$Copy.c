/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 03203bec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (long param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(uint *)(param_1 + 0x18) <= param_2) {
                    /* try { // try from 03203c0c to 03303c33 has its CatchHandler @ 03203b88 */
    FUN_0358b9a4(0);
  }
  uVar2 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  lVar1 = *(long *)(param_1 + 0x10);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03203bb4 with catch @ 03203c1c
                        */
  if (lVar1 != 0) {
                    /* try { // try from 03203c34 to 03303c4b has its CatchHandler @ 03203d1c */
    if (param_2 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)param_2 * 0x20;
                    /* try { // try from 03203c4c to 03303c6b has its CatchHandler @ 03203b88 */
      *(undefined8 *)(lVar1 + 0x28) = param_3[1];
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      *(undefined8 *)(lVar1 + 0x38) = uVar4;
      *(undefined8 *)(lVar1 + 0x30) = uVar3;
      thunk_FUN_01f51358(lVar1 + 0x20,0);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


