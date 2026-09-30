/*
FUNCTION_NAME: OVRVirtualKeyboardInputFieldTextHandler$$AppendText
ENTRY_POINT: 04fc6f0c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 108
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_2;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRVirtualKeyboardInputFieldTextHandler__AppendText(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_02b3c81c(PTR_DAT_06316088);
  *(undefined1 *)(unaff_x21 + 0x98d) = 1;
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *unaff_x20;
  }
  puVar2 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  pcVar6 = *(char **)(lVar3 + 0xb8);
  if (*pcVar6 == '\0') {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      pcVar6 = *(char **)(*unaff_x20 + 0xb8);
    }
    uVar5 = *(undefined8 *)(pcVar6 + 8);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c44f60(uVar5,0);
    uVar5 = 0;
  }
  else {
    if (*(int *)(*(long *)System_Func<Collider,_Transform>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_04fa6254(unaff_w19 & 1);
    uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_03e58f28(uVar5,uVar4,*(undefined8 *)puVar1);
  }
  return uVar5;
}


