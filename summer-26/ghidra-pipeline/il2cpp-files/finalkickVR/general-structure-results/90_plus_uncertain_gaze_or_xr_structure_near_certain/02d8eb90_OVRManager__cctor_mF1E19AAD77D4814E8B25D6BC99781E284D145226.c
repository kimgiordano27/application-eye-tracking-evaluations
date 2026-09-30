/*
FUNCTION_NAME: OVRManager__cctor_mF1E19AAD77D4814E8B25D6BC99781E284D145226
ENTRY_POINT: 02d8eb90
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRManager__cctor_mF1E19AAD77D4814E8B25D6BC99781E284D145226(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  Action_1_t8E09560EA733B8CD752762F5B9B6AB6BD1C4F253 *pAVar9;
  Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 *pOVar10;
  Il2CppObject *pIVar11;
  undefined8 uVar12;
  void *pvVar13;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  puVar6 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__0__
  ;
  puVar5 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateTaaDebugMode>b__9_4__
  ;
  puVar4 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreatePixelValidationMode>b__10_4__
  ;
  puVar3 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_5__;
  puVar2 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__;
  local_18 = param_1;
  if ((OVRManager__cctor_mF1E19AAD77D4814E8B25D6BC99781E284D145226::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__2__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__3__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass10_0_<CreatePixelValidationMode>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    OVRManager__cctor_mF1E19AAD77D4814E8B25D6BC99781E284D145226::s_Il2CppMethodInitialized = 1;
  }
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0xe8) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0xe9) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0xea) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0xeb) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0xec) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0xed) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0xee) = 1;
  uVar12 = *(undefined8 *)puVar6;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined8 *)(lVar7 + 0xf0) = uVar12;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  Il2CppCodeGenWriteBarrier((void **)(lVar7 + 0xf0),*(void **)puVar6);
  uVar12 = *(undefined8 *)puVar4;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined8 *)(lVar7 + 0xf8) = uVar12;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  Il2CppCodeGenWriteBarrier((void **)(lVar7 + 0xf8),*(void **)puVar4);
  local_28 = 0;
  local_20 = 0;
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_28,40.0,0.0,0.0,
             (MethodInfo *)0x0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined8 *)(lVar7 + 0x104) = local_28;
  *(undefined4 *)(lVar7 + 0x10c) = local_20;
  local_38 = 0;
  local_30 = 0;
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_38,40.0,0.0,0.0,
             (MethodInfo *)0x0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined8 *)(lVar7 + 0x110) = local_38;
  *(undefined4 *)(lVar7 + 0x118) = local_30;
  local_48 = 0;
  local_40 = 0;
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_48,0.0075,-0.005,-0.0525,
             (MethodInfo *)0x0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined8 *)(lVar7 + 0x11c) = local_48;
  *(undefined4 *)(lVar7 + 0x124) = local_40;
  local_58 = 0;
  local_50 = 0;
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_58,-0.0075,-0.005,-0.0525,
             (MethodInfo *)0x0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined8 *)(lVar7 + 0x128) = local_58;
  *(undefined4 *)(lVar7 + 0x130) = local_50;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0x144) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0x145) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0x146) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0x147) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0x148) = 0;
  puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pvVar13 = (void *)*puVar8;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(void **)(lVar7 + 0x150) = pvVar13;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  Il2CppCodeGenWriteBarrier((void **)(lVar7 + 0x150),pvVar13);
  puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pvVar13 = (void *)*puVar8;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(void **)(lVar7 + 0x158) = pvVar13;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  Il2CppCodeGenWriteBarrier((void **)(lVar7 + 0x158),pvVar13);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0x160) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  il2cpp_codegen_initobj((void *)(lVar7 + 0x168),0x10);
  uVar12 = *(undefined8 *)puVar5;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined8 *)(lVar7 + 0x178) = uVar12;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  Il2CppCodeGenWriteBarrier((void **)(lVar7 + 0x178),*(void **)puVar5);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0x180) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0x1a0) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0x1a1) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined8 *)(lVar7 + 0x1a8) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  Il2CppCodeGenWriteBarrier((void **)(lVar7 + 0x1a8),(void *)0x0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0x1b0) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0x1b1) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined8 *)(lVar7 + 0x1b8) = 0;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  Il2CppCodeGenWriteBarrier((void **)(lVar7 + 0x1b8),(void *)0x0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(undefined1 *)(lVar7 + 0x1c0) = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  pIVar11 = (Il2CppObject *)*puVar8;
  pAVar9 = (Action_1_t8E09560EA733B8CD752762F5B9B6AB6BD1C4F253 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__1__
                     );
  Action_1__ctor_mC64ED16DDEE3BD4CE8A8209F78359038745E9C72
            (pAVar9,pIVar11,
             *(long *)
              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass10_0_<CreatePixelValidationMode>b__0__
             ,(MethodInfo *)0x0);
  pOVar10 = (Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__3__
                      );
  Observable_1__ctor_m3C21A1038CB432EB63113112053B1E8C771C8182
            (pOVar10,0,pAVar9,
             *(MethodInfo **)
              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__2__
            );
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar7 + 0x1d0) = pOVar10;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  Il2CppCodeGenWriteBarrier((void **)(lVar7 + 0x1d0),pOVar10);
  return;
}


