/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._GetActionSetHandle$$Invoke
ENTRY_POINT: 02daa6a4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 OVR_OpenVR_IVRInput__GetActionSetHandle__Invoke(ulong *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long unaff_x29;
  undefined8 uVar5;
  uint uStack000000000000006c;
  undefined4 uStack00000000000000dc;
  undefined8 *in_stack_00000128;
  ulong *in_stack_00000130;
  byte bStack00000000000001af;
  undefined1 uStack00000000000001df;
  undefined1 uStack00000000000001ef;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Threading_Tasks_ValueTask_ValueTaskSourceAsTask_<>c_<_cctor>b__4_0__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
            );
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000130);
                    /* try { // try from 02daa6d8 to 02eaa6df has its CatchHandler @ 02daa6fc */
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__);
                    /* try { // try from 02daa6e0 to 02eaa727 has its CatchHandler @ 02daa594 */
  OVRPlugin_get_audioInId_m69899C3CA94D7DFD3E580D40DE456876775000DE::s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack
            ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0x40));
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000130);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(lVar1 + 0x48);
  if (*(long *)(unaff_x29 + -0x58) == 0) {
    uVar2 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_UIElements_UQuery_UQueryMatcher_<>c_<TraverseRecursive>b__5_0__
                      );
    *(undefined8 *)(unaff_x29 + -0x60) = uVar2;
    GUID__ctor_mE86A653F57E2611E4C38C623AAE82CF5507CA592(*(undefined8 *)(unaff_x29 + -0x60),0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000130);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x60);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    *(undefined8 *)(lVar1 + 0x48) = uVar2;
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0x48),*(void **)(unaff_x29 + -0x60));
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
            );
  uVar2 = OVRP_1_1_0_ovrp_GetAudioInId_m20EB06D09F33A428990307FDA97CF1A6396BD6FA(0);
  *(undefined8 *)(unaff_x29 + -0x68) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x18);
  uStack00000000000000dc =
       IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B
                 (*(undefined8 *)(unaff_x29 + -0x70),0,0);
  *(byte *)(unaff_x29 + -0x71) = (byte)uStack00000000000000dc & 1;
  if ((*(byte *)(unaff_x29 + -0x71) & 1) == 0) {
    puVar3 = (undefined8 *)
             il2cpp_codegen_static_fields_for
                       (*(Il2CppClass **)
                         Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__
                       );
    *(undefined8 *)(unaff_x29 + -8) = *puVar3;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x18);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000130);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(lVar1 + 0x48);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__)
    ;
    Marshal_PtrToStructure_TisGUID_t7B0B550D78EA6D8B265CC38E3D47A5E5DA539BB7_m3430EEB1632070DA66D431F65396EA8B1F157D73
              (*(long *)(unaff_x29 + -0x80),
               *(GUID_t7B0B550D78EA6D8B265CC38E3D47A5E5DA539BB7 **)(unaff_x29 + -0x88),
               *(MethodInfo **)
                Method_System_Threading_Tasks_ValueTask_ValueTaskSourceAsTask_<>c_<_cctor>b__4_0__);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(lVar1 + 0x48);
    NullCheck(*(void **)(unaff_x29 + -0x90));
    *(undefined4 *)(unaff_x29 + -0x94) = *(undefined4 *)(*(long *)(unaff_x29 + -0x90) + 0x10);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(lVar1 + 0x48);
    NullCheck(*(void **)(unaff_x29 + -0xa0));
    *(undefined2 *)(unaff_x29 + -0xa2) = *(undefined2 *)(*(long *)(unaff_x29 + -0xa0) + 0x14);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(lVar1 + 0x48);
    NullCheck(*(void **)(unaff_x29 + -0xb0));
    *(undefined2 *)(unaff_x29 + -0xb2) = *(undefined2 *)(*(long *)(unaff_x29 + -0xb0) + 0x16);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(lVar1 + 0x48);
    NullCheck(*(void **)(unaff_x29 + -0xc0));
    *(undefined1 *)(unaff_x29 + -0xc1) = *(undefined1 *)(*(long *)(unaff_x29 + -0xc0) + 0x18);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(lVar1 + 0x48);
    NullCheck(*(void **)(unaff_x29 + -0xd0));
    *(undefined1 *)(unaff_x29 + -0xd1) = *(undefined1 *)(*(long *)(unaff_x29 + -0xd0) + 0x19);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(lVar1 + 0x48);
    NullCheck(*(void **)(unaff_x29 + -0xe0));
    *(undefined1 *)(unaff_x29 + -0xe1) = *(undefined1 *)(*(long *)(unaff_x29 + -0xe0) + 0x1a);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(lVar1 + 0x48);
    NullCheck(*(void **)(unaff_x29 + -0xf0));
    *(undefined1 *)(unaff_x29 + -0xf1) = *(undefined1 *)(*(long *)(unaff_x29 + -0xf0) + 0x1b);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(lVar1 + 0x48);
    NullCheck(*(void **)(unaff_x29 + -0x100));
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    NullCheck(*(void **)(lVar1 + 0x48));
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    pvVar4 = *(void **)(lVar1 + 0x48);
    NullCheck(pvVar4);
    uStack00000000000001ef = *(undefined1 *)((long)pvVar4 + 0x1e);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    pvVar4 = *(void **)(lVar1 + 0x48);
    NullCheck(pvVar4);
    uStack00000000000001df = *(undefined1 *)((long)pvVar4 + 0x1f);
    Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130
              (unaff_x29 + -0x28,*(undefined4 *)(unaff_x29 + -0x94),
               *(undefined2 *)(unaff_x29 + -0xa2),*(undefined2 *)(unaff_x29 + -0xb2),
               *(undefined1 *)(unaff_x29 + -0xc1),*(undefined1 *)(unaff_x29 + -0xd1),
               *(undefined1 *)(unaff_x29 + -0xe1),*(undefined1 *)(unaff_x29 + -0xf1));
    uVar2 = *(undefined8 *)(unaff_x29 + -0x28);
    in_stack_00000128[1] = *(undefined8 *)(unaff_x29 + -0x20);
    *in_stack_00000128 = uVar2;
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    uStack000000000000006c =
         Guid_op_Inequality_mAA2FAB73FCD2CB2D2128ECF7016AC16AFBDF6163
                   (*in_stack_00000128,in_stack_00000128[1],*(undefined8 *)(lVar1 + 0x50),
                    *(undefined8 *)(lVar1 + 0x58),0);
    bStack00000000000001af = (byte)uStack000000000000006c & 1;
    if ((uStack000000000000006c & 1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x29 + -0x20);
      uVar2 = *(undefined8 *)(unaff_x29 + -0x28);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000130);
      lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
      *(undefined8 *)(lVar1 + 0x58) = uVar5;
      *(undefined8 *)(lVar1 + 0x50) = uVar2;
      lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
      pvVar4 = (void *)Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C(lVar1 + 0x50,0);
      lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
      *(void **)(lVar1 + 0x60) = pvVar4;
      lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
      Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0x60),pvVar4);
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000130);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000130);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x30);
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


