/*
FUNCTION_NAME: FUN_018995d8
ENTRY_POINT: 018995d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_018995d8(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 local_48;
  undefined2 local_34 [2];
  
  if ((DAT_0377980a & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9844);
    thunk_FUN_00d48444(StringLiteral_4683);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                      );
    thunk_FUN_00d48444(
                      System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_get_Current__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_ChangeBindingWithPath__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_52_0_TypeInfo);
    DAT_0377980a = 1;
  }
  puVar3 = Method_UnityEngine_InputSystem_InputActionSetupExtensions_ChangeBindingWithPath__;
  local_34[0] = 0;
  local_48 = 0;
  if (param_1 == 0) {
LAB_0189998c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (param_2 == 0) goto LAB_0189998c;
    local_34[0] = *(undefined2 *)(param_2 + 0x20);
    bVar4 = FUN_00bc4804(local_34,*(undefined8 *)
                                   Method_UnityEngine_InputSystem_InputActionSetupExtensions_ChangeBindingWithPath__
                        );
    *(byte *)(param_1 + 0x10) = bVar4 & 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 1;
    if (param_2 == 0) goto LAB_0189998c;
  }
  local_48 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x14);
  lVar6 = *(long *)(*(long *)OVRPlugin_OVRP_1_52_0_TypeInfo + 0x20);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__;
  pcVar7 = (char *)thunk_FUN_00d32ed4(&local_48,*(undefined8 *)(lVar6 + 0x80));
  if (*pcVar7 == '\0') {
    uVar5 = 0x7f;
  }
  else {
    uVar5 = FUN_00becc2c(&local_48,*(undefined8 *)puVar2);
  }
  *(uint *)(param_1 + 0x14) = uVar5 & uVar1;
  uVar8 = FUN_0185dc70(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x40),0);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  uVar8 = FUN_0185db00(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x48),0);
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  auVar11 = FUN_0185dde0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                         *(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),0);
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar11;
  auVar11 = FUN_0185dde0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                         *(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),0);
  *(undefined1 (*) [16])(param_1 + 0x38) = auVar11;
  auVar11 = FUN_0185dde0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                         *(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78),0);
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar11;
  if (*(char *)(param_1 + 0x58) == '\0') {
    local_34[0] = *(undefined2 *)(param_2 + 0x80);
    bVar4 = FUN_00bc4804(local_34,*(undefined8 *)puVar3);
    bVar4 = bVar4 & 1;
  }
  else {
    bVar4 = 1;
  }
  *(byte *)(param_1 + 0x58) = bVar4;
  if (*(char *)(param_1 + 0x59) == '\0') {
    local_34[0] = *(undefined2 *)(param_2 + 0x82);
    bVar4 = FUN_00bc4804(local_34,*(undefined8 *)puVar3);
    bVar4 = bVar4 & 1;
  }
  else {
    bVar4 = 1;
  }
  *(byte *)(param_1 + 0x59) = bVar4;
  uVar8 = FUN_0185dc70(*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_2 + 0x84),0);
  *(undefined8 *)(param_1 + 0x5c) = uVar8;
  uVar8 = FUN_0185db00(*(undefined8 *)(param_1 + 100),*(undefined8 *)(param_2 + 0x8c),0);
  *(undefined8 *)(param_1 + 100) = uVar8;
  if (*(char *)(param_1 + 0xa0) == '\0') {
    uVar9 = *(undefined1 *)(param_2 + 0xa0);
  }
  else {
    uVar9 = 1;
  }
  *(undefined1 *)(param_1 + 0xa0) = uVar9;
  if (*(char *)(param_1 + 0xa1) == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined1 *)(param_2 + 0xd0);
  }
  *(undefined1 *)(param_1 + 0xa1) = uVar9;
  if (*(char *)(param_1 + 0xa2) == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined1 *)(param_2 + 0xb0);
  }
  *(undefined1 *)(param_1 + 0xa2) = uVar9;
  if (*(char *)(param_1 + 0xa3) == '\0') {
    uVar9 = *(undefined1 *)(param_2 + 0xb1);
  }
  else {
    uVar9 = 1;
  }
  *(undefined1 *)(param_1 + 0xa3) = uVar9;
  lVar6 = *(long *)(param_2 + 0xe0);
  if (lVar6 != 0) {
    lVar10 = *(long *)(param_1 + 0xa8);
    if (lVar10 == 0) {
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_get_Current__
                                 );
      if (lVar10 == 0) goto LAB_0189998c;
      FUN_01320e50(lVar10,*(undefined8 *)
                           System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                  );
      *(long *)(param_1 + 0xa8) = lVar10;
      lVar6 = *(long *)(param_2 + 0xe0);
    }
    puVar3 = StringLiteral_4683;
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_018a6b38(0);
    FUN_010c161c(lVar10,lVar6,uVar8,*(undefined8 *)puVar3);
  }
  local_48 = *(undefined8 *)(param_2 + 0xe8);
  uVar1 = *(uint *)(param_1 + 0xb0);
  uVar5 = FUN_00becc2c(&local_48,*(undefined8 *)puVar2);
  *(uint *)(param_1 + 0xb0) = uVar5 | uVar1;
  lVar6 = *(long *)(param_2 + 0x38);
  if (lVar6 != 0) {
    lVar10 = *(long *)(param_1 + 0x70);
    if (lVar10 == 0) {
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                                 );
      if (lVar10 == 0) goto LAB_0189998c;
      FUN_01320e50(lVar10,*(undefined8 *)System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo
                  );
      *(long *)(param_1 + 0x70) = lVar10;
      lVar6 = *(long *)(param_2 + 0x38);
    }
    FUN_010c0db4(lVar10,lVar6,*(undefined8 *)StringLiteral_9844);
  }
  return;
}


