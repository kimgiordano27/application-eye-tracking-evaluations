/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 02c4873c
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c4880c) */

undefined8 OVRPlugin_UnityOpenXR__OnSessionCreate(void)

{
  int iVar1;
  ulong unaff_x21;
  int unaff_w22;
  long *unaff_x24;
  undefined8 in_stack_00000000;
  
  iVar1 = FUN_028264b0();
  if (unaff_w22 == iVar1) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_0282702c();
  }
  if ((unaff_x21 & 1) == 0) {
    FUN_02826708();
  }
  else {
    FUN_02826920();
  }
  if (in_stack_00000000._4_1_ != '\0') {
    thunk_FUN_0184c01c();
  }
  return 1;
}


