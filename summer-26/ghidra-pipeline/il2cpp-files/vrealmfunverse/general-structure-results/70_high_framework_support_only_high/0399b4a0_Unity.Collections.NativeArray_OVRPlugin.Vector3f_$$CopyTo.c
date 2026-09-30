/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopyTo
ENTRY_POINT: 0399b4a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyTo(ulong param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  int unaff_w25;
  
  do {
    if ((param_1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) {
LAB_0399b584:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
                    /* try { // try from 0399b4ac to 03a9b507 has its CatchHandler @ 0399b340 */
      if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_0399b588;
      if (unaff_x22 == 0) goto LAB_0399b584;
      memcpy(&stack0x000001b0,(void *)(lVar2 + unaff_x24),0x1b0);
      lVar2 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar2 == 0) goto LAB_0399b584;
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)uVar1 * (long)unaff_w25;
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar2 + 0x20),&stack0x000001b0,0x1b0);
        thunk_FUN_02bb0e9c(lVar2 + 0x20,0);
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
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if (lVar2 == 0) goto LAB_0399b584;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x23) {
LAB_0399b588:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (unaff_x20 == 0) goto LAB_0399b584;
    memcpy(&stack0x00000000,(void *)(lVar2 + unaff_x24),0x1b0);
    memcpy(&stack0x00000360,&stack0x00000000,0x1b0);
    param_1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000360,
                         *(undefined8 *)(unaff_x20 + 0x28));
  } while( true );
}


