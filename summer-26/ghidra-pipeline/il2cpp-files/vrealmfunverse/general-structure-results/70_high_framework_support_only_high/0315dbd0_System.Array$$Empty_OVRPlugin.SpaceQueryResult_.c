/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0315dbd0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_SpaceQueryResult>(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  int unaff_w21;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000070;
  
  FUN_0276339c();
  if (unaff_w21 == 1) {
    plVar1 = (long *)__cxa_begin_catch(param_1);
    in_stack_00000010 = *plVar1;
    __cxa_end_catch();
    FUN_04742164(in_stack_00000018,*(undefined8 *)(*(long *)(*in_stack_00000020 + 0x38) + 0x70));
    lVar2 = in_stack_00000060;
    if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc();
    }
  }
  else {
    FUN_02765258(&stack0x00000010);
    if (unaff_w21 != 1) {
      FUN_02765288(&stack0x00000060);
                    /* WARNING: Subroutine does not return */
      FUN_02c2be1c(param_1);
    }
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    in_stack_00000060 = lVar2;
    __cxa_end_catch();
  }
  FUN_04aeaf58(in_stack_00000068,*(undefined8 *)(*(long *)(*in_stack_00000070 + 0x38) + 0x80));
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc(lVar2);
  }
  return;
}


