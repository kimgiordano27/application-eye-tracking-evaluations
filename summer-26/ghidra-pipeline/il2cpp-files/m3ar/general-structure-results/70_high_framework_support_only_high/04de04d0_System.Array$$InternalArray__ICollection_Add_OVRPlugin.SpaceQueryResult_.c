/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04de04d0
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceQueryResult>(void)

{
  long in_x3;
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  lVar1 = *(long *)(in_x3 + 0x38);
  if (lVar1 == 0) {
    FUN_0403162c(PTR_DAT_08f8b240);
    FUN_0403162c(PTR_DAT_08f84e38);
    lVar1 = *(long *)(unaff_x23 + 0x38);
    if (lVar1 == 0) {
      FUN_0406ab48();
      lVar1 = *(long *)(unaff_x23 + 0x38);
    }
  }
  (*(code *)**(undefined8 **)(lVar1 + 8))();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x23 + 0x38) + 8))();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x23 + 0x38) + 0x18))(&stack0x00000008);
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
  unaff_x19[3] = in_stack_00000020;
  unaff_x19[2] = in_stack_00000018;
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000028) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


