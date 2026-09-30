/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 0417c204
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x21;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0417c214 to 0427c223 has its CatchHandler @ 0417c224 */
    FUN_056138a8(8);
  }
  if (0 < *(int *)(param_2 + 0x18)) {
                    /* catch() { ... } // from try @ 0417c198 with catch @ 0417c224
                       catch() { ... } // from try @ 0417c214 with catch @ 0417c224 */
    uVar5 = 0;
                    /* try { // try from 0417c228 to 0427c22b has its CatchHandler @ 0417c234 */
    lVar4 = 0x20;
    do {
                    /* try { // try from 0417c22c to 0427c237 has its CatchHandler @ 0417c0d0 */
      lVar2 = *(long *)(param_2 + 0x10);
      if (lVar2 == 0) goto LAB_0417c2e4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0417c228 with catch @ 0417c234
                        */
                    /* try { // try from 0417c238 to 0427c537 has its CatchHandler @ 0417c238
                       catch() { ... } // from try @ 0417c238 with catch @ 0417c238
                       catch() { ... } // from try @ 0417c5f4 with catch @ 0417c238
                       catch() { ... } // from try @ 0417c6b8 with catch @ 0417c238
                       catch() { ... } // from try @ 0417c764 with catch @ 0417c238 */
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
LAB_0417c2e8:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      memcpy(&stack0x00000000,(void *)(lVar2 + lVar4),0x50);
      if (unaff_x21 == 0) {
LAB_0417c2e4:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      pcVar6 = *(code **)(unaff_x21 + 0x18);
      uVar3 = *(undefined8 *)(unaff_x21 + 0x40);
      memcpy(&stack0x00000050,&stack0x00000000,0x50);
      uVar1 = (*pcVar6)(uVar3,&stack0x00000050,*(undefined8 *)(unaff_x21 + 0x28));
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(param_2 + 0x10);
        if (lVar2 != 0) {
          if ((uint)uVar5 < *(uint *)(lVar2 + 0x18)) {
            memcpy(param_1,(void *)(lVar2 + lVar4),0x50);
            return;
          }
          goto LAB_0417c2e8;
        }
        goto LAB_0417c2e4;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x50;
    } while ((long)uVar5 < (long)*(int *)(param_2 + 0x18));
  }
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


