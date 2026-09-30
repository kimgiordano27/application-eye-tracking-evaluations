/*
FUNCTION_NAME: System.Linq.Expressions.Expression$$ValidateCallInstanceType
ENTRY_POINT: 02e41664
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Linq_Expressions_Expression__ValidateCallInstanceType(ulong *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  BoolMonitor_t016D96F6DB4D8833C53E635232FD60650D47683D *pBVar6;
  long unaff_x29;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000014;
  undefined8 *in_stack_00000028;
  ulong *in_stack_00000030;
  ulong *in_stack_00000038;
  byte bStack0000000000000057;
  byte bStack0000000000000067;
  byte bStack0000000000000077;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_646);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_647);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_648);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_649);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_set_Item__
            );
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_650);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000030);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000038);
  OVRHandTest_Start_m66D071E04E14EF84948D2B88B18314FECF3891C1::s_Il2CppMethodInitialized = 1;
  in_stack_00000028[0xc] = 0;
  in_stack_00000028[0xb] = 0;
  in_stack_00000028[10] = 0;
  in_stack_00000028[9] = 0;
  in_stack_00000028[8] = 0;
  in_stack_00000028[7] = 0;
  in_stack_00000028[6] = 0;
  in_stack_00000028[5] = 0;
  in_stack_00000028[4] = 0;
  in_stack_00000028[3] = 0;
  in_stack_00000028[2] = *(undefined8 *)(in_stack_00000028[0xe] + 0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(in_stack_00000028[2],0);
  *(byte *)(unaff_x29 + -0x69) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x69) & 1) != 0) {
    *in_stack_00000028 = *(undefined8 *)(in_stack_00000028[0xe] + 0x20);
    NullCheck((void *)*in_stack_00000028);
    Text_set_supportRichText_mB4DB141150AEBCCADEFFF4EC7A799F85FD075265(*in_stack_00000028,0,0);
  }
  uVar2 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_set_Item__
                    );
  *(undefined8 *)(unaff_x29 + -0x80) = uVar2;
  StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5
            (*(undefined8 *)(unaff_x29 + -0x80),0x800,0);
  *(undefined8 *)(in_stack_00000028[0xe] + 0x30) = *(undefined8 *)(unaff_x29 + -0x80);
  Il2CppCodeGenWriteBarrier((void **)(in_stack_00000028[0xe] + 0x30),*(void **)(unaff_x29 + -0x80));
  uVar2 = il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_649);
  *(undefined8 *)(unaff_x29 + -0x88) = uVar2;
  List_1__ctor_mCD6E59E2023C98FAB218E5420BC0BC39DA1B23C4
            (*(List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 **)(unaff_x29 + -0x88),
             *(MethodInfo **)StringLiteral_648);
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x88);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(lVar3 + 8);
  if (*(long *)(unaff_x29 + -0x98) == 0) {
    in_stack_00000028[7] = 0;
    in_stack_00000028[6] = *in_stack_00000038;
    in_stack_00000028[5] = *(undefined8 *)(unaff_x29 + -0x90);
    in_stack_00000028[4] = *(undefined8 *)(unaff_x29 + -0x90);
    in_stack_00000028[3] = in_stack_00000028[0xe];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
    uVar2 = *puVar4;
    pvVar5 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_645);
    BoolGenerator__ctor_m8A0B7467CCEEB54A42F6FD3764615E672C744CDC
              (pvVar5,uVar2,*(undefined8 *)StringLiteral_650,0);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
    *(void **)(lVar3 + 8) = pvVar5;
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
    Il2CppCodeGenWriteBarrier((void **)(lVar3 + 8),pvVar5);
    in_stack_00000028[0xc] = pvVar5;
    in_stack_00000028[0xb] = in_stack_00000028[6];
    in_stack_00000028[10] = in_stack_00000028[5];
    in_stack_00000028[9] = in_stack_00000028[4];
    in_stack_00000028[8] = in_stack_00000028[3];
  }
  else {
    in_stack_00000028[0xc] = *(long *)(unaff_x29 + -0x98);
    in_stack_00000028[0xb] = *in_stack_00000038;
    in_stack_00000028[10] = *(undefined8 *)(unaff_x29 + -0x90);
    in_stack_00000028[9] = *(undefined8 *)(unaff_x29 + -0x90);
    in_stack_00000028[8] = in_stack_00000028[0xe];
  }
  pBVar6 = (BoolMonitor_t016D96F6DB4D8833C53E635232FD60650D47683D *)
           il2cpp_codegen_object_new(*(Il2CppClass **)StringLiteral_646);
  BoolMonitor__ctor_m88046DBDE5197393E2C4100B8D2242981356A0C7
            (0x3f000000,pBVar6,in_stack_00000028[0xb],in_stack_00000028[0xc]);
  NullCheck((void *)in_stack_00000028[10]);
  List_1_Add_m6B685469FA7F5DEE0FF5EBEB14E56E01CC657D6A_inline
            ((List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 *)in_stack_00000028[10],pBVar6,
             *(MethodInfo **)StringLiteral_647);
  NullCheck((void *)in_stack_00000028[8]);
  *(undefined8 *)(in_stack_00000028[8] + 0x28) = in_stack_00000028[9];
  Il2CppCodeGenWriteBarrier((void **)(in_stack_00000028[8] + 0x28),(void *)in_stack_00000028[9]);
  lVar3 = in_stack_00000028[0xe];
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uStack0000000000000004 = 0;
  bStack0000000000000077 =
       OVRPlugin_GetSkeleton_m21D6A984F3C35DF7EF079BC722984F504A856E34(0,lVar3 + 0x128,0);
  uStack0000000000000014 = 1;
  bStack0000000000000077 = bStack0000000000000077 & 1;
  *(byte *)(in_stack_00000028[0xe] + 0x178) = bStack0000000000000077;
  bStack0000000000000067 =
       OVRPlugin_GetSkeleton_m21D6A984F3C35DF7EF079BC722984F504A856E34
                 (1,in_stack_00000028[0xe] + 0x148,0);
  bStack0000000000000067 = bStack0000000000000067 & (byte)uStack0000000000000014;
  *(byte *)(in_stack_00000028[0xe] + 0x179) = bStack0000000000000067 & (byte)uStack0000000000000014;
  bStack0000000000000057 =
       OVRPlugin_GetMesh_m41AADDFBD27DBF2B4CFB103CB8C93F00F6BA6E44
                 (uStack0000000000000004,in_stack_00000028[0xe] + 0x168,0);
  bStack0000000000000057 = bStack0000000000000057 & (byte)uStack0000000000000014;
  *(byte *)(in_stack_00000028[0xe] + 0x17a) = bStack0000000000000057 & (byte)uStack0000000000000014;
  bVar1 = OVRPlugin_GetMesh_m41AADDFBD27DBF2B4CFB103CB8C93F00F6BA6E44
                    (1,in_stack_00000028[0xe] + 0x170,0);
  *(byte *)(in_stack_00000028[0xe] + 0x17b) = bVar1 & (byte)uStack0000000000000014 & 1;
  return;
}


