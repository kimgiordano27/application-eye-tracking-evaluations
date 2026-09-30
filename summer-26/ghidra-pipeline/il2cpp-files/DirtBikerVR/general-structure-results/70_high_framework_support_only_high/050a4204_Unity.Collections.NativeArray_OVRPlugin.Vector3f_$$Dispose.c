/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 050a4204
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Dispose
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 *param_5,long param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_6 == 0) {
    param_6 = FUN_05cfe4c4(*(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 8));
  }
  uVar4 = param_5[1];
  uVar3 = *param_5;
  lVar1 = *(long *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x48);
  uVar2 = param_5[2];
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  in_stack_00000020 = uVar3;
  in_stack_00000028 = uVar4;
  in_stack_00000030 = uVar2;
  FUN_050a455c(param_2,param_3,param_4,&stack0x00000020,param_6,
               *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x58));
  return;
}


