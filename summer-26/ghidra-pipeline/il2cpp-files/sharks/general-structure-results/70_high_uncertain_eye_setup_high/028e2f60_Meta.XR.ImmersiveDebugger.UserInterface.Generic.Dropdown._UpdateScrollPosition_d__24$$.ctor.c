/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$.ctor
ENTRY_POINT: 028e2f60
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24___ctor
               (ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  if ((param_1 & 1) == 0) {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028e2e8c with catch @ 028e2f64
                       try { // try from 028e2f64 to 029e2f7b has its CatchHandler @ 028e2e44 */
    param_2 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xb8) + 0x10);
  if (lVar1 != 0) {
                    /* try { // try from 028e2f7c to 029e2f93 has its CatchHandler @ 028e3000 */
    FUN_02170a40(lVar1,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb638);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


