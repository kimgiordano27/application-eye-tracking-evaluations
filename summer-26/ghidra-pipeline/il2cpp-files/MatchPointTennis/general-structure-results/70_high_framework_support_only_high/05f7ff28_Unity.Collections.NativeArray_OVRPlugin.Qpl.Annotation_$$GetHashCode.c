/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetHashCode
ENTRY_POINT: 05f7ff28
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetHashCode
               (long param_1,undefined1 param_2 [16],undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000080;
  
  uStack0000000000000070 = param_2._0_8_;
  *(long *)(param_1 + 0x28) = param_2._8_8_;
  *(undefined8 *)(param_1 + 0x20) = uStack0000000000000070;
  *(long *)(param_1 + 0x38) = param_2._8_8_;
  *(undefined8 *)(param_1 + 0x30) = uStack0000000000000070;
  lVar1 = *(long *)(param_4 + 0x20);
  uStack0000000000000080 = uStack0000000000000070;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8(lVar1);
  }
  FUN_0766c750(&stack0x00000070,param_3,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x98));
  memcpy(&stack0x00000008,&stack0x00000070,0x68);
  lVar1 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x90),&stack0x00000008);
  return;
}


