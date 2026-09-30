/*
FUNCTION_NAME: VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D
ENTRY_POINT: 04642c9c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_6;functionality_possible_biometrics_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *param_5,undefined8 param_6)

{
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar1;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined4 *puVar9;
  YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B *pYVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined8 local_240;
  undefined4 local_238;
  int local_234;
  void *local_230;
  void *local_228;
  undefined1 auStack_220 [88];
  undefined1 auStack_1c8 [88];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  undefined8 local_30;
  Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *local_28;
  
  puVar4 = 
  PTR_StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527_il2cpp_TypeInfo_var_048d9c10;
  puVar3 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_30 = param_6;
  local_28 = param_5;
  if ((VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_GetEnumerator__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_InitialStyle_tB45723AD8BBFFB1A576F025D76BB814D983B19FF_il2cpp_TypeInfo_var_048d9c90
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B_il2cpp_TypeInfo_var_048deb48);
    VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D::s_Il2CppMethodInitialized = 1;
  }
  Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline((MethodInfo *)0x0);
  memcpy(auStack_70,auStack_b0,0x40);
  memcpy(local_28 + 0x200,auStack_70,0x40);
  Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline((MethodInfo *)0x0);
  memcpy(auStack_f0,auStack_130,0x40);
  memcpy(local_28 + 0x240,auStack_f0,0x40);
  local_150 = Rect_get_zero_m5341D8B63DEF1F4C308A685EEC8CFEA12A396C8D(0);
  uStack_138 = CONCAT44(param_4,param_3);
  local_140 = CONCAT44(param_2,local_150);
  *(undefined8 *)(local_28 + 0x288) = uStack_138;
  *(undefined8 *)(local_28 + 0x280) = local_140;
  uStack_14c = param_2;
  uStack_148 = param_3;
  uStack_144 = param_4;
  local_170 = Rect_get_zero_m5341D8B63DEF1F4C308A685EEC8CFEA12A396C8D(0);
  uStack_158 = CONCAT44(param_4,param_3);
  local_160 = CONCAT44(param_2,local_170);
  *(undefined8 *)(local_28 + 0x298) = uStack_158;
  *(undefined8 *)(local_28 + 0x290) = local_160;
  local_28[0x2a0] = (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0)0x0;
  uStack_16c = param_2;
  uStack_168 = param_3;
  uStack_164 = param_4;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_InitialStyle_tB45723AD8BBFFB1A576F025D76BB814D983B19FF_il2cpp_TypeInfo_var_048d9c90
            );
  InitialStyle_Acquire_m847807C98E849F9FD87D505A6A782046315B41A7(0);
  memcpy(auStack_1c8,auStack_220,0x58);
  memcpy(local_28 + 0x2c0,auStack_1c8,0x58);
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x2c0),(void *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_228 = (void *)*puVar6;
  *(void **)(local_28 + 0x318) = local_228;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x318),local_228);
  *(undefined4 *)(local_28 + 800) = 0;
  *(undefined4 *)(local_28 + 0x328) = 0;
  *(undefined4 *)(local_28 + 0x340) = 0;
  *(undefined4 *)(local_28 + 0x368) = 0;
  *(undefined4 *)(local_28 + 0x36c) = 0;
  *(undefined8 *)(local_28 + 0x3a8) = 0;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x3a8),(void *)0x0);
  Focusable__ctor_mF8FE1D904D2C1A153216609D55118A2011F6892F(local_28,0);
  UIElementsRuntimeUtilityNative_VisualElementCreation_m6C9981F8899E4A692E46B3441C91DCC0642A236F(0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  local_230 = *(void **)(lVar7 + 0x48);
  *(void **)(local_28 + 0x398) = local_230;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x398),local_230);
  piVar8 = (int *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  local_234 = *piVar8;
  uVar5 = il2cpp_codegen_add<int,int>(local_234,1);
  local_238 = uVar5;
  puVar9 = (undefined4 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  *puVar9 = uVar5;
  *(undefined4 *)(local_28 + 0x324) = local_238;
  local_240 = 0;
  Hierarchy__ctor_mD0586F5F328229A0931E5C99D09EAC5E17F8C96C(&local_240,local_28,0);
  VisualElement_set_hierarchy_m9E4720A3207D058EC8F2B2A819568E795732D2C7_inline(local_28,local_240,0)
  ;
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  pvVar12 = *(void **)(lVar7 + 8);
  *(void **)(local_28 + 0x40) = pvVar12;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x40),pvVar12);
  *(undefined4 *)(local_28 + 0x50) = 0x103f;
  VisualElement_SetEnabled_mE53446BEB2C83C4D350D9BEDDAADBE9A174EAA5B(local_28,1,0);
  Focusable_set_focusable_m85547438A92A464B90AB91ACBD458677A0BA41CB_inline
            (local_28,false,(MethodInfo *)0x0);
  puVar6 = (undefined8 *)
           il2cpp_codegen_static_fields_for
                     (*(Il2CppClass **)
                       Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_set_Item__
                     );
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(local_28,*puVar6,0);
  pYVar10 = (YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        PTR_YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B_il2cpp_TypeInfo_var_048deb48
                      );
  YogaNode__ctor_m2C298DB1CFC309C0E20643F7A76FC0426247C969(pYVar10,0);
  VisualElement_set_yogaNode_m3E58F2C3DC63C1ED9A57EE818C1238D190C8DC1A_inline
            ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)local_28,pYVar10,
             (MethodInfo *)0x0);
  VisualElement_set_renderHints_m0B096D0468935C2D79E2B5518027B66001F1D983(local_28,0,0);
  uVar11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(local_28,0);
  pVVar1 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)(local_28 + 0x370);
  pVVar2 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)(local_28 + 0x374);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_GetEnumerator__
            );
  EventInterestReflectionUtils_GetDefaultEventInterests_m29A4234B20895F7648E30BF23DC76A6B70EA1468
            (uVar11,pVVar1,pVVar2,0);
  return;
}


