/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 0399b5f0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  ulong uVar1;
  int in_w8;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long lVar3;
  long lVar4;
  
  if (in_w8 < (int)unaff_w19) {
    FUN_04d9cdf4(0);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    Oculus_Interaction_ActiveStateTracker__InjectOptionalGameObjects(8,0);
  }
  if ((int)unaff_w19 < (int)(unaff_w22 + unaff_w19)) {
    lVar3 = (long)(int)(unaff_w22 + unaff_w19) - (long)(int)unaff_w19;
    lVar4 = (long)(int)unaff_w19 * 0x1b0 + 0x20;
    do {
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) {
LAB_0399b6b0:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (unaff_x20 == 0) goto LAB_0399b6b0;
      memcpy(&stack0x00000000,(void *)(lVar2 + lVar4),0x1b0);
      memcpy(&stack0x000001b0,&stack0x00000000,0x1b0);
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x000001b0,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar1 & 1) != 0) {
        return unaff_w19;
      }
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 0x1b0;
      unaff_w19 = unaff_w19 + 1;
    } while (lVar3 != 0);
  }
  return 0xffffffff;
}


