/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$ToNativeArray
ENTRY_POINT: 02c4a858
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__ToNativeArray(void)

{
  undefined8 uVar1;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xed) = 1;
  FUN_02c108e4();
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x21;
  thunk_FUN_0188fd20();
  if ((unaff_x20 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_037f8680 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar1 = FUN_02c30870(0);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
    thunk_FUN_0188fd20((undefined8 *)(unaff_x19 + 0x10),uVar1);
    return;
  }
  return;
}


