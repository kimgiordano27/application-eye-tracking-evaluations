/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 01954b60
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__Dispose(void)

{
  long lVar1;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  FUN_01f88388();
  if (unaff_w19 < 0) {
    FUN_01f87fcc(0x10,4,0);
  }
  if (*(int *)(unaff_x21 + 0x18) - unaff_w20 < unaff_w19) {
    FUN_01f87b08(0x17,0);
  }
  if ((*(byte *)(**(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_0122e748();
  }
  lVar1 = thunk_FUN_0124bba8();
  FUN_01953820(lVar1,unaff_w19,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x148));
  if (lVar1 != 0) {
    FUN_01f89ca0(*(undefined8 *)(unaff_x21 + 0x10),unaff_w20,*(undefined8 *)(lVar1 + 0x10),0,
                 unaff_w19,0);
    *(int *)(lVar1 + 0x18) = unaff_w19;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


