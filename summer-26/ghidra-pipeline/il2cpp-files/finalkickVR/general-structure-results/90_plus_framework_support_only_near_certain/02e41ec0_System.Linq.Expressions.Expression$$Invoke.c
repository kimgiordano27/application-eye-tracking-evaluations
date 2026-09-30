/*
FUNCTION_NAME: System.Linq.Expressions.Expression$$Invoke
ENTRY_POINT: 02e41ec0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_8;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_6
*/


void System_Linq_Expressions_Expression__Invoke
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               ulong *param_5)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  void **ppvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Il2CppArray *this;
  Il2CppObject *pIVar11;
  String_t *pSVar12;
  void *pvVar13;
  List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 *pLVar14;
  Il2CppObject *pIVar15;
  long unaff_x29;
  undefined4 uStack0000000000000034;
  undefined4 uStack000000000000003c;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined8 *in_stack_00000098;
  byte bStack00000000000000bf;
  undefined4 in_stack_00000128;
  undefined4 uStack000000000000012c;
  void *in_stack_00000130;
  void *in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined4 uStack0000000000000154;
  void *in_stack_00000158;
  void *in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  byte bStack000000000000017e;
  byte bStack000000000000017f;
  void *in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined4 in_stack_00000198;
  undefined4 uStack000000000000019c;
  void *in_stack_000001a0;
  void *in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined4 in_stack_000001c0;
  undefined4 uStack00000000000001c4;
  void *in_stack_000001c8;
  void *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  byte bStack00000000000001ee;
  byte bStack00000000000001ef;
  
  il2cpp_codegen_initialize_runtime_metadata(param_5);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_666);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_537);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_541);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_667);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_668);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_669);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_670);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_671);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_672);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_673);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_542);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_674);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_675);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_676);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_546);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_677);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_678);
  OVRHandTest_Update_mFBCA76276188137688FBCF72B0E9E37EEDC18F10::s_Il2CppMethodInitialized = 1;
  uStack0000000000000034 = 0;
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined4 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined1 *)(unaff_x29 + -0x51) = 0;
  *(undefined1 *)(unaff_x29 + -0x52) = 0;
  *(undefined4 *)(unaff_x29 + -0x58) = 0;
  *(undefined4 *)(unaff_x29 + -0x5c) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x30);
  NullCheck(*(void **)(unaff_x29 + -0x68));
  StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414
            (*(undefined8 *)(unaff_x29 + -0x68),uStack0000000000000034,0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            );
  uVar3 = OVRInput_GetActiveController_m1F0234F8333A98DC3F2BF49A9ECA6530139B6A65_inline
                    ((MethodInfo *)0x0);
  *(undefined4 *)(unaff_x29 + -0x6c) = uVar3;
  *(undefined4 *)(unaff_x29 + -0x14) = *(undefined4 *)(unaff_x29 + -0x6c);
  Il2CppFakeBox<int>::Il2CppFakeBox
            ((Il2CppFakeBox<int> *)(unaff_x29 + -0x88),(Il2CppClass *)*in_stack_00000050,
             (int *)(unaff_x29 + -0x14));
  uVar5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741
                    ((Il2CppFakeBox<int> *)(unaff_x29 + -0x88),0);
  *(undefined8 *)(unaff_x29 + -0x90) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x90);
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x30);
  *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x20);
  NullCheck(*(void **)(unaff_x29 + -0x98));
  uVar5 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                    (*(undefined8 *)(unaff_x29 + -0x98),*(undefined8 *)StringLiteral_542,
                     *(undefined8 *)(unaff_x29 + -0xa0),0);
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar5;
  uVar3 = OVRInput_GetConnectedControllers_m70645A9B001F6880D104D779341958174139332D_inline
                    ((MethodInfo *)0x0);
  *(undefined4 *)(unaff_x29 + -0xac) = uVar3;
  *(undefined4 *)(unaff_x29 + -0x58) = *(undefined4 *)(unaff_x29 + -0xac);
  Il2CppFakeBox<int>::Il2CppFakeBox
            ((Il2CppFakeBox<int> *)(unaff_x29 + -200),(Il2CppClass *)*in_stack_00000050,
             (int *)(unaff_x29 + -0x58));
  uVar5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741
                    ((Il2CppFakeBox<int> *)(unaff_x29 + -200),0);
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0xd0);
  *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x30);
  *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x28);
  NullCheck(*(void **)(unaff_x29 + -0xd8));
  uVar5 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                    (*(undefined8 *)(unaff_x29 + -0xd8),*(undefined8 *)StringLiteral_537,
                     *(undefined8 *)(unaff_x29 + -0xe0),0);
  *(undefined8 *)(unaff_x29 + -0xe8) = uVar5;
  *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x30);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000070);
  *(undefined8 *)(unaff_x29 + -0xf8) = *puVar6;
  NullCheck(*(void **)(unaff_x29 + -0xf0));
  uVar5 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                    (*(undefined8 *)(unaff_x29 + -0xf0),*(undefined8 *)StringLiteral_546,
                     *(undefined8 *)(unaff_x29 + -0xf8),0);
  *(undefined8 *)(unaff_x29 + -0x100) = uVar5;
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000070);
  pvVar13 = *(void **)(lVar7 + 8);
  NullCheck(pvVar13);
  BoolMonitor_Update_mACF2F700B8BEF95CC6567C0E0C30B84A4145E6A7(pvVar13,0);
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000070);
  pvVar13 = *(void **)(lVar7 + 8);
  lVar7 = *(long *)(unaff_x29 + -8);
  NullCheck(pvVar13);
  BoolMonitor_AppendToStringBuilder_mA256FEFB73B00D5A26A8E730817EA6DB7379C611
            (pvVar13,lVar7 + 0x30,0);
  pvVar13 = *(void **)(unaff_x29 + -0x28);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000070);
  *puVar6 = pvVar13;
  ppvVar8 = (void **)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000070);
  Il2CppCodeGenWriteBarrier(ppvVar8,pvVar13);
  uVar3 = OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253
                    (*(undefined4 *)(unaff_x29 + -0x14),0);
  *(ulong *)(unaff_x29 + -0x38) = CONCAT44(param_2,uVar3);
  *(undefined4 *)(unaff_x29 + -0x30) = param_3;
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000080,&stack0x00000610);
  uVar9 = Box((Il2CppClass *)*in_stack_00000080,&stack0x000005f0);
  uVar10 = Box((Il2CppClass *)*in_stack_00000080,&stack0x000005d0);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2
            (pvVar13,*(undefined8 *)StringLiteral_541,uVar5,uVar9,uVar10,0);
  uVar3 = OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F
                    (*(undefined4 *)(unaff_x29 + -0x14),0);
  *(ulong *)(unaff_x29 + -0x48) = CONCAT44(param_4,param_3);
  *(ulong *)(unaff_x29 + -0x50) = CONCAT44(param_2,uVar3);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  this = (Il2CppArray *)
         SZArrayNew(*(Il2CppClass **)
                     Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                    ,4);
  pIVar11 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000080,&stack0x00000558);
  NullCheck(this);
  ArrayElementTypeCheck(this,pIVar11);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,0,pIVar11);
  pIVar11 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000080,&stack0x00000528);
  NullCheck(this);
  ArrayElementTypeCheck(this,pIVar11);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,1,pIVar11);
  pIVar11 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000080,&stack0x000004f8);
  NullCheck(this);
  ArrayElementTypeCheck(this,pIVar11);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,2,pIVar11);
  pIVar11 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000080,&stack0x000004c8);
  NullCheck(this);
  ArrayElementTypeCheck(this,pIVar11);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,3,pIVar11);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151
            (pvVar13,*(undefined8 *)StringLiteral_536,this,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  OVRPlugin_GetHandTrackingEnabled_mA027BFA6D39F5D90DA4776E71A778513C13CDB05(0);
  uStack000000000000003c = 1;
  uVar5 = Box((Il2CppClass *)*in_stack_00000048,&stack0x000004ae);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_659,uVar5,0);
  bVar2 = OVRPlugin_GetHandState_mE2C770D20C35F76C32CF9EB09E1D7EA43A5BEAFA
                    (0xffffffff,uStack0000000000000034,*(long *)(unaff_x29 + -8) + 0x38,0);
  *(byte *)(unaff_x29 + -0x51) = bVar2 & (byte)uStack000000000000003c & (byte)uStack000000000000003c
  ;
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000048,&stack0x0000047e);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_661,uVar5,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000058,&stack0x00000450);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_664,uVar5,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000078,&stack0x000003f0);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_666,uVar5,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000090,&stack0x000003c8);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_667,uVar5,0);
  bVar2 = OVRPlugin_GetHandState_mE2C770D20C35F76C32CF9EB09E1D7EA43A5BEAFA
                    (0xffffffff,1,*(long *)(unaff_x29 + -8) + 0xb0,0);
  *(byte *)(unaff_x29 + -0x52) = bVar2 & (byte)uStack000000000000003c & (byte)uStack000000000000003c
  ;
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000048,&stack0x0000039e);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_671,uVar5,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000058,&stack0x00000370);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_675,uVar5,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000078,&stack0x00000310);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_673,uVar5,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000090,&stack0x000002e8);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_668,uVar5,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000048,&stack0x000002ce);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_662,uVar5,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000088,&stack0x000002a0);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_665,uVar5,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000098,&stack0x00000278);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_658,uVar5,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000048,&stack0x0000025e);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_677,uVar5,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000088,&stack0x00000230);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_678,uVar5,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000098,&stack0x00000208);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_676,uVar5,0);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  bStack00000000000001ef =
       *(byte *)(*(long *)(unaff_x29 + -8) + 0x17a) & (byte)uStack000000000000003c;
  bStack00000000000001ee = bStack00000000000001ef & (byte)uStack000000000000003c;
  in_stack_000001e0 = Box((Il2CppClass *)*in_stack_00000048,&stack0x000001ee);
  NullCheck(pvVar13);
  in_stack_000001d8 =
       StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                 (pvVar13,*(undefined8 *)StringLiteral_672,in_stack_000001e0,0);
  in_stack_000001d0 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  in_stack_000001c8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x168);
  NullCheck(in_stack_000001c8);
  in_stack_000001c0 = *(undefined4 *)((long)in_stack_000001c8 + 0x10);
  uStack00000000000001c4 = in_stack_000001c0;
  in_stack_000001b8 = Box((Il2CppClass *)*in_stack_00000068,&stack0x000001c0);
  NullCheck(in_stack_000001d0);
  in_stack_000001b0 =
       StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                 (in_stack_000001d0,*(undefined8 *)StringLiteral_660,in_stack_000001b8,0);
  in_stack_000001a8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  in_stack_000001a0 = *(void **)(*(long *)(unaff_x29 + -8) + 0x168);
  NullCheck(in_stack_000001a0);
  in_stack_00000198 = *(undefined4 *)((long)in_stack_000001a0 + 0x14);
  uStack000000000000019c = in_stack_00000198;
  in_stack_00000190 = Box((Il2CppClass *)*in_stack_00000098,&stack0x00000198);
  NullCheck(in_stack_000001a8);
  in_stack_00000188 =
       StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                 (in_stack_000001a8,*(undefined8 *)StringLiteral_674,in_stack_00000190,0);
  in_stack_00000180 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  bStack000000000000017f =
       *(byte *)(*(long *)(unaff_x29 + -8) + 0x17b) & (byte)uStack000000000000003c;
  bStack000000000000017e = bStack000000000000017f & 1;
  in_stack_00000170 = Box((Il2CppClass *)*in_stack_00000048,&stack0x0000017e);
  NullCheck(in_stack_00000180);
  in_stack_00000168 =
       StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                 (in_stack_00000180,*(undefined8 *)StringLiteral_663,in_stack_00000170,0);
  in_stack_00000160 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  in_stack_00000158 = *(void **)(*(long *)(unaff_x29 + -8) + 0x170);
  NullCheck(in_stack_00000158);
  in_stack_00000150 = *(undefined4 *)((long)in_stack_00000158 + 0x10);
  uStack0000000000000154 = in_stack_00000150;
  in_stack_00000148 = Box((Il2CppClass *)*in_stack_00000068,&stack0x00000150);
  NullCheck(in_stack_00000160);
  in_stack_00000140 =
       StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                 (in_stack_00000160,*(undefined8 *)StringLiteral_670,in_stack_00000148,0);
  in_stack_00000138 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  in_stack_00000130 = *(void **)(*(long *)(unaff_x29 + -8) + 0x170);
  NullCheck(in_stack_00000130);
  in_stack_00000128 = *(undefined4 *)((long)in_stack_00000130 + 0x14);
  uStack000000000000012c = in_stack_00000128;
  uVar5 = Box((Il2CppClass *)*in_stack_00000098,&stack0x00000128);
  NullCheck(in_stack_00000138);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (in_stack_00000138,*(undefined8 *)StringLiteral_669,uVar5,0);
  *(undefined4 *)(unaff_x29 + -0x5c) = 0;
  while( true ) {
    iVar1 = *(int *)(unaff_x29 + -0x5c);
    pLVar14 = *(List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 **)
               (*(long *)(unaff_x29 + -8) + 0x28);
    NullCheck(pLVar14);
    iVar4 = List_1_get_Count_mF249097114CA7862A1E68B487D7A8829C65729FA_inline
                      (pLVar14,*(MethodInfo **)StringLiteral_657);
    if (iVar4 <= iVar1) break;
    pLVar14 = *(List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 **)
               (*(long *)(unaff_x29 + -8) + 0x28);
    iVar1 = *(int *)(unaff_x29 + -0x5c);
    NullCheck(pLVar14);
    pvVar13 = (void *)List_1_get_Item_m3DFE90D48F93E68B3D5831CF96CB7FAD101B3C67
                                (pLVar14,iVar1,(MethodInfo *)*in_stack_00000060);
    NullCheck(pvVar13);
    BoolMonitor_Update_mACF2F700B8BEF95CC6567C0E0C30B84A4145E6A7(pvVar13);
    pLVar14 = *(List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 **)
               (*(long *)(unaff_x29 + -8) + 0x28);
    iVar1 = *(int *)(unaff_x29 + -0x5c);
    NullCheck(pLVar14);
    pvVar13 = (void *)List_1_get_Item_m3DFE90D48F93E68B3D5831CF96CB7FAD101B3C67
                                (pLVar14,iVar1,(MethodInfo *)*in_stack_00000060);
    lVar7 = *(long *)(unaff_x29 + -8);
    NullCheck(pvVar13);
    BoolMonitor_AppendToStringBuilder_mA256FEFB73B00D5A26A8E730817EA6DB7379C611
              (pvVar13,lVar7 + 0x30,0);
    uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x5c),1);
    *(undefined4 *)(unaff_x29 + -0x5c) = uVar3;
  }
  uVar5 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bStack00000000000000bf = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar5,0);
  bStack00000000000000bf = bStack00000000000000bf & 1;
  if (bStack00000000000000bf != 0) {
    pIVar11 = *(Il2CppObject **)(*(long *)(unaff_x29 + -8) + 0x20);
    pIVar15 = *(Il2CppObject **)(*(long *)(unaff_x29 + -8) + 0x30);
    NullCheck(pIVar15);
    pSVar12 = (String_t *)VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar15);
    NullCheck(pIVar11);
    VirtualActionInvoker1<String_t*>::Invoke(0x4b,pIVar11,pSVar12);
  }
  return;
}


