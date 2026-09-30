/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetSubArray
ENTRY_POINT: 0417c554
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetSubArray(long param_1)

{
  ulong uVar1;
  long lVar2;
  long in_x9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = in_x9 + 0x20;
  param_1 = param_1 - (int)unaff_w19;
  while (lVar2 = *(long *)(unaff_x21 + 0x10), lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
                    /* try { // try from 0417c578 to 0427c5d7 has its CatchHandler @ 0417c6cc */
    memcpy(&stack0x00000000,(void *)(lVar2 + lVar4),0x50);
    if (unaff_x20 == 0) break;
    pcVar5 = *(code **)(unaff_x20 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    memcpy(&stack0x00000050,&stack0x00000000,0x50);
    uVar1 = (*pcVar5)(uVar3,&stack0x00000050,*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    param_1 = param_1 + -1;
    lVar4 = lVar4 + 0x50;
    if (param_1 == 0) {
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


