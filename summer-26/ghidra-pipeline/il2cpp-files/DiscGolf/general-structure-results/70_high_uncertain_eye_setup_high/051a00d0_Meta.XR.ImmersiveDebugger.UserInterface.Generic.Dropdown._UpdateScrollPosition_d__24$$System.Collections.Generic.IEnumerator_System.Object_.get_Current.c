/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
ENTRY_POINT: 051a00d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  ushort uVar1;
  long lVar2;
  int in_w8;
  long in_x9;
  long unaff_x20;
  
  if (in_x9 != 0) {
    if (in_w8 == *(int *)(in_x9 + 0x18) + 1) {
      FUN_05509628(0);
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_02dcfd18();
      lVar2 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar2 + 0x135);
    }
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


