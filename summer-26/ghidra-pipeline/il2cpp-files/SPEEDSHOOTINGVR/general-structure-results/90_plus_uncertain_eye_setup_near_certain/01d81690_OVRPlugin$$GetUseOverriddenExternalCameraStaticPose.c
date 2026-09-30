/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 01d81690
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d816b8) */

undefined8 OVRPlugin__GetUseOverriddenExternalCameraStaticPose(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  FUN_01c43f5c(&stack0x00000008,0);
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc52c();
  }
  if (param_2 != 1) {
    FUN_01c44000(&stack0x00000010,0);
                    /* WARNING: Subroutine does not return */
    FUN_010dc9f4(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_01c44000(&stack0x00000010,0);
  if (lVar2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc52c(lVar2);
}


