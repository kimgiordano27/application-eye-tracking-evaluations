/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose
ENTRY_POINT: 015e5878
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xb6d) = 1;
  if (unaff_x20 != 0) {
    if (0x1a < *(int *)(unaff_x20 + 0x10)) {
      uVar1 = FUN_01e69ff4();
      unaff_x20 = FUN_01e5d260(uVar1,*(undefined8 *)PTR_DAT_027b4de8,0);
    }
    plVar2 = *(long **)(unaff_x19 + 0x78);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015e58dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x5c8))(plVar2,unaff_x20,*(undefined8 *)(*plVar2 + 0x5d0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


