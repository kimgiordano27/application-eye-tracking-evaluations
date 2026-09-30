/*
FUNCTION_NAME: FUN_024abb04
ENTRY_POINT: 024abb04
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_024abb04(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar3 = StringLiteral_2074;
  puVar2 = StringLiteral_2073;
  if ((DAT_044a362e & 1) == 0) {
    FUN_01d7d918(Field_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_m_CachedType);
    FUN_01d7d918(StringLiteral_2075);
                    /* try { // try from 024abb4c to 025abc07 has its CatchHandler @ 024abb4c
                       catch() { ... } // from try @ 024abb4c with catch @ 024abb4c
                       catch() { ... } // from try @ 024abd34 with catch @ 024abb4c
                       catch() { ... } // from try @ 024abd70 with catch @ 024abb4c
                       catch() { ... } // from try @ 024abe5c with catch @ 024abb4c */
    FUN_01d7d918(StringLiteral_2076);
    FUN_01d7d918(StringLiteral_2077);
    FUN_01d7d918(StringLiteral_2078);
    FUN_01d7d918(StringLiteral_2079);
    FUN_01d7d918(StringLiteral_2080);
    FUN_01d7d918(StringLiteral_2081);
    FUN_01d7d918(StringLiteral_2074);
    FUN_01d7d918(StringLiteral_2082);
    FUN_01d7d918(StringLiteral_2073);
    DAT_044a362e = 1;
  }
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_02ebab6c(uVar6,*(undefined8 *)puVar3);
  plVar9 = (long *)(param_1 + 0x20);
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
                    /* try { // try from 024abc08 to 025abc0f has its CatchHandler @ 024abe14 */
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
                    /* try { // try from 024abc28 to 025abc37 has its CatchHandler @ 024abe10 */
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
  FUN_02a690d8(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
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
  puVar3 = StringLiteral_2079;
  puVar2 = StringLiteral_2075;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 8,uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
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
  puVar3 = StringLiteral_2080;
  puVar2 = StringLiteral_2077;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x20,uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
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
  puVar3 = StringLiteral_2082;
  puVar2 = StringLiteral_2081;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x38,uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
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
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
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
  puVar5 = StringLiteral_2078;
  puVar4 = StringLiteral_2076;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8();
  }
  thunk_FUN_01e10808(*(long *)(lVar7 + 0xb8) + 0x50,uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar5);
  FUN_02a690d8(uVar6,*(undefined8 *)puVar4);
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
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
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
  FUN_021323bc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0xa0));
  return;
}


