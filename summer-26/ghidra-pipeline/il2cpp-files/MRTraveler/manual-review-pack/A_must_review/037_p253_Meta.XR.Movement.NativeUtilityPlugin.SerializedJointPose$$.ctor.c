/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityPlugin.SerializedJointPose$$.ctor
ENTRY_POINT: 06dadcac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 142
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06daddcc) */

undefined4
Meta_XR_Movement_NativeUtilityPlugin_SerializedJointPose___ctor(undefined8 param_1,int param_2)

{
  long *plVar1;
  undefined4 unaff_w19;
  long lVar2;
  undefined8 in_stack_00000008;
  
  if (param_2 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_03cdf404();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03cdf404();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28(lVar2);
  }
  return unaff_w19;
}


