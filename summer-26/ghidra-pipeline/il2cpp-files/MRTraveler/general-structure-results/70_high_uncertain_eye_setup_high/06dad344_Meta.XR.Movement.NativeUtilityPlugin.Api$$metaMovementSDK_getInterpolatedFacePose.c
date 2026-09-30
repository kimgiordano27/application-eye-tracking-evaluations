/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityPlugin.Api$$metaMovementSDK_getInterpolatedFacePose
ENTRY_POINT: 06dad344
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dad460) */

undefined8
Meta_XR_Movement_NativeUtilityPlugin_Api__metaMovementSDK_getInterpolatedFacePose
          (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000028;
  
  if (param_2 == 1) {
    puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
    in_stack_00000008 = *puVar1;
    __cxa_end_catch();
    FUN_03bbe424(&stack0x00000008);
    lVar3 = 0;
  }
  else {
    FUN_03bbe424(&stack0x00000008);
    if (param_2 != 1) {
      if (in_stack_00000028._4_1_ != '\0') {
        thunk_FUN_03cdf404();
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d91ca0(param_1);
    }
    plVar2 = (long *)__cxa_begin_catch(param_1);
    lVar3 = *plVar2;
    __cxa_end_catch();
  }
  if (in_stack_00000028._4_1_ != '\0') {
    thunk_FUN_03cdf404();
  }
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28(lVar3);
  }
  return 0;
}


