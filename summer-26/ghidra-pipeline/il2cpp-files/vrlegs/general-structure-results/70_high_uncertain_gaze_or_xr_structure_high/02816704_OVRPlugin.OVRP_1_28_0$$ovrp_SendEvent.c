/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 02816704
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(ulong param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfe558);
    FUN_01ab69ac(PTR_DAT_03cf5f08);
    *(undefined1 *)(unaff_x20 + 0x379) = 1;
  }
  lVar1 = *(long *)(*unaff_x21 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01a46ff8();
  }
  pcVar2 = (char *)thunk_FUN_01a59484(&stack0x00000008,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar2 == '\0') {
    (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
  }
  else {
    FUN_01ba9478(&stack0x00000008,&stack0x00000018,*(undefined8 *)PTR_DAT_03cfe558);
    (**(code **)(*param_2 + 0x3d8))(param_2,in_stack_00000018,*(undefined8 *)(*param_2 + 0x3e0));
  }
  return;
}


