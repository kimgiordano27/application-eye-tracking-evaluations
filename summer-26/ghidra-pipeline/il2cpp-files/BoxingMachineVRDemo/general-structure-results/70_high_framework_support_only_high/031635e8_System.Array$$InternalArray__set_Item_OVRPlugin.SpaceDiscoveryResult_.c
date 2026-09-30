/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 031635e8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_SpaceDiscoveryResult>(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  
  while( true ) {
    uVar2 = thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000008);
    if (*(int *)(*(long *)(unaff_x26 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(unaff_x26 + 0x88));
    }
    uVar3 = FUN_04f8343c(&stack0x0000000c,uVar2,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10))
    ;
    if ((uVar3 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x25 == unaff_x23) {
      iVar1 = thunk_FUN_02d6ff94();
      return iVar1 + -1;
    }
    memcpy(&stack0x0000000c,(void *)(unaff_x24 + unaff_x23 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
  }
  iVar1 = thunk_FUN_02d6ff94();
  return iVar1 + (int)unaff_x23;
}


