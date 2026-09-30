/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 087b0f5c
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose(void)

{
  long *plVar1;
  ulong uVar2;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  int *unaff_x24;
  int *piVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  while( true ) {
    do {
      piVar3 = unaff_x24;
      unaff_x23 = unaff_x23 + 1;
      unaff_x24 = piVar3 + 9;
      if ((long)in_w8 <= (long)unaff_x23) {
        return 0;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) goto LAB_087b0f90;
    } while (*unaff_x24 < 0);
    plVar1 = (long *)FUN_05667400(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118));
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) break;
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000048 = *(undefined8 *)(piVar3 + 0xe);
    in_stack_00000040 = *(undefined8 *)(piVar3 + 0xc);
    in_stack_00000050 = *(undefined8 *)(piVar3 + 0x10);
    in_stack_00000028 = unaff_x21[1];
    in_stack_00000020 = *unaff_x21;
    in_stack_00000030 = unaff_x21[2];
    uVar2 = (**(code **)(*plVar1 + 0x1b8))
                      (plVar1,&stack0x00000040,&stack0x00000020,*(undefined8 *)(*plVar1 + 0x1c0));
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    in_w8 = *(int *)(unaff_x20 + 0x20);
  }
LAB_087b0f90:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


