/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 02901574
PROGRAM: vrfs-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnSessionDestroy(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint in_w9;
  long in_x10;
  long in_x12;
  int *unaff_x20;
  int unaff_w21;
  long unaff_x23;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  long *unaff_x28;
  int *in_stack_00000008;
  
  uVar2 = in_w9 | (int)*(char *)(in_x12 + in_x10) | (int)*(char *)(in_x12 + param_1) << 6;
  if (-1 < (int)uVar2) {
    puVar1 = (undefined1 *)(unaff_x23 + unaff_w25);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    *puVar1 = (char)(uVar2 >> 0x10);
    puVar1[1] = (char)(uVar2 >> 8);
    unaff_w25 = unaff_w25 + 3;
    unaff_w26 = unaff_w26 + 4;
    puVar1[2] = (char)uVar2;
    if (unaff_w27 == unaff_w21) {
      uVar3 = 1;
      goto LAB_029014fc;
    }
  }
  uVar3 = 0;
LAB_029014fc:
  *in_stack_00000008 = unaff_w26;
  *unaff_x20 = unaff_w25;
  return uVar3;
}


