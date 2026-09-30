/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 056969c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05696a7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPlugin_UnityOpenXR__OnSessionEnd(long param_1)

{
  undefined8 uVar1;
  char cStack000000000000001c;
  undefined8 in_stack_00000028;
  
  if ((DAT_06dbc7ff & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    DAT_06dbc7ff = 1;
  }
  in_stack_00000028 = *(undefined8 *)(param_1 + 0x30);
  cStack000000000000001c = '\0';
  FUN_0554bf68(in_stack_00000028,&stack0x0000001c,0);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_06a0f1a0 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05654e00(uVar1,param_1 + 0x60,0);
  if (cStack000000000000001c != '\0') {
    thunk_FUN_02da42ec(in_stack_00000028,0);
  }
  return;
}


