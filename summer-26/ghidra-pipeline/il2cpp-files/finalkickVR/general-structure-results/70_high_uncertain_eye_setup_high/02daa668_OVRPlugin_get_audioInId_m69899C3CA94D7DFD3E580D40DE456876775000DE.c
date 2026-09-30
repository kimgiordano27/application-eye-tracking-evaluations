/*
FUNCTION_NAME: OVRPlugin_get_audioInId_m69899C3CA94D7DFD3E580D40DE456876775000DE
ENTRY_POINT: 02daa668
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_get_audioInId_m69899C3CA94D7DFD3E580D40DE456876775000DE(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  GUID_t7B0B550D78EA6D8B265CC38E3D47A5E5DA539BB7 *pGVar15;
  void *pvVar16;
  ExceptionSupportStack<Il2CppObject*,1> aEStack_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar8 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_30 = param_1;
  if ((OVRPlugin_get_audioInId_m69899C3CA94D7DFD3E580D40DE456876775000DE::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UQuery_UQueryMatcher_<>c_<TraverseRecursive>b__5_0__);
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
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar8);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__);
    OVRPlugin_get_audioInId_m69899C3CA94D7DFD3E580D40DE456876775000DE::s_Il2CppMethodInitialized = 1
    ;
  }
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack(aEStack_60);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar8);
  lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
  if (*(long *)(lVar12 + 0x48) == 0) {
    pvVar16 = (void *)il2cpp_codegen_object_new
                                (*(Il2CppClass **)
                                  Method_UnityEngine_UIElements_UQuery_UQueryMatcher_<>c_<TraverseRecursive>b__5_0__
                                );
    GUID__ctor_mE86A653F57E2611E4C38C623AAE82CF5507CA592(pvVar16,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar8);
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    *(void **)(lVar12 + 0x48) = pvVar16;
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    Il2CppCodeGenWriteBarrier((void **)(lVar12 + 0x48),pvVar16);
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
            );
  local_38 = OVRP_1_1_0_ovrp_GetAudioInId_m20EB06D09F33A428990307FDA97CF1A6396BD6FA(0);
  uVar11 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(local_38,0,0);
  lVar12 = local_38;
  if ((uVar11 & 1) == 0) {
    puVar14 = (undefined8 *)
              il2cpp_codegen_static_fields_for
                        (*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__
                        );
    local_28 = *puVar14;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar8);
    lVar13 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    pGVar15 = *(GUID_t7B0B550D78EA6D8B265CC38E3D47A5E5DA539BB7 **)(lVar13 + 0x48);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__)
    ;
    Marshal_PtrToStructure_TisGUID_t7B0B550D78EA6D8B265CC38E3D47A5E5DA539BB7_m3430EEB1632070DA66D431F65396EA8B1F157D73
              (lVar12,pGVar15,
               *(MethodInfo **)
                Method_System_Threading_Tasks_ValueTask_ValueTaskSourceAsTask_<>c_<_cctor>b__4_0__);
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    pvVar16 = *(void **)(lVar12 + 0x48);
    NullCheck(pvVar16);
    uVar1 = *(undefined4 *)((long)pvVar16 + 0x10);
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    pvVar16 = *(void **)(lVar12 + 0x48);
    NullCheck(pvVar16);
    uVar6 = *(undefined2 *)((long)pvVar16 + 0x14);
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    pvVar16 = *(void **)(lVar12 + 0x48);
    NullCheck(pvVar16);
    uVar7 = *(undefined2 *)((long)pvVar16 + 0x16);
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    pvVar16 = *(void **)(lVar12 + 0x48);
    NullCheck(pvVar16);
    uVar2 = *(undefined1 *)((long)pvVar16 + 0x18);
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    pvVar16 = *(void **)(lVar12 + 0x48);
    NullCheck(pvVar16);
    uVar3 = *(undefined1 *)((long)pvVar16 + 0x19);
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    pvVar16 = *(void **)(lVar12 + 0x48);
    NullCheck(pvVar16);
    uVar4 = *(undefined1 *)((long)pvVar16 + 0x1a);
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    pvVar16 = *(void **)(lVar12 + 0x48);
    NullCheck(pvVar16);
    uVar5 = *(undefined1 *)((long)pvVar16 + 0x1b);
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    NullCheck(*(void **)(lVar12 + 0x48));
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    NullCheck(*(void **)(lVar12 + 0x48));
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    NullCheck(*(void **)(lVar12 + 0x48));
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    NullCheck(*(void **)(lVar12 + 0x48));
    Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130
              (&local_48,uVar1,uVar6,uVar7,uVar2,uVar3,uVar4,uVar5);
    uVar10 = uStack_40;
    uVar9 = local_48;
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    uVar11 = Guid_op_Inequality_mAA2FAB73FCD2CB2D2128ECF7016AC16AFBDF6163
                       (uVar9,uVar10,*(undefined8 *)(lVar12 + 0x50),*(undefined8 *)(lVar12 + 0x58),0
                       );
    uVar10 = uStack_40;
    uVar9 = local_48;
    if ((uVar11 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar8);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
      *(undefined8 *)(lVar12 + 0x58) = uVar10;
      *(undefined8 *)(lVar12 + 0x50) = uVar9;
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
      pvVar16 = (void *)Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C(lVar12 + 0x50,0);
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
      *(void **)(lVar12 + 0x60) = pvVar16;
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
      Il2CppCodeGenWriteBarrier((void **)(lVar12 + 0x60),pvVar16);
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar8);
    lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
    local_28 = *(undefined8 *)(lVar12 + 0x60);
  }
  return local_28;
}


