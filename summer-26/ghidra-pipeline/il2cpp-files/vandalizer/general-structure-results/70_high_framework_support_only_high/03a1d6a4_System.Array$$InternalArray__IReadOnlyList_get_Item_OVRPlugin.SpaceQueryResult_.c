/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03a1d6a4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 *
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>
          (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 unaff_w19;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_1 == 0) {
    FUN_031f20f4(PTR_DAT_075d6450);
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      FUN_0322bf50();
    }
  }
  if (*(int *)(*(long *)PTR_DAT_075d6450 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000030 = 0;
  puVar2 = (undefined8 *)FUN_03b69b00();
  uVar1 = FUN_068032e8();
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  lVar3 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4(lVar3);
  }
  FUN_05242088(&stack0x00000020,param_2,uVar1,unaff_w19,
               *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x40));
  puVar2[2] = in_stack_00000030;
  puVar2[1] = in_stack_00000028;
  *puVar2 = in_stack_00000020;
  return puVar2;
}


