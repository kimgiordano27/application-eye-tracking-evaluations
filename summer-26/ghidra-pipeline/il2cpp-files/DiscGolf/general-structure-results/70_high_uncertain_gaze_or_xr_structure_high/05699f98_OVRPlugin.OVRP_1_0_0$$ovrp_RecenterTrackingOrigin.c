/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 05699f98
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *unaff_x25;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (param_2 != 1) {
    FUN_02d03d24(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  in_stack_00000008 = lVar2;
  __cxa_end_catch();
  FUN_05118c0c(in_stack_00000010,*unaff_x25);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar2);
  }
  return;
}


