/*
FUNCTION_NAME: System.Linq.Expressions.Expression$$Invoke
ENTRY_POINT: 02e42420
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_6
*/


void System_Linq_Expressions_Expression__Invoke(void)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  Il2CppObject *pIVar5;
  undefined8 uVar6;
  String_t *pSVar7;
  void *pvVar8;
  long lVar9;
  List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 *pLVar10;
  Il2CppObject *pIVar11;
  long unaff_x29;
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
  Il2CppObject *in_stack_00000520;
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *in_stack_00000548;
  void *in_stack_00000588;
  
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
            (in_stack_00000548,1,in_stack_00000520);
  pIVar5 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000080,&stack0x000004f8);
  NullCheck(in_stack_00000548);
  ArrayElementTypeCheck((Il2CppArray *)in_stack_00000548,pIVar5);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt(in_stack_00000548,2,pIVar5);
  pIVar5 = (Il2CppObject *)Box((Il2CppClass *)*in_stack_00000080,&stack0x000004c8);
  NullCheck(in_stack_00000548);
  ArrayElementTypeCheck((Il2CppArray *)in_stack_00000548,pIVar5);
  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt(in_stack_00000548,3,pIVar5);
  NullCheck(in_stack_00000588);
  StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151
            (in_stack_00000588,*(undefined8 *)StringLiteral_536,in_stack_00000548,in_stack_00000040)
  ;
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  OVRPlugin_GetHandTrackingEnabled_mA027BFA6D39F5D90DA4776E71A778513C13CDB05(in_stack_00000040);
  uStack000000000000003c = 1;
  uVar6 = Box((Il2CppClass *)*in_stack_00000048,&stack0x000004ae);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_659,uVar6,in_stack_00000040);
  bVar2 = OVRPlugin_GetHandState_mE2C770D20C35F76C32CF9EB09E1D7EA43A5BEAFA
                    (0xffffffff,in_stack_00000030._4_4_,*(long *)(unaff_x29 + -8) + 0x38,
                     in_stack_00000040);
  *(byte *)(unaff_x29 + -0x51) = bVar2 & (byte)uStack000000000000003c & (byte)uStack000000000000003c
  ;
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000048,&stack0x0000047e);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_661,uVar6,in_stack_00000040);
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000058,&stack0x00000450);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_664,uVar6,in_stack_00000040);
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000078,&stack0x000003f0);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_666,uVar6,in_stack_00000040);
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000090,&stack0x000003c8);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_667,uVar6,in_stack_00000040);
  bVar2 = OVRPlugin_GetHandState_mE2C770D20C35F76C32CF9EB09E1D7EA43A5BEAFA
                    (0xffffffff,1,*(long *)(unaff_x29 + -8) + 0xb0,in_stack_00000040);
  *(byte *)(unaff_x29 + -0x52) = bVar2 & (byte)uStack000000000000003c & (byte)uStack000000000000003c
  ;
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000048,&stack0x0000039e);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_671,uVar6,in_stack_00000040);
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000058,&stack0x00000370);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_675,uVar6,in_stack_00000040);
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000078,&stack0x00000310);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_673,uVar6,in_stack_00000040);
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000090,&stack0x000002e8);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_668,uVar6,in_stack_00000040);
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000048,&stack0x000002ce);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_662,uVar6,in_stack_00000040);
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000088,&stack0x000002a0);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_665,uVar6,in_stack_00000040);
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000098,&stack0x00000278);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_658,uVar6,in_stack_00000040);
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000048,&stack0x0000025e);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_677,uVar6,in_stack_00000040);
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000088,&stack0x00000230);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_678,uVar6,in_stack_00000040);
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  uVar6 = Box((Il2CppClass *)*in_stack_00000098,&stack0x00000208);
  NullCheck(pvVar8);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (pvVar8,*(undefined8 *)StringLiteral_676,uVar6,in_stack_00000040);
  pvVar8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
  bStack00000000000001ef =
       *(byte *)(*(long *)(unaff_x29 + -8) + 0x17a) & (byte)uStack000000000000003c;
  bStack00000000000001ee = bStack00000000000001ef & (byte)uStack000000000000003c;
  in_stack_000001e0 = Box((Il2CppClass *)*in_stack_00000048,&stack0x000001ee);
  NullCheck(pvVar8);
  in_stack_000001d8 =
       StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
                 (pvVar8,*(undefined8 *)StringLiteral_672,in_stack_000001e0,in_stack_00000040);
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
  uVar6 = Box((Il2CppClass *)*in_stack_00000098,&stack0x00000128);
  NullCheck(in_stack_00000138);
  StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F
            (in_stack_00000138,*(undefined8 *)StringLiteral_669,uVar6,in_stack_00000040);
  *(undefined4 *)(unaff_x29 + -0x5c) = 0;
  while( true ) {
    iVar1 = *(int *)(unaff_x29 + -0x5c);
    pLVar10 = *(List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 **)
               (*(long *)(unaff_x29 + -8) + 0x28);
    NullCheck(pLVar10);
    iVar4 = List_1_get_Count_mF249097114CA7862A1E68B487D7A8829C65729FA_inline
                      (pLVar10,*(MethodInfo **)StringLiteral_657);
    if (iVar4 <= iVar1) break;
    pLVar10 = *(List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 **)
               (*(long *)(unaff_x29 + -8) + 0x28);
    iVar1 = *(int *)(unaff_x29 + -0x5c);
    NullCheck(pLVar10);
    pvVar8 = (void *)List_1_get_Item_m3DFE90D48F93E68B3D5831CF96CB7FAD101B3C67
                               (pLVar10,iVar1,(MethodInfo *)*in_stack_00000060);
    NullCheck(pvVar8);
    BoolMonitor_Update_mACF2F700B8BEF95CC6567C0E0C30B84A4145E6A7(pvVar8);
    pLVar10 = *(List_1_tAFD9D5DC4E5B4A926EA2D907E515DE0449617A94 **)
               (*(long *)(unaff_x29 + -8) + 0x28);
    iVar1 = *(int *)(unaff_x29 + -0x5c);
    NullCheck(pLVar10);
    pvVar8 = (void *)List_1_get_Item_m3DFE90D48F93E68B3D5831CF96CB7FAD101B3C67
                               (pLVar10,iVar1,(MethodInfo *)*in_stack_00000060);
    lVar9 = *(long *)(unaff_x29 + -8);
    NullCheck(pvVar8);
    BoolMonitor_AppendToStringBuilder_mA256FEFB73B00D5A26A8E730817EA6DB7379C611
              (pvVar8,lVar9 + 0x30,0);
    uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x5c),1);
    *(undefined4 *)(unaff_x29 + -0x5c) = uVar3;
  }
  uVar6 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bStack00000000000000bf = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar6,0);
  bStack00000000000000bf = bStack00000000000000bf & 1;
  if (bStack00000000000000bf != 0) {
    pIVar5 = *(Il2CppObject **)(*(long *)(unaff_x29 + -8) + 0x20);
    pIVar11 = *(Il2CppObject **)(*(long *)(unaff_x29 + -8) + 0x30);
    NullCheck(pIVar11);
    pSVar7 = (String_t *)VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar11);
    NullCheck(pIVar5);
    VirtualActionInvoker1<String_t*>::Invoke(0x4b,pIVar5,pSVar7);
  }
  return;
}


