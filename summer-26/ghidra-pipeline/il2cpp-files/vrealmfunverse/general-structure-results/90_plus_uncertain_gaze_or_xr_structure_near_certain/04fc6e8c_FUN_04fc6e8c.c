/*
FUNCTION_NAME: FUN_04fc6e8c
ENTRY_POINT: 04fc6e8c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 129
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_04fc6e8c(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  puVar1 = PTR_DAT_06316088;
  if ((DAT_066cbdbb & 1) == 0) {
    FUN_02b3c81c(System_Func<Collider,_Transform>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06316088);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    DAT_066cbdbb = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066c298d == '\0') {
    FUN_02b3c81c(PTR_DAT_06316088);
    DAT_066c298d = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar4 = *(long *)puVar1;
  }
  puVar3 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  pcVar7 = *(char **)(lVar4 + 0xb8);
  if (*pcVar7 == '\0') {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      pcVar7 = *(char **)(*(long *)puVar1 + 0xb8);
    }
    uVar6 = *(undefined8 *)(pcVar7 + 8);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c44f60(uVar6,0);
    uVar6 = 0;
  }
  else {
    if (*(int *)(*(long *)System_Func<Collider,_Transform>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar5 = FUN_04fa6254(param_1 & 1);
    uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_03e58f28(uVar6,uVar5,*(undefined8 *)puVar2);
  }
  return uVar6;
}


