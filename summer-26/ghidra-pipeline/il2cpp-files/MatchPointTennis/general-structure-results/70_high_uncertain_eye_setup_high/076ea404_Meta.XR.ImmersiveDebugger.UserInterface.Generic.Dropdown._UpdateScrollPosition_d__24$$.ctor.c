/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$.ctor
ENTRY_POINT: 076ea404
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24___ctor
               (long param_1)

{
  long lVar1;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x21;
  int unaff_w25;
  
  do {
    lVar1 = FUN_05badb74(param_1,unaff_w20,*unaff_x21);
    if ((lVar1 == 0) || (lVar1 = FUN_095259a0(lVar1,0), lVar1 == 0)) break;
    FUN_0952a454(lVar1,0,0);
    unaff_w20 = unaff_w20 + -1;
    if (unaff_w20 < unaff_w25) {
      *(int *)(unaff_x19 + 0x268) = unaff_w25;
      return;
    }
    param_1 = *(long *)(unaff_x19 + 0x260);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


