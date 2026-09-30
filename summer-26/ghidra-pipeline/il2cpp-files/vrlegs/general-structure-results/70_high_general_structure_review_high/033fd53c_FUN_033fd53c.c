/*
FUNCTION_NAME: FUN_033fd53c
ENTRY_POINT: 033fd53c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_6;telemetry_or_network_hits_2
*/


void FUN_033fd53c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 local_28 [8];
  
  puVar1 = OVRPermissionsRequester_TypeInfo;
  if ((DAT_0412d510 & 1) == 0) {
    FUN_01ab69ac(UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo);
    FUN_01ab69ac(OVRPlatformMenu_TypeInfo);
    FUN_01ab69ac(OVRPermissionsRequester_TypeInfo);
    DAT_0412d510 = 1;
  }
  puVar2 = OVRPlatformMenu_TypeInfo;
  lVar3 = *(long *)puVar1;
  local_28[0] = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  FUN_033a2190(local_28,param_1,**(undefined8 **)(lVar3 + 0xb8),0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0343fe58(param_1,0);
  puVar1 = UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo;
  lVar3 = *(long *)UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  FUN_0342f854(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18),0);
  FUN_033a2194(local_28,0);
  return;
}


