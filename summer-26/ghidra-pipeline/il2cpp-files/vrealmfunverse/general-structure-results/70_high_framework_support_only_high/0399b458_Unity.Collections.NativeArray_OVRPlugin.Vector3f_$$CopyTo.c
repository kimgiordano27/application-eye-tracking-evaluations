/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopyTo
ENTRY_POINT: 0399b458
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyTo(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  int unaff_w25;
  
  while (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= unaff_x23) {
LAB_0399b588:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (unaff_x20 == 0) break;
    memcpy(&stack0x00000000,(void *)(param_1 + unaff_x24),0x1b0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0399b38c with catch @ 0399b47c
                       try { // try from 0399b47c to 03a9b493 has its CatchHandler @ 0399b340 */
    memcpy(&stack0x00000360,&stack0x00000000,0x1b0);
                    /* try { // try from 0399b494 to 03a9b4ab has its CatchHandler @ 0399b518 */
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000360,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x23) goto LAB_0399b588;
      if (unaff_x22 == 0) break;
      memcpy(&stack0x000001b0,(void *)(lVar3 + unaff_x24),0x1b0);
      lVar3 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar3 == 0) break;
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * (long)unaff_w25;
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar3 + 0x20),&stack0x000001b0,0x1b0);
        thunk_FUN_02bb0e9c(lVar3 + 0x20,0);
      }
      else {
        memcpy(&stack0x00000360,&stack0x000001b0,0x1b0);
        FUN_0399ab40();
      }
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x1b0;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
      return;
    }
    param_1 = *(long *)(unaff_x21 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


