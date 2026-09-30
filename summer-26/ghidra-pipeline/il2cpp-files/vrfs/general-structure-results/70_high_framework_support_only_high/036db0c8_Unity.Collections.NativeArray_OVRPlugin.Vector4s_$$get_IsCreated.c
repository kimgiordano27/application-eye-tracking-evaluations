/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_IsCreated
ENTRY_POINT: 036db0c8
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_IsCreated(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  puVar1 = PTR_DAT_06d8b668;
  if (in_w8 != 0) {
    *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
    thunk_FUN_01656ef8();
    uVar2 = FUN_04748adc(*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar2);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


