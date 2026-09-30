/*
FUNCTION_NAME: OVRHandTest_Start_m66D071E04E14EF84948D2B88B18314FECF3891C1
ENTRY_POINT: 02e41618
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRHandTest_Start_m66D071E04E14EF84948D2B88B18314FECF3891C1(void *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  void *pvVar4;
  List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 *pLVar5;
  long lVar6;
  undefined8 *puVar7;
  BoolMonitor_t016D96F6DB4D8833C53E635232FD60650D47683D *pBVar8;
  undefined8 uVar9;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = StringLiteral_644;
  puVar1 = StringLiteral_486;
  if ((OVRHandTest_Start_m66D071E04E14EF84948D2B88B18314FECF3891C1::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_645);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_646);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_647);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_648);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_649);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_set_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_650);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRHandTest_Start_m66D071E04E14EF84948D2B88B18314FECF3891C1::s_Il2CppMethodInitialized = 1;
  }
  uVar9 = *(undefined8 *)((long)param_1 + 0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bVar3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar9,0);
  if ((bVar3 & 1) != 0) {
    pvVar4 = *(void **)((long)param_1 + 0x20);
    NullCheck(pvVar4);
    Text_set_supportRichText_mB4DB141150AEBCCADEFFF4EC7A799F85FD075265(pvVar4,0,0);
  }
  pvVar4 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_set_Item__
                             );
  StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(pvVar4,0x800,0);
  *(void **)((long)param_1 + 0x30) = pvVar4;
  Il2CppCodeGenWriteBarrier((void **)((long)param_1 + 0x30),pvVar4);
  pLVar5 = (List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 *)
           il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_649);
  List_1__ctor_mCD6E59E2023C98FAB218E5420BC0BC39DA1B23C4(pLVar5,*(MethodInfo **)StringLiteral_648);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_38 = *(void **)(lVar6 + 8);
  if (local_38 == (void *)0x0) {
    local_40 = *(undefined8 *)puVar1;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    uVar9 = *puVar7;
    local_38 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_645);
    BoolGenerator__ctor_m8A0B7467CCEEB54A42F6FD3764615E672C744CDC
              (local_38,uVar9,*(undefined8 *)StringLiteral_650,0);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    *(void **)(lVar6 + 8) = local_38;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    Il2CppCodeGenWriteBarrier((void **)(lVar6 + 8),local_38);
  }
  else {
    local_40 = *(undefined8 *)puVar1;
  }
  pBVar8 = (BoolMonitor_t016D96F6DB4D8833C53E635232FD60650D47683D *)
           il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_646);
  BoolMonitor__ctor_m88046DBDE5197393E2C4100B8D2242981356A0C7(0x3f000000,pBVar8,local_40,local_38);
  NullCheck(pLVar5);
  List_1_Add_m6B685469FA7F5DEE0FF5EBEB14E56E01CC657D6A_inline
            (pLVar5,pBVar8,*(MethodInfo **)StringLiteral_647);
  NullCheck(param_1);
  *(List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 **)((long)param_1 + 0x28) = pLVar5;
  Il2CppCodeGenWriteBarrier((void **)((long)param_1 + 0x28),pLVar5);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar3 = OVRPlugin_GetSkeleton_m21D6A984F3C35DF7EF079BC722984F504A856E34(0,(long)param_1 + 0x128,0)
  ;
  *(byte *)((long)param_1 + 0x178) = bVar3 & 1;
  bVar3 = OVRPlugin_GetSkeleton_m21D6A984F3C35DF7EF079BC722984F504A856E34(1,(long)param_1 + 0x148,0)
  ;
  *(byte *)((long)param_1 + 0x179) = bVar3 & 1;
  bVar3 = OVRPlugin_GetMesh_m41AADDFBD27DBF2B4CFB103CB8C93F00F6BA6E44(0,(long)param_1 + 0x168,0);
  *(byte *)((long)param_1 + 0x17a) = bVar3 & 1;
  bVar3 = OVRPlugin_GetMesh_m41AADDFBD27DBF2B4CFB103CB8C93F00F6BA6E44(1,(long)param_1 + 0x170,0);
  *(byte *)((long)param_1 + 0x17b) = bVar3 & 1;
  return;
}


