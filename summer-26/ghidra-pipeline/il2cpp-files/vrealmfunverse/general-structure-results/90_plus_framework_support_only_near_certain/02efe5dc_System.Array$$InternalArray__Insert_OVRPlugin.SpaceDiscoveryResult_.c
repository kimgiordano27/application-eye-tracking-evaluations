/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 02efe5dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__Insert<OVRPlugin_SpaceDiscoveryResult>(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_02b76274(param_2);
  }
  iVar1 = FUN_04d941cc(param_1,0);
  if (iVar1 == 0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar3 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_0353aa50(&stack0x00000010,param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18));
    uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10));
  }
  return uVar2;
}


