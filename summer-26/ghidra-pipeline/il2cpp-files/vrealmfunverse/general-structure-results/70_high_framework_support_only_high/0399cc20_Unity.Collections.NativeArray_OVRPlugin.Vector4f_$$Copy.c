/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 0399cc20
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(undefined1 *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  
  while( true ) {
    memcpy(param_1,&stack0x00000000,0x1b0);
    uVar1 = (**(code **)(unaff_x19 + 0x18))
                      (*(undefined8 *)(unaff_x19 + 0x40),&stack0x000001b0,
                       *(undefined8 *)(unaff_x19 + 0x28));
    if ((uVar1 & 1) == 0) break;
    unaff_x21 = unaff_x21 + 1;
    unaff_x22 = unaff_x22 + 0x1b0;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x21) break;
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) {
LAB_0399cc78:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (unaff_x19 == 0) goto LAB_0399cc78;
    memcpy(&stack0x00000000,(void *)(lVar2 + unaff_x22),0x1b0);
    param_1 = &stack0x000001b0;
  }
  return uVar1 & 1;
}


