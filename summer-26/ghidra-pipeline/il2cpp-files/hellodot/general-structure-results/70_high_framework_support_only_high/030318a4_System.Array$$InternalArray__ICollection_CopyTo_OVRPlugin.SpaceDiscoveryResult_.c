/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 030318a4
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceDiscoveryResult>(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 in_stack_00000010;
  
  puVar2 = (undefined8 *)FUN_02ce0a7c();
  (*(code *)*puVar2)(in_stack_00000010);
  puVar1 = PTR_DAT_065ca5d0;
  lVar3 = *(long *)PTR_DAT_065ca5d0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar3 = *(long *)puVar1;
  }
  uVar4 = **(undefined8 **)(lVar3 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x10) = 2;
  *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
  return 1;
}


