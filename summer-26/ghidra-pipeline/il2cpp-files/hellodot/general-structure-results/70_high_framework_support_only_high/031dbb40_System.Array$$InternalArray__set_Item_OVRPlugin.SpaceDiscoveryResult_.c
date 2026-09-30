/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 031dbb40
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


int System_Array__InternalArray__set_Item<OVRPlugin_SpaceDiscoveryResult>
              (undefined8 *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    in_stack_00000020 = unaff_x22;
    in_stack_00000028 = unaff_x21;
    thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      FUN_02ce0978(lVar3);
    }
    unaff_x27[1] = in_stack_00000038;
    *unaff_x27 = in_stack_00000030;
    uVar2 = thunk_FUN_04f8adf0();
    if ((uVar2 & 1) != 0) break;
    unaff_x24 = unaff_x24 + 1;
    if (unaff_x26 == unaff_x24) {
      iVar1 = thunk_FUN_02ce9050();
      return iVar1 + -1;
    }
    param_1 = &stack0x00000030;
    param_3 = (size_t)*(uint *)(*unaff_x20 + 0x104);
    param_2 = (void *)(unaff_x25 + unaff_x24 * param_3);
  }
  iVar1 = thunk_FUN_02ce9050();
  return iVar1 + (int)unaff_x24;
}


