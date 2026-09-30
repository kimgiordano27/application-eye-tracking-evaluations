/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 031dbc84
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_SpaceQueryResult>(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong uVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar1 = Newtonsoft_Json_Schema_JsonSchemaModel__get_MaximumItems(param_1,0);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      memcpy(&stack0x00000030,
             (void *)((long)unaff_x20 + uVar5 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x20 + 0x104));
      in_stack_00000020 = unaff_x22;
      in_stack_00000028 = unaff_x21;
      thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        FUN_02ce0978(lVar4);
      }
      uVar3 = thunk_FUN_04f8adf0();
      if ((uVar3 & 1) != 0) {
        iVar2 = thunk_FUN_02ce9050();
        return iVar2 + (int)uVar5;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  iVar2 = thunk_FUN_02ce9050();
  return iVar2 + -1;
}


