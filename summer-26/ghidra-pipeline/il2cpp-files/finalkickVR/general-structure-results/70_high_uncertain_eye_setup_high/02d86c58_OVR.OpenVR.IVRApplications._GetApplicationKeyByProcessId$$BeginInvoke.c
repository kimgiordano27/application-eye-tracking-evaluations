/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._GetApplicationKeyByProcessId$$BeginInvoke
ENTRY_POINT: 02d86c58
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_6
*/


byte OVR_OpenVR_IVRApplications__GetApplicationKeyByProcessId__BeginInvoke(undefined8 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 *pOVar5;
  long unaff_x29;
  ulong *in_stack_00000020;
  ulong *in_stack_00000028;
  ulong *in_stack_00000030;
  undefined4 uStack000000000000003c;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
  if ((OVRManager_InitializeInsightPassthrough_m016E6C16576A1E4F6B7871E7FDE7D2671119F67E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000020);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000028);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000030);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_spawnerRayos_<Tormenta>d__16_System_Collections_IEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_spawnerRayos_<instaciarRayo>d__14_System_Collections_IEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<string,_JsonSchemaType>_Add__);
    OVRManager_InitializeInsightPassthrough_m016E6C16576A1E4F6B7871E7FDE7D2671119F67E::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(lVar3 + 0x1d0);
  NullCheck(*(void **)(unaff_x29 + -0x20));
  uVar2 = Observable_1_get_Value_mB8F26CF39635F02B4782AD1798CAC3E90FCB9D79_inline
                    (*(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(unaff_x29 + -0x20)
                     ,(MethodInfo *)*in_stack_00000028);
  *(undefined4 *)(unaff_x29 + -0x24) = uVar2;
  bVar1 = OVRManager_PassthroughInitializedOrPending_m7B360381FEDC2014AFB1ABB74E907B62B0D14348
                    (*(undefined4 *)(unaff_x29 + -0x24),0);
  *(byte *)(unaff_x29 + -0x25) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x25) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    bVar1 = OVRPlugin_InitializeInsightPassthrough_m533CFC66EFCBCF4C9B69AC938D2E2653724D2304();
    *(byte *)(unaff_x29 + -0x26) = bVar1 & 1;
    uVar2 = OVRPlugin_GetInsightPassthroughInitializationState_m3E668E023B953E8204B732EBCD358FAC7B7660C4
                      (0);
    *(undefined4 *)(unaff_x29 + -0x2c) = uVar2;
    *(undefined4 *)(unaff_x29 + -0x14) = *(undefined4 *)(unaff_x29 + -0x2c);
    *(undefined4 *)(unaff_x29 + -0x30) = *(undefined4 *)(unaff_x29 + -0x14);
    if (*(int *)(unaff_x29 + -0x30) < 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
      lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
      *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(lVar3 + 0x1d0);
      NullCheck(*(void **)(unaff_x29 + -0x38));
      Observable_1_set_Value_m14A1DD2298CBF1606D9492E3EED5ED3206EAD5D1
                (*(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(unaff_x29 + -0x38),3,
                 (MethodInfo *)*in_stack_00000030);
      Il2CppFakeBox<int>::Il2CppFakeBox
                ((Il2CppFakeBox<int> *)(unaff_x29 + -0x50),
                 *(Il2CppClass **)
                  Method_spawnerRayos_<Tormenta>d__16_System_Collections_IEnumerator_Reset__,
                 (int *)(unaff_x29 + -0x14));
      uVar4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741
                        ((Il2CppFakeBox<int> *)(unaff_x29 + -0x50));
      *(undefined8 *)(unaff_x29 + -0x58) = uVar4;
      uVar4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B
                        (*(undefined8 *)
                          Method_spawnerRayos_<instaciarRayo>d__14_System_Collections_IEnumerator_Reset__
                         ,*(undefined8 *)(unaff_x29 + -0x58),
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<string,_JsonSchemaType>_Add__
                         ,0);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar4,0);
    }
    else if (*(int *)(unaff_x29 + -0x14) == 2) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
      lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
      pOVar5 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar3 + 0x1d0);
      NullCheck(pOVar5);
      Observable_1_set_Value_m14A1DD2298CBF1606D9492E3EED5ED3206EAD5D1
                (pOVar5,1,(MethodInfo *)*in_stack_00000030);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
      lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
      pOVar5 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar3 + 0x1d0);
      NullCheck(pOVar5);
      Observable_1_set_Value_m14A1DD2298CBF1606D9492E3EED5ED3206EAD5D1
                (pOVar5,2,(MethodInfo *)*in_stack_00000030);
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
    pOVar5 = *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar3 + 0x1d0);
    NullCheck(pOVar5);
    uStack000000000000003c =
         Observable_1_get_Value_mB8F26CF39635F02B4782AD1798CAC3E90FCB9D79_inline
                   (pOVar5,(MethodInfo *)*in_stack_00000028);
    bVar1 = OVRManager_PassthroughInitializedOrPending_m7B360381FEDC2014AFB1ABB74E907B62B0D14348
                      (uStack000000000000003c,0);
    *(byte *)(unaff_x29 + -1) = bVar1 & 1;
  }
  else {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


