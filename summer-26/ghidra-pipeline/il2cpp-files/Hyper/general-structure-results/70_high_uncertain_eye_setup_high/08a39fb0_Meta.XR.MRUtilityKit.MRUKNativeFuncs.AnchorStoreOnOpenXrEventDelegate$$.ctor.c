/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreOnOpenXrEventDelegate$$.ctor
ENTRY_POINT: 08a39fb0
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate___ctor(void)

{
  long lVar1;
  byte unaff_w20;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_04947ee4(PTR_DAT_0ac52d90);
  FUN_04947ee4(PTR_DAT_0ac52da0);
  *(undefined1 *)(unaff_x22 + 0x3c0) = 1;
  lVar1 = thunk_FUN_04983f60(*unaff_x23);
  FUN_08dbf2f0(lVar1,0);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x10) = unaff_w20 & 1;
    System_Collections_Generic_EnumerableHelpers__ToArray<Timestamped<bool>>();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


