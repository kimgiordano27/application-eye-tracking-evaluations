/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03755c70
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPlugin_SpaceDiscoveryResult>(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long in_stack_00000568;
  
  do {
    uVar2 = thunk_FUN_0597d930();
    if ((uVar2 & 1) != 0) {
      iVar1 = thunk_FUN_032f6624();
      iVar1 = iVar1 + (int)unaff_x25;
LAB_03755cb0:
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000568) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar1);
    }
    unaff_x25 = unaff_x25 + 1;
    if (unaff_x27 == unaff_x25) {
      iVar1 = thunk_FUN_032f6624();
      iVar1 = iVar1 + -1;
      goto LAB_03755cb0;
    }
    memcpy(&stack0x000003a0,(void *)(unaff_x26 + unaff_x25 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    memcpy(&stack0x000001d8,unaff_x21,0x1c8);
    thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x000001d8);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      FUN_032934b8(lVar3);
    }
    memcpy(unaff_x22,&stack0x000003a0,0x1c8);
  } while( true );
}


