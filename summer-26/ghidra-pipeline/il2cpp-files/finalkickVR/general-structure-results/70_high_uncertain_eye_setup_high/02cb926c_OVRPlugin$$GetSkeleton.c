/*
FUNCTION_NAME: OVRPlugin$$GetSkeleton
ENTRY_POINT: 02cb926c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSkeleton(undefined1 param_1 [16])

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 *pIVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  long unaff_x29;
  undefined8 *in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  int iStack00000000000000f4;
  undefined4 uStack000000000000010c;
  int iStack0000000000000154;
  IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 *pIStack0000000000000158;
  
  while( true ) {
    *(undefined1 (*) [16])(unaff_x29 + -0x70) = param_1;
    pIStack0000000000000158 =
         *(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 **)(unaff_x29 + -0x30);
    iStack0000000000000154 = *(int *)(unaff_x29 + -0x34);
    uVar4 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline
                      ((KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A *)
                       (unaff_x29 + -0x70),
                       *(MethodInfo **)
                        Method_System_Collections_Generic_HashSet<Collider>_RemoveWhere__);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000a0);
    lVar5 = CAPI_StringToNative_m173627D71EB50C1F9E17F6638116ED2FCA2534F2(uVar4,0);
    NullCheck(pIStack0000000000000158);
    pIVar6 = pIStack0000000000000158;
    iVar1 = il2cpp_codegen_multiply<int,int>(iStack0000000000000154,2);
    IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832::SetAt(pIVar6,(long)iVar1,lVar5);
    pIVar6 = *(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 **)(unaff_x29 + -0x30);
    iVar1 = *(int *)(unaff_x29 + -0x34);
    uVar4 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline
                      ((KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A *)
                       (unaff_x29 + -0x70),
                       *(MethodInfo **)
                        Method_System_Collections_Generic_HashSet<Collider>_get_Count__);
    lVar5 = CAPI_StringToNative_m173627D71EB50C1F9E17F6638116ED2FCA2534F2(uVar4,0);
    NullCheck(pIVar6);
    iVar1 = il2cpp_codegen_multiply<int,int>(iVar1,2);
    iVar1 = il2cpp_codegen_add<int,int>(iVar1,1);
    IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832::SetAt(pIVar6,(long)iVar1,lVar5);
    uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x34),1);
    *(undefined4 *)(unaff_x29 + -0x34) = uVar2;
    uVar3 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438
                      ((Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 *)(unaff_x29 + -0x60),
                       *(MethodInfo **)
                        Method_System_Collections_Generic_HashSet<Collider>_GetEnumerator__);
    if ((uVar3 & 1) == 0) break;
    param_1 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline
                        ((Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 *)(unaff_x29 + -0x60)
                         ,*(MethodInfo **)
                           Method_System_Collections_Generic_HashSet<Collider>_Remove__);
  }
  uStack000000000000010c = 4;
  il2cpp::utils::
  FinallyHelper<CAPI_LogNewEvent_m049F31855D3D47FFB703BC01F23F6F63A9BB8FBD::$_9,false>::
  ~FinallyHelper((FinallyHelper<CAPI_LogNewEvent_m049F31855D3D47FFB703BC01F23F6F63A9BB8FBD::__9,false>
                  *)&stack0x000001a0);
  uVar7 = *(undefined8 *)(unaff_x29 + -0x20);
  uVar8 = *(undefined8 *)(unaff_x29 + -0x30);
  iStack00000000000000f4 = *(int *)(unaff_x29 + -0x24);
  uVar4 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8
                    ((long)iStack00000000000000f4);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000a0);
  CAPI_ovr_Log_NewEvent_m15AA429803928D3CBE51E595B3F02FA1B5CB51D7(uVar7,uVar8,uVar4,0);
  uVar4 = *(undefined8 *)(unaff_x29 + -0x20);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000a8);
  Marshal_FreeCoTaskMem_mBCD7084667AE44C50938947CF5C22345A118C944(uVar4,0);
  *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x30);
  *(undefined4 *)(unaff_x29 + -0x7c) = 0;
  while (iVar1 = *(int *)(unaff_x29 + -0x7c), pvVar9 = *(void **)(unaff_x29 + -0x78),
        NullCheck(pvVar9), iVar1 < (int)*(undefined8 *)((long)pvVar9 + 0x18)) {
    pIVar6 = *(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 **)(unaff_x29 + -0x78);
    iVar1 = *(int *)(unaff_x29 + -0x7c);
    NullCheck(pIVar6);
    uVar4 = IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832::GetAt(pIVar6,(long)iVar1);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000a8);
    Marshal_FreeCoTaskMem_mBCD7084667AE44C50938947CF5C22345A118C944(uVar4,0);
    uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x7c),1);
    *(undefined4 *)(unaff_x29 + -0x7c) = uVar2;
  }
  return;
}


