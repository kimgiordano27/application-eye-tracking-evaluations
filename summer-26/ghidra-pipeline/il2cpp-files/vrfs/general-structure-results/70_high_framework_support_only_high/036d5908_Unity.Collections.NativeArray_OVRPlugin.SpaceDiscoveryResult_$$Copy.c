/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 036d5908
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1,long param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  long unaff_x21;
  undefined8 *puVar2;
  long *unaff_x22;
  
  uVar1 = **(undefined8 **)(param_1 + 0x688);
  puVar2 = *(undefined8 **)(unaff_x21 + 0x4e8);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_031c8668(uVar1,0);
  uVar1 = (**(code **)(*unaff_x22 + 0x428))();
  uVar1 = thunk_FUN_015d0480(uVar1,*puVar2);
  puVar2 = (undefined8 *)(unaff_x19 + 0x60);
  *puVar2 = uVar1;
  thunk_FUN_01656ef8(puVar2,uVar1);
  return *puVar2;
}


