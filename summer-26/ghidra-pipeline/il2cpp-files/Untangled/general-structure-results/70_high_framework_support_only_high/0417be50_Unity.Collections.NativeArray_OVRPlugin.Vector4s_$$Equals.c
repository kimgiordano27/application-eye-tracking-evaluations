/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Equals
ENTRY_POINT: 0417be50
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Equals
               (long param_1,void *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    memcpy(&stack0x00000000,param_2,0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)
             (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd0) +
                                 0x20) + 0xc0) + 0x150);
    memcpy(&stack0x00000050,&stack0x00000000,0x50);
    iVar2 = FUN_03beb10c(uVar3,&stack0x00000050,0,iVar2,uVar4);
    bVar1 = iVar2 != -1;
  }
  return bVar1;
}


