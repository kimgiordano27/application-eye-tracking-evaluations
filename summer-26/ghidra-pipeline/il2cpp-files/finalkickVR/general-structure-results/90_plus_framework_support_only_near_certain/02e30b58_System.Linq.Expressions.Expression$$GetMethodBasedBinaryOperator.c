/*
FUNCTION_NAME: System.Linq.Expressions.Expression$$GetMethodBasedBinaryOperator
ENTRY_POINT: 02e30b58
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 137
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void System_Linq_Expressions_Expression__GetMethodBasedBinaryOperator
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  void **ppvVar8;
  Il2CppArray *this;
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  String_t *pSVar12;
  void *pvVar13;
  List_1_t6713364AF2262532B9BD417C4BA3FAFE042D49DE *pLVar14;
  Il2CppObject *pIVar15;
  long unaff_x29;
  undefined8 in_stack_00000008;
  int *in_stack_00000010;
  int *piStack0000000000000020;
  undefined4 uStack000000000000003c;
  MethodInfo *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  byte bStack000000000000008f;
  undefined4 in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  void *in_stack_00000100;
  undefined4 uStack000000000000010c;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined4 uStack0000000000000124;
  void *in_stack_00000128;
  undefined4 uStack0000000000000134;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 uStack000000000000014c;
  undefined8 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined4 uStack000000000000016c;
  undefined8 in_stack_00000170;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000190;
  undefined4 in_stack_00000198;
  void *in_stack_000001a0;
  undefined4 uStack00000000000001ac;
  undefined4 in_stack_000001b0;
  undefined4 uStack00000000000001b4;
  undefined8 in_stack_000001b8;
  undefined4 in_stack_000001c0;
  undefined4 uStack00000000000001c4;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 in_stack_000001d8;
  undefined4 uStack00000000000001dc;
  undefined8 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  
  *(undefined4 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined4 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined4 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined4 *)(unaff_x29 + -0x88) = 0;
  *(undefined4 *)(unaff_x29 + -0x94) = 0;
  *(undefined4 *)(unaff_x29 + -0x98) = 0;
  piStack0000000000000020 = (int *)(unaff_x29 + -0x9c);
  *(undefined4 *)(unaff_x29 + -0x9c) = 0;
  *(undefined4 *)(unaff_x29 + -0xa0) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            );
  uVar3 = OVRInput_GetActiveController_m1F0234F8333A98DC3F2BF49A9ECA6530139B6A65_inline
                    (in_stack_00000040);
  *(undefined4 *)(unaff_x29 + -0xa4) = uVar3;
  *(undefined4 *)(unaff_x29 + -0x14) = *(undefined4 *)(unaff_x29 + -0xa4);
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x30);
  NullCheck(*(void **)(unaff_x29 + -0xb0));
  StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414
            (*(undefined8 *)(unaff_x29 + -0xb0),in_stack_00000008._4_4_,in_stack_00000040);
  uVar2 = OVRInput_GetControllerBatteryPercentRemaining_m71749CA732247A262C0274C88BCE39BE6F48FF08
                    (0x80000000,in_stack_00000040);
  *(undefined1 *)(unaff_x29 + -0xb1) = uVar2;
  *(undefined1 *)(unaff_x29 + -0x15) = *(undefined1 *)(unaff_x29 + -0xb1);
  *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x30);
  *(undefined1 *)(unaff_x29 + -0xc1) = *(undefined1 *)(unaff_x29 + -0x15);
  *(undefined1 *)(unaff_x29 + -0xc2) = *(undefined1 *)(unaff_x29 + -0xc1);
  uVar5 = Box(*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__,
              (void *)(unaff_x29 + -0xc2));
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar5;
  NullCheck(*(void **)(unaff_x29 + -0xc0));
  uVar5 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                    (*(undefined8 *)(unaff_x29 + -0xc0),*(undefined8 *)StringLiteral_535,
                     *(undefined8 *)(unaff_x29 + -0xd0),in_stack_00000040);
  *(undefined8 *)(unaff_x29 + -0xd8) = uVar5;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = OVRPlugin_GetAppFramerate_mCA873E5D8A4530857583F99C9DD9AD301A415742(in_stack_00000040);
  *(undefined4 *)(unaff_x29 + -0xdc) = uVar3;
  *(undefined4 *)(unaff_x29 + -0x1c) = *(undefined4 *)(unaff_x29 + -0xdc);
  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x30);
  *(undefined4 *)(unaff_x29 + -0xec) = *(undefined4 *)(unaff_x29 + -0x1c);
  *(undefined4 *)(unaff_x29 + -0xf0) = *(undefined4 *)(unaff_x29 + -0xec);
  uVar5 = Box((Il2CppClass *)*in_stack_00000068,(void *)(unaff_x29 + -0xf0));
  *(undefined8 *)(unaff_x29 + -0xf8) = uVar5;
  NullCheck(*(void **)(unaff_x29 + -0xe8));
  uVar5 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                    (*(undefined8 *)(unaff_x29 + -0xe8),*(undefined8 *)StringLiteral_538,
                     *(undefined8 *)(unaff_x29 + -0xf8),in_stack_00000040);
  *(undefined8 *)(unaff_x29 + -0x100) = uVar5;
  Il2CppFakeBox<int>::Il2CppFakeBox
            ((Il2CppFakeBox<int> *)&stack0x000005a8,(Il2CppClass *)*in_stack_00000050,
             in_stack_00000010);
  uVar5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741
                    ((Il2CppFakeBox<int> *)&stack0x000005a8,in_stack_00000040);
  *(undefined8 *)(unaff_x29 + -0x28) = uVar5;
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x28);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_542,uVar5,in_stack_00000040);
  uVar3 = OVRInput_GetConnectedControllers_m70645A9B001F6880D104D779341958174139332D_inline
                    (in_stack_00000040);
  *(undefined4 *)(unaff_x29 + -0x9c) = uVar3;
  Il2CppFakeBox<int>::Il2CppFakeBox
            ((Il2CppFakeBox<int> *)&stack0x00000568,(Il2CppClass *)*in_stack_00000050,
             piStack0000000000000020);
  uVar5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741
                    ((Il2CppFakeBox<int> *)&stack0x00000568,in_stack_00000040);
  *(undefined8 *)(unaff_x29 + -0x30) = uVar5;
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x30);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_537,uVar5,in_stack_00000040);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  uVar5 = *puVar6;
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar13,*(undefined8 *)StringLiteral_546,uVar5,in_stack_00000040);
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  pvVar13 = *(void **)(lVar7 + 8);
  NullCheck(pvVar13);
  BoolMonitor_Update_m8FDD0C6A9AAAD8BF1AE8F46C2FDF85222D804DBE(pvVar13,in_stack_00000040);
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  pvVar13 = *(void **)(lVar7 + 8);
  lVar7 = *(long *)(unaff_x29 + -8);
  NullCheck(pvVar13);
  BoolMonitor_AppendToStringBuilder_mAC4CE128E241C2C710CFB148225B098A73FC9254
            (pvVar13,lVar7 + 0x30,in_stack_00000040);
  pvVar13 = *(void **)(unaff_x29 + -0x30);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  *puVar6 = pvVar13;
  ppvVar8 = (void **)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000060);
  Il2CppCodeGenWriteBarrier(ppvVar8,pvVar13);
  uVar3 = OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F
                    (*(undefined4 *)(unaff_x29 + -0x14),in_stack_00000040);
  *(ulong *)(unaff_x29 + -0x38) = CONCAT44(param_4,param_3);
  *(ulong *)(unaff_x29 + -0x40) = CONCAT44(param_2,uVar3);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uStack000000000000003c = 4;
  this = (Il2CppArray *)
         SZArrayNew(*(Il2CppClass **)
                     Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                    ,4);
  pIVar9 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000068,&stack0x000004a8);
  NullCheck(this);
  ArrayElementTypeCheck(this,pIVar9);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,0,pIVar9);
  pIVar9 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000068,&stack0x00000478);
  NullCheck(this);
  ArrayElementTypeCheck(this,pIVar9);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,1,pIVar9);
  pIVar9 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000068,&stack0x00000448);
  NullCheck(this);
  ArrayElementTypeCheck(this,pIVar9);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,2,pIVar9);
  pIVar9 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000068,&stack0x00000418);
  NullCheck(this);
  ArrayElementTypeCheck(this,pIVar9);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,3,pIVar9);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151
            (pvVar13,*(undefined8 *)StringLiteral_536,this,in_stack_00000040);
  OVRInput_GetLocalControllerAngularVelocity_m4A05C6F3F878F119AEB2E5222154B773C3FE8F24
            (*(undefined4 *)(unaff_x29 + -0x14),in_stack_00000040);
  *(undefined8 *)(unaff_x29 + -0x50) = in_stack_00000048[0x48];
  *(undefined4 *)(unaff_x29 + -0x48) = param_3;
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000068,&stack0x000003c8);
  uVar10 = Box((Il2CppClass *)*in_stack_00000068,&stack0x000003a8);
  uVar11 = Box((Il2CppClass *)*in_stack_00000068,&stack0x00000388);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2
            (pvVar13,*(undefined8 *)StringLiteral_545,uVar5,uVar10,uVar11,in_stack_00000040);
  OVRInput_GetLocalControllerAngularAcceleration_mEF0691E48437D9A49899E17BA2F5501DDDF9E762
            (*(undefined4 *)(unaff_x29 + -0x14),in_stack_00000040);
  *(undefined8 *)(unaff_x29 + -0x60) = in_stack_00000048[0x36];
  *(undefined4 *)(unaff_x29 + -0x58) = param_3;
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000068,&stack0x00000338);
  uVar10 = Box((Il2CppClass *)*in_stack_00000068,&stack0x00000318);
  uVar11 = Box((Il2CppClass *)*in_stack_00000068,&stack0x000002f8);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2
            (pvVar13,*(undefined8 *)StringLiteral_539,uVar5,uVar10,uVar11,in_stack_00000040);
  OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253
            (*(undefined4 *)(unaff_x29 + -0x14),in_stack_00000040);
  *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000048[0x24];
  *(undefined4 *)(unaff_x29 + -0x68) = param_3;
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000068,&stack0x000002a8);
  uVar10 = Box((Il2CppClass *)*in_stack_00000068,&stack0x00000288);
  uVar11 = Box((Il2CppClass *)*in_stack_00000068,&stack0x00000268);
  NullCheck(pvVar13);
  StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2
            (pvVar13,*(undefined8 *)StringLiteral_541,uVar5,uVar10,uVar11,in_stack_00000040);
  OVRInput_GetLocalControllerVelocity_m2E8ED9F38FCB0E781C796E72917D27F65A3EFF14
            (*(undefined4 *)(unaff_x29 + -0x14),in_stack_00000040);
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000048[0x12];
  *(undefined4 *)(unaff_x29 + -0x78) = param_3;
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000068,&stack0x00000218);
  uVar10 = Box((Il2CppClass *)*in_stack_00000068,&stack0x000001f8);
  in_stack_000001e0 = *(undefined8 *)(unaff_x29 + -0x80);
  in_stack_000001d8 = *(undefined4 *)(unaff_x29 + -0x78);
  uStack00000000000001dc = in_stack_000001d8;
  in_stack_000001e8 = in_stack_000001d8;
  in_stack_000001d0 = Box((Il2CppClass *)*in_stack_00000068,&stack0x000001d8);
  NullCheck(pvVar13);
  in_stack_000001c8 =
       StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2
                 (pvVar13,*(undefined8 *)StringLiteral_544,uVar5,uVar10,in_stack_000001d0,
                  in_stack_00000040);
  uStack00000000000001c4 = *(undefined4 *)(unaff_x29 + -0x14);
  uStack00000000000001ac =
       OVRInput_GetLocalControllerAcceleration_m89D4A94FC2E1282CED140A6BC5D54527B1E98ECD
                 (uStack00000000000001c4,in_stack_00000040);
  in_stack_000001b8 = *in_stack_00000048;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000001b8;
  *(undefined4 *)(unaff_x29 + -0x88) = param_3;
  in_stack_000001a0 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  _uStack0000000000000190 = *(undefined8 *)(unaff_x29 + -0x90);
  in_stack_00000198 = *(undefined4 *)(unaff_x29 + -0x88);
  uStack000000000000018c = uStack0000000000000190;
  in_stack_00000188 = uStack0000000000000190;
  in_stack_000001b0 = param_2;
  uStack00000000000001b4 = param_3;
  in_stack_000001c0 = param_3;
  in_stack_00000180 = Box((Il2CppClass *)*in_stack_00000068,&stack0x00000188);
  in_stack_00000178 = *(undefined4 *)(unaff_x29 + -0x88);
  in_stack_00000170._4_4_ = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x90) >> 0x20);
  uStack000000000000016c = in_stack_00000170._4_4_;
  in_stack_00000168 = in_stack_00000170._4_4_;
  in_stack_00000170 = *(undefined8 *)(unaff_x29 + -0x90);
  in_stack_00000160 = Box((Il2CppClass *)*in_stack_00000068,&stack0x00000168);
  in_stack_00000150 = *(undefined8 *)(unaff_x29 + -0x90);
  in_stack_00000148 = *(undefined4 *)(unaff_x29 + -0x88);
  uStack000000000000014c = in_stack_00000148;
  in_stack_00000158 = in_stack_00000148;
  in_stack_00000140 = Box((Il2CppClass *)*in_stack_00000068,&stack0x00000148);
  NullCheck(in_stack_000001a0);
  in_stack_00000138 =
       StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2
                 (in_stack_000001a0,*(undefined8 *)StringLiteral_540,in_stack_00000180,
                  in_stack_00000160,in_stack_00000140,in_stack_00000040);
  uStack0000000000000134 = OVRSimpleJSON_JSONNode__get_Value(1,0x80000000,in_stack_00000040);
  *(undefined4 *)(unaff_x29 + -0x94) = uStack0000000000000134;
  in_stack_00000128 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  in_stack_00000120 = *(undefined4 *)(unaff_x29 + -0x94);
  uStack0000000000000124 = in_stack_00000120;
  in_stack_00000118 = Box((Il2CppClass *)*in_stack_00000068,&stack0x00000120);
  NullCheck(in_stack_00000128);
  in_stack_00000110 =
       StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                 (in_stack_00000128,*(undefined8 *)StringLiteral_543,in_stack_00000118,
                  in_stack_00000040);
  uStack000000000000010c =
       OVRSimpleJSON_JSONNode__get_Value(uStack000000000000003c,0x80000000,in_stack_00000040);
  *(undefined4 *)(unaff_x29 + -0x98) = uStack000000000000010c;
  in_stack_00000100 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  in_stack_000000f8 = *(undefined4 *)(unaff_x29 + -0x98);
  uStack00000000000000fc = in_stack_000000f8;
  uVar5 = Box((Il2CppClass *)*in_stack_00000068,&stack0x000000f8);
  NullCheck(in_stack_00000100);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (in_stack_00000100,*(undefined8 *)StringLiteral_534,uVar5,in_stack_00000040);
  *(undefined4 *)(unaff_x29 + -0xa0) = 0;
  while( true ) {
    iVar1 = *(int *)(unaff_x29 + -0xa0);
    pLVar14 = *(List_1_t6713364AF2262532B9BD417C4BA3FAFE042D49DE **)
               (*(long *)(unaff_x29 + -8) + 0x28);
    NullCheck(pLVar14);
    iVar4 = List_1_get_Count_m7A8A86B2A7AAFD5364696673958E1865D5E5CC57_inline
                      (pLVar14,*(MethodInfo **)StringLiteral_533);
    if (iVar4 <= iVar1) break;
    pLVar14 = *(List_1_t6713364AF2262532B9BD417C4BA3FAFE042D49DE **)
               (*(long *)(unaff_x29 + -8) + 0x28);
    iVar1 = *(int *)(unaff_x29 + -0xa0);
    NullCheck(pLVar14);
    pvVar13 = (void *)List_1_get_Item_m5EBEB3919F9BFAD2E9465B74A2F1BB944D0B4559
                                (pLVar14,iVar1,(MethodInfo *)*in_stack_00000058);
    NullCheck(pvVar13);
    BoolMonitor_Update_m8FDD0C6A9AAAD8BF1AE8F46C2FDF85222D804DBE(pvVar13);
    pLVar14 = *(List_1_t6713364AF2262532B9BD417C4BA3FAFE042D49DE **)
               (*(long *)(unaff_x29 + -8) + 0x28);
    iVar1 = *(int *)(unaff_x29 + -0xa0);
    NullCheck(pLVar14);
    pvVar13 = (void *)List_1_get_Item_m5EBEB3919F9BFAD2E9465B74A2F1BB944D0B4559
                                (pLVar14,iVar1,(MethodInfo *)*in_stack_00000058);
    lVar7 = *(long *)(unaff_x29 + -8);
    NullCheck(pvVar13);
    BoolMonitor_AppendToStringBuilder_mAC4CE128E241C2C710CFB148225B098A73FC9254
              (pvVar13,lVar7 + 0x30,0);
    uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0xa0),1);
    *(undefined4 *)(unaff_x29 + -0xa0) = uVar3;
  }
  uVar5 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bStack000000000000008f = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar5,0);
  bStack000000000000008f = bStack000000000000008f & 1;
  if (bStack000000000000008f != 0) {
    pIVar9 = *(Il2CppObject **)(*(long *)(unaff_x29 + -8) + 0x20);
    pIVar15 = *(Il2CppObject **)(*(long *)(unaff_x29 + -8) + 0x30);
    NullCheck(pIVar15);
    pSVar12 = (String_t *)VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar15);
    NullCheck(pIVar9);
    VirtualActionInvoker1<String_t*>::Invoke(0x4b,pIVar9,pSVar12);
  }
  return;
}


