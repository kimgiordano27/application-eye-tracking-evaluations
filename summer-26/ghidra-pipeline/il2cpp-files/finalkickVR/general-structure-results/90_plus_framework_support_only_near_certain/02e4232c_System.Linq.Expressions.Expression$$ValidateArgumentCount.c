/*
FUNCTION_NAME: System.Linq.Expressions.Expression$$ValidateArgumentCount
ENTRY_POINT: 02e4232c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 157
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


void System_Linq_Expressions_Expression__ValidateArgumentCount
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  Il2CppArray *this;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  String_t *pSVar6;
  void *pvVar7;
  long lVar8;
  List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 *pLVar9;
  Il2CppObject *pIVar10;
  long unaff_x29;
  undefined4 uVar11;
  undefined8 in_stack_00000030;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
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
  
  uVar11 = OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F
                     (*(undefined4 *)(unaff_x29 + -0x14));
  *(ulong *)(unaff_x29 + -0x48) = CONCAT44(param_4,param_3);
  *(ulong *)(unaff_x29 + -0x50) = CONCAT44(param_2,uVar11);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  this = (Il2CppArray *)
         SZArrayNew(*(Il2CppClass **)
                     Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                    ,4);
  pIVar4 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000080,&stack0x00000558);
  NullCheck(this);
  ArrayElementTypeCheck(this,pIVar4);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,0,pIVar4);
  pIVar4 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000080,&stack0x00000528);
  NullCheck(this);
  ArrayElementTypeCheck(this,pIVar4);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,1,pIVar4);
  pIVar4 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000080,&stack0x000004f8);
  NullCheck(this);
  ArrayElementTypeCheck(this,pIVar4);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,2,pIVar4);
  pIVar4 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000080,&stack0x000004c8);
  NullCheck(this);
  ArrayElementTypeCheck(this,pIVar4);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,3,pIVar4);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151
            (pvVar7,*(undefined8 *)StringLiteral_536,this,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  OVRPlugin_GetHandTrackingEnabled_mA027BFA6D39F5D90DA4776E71A778513C13CDB05(in_stack_00000040);
  uStack000000000000003c = 1;
  uVar5 = Box((Il2CppClass *)*in_stack_00000048,&stack0x000004ae);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_659,uVar5,in_stack_00000040);
  bVar2 = OVRPlugin_GetHandState_mE2C770D20C35F76C32CF9EB09E1D7EA43A5BEAFA
                    (0xffffffff,in_stack_00000030._4_4_,*(long *)(unaff_x29 + -8) + 0x38,
                     in_stack_00000040);
  *(byte *)(unaff_x29 + -0x51) = bVar2 & (byte)uStack000000000000003c & (byte)uStack000000000000003c
  ;
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000048,&stack0x0000047e);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_661,uVar5,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000058,&stack0x00000450);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_664,uVar5,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000078,&stack0x000003f0);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_666,uVar5,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000090,&stack0x000003c8);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_667,uVar5,in_stack_00000040);
  bVar2 = OVRPlugin_GetHandState_mE2C770D20C35F76C32CF9EB09E1D7EA43A5BEAFA
                    (0xffffffff,1,*(long *)(unaff_x29 + -8) + 0xb0,in_stack_00000040);
  *(byte *)(unaff_x29 + -0x52) = bVar2 & (byte)uStack000000000000003c & (byte)uStack000000000000003c
  ;
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000048,&stack0x0000039e);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_671,uVar5,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000058,&stack0x00000370);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_675,uVar5,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000078,&stack0x00000310);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_673,uVar5,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000090,&stack0x000002e8);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_668,uVar5,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000048,&stack0x000002ce);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_662,uVar5,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000088,&stack0x000002a0);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_665,uVar5,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000098,&stack0x00000278);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_658,uVar5,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000048,&stack0x0000025e);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_677,uVar5,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000088,&stack0x00000230);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_678,uVar5,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar5 = Box((Il2CppClass *)*in_stack_00000098,&stack0x00000208);
  NullCheck(pvVar7);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar7,*(undefined8 *)StringLiteral_676,uVar5,in_stack_00000040);
  pvVar7 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  bStack00000000000001ef =
       *(byte *)(*(long *)(unaff_x29 + -8) + 0x17a) & (byte)uStack000000000000003c;
  bStack00000000000001ee = bStack00000000000001ef & (byte)uStack000000000000003c;
  in_stack_000001e0 = Box((Il2CppClass *)*in_stack_00000048,&stack0x000001ee);
  NullCheck(pvVar7);
  in_stack_000001d8 =
       StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                 (pvVar7,*(undefined8 *)StringLiteral_672,in_stack_000001e0,in_stack_00000040);
  in_stack_000001d0 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  in_stack_000001c8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x168);
  NullCheck(in_stack_000001c8);
  in_stack_000001c0 = *(undefined4 *)((long)in_stack_000001c8 + 0x10);
  uStack00000000000001c4 = in_stack_000001c0;
  in_stack_000001b8 = Box((Il2CppClass *)*in_stack_00000068,&stack0x000001c0);
  NullCheck(in_stack_000001d0);
  in_stack_000001b0 =
       StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                 (in_stack_000001d0,*(undefined8 *)StringLiteral_660,in_stack_000001b8,
                  in_stack_00000040);
  in_stack_000001a8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  in_stack_000001a0 = *(void **)(*(long *)(unaff_x29 + -8) + 0x168);
  NullCheck(in_stack_000001a0);
  in_stack_00000198 = *(undefined4 *)((long)in_stack_000001a0 + 0x14);
  uStack000000000000019c = in_stack_00000198;
  in_stack_00000190 = Box((Il2CppClass *)*in_stack_00000098,&stack0x00000198);
  NullCheck(in_stack_000001a8);
  in_stack_00000188 =
       StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                 (in_stack_000001a8,*(undefined8 *)StringLiteral_674,in_stack_00000190,
                  in_stack_00000040);
  in_stack_00000180 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  bStack000000000000017f =
       *(byte *)(*(long *)(unaff_x29 + -8) + 0x17b) & (byte)uStack000000000000003c;
  bStack000000000000017e = bStack000000000000017f & 1;
  in_stack_00000170 = Box((Il2CppClass *)*in_stack_00000048,&stack0x0000017e);
  NullCheck(in_stack_00000180);
  in_stack_00000168 =
       StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                 (in_stack_00000180,*(undefined8 *)StringLiteral_663,in_stack_00000170,
                  in_stack_00000040);
  in_stack_00000160 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  in_stack_00000158 = *(void **)(*(long *)(unaff_x29 + -8) + 0x170);
  NullCheck(in_stack_00000158);
  in_stack_00000150 = *(undefined4 *)((long)in_stack_00000158 + 0x10);
  uStack0000000000000154 = in_stack_00000150;
  in_stack_00000148 = Box((Il2CppClass *)*in_stack_00000068,&stack0x00000150);
  NullCheck(in_stack_00000160);
  in_stack_00000140 =
       StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                 (in_stack_00000160,*(undefined8 *)StringLiteral_670,in_stack_00000148,
                  in_stack_00000040);
  in_stack_00000138 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  in_stack_00000130 = *(void **)(*(long *)(unaff_x29 + -8) + 0x170);
  NullCheck(in_stack_00000130);
  in_stack_00000128 = *(undefined4 *)((long)in_stack_00000130 + 0x14);
  uStack000000000000012c = in_stack_00000128;
  uVar5 = Box((Il2CppClass *)*in_stack_00000098,&stack0x00000128);
  NullCheck(in_stack_00000138);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (in_stack_00000138,*(undefined8 *)StringLiteral_669,uVar5,in_stack_00000040);
  *(undefined4 *)(unaff_x29 + -0x5c) = 0;
  while( true ) {
    iVar1 = *(int *)(unaff_x29 + -0x5c);
    pLVar9 = *(List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 **)
              (*(long *)(unaff_x29 + -8) + 0x28);
    NullCheck(pLVar9);
    iVar3 = List_1_get_Count_mF249097114CA7862A1E68B487D7A8829C65729FA_inline
                      (pLVar9,*(MethodInfo **)StringLiteral_657);
    if (iVar3 <= iVar1) break;
    pLVar9 = *(List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 **)
              (*(long *)(unaff_x29 + -8) + 0x28);
    iVar1 = *(int *)(unaff_x29 + -0x5c);
    NullCheck(pLVar9);
    pvVar7 = (void *)List_1_get_Item_m3DFE90D48F93E68B3D5831CF96CB7FAD101B3C67
                               (pLVar9,iVar1,(MethodInfo *)*in_stack_00000060);
    NullCheck(pvVar7);
    BoolMonitor_Update_mACF2F700B8BEF95CC6567C0E0C30B84A4145E6A7(pvVar7);
    pLVar9 = *(List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 **)
              (*(long *)(unaff_x29 + -8) + 0x28);
    iVar1 = *(int *)(unaff_x29 + -0x5c);
    NullCheck(pLVar9);
    pvVar7 = (void *)List_1_get_Item_m3DFE90D48F93E68B3D5831CF96CB7FAD101B3C67
                               (pLVar9,iVar1,(MethodInfo *)*in_stack_00000060);
    lVar8 = *(long *)(unaff_x29 + -8);
    NullCheck(pvVar7);
    BoolMonitor_AppendToStringBuilder_mA256FEFB73B00D5A26A8E730817EA6DB7379C611
              (pvVar7,lVar8 + 0x30,0);
    uVar11 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x5c),1);
    *(undefined4 *)(unaff_x29 + -0x5c) = uVar11;
  }
  uVar5 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bStack00000000000000bf = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar5,0);
  bStack00000000000000bf = bStack00000000000000bf & 1;
  if (bStack00000000000000bf != 0) {
    pIVar4 = *(Il2CppObject **)(*(long *)(unaff_x29 + -8) + 0x20);
    pIVar10 = *(Il2CppObject **)(*(long *)(unaff_x29 + -8) + 0x30);
    NullCheck(pIVar10);
    pSVar6 = (String_t *)VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar10);
    NullCheck(pIVar4);
    VirtualActionInvoker1<String_t*>::Invoke(0x4b,pIVar4,pSVar6);
  }
  return;
}


