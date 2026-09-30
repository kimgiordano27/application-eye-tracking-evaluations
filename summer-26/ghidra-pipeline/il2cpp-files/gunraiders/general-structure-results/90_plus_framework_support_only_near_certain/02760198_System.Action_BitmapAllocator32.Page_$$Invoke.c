/*
FUNCTION_NAME: System.Action<BitmapAllocator32.Page>$$Invoke
ENTRY_POINT: 02760198
PROGRAM: gunraiders-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void System_Action<BitmapAllocator32_Page>__Invoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(param_1 + 0x18) = unaff_x20;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = OVROverlayCanvas_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  uVar5 = FUN_03146988(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),*(undefined8 *)puVar1,0);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20) = uVar5;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = OVROverlayMeshGenerator_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  uVar5 = FUN_03146988(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),*(undefined8 *)puVar1,0);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28) = uVar5;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = OVRPermissionsRequester_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  uVar5 = FUN_03146988(**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)puVar1,0);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30) = uVar5;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = OVRPlatformMenu_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  uVar5 = FUN_03146988(**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)puVar1,0);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x38) = uVar5;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = UnityEngine_EventSystems_OVRPointerEventData_TypeInfo;
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  lVar4 = *unaff_x19;
  uVar5 = *(undefined8 *)puVar1;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x40) = uVar5;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar1 = OVRPlugin_TypeInfo;
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  uVar3 = FUN_03d441c4(*(undefined8 *)puVar1,0);
  lVar4 = *unaff_x19;
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
  in_stack_00000028 = 0;
  FUN_0283685c(&stack0x00000028,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x50) = in_stack_00000028;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar2 = OVROverlay_TypeInfo;
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  in_stack_00000018 = 0;
  FUN_0283685c(&stack0x00000018,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x58) = in_stack_00000018;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar2 = OVRPassthroughLayer_TypeInfo;
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  in_stack_00000010 = 0;
  FUN_0283685c(&stack0x00000010,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x60) = in_stack_00000010;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  puVar2 = OVRNodeStateProperties_TypeInfo;
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  in_stack_00000008 = 0;
  FUN_0283685c(&stack0x00000008,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x68) = in_stack_00000008;
  lVar4 = *unaff_x19;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  return;
}


