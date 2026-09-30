/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreOnOpenXrEventDelegate$$Invoke
ENTRY_POINT: 08a3a050
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate__Invoke
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar1;
  long unaff_x24;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(unaff_x23 + 0xda8);
  puVar2 = *(undefined8 **)(unaff_x24 + 0xdb0);
  if ((*(byte *)(unaff_x22 + 0x3c1) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac52db0);
    FUN_04947ee4(PTR_DAT_0ac52da8);
    *(undefined1 *)(unaff_x22 + 0x3c1) = 1;
  }
  System_Collections_Generic_EnumerableHelpers__ToArray<Timestamped<bool>>
            (param_1,*puVar1,param_2,param_3,0,*puVar2);
  return;
}


