/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 038febec
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__IndexOf<OVRPlugin_SpaceDiscoveryResult>(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  iVar1 = FUN_05b07bb4();
  if (iVar1 == 0) {
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4();
    }
    uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_040c547c(&stack0x00000010);
    uVar2 = thunk_FUN_0301043c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
  }
  return uVar2;
}


