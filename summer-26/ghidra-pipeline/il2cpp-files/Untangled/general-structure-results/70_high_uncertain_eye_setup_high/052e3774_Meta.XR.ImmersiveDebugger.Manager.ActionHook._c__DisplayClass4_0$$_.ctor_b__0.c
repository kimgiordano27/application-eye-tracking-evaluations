/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionHook.<>c__DisplayClass4_0$$<.ctor>b__0
ENTRY_POINT: 052e3774
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionHook_<>c__DisplayClass4_0__<_ctor>b__0(void)

{
  ulong uVar1;
  long unaff_x20;
  long in_stack_00000008;
  
  uVar1 = FUN_05241d74();
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    uVar1 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose();
    if ((uVar1 & 1) == 0) {
      in_stack_00000008 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3c618);
      FUN_05241680(in_stack_00000008,*(undefined8 *)PTR_DAT_06d3c8b8);
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_052e3838;
      FUN_04c74618();
    }
    if ((in_stack_00000008 != 0) &&
       ((*(int *)(in_stack_00000008 + 0x20) != 0 || (FUN_052e33a4(), in_stack_00000008 != 0)))) {
      FUN_05242864();
      return;
    }
  }
LAB_052e3838:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


