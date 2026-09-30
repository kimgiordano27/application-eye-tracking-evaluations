/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager.Mask$$Dispose
ENTRY_POINT: 076cc818
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  int *in_x10;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_076cc84c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_076cc84c:
  (*(code *)*puVar1)();
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e3c();
  }
  if ((unaff_w21 != 0x3a) && (unaff_w21 != 0)) {
    return;
  }
  FUN_076c71ec();
  lVar2 = (**(code **)(*unaff_x19 + 600))();
  if (lVar2 == 0) {
    if (unaff_x20 != 0) {
LAB_076cc8e0:
      FUN_076c5f44();
      return;
    }
  }
  else if (unaff_x20 != 0) {
    FUN_076c5d54();
    lVar2 = (**(code **)(*unaff_x19 + 600))();
    if (lVar2 != 0) {
      FUN_076cd658();
      goto LAB_076cc8e0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


