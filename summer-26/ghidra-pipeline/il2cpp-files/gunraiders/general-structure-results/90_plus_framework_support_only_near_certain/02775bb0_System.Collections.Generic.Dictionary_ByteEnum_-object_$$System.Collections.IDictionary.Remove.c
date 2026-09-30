/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<ByteEnum,-object>$$System.Collections.IDictionary.Remove
ENTRY_POINT: 02775bb0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void System_Collections_Generic_Dictionary<ByteEnum,_object>__System_Collections_IDictionary_Remove
               (void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 *unaff_x21;
  
  FUN_01c5d288(UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo);
  FUN_01c5d288(OVRPlatformMenu_TypeInfo);
  FUN_01c5d288(OVRPlugin_TypeInfo);
  FUN_01c5d288(MQTTnet_Protocol_MqttRetainHandling_TypeInfo);
  FUN_01c5d288(UnityEngine_EventSystems_OVRPointerEventData_TypeInfo);
  FUN_01c5d288(MQTTnet_Packets_MqttSubscribePacket_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x988) = 1;
  uVar4 = *unaff_x21;
  plVar3 = (long *)(unaff_x19 + 0x20);
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  **(undefined8 **)(lVar2 + 0xb8) = uVar4;
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  puVar1 = MQTTnet_Protocol_MqttRetainHandling_TypeInfo;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  uVar4 = FUN_03146988(**(undefined8 **)(lVar2 + 0xb8),*(undefined8 *)puVar1,0);
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = uVar4;
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  puVar1 = MQTTnet_Packets_MqttSubscribePacket_TypeInfo;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  uVar4 = FUN_03146988(**(undefined8 **)(lVar2 + 0xb8),*(undefined8 *)puVar1,0);
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10) = uVar4;
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  puVar1 = UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  uVar4 = FUN_03146988(**(undefined8 **)(lVar2 + 0xb8),*(undefined8 *)puVar1,0);
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18) = uVar4;
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  puVar1 = OVROverlayCanvas_TypeInfo;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  uVar4 = FUN_03146988(*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8),*(undefined8 *)puVar1,0);
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x20) = uVar4;
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  puVar1 = OVROverlayMeshGenerator_TypeInfo;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  uVar4 = FUN_03146988(*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8),*(undefined8 *)puVar1,0);
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x28) = uVar4;
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  puVar1 = OVRPermissionsRequester_TypeInfo;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  uVar4 = FUN_03146988(**(undefined8 **)(lVar2 + 0xb8),*(undefined8 *)puVar1,0);
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30) = uVar4;
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar2 = *plVar3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c72394();
  }
  FUN_040217a0(*(undefined1 *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x135));
  return;
}


