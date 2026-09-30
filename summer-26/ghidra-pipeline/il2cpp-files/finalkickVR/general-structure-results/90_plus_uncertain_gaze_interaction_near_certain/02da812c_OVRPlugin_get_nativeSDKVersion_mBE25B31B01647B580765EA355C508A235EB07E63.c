/*
FUNCTION_NAME: OVRPlugin_get_nativeSDKVersion_mBE25B31B01647B580765EA355C508A235EB07E63
ENTRY_POINT: 02da812c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


undefined8
OVRPlugin_get_nativeSDKVersion_mBE25B31B01647B580765EA355C508A235EB07E63(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *this;
  void *pvVar8;
  Il2CppObject *pIVar9;
  void *pvVar10;
  ExceptionSupportStack<Il2CppObject*,1> aEStack_40 [16];
  void *local_30;
  undefined8 local_28;
  
  puVar2 = 
  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_28 = param_1;
  if ((OVRPlugin_get_nativeSDKVersion_mBE25B31B01647B580765EA355C508A235EB07E63::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromState__);
    OVRPlugin_get_nativeSDKVersion_mBE25B31B01647B580765EA355C508A235EB07E63::
    s_Il2CppMethodInitialized = 1;
  }
  local_30 = (void *)0x0;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack(aEStack_40);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar3 = Version_op_Equality_mED378603AE784D5ACEDB8F4B250F50773B331D4B
                    (*(undefined8 *)(lVar5 + 0x10),0);
  if ((bVar3 & 1) != 0) {
    puVar6 = (undefined8 *)
             il2cpp_codegen_static_fields_for
                       (*(Il2CppClass **)
                         Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__
                       );
    local_30 = (void *)*puVar6;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar7 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    uVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar7,*puVar6,0)
    ;
    if ((uVar4 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pIVar9 = *(Il2CppObject **)(lVar5 + 0x1058);
      NullCheck(pIVar9);
      local_30 = (void *)VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar9);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_30 = (void *)OVRP_1_1_0_ovrp_GetNativeSDKVersion_mAC76B2E3EF5065FB7C0BFCCB0272DDF84925F7D7
                                   (0);
    }
    pvVar10 = local_30;
    if (local_30 == (void *)0x0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      pvVar10 = *(void **)(lVar5 + 0x1058);
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      *(void **)(lVar5 + 0x10) = pvVar10;
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      Il2CppCodeGenWriteBarrier((void **)(lVar5 + 0x10),pvVar10);
    }
    else {
      NullCheck(local_30);
      this = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)
             String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(pvVar10,0x2d,0,0);
      NullCheck(this);
      pvVar10 = (void *)StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::GetAt(this,0);
      local_30 = pvVar10;
      pvVar8 = (void *)il2cpp_codegen_object_new
                                 (*(Il2CppClass **)
                                   Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromState__
                                 );
      Version__ctor_m52D06833AE6481C0A9B72085BDC4D09A723CEF7F(pvVar8,pvVar10,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      *(void **)(lVar5 + 0x10) = pvVar8;
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      Il2CppCodeGenWriteBarrier((void **)(lVar5 + 0x10),pvVar8);
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  return *(undefined8 *)(lVar5 + 0x10);
}


