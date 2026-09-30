/*
FUNCTION_NAME: FUN_0277cbe8
ENTRY_POINT: 0277cbe8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 139
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0277cbe8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  puVar1 = OVRMixedReality_TypeInfo;
  if ((DAT_045309af & 1) == 0) {
    FUN_01c5d288(OVRMixedRealityCaptureConfiguration_TypeInfo);
    FUN_01c5d288(OVRNativeBuffer_TypeInfo);
    FUN_01c5d288(OVRNodeStateProperties_TypeInfo);
    FUN_01c5d288(OVROverlay_TypeInfo);
    FUN_01c5d288(OVROverlayCanvas_TypeInfo);
    FUN_01c5d288(OVROverlayMeshGenerator_TypeInfo);
    FUN_01c5d288(OVRPassthroughLayer_TypeInfo);
    FUN_01c5d288(OVRPermissionsRequester_TypeInfo);
    FUN_01c5d288(OVRMixedReality_TypeInfo);
    FUN_01c5d288(UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo);
    FUN_01c5d288(OVRPlatformMenu_TypeInfo);
    FUN_01c5d288(OVRPlugin_TypeInfo);
    FUN_01c5d288(MQTTnet_Protocol_MqttRetainHandling_TypeInfo);
    FUN_01c5d288(UnityEngine_EventSystems_OVRPointerEventData_TypeInfo);
    FUN_01c5d288(MQTTnet_Packets_MqttSubscribePacket_TypeInfo);
    DAT_045309af = 1;
  }
  uVar6 = *(undefined8 *)puVar1;
  plVar5 = (long *)(param_1 + 0x20);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  **(undefined8 **)(lVar4 + 0xb8) = uVar6;
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = MQTTnet_Protocol_MqttRetainHandling_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  uVar6 = FUN_03146988(**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)puVar1,0);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8) = uVar6;
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = MQTTnet_Packets_MqttSubscribePacket_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  uVar6 = FUN_03146988(**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)puVar1,0);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10) = uVar6;
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  uVar6 = FUN_03146988(**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)puVar1,0);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18) = uVar6;
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = OVROverlayCanvas_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  uVar6 = FUN_03146988(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),*(undefined8 *)puVar1,0);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20) = uVar6;
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = OVROverlayMeshGenerator_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  uVar6 = FUN_03146988(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),*(undefined8 *)puVar1,0);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28) = uVar6;
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = OVRPermissionsRequester_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  uVar6 = FUN_03146988(**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)puVar1,0);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30) = uVar6;
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = OVRPlatformMenu_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  uVar6 = FUN_03146988(**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)puVar1,0);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x38) = uVar6;
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = UnityEngine_EventSystems_OVRPointerEventData_TypeInfo;
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar4 = *plVar5;
  uVar6 = *(undefined8 *)puVar1;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x40) = uVar6;
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = OVRPlugin_TypeInfo;
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  uVar3 = FUN_03d441c4(*(undefined8 *)puVar1,0);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  puVar2 = OVRNativeBuffer_TypeInfo;
  puVar1 = OVRMixedRealityCaptureConfiguration_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x48) = uVar3;
  local_28 = 0;
  FUN_0283685c(&local_28,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x50) = local_28;
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar2 = OVROverlay_TypeInfo;
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  local_38 = 0;
  FUN_0283685c(&local_38,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x58) = local_38;
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar2 = OVRPassthroughLayer_TypeInfo;
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  local_40 = 0;
  FUN_0283685c(&local_40,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x60) = local_40;
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar2 = OVRNodeStateProperties_TypeInfo;
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  local_48 = 0;
  FUN_0283685c(&local_48,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x68) = local_48;
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  return;
}


