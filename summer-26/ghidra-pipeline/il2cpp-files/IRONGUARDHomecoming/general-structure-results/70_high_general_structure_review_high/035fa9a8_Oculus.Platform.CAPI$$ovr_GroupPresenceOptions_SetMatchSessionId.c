/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_GroupPresenceOptions_SetMatchSessionId
ENTRY_POINT: 035fa9a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId
          (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined8 uVar1;
  long unaff_x19;
  float fVar2;
  undefined4 uStack000000000000000c;
  
  param_1 = param_1 / param_2;
  fVar2 = param_1;
  if (param_5 < param_1) {
    fVar2 = param_5;
  }
  if (param_1 < 0.0) {
    fVar2 = 0.0;
  }
  FUN_04034464(param_3 + fVar2 * (param_4 - param_3));
  uStack000000000000000c = 0;
  uVar1 = thunk_FUN_01f113fc(*(undefined8 *)
                              Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__,
                             &stack0x0000000c);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x18),uVar1);
  *(undefined4 *)(unaff_x19 + 0x10) = 2;
  return 1;
}


