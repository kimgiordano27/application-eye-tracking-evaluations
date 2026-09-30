/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<AsyncGPUReadbackRequest>$$System.Collections.Generic.ICollection<T>.Add
ENTRY_POINT: 024a53a4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Collections_ObjectModel_ReadOnlyCollection<AsyncGPUReadbackRequest>__System_Collections_Generic_ICollection<T>_Add
               (void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *plVar9;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  
  FUN_01d7d918();
  FUN_01d7d918(StringLiteral_2074);
  FUN_01d7d918(StringLiteral_2082);
  FUN_01d7d918(StringLiteral_2073);
  *(undefined1 *)(unaff_x21 + 0x612) = 1;
  uVar6 = thunk_FUN_01de27b8(*unaff_x22);
  FUN_02ebab6c(uVar6,*unaff_x20);
  plVar9 = (long *)(unaff_x19 + 0x20);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  **(undefined8 **)(lVar7 + 0xb8) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(undefined8 *)(lVar7 + 0xb8),uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  uVar6 = thunk_FUN_01de27b8();
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8(lVar7);
  }
  FUN_02a62b9c(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  puVar5 = StringLiteral_2079;
  puVar2 = StringLiteral_2075;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 8,uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar5);
  FUN_02a690d8(uVar6,*(undefined8 *)puVar2);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x10,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  uVar6 = thunk_FUN_01de27b8();
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8(lVar7);
  }
  FUN_02a690d8(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x18,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  uVar6 = thunk_FUN_01de27b8();
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8(lVar7);
  }
  FUN_02a690d8(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  puVar5 = StringLiteral_2080;
  puVar2 = StringLiteral_2077;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x20,uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar5);
  FUN_02a690d8(uVar6,*(undefined8 *)puVar2);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x28) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x28,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  uVar6 = thunk_FUN_01de27b8();
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8(lVar7);
  }
  FUN_02a690d8(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x30,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x50) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  uVar6 = thunk_FUN_01de27b8();
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8(lVar7);
  }
  FUN_02a690d8(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x58));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x38) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  puVar5 = StringLiteral_2082;
  puVar2 = StringLiteral_2081;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x38,uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar5);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (uVar6,*(undefined8 *)puVar2);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x40) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x40,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x60) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  uVar6 = thunk_FUN_01de27b8();
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8(lVar7);
  }
  FUN_02a690d8(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x68));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x48) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x48,uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar5);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (uVar6,*(undefined8 *)puVar2);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x50) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  puVar4 = StringLiteral_2078;
  puVar3 = StringLiteral_2076;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x50,uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
  FUN_02a690d8(uVar6,*(undefined8 *)puVar3);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x58) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x58,uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar5);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (uVar6,*(undefined8 *)puVar2);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x60,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x78);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  puVar2 = Field_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_m_CachedType;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x78);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  uVar10 = **(undefined8 **)(lVar7 + 0xb8);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8(lVar7);
  }
  FUN_0328d474(uVar6,uVar10,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x80),0);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x68) = uVar6;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x68,uVar6);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x78);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar8 = *plVar9;
  uVar6 = **(undefined8 **)(lVar7 + 0xb8);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01dde7f8(lVar8);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  uVar10 = thunk_FUN_01de27b8();
  lVar8 = *plVar9;
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar7 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_01dde7f8(lVar8);
    uVar1 = *(ushort *)(*plVar9 + 0x135);
    lVar7 = *plVar9;
  }
  uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x88);
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_01dde7f8(lVar7);
  }
  FUN_02aaeeec(uVar10,uVar6,uVar11,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x98));
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x70) = uVar10;
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x70,uVar10);
  lVar7 = *plVar9;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  FUN_021323b4(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0xa0));
  return;
}


