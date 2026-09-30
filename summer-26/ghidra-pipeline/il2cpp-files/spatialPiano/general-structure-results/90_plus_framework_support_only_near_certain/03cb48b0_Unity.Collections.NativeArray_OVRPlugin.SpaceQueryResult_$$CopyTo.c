/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyTo
ENTRY_POINT: 03cb48b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo
               (long param_1,void *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  int unaff_w19;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (unaff_w19 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)
             (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd0) +
                                 0x20) + 0xc0) + 0x148);
    memcpy(&stack0x00000008,param_2,0x48);
    iVar2 = FUN_0361bf00(uVar3,&stack0x00000008,0,unaff_w19,uVar4);
    bVar1 = iVar2 != -1;
  }
  return bVar1;
}


