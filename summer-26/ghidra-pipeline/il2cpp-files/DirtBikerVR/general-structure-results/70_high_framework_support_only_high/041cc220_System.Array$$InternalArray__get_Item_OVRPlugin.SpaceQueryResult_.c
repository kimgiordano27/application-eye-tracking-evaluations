/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 041cc220
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  while( true ) {
    uVar2 = thunk_FUN_067aa794();
    if ((uVar2 & 1) != 0) {
      iVar1 = thunk_FUN_03a9981c();
      return iVar1 + (int)unaff_x23;
    }
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x26 == unaff_x23) break;
    memcpy(&stack0x00000070,(void *)(unaff_x24 + unaff_x23 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    in_stack_00000048 = unaff_x21[1];
    in_stack_00000040 = *unaff_x21;
    in_stack_00000058 = unaff_x21[3];
    in_stack_00000050 = unaff_x21[2];
    in_stack_00000068 = unaff_x21[5];
    in_stack_00000060 = unaff_x21[4];
    thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000040);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_03ac4090(lVar3);
    }
    *(undefined8 *)(unaff_x25 + 0x18) = in_stack_00000078;
    *(undefined8 *)(unaff_x25 + 0x10) = in_stack_00000070;
    *(undefined8 *)(unaff_x25 + 0x28) = in_stack_00000088;
    *(undefined8 *)(unaff_x25 + 0x20) = in_stack_00000080;
    *(undefined8 *)(unaff_x25 + 0x38) = in_stack_00000098;
    *(undefined8 *)(unaff_x25 + 0x30) = in_stack_00000090;
  }
  iVar1 = thunk_FUN_03a9981c();
  return iVar1 + -1;
}


