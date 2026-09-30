/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Equals
ENTRY_POINT: 050d9ae8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Equals
               (long param_1,undefined1 param_2 [16],long param_3)

{
  long lVar1;
  long unaff_x19;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000080;
  
  uStack0000000000000060 = param_2._0_8_;
  *(long *)(param_1 + 0x38) = param_2._8_8_;
  *(undefined8 *)(param_1 + 0x30) = uStack0000000000000060;
  *(long *)(param_1 + 0x48) = param_2._8_8_;
  *(undefined8 *)(param_1 + 0x40) = uStack0000000000000060;
  uStack0000000000000070 = uStack0000000000000060;
  uStack0000000000000080 = uStack0000000000000060;
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  FUN_0619aa2c(&stack0x00000060);
  memcpy(&stack0x00000008,&stack0x00000060,0x58);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x90),&stack0x00000008);
  return;
}


