/*
FUNCTION_NAME: OVRPassthroughLayer_RemoveSurfaceGeometry_mC4E7F005E96534F8039A5E474A396FD897F7A705
ENTRY_POINT: 02d9e154
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPassthroughLayer_RemoveSurfaceGeometry_mC4E7F005E96534F8039A5E474A396FD897F7A705
               (long param_1,void *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  Il2CppObject *pIVar3;
  byte bVar4;
  int iVar5;
  Predicate_1_t9EA144B8777F64A7CF296602D7446A0E00800207 *pPVar6;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar7;
  Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 *pDVar8;
  List_1_tE96A44A704D2D0F763BBB5A6DA3B61D6F4322B3D *pLVar9;
  undefined8 local_190 [11];
  byte local_131;
  undefined8 local_130;
  undefined1 auStack_128 [8];
  undefined8 local_120;
  byte local_c9;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_c8;
  Il2CppObject *local_c0;
  Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 *local_b8;
  void *local_b0;
  Il2CppObject *local_a8;
  Il2CppObject *local_a0;
  PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE aPStack_98 [88];
  Il2CppObject *local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRPassthroughLayer_RemoveSurfaceGeometry_mC4E7F005E96534F8039A5E474A396FD897F7A705::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__2__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__3__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeParameterWidget>b__2_0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeParameterWidget>b__2_6__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_11__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_2__
              );
    OVRPassthroughLayer_RemoveSurfaceGeometry_mC4E7F005E96534F8039A5E474A396FD897F7A705::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = (Il2CppObject *)0x0;
  memset(aPStack_98,0,0x58);
  local_a0 = (Il2CppObject *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeParameterWidget>b__2_6__
                       );
  U3CU3Ec__DisplayClass9_0__ctor_m760BBF5F185B28366495014CBC77D004EFD99BD2(local_a0,0);
  local_40 = local_a0;
  local_a8 = local_a0;
  local_b0 = local_30;
  NullCheck(local_a0);
  *(void **)(local_a8 + 0x10) = local_b0;
  Il2CppCodeGenWriteBarrier((void **)(local_a8 + 0x10),local_b0);
  local_b8 = *(Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 **)(local_28 + 0xd8);
  local_c0 = local_40;
  NullCheck(local_40);
  local_c8 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)(local_c0 + 0x10);
  NullCheck(local_b8);
  local_c9 = Dictionary_2_TryGetValue_m17A00D080FCA1E2D536918AF6B53F3F85A73801E
                       (local_b8,local_c8,aPStack_98,
                        *(MethodInfo **)
                         Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__1__
                       );
  pIVar3 = local_40;
  local_c9 = local_c9 & 1;
  if (local_c9 == 0) {
    pLVar9 = *(List_1_tE96A44A704D2D0F763BBB5A6DA3B61D6F4322B3D **)(local_28 + 0xe0);
    pPVar6 = (Predicate_1_t9EA144B8777F64A7CF296602D7446A0E00800207 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__3__
                       );
    Predicate_1__ctor_mA7A5AC585F9FEC2A02FDB6AA440BBAC58BBEA595
              (pPVar6,pIVar3,
               *(long *)
                Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeParameterWidget>b__2_0__
               ,(MethodInfo *)0x0);
    NullCheck(pLVar9);
    iVar5 = List_1_RemoveAll_m759B047226A4B41FF4E7C025D124FAA0D2BAE278
                      (pLVar9,pPVar6,
                       *(MethodInfo **)
                        Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__2__
                      );
    if (iVar5 == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_2__
                 ,0);
    }
  }
  else {
    memcpy(auStack_128,aPStack_98,0x58);
    local_130 = local_120;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_131 = OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor__Invoke(local_130,0);
    local_131 = local_131 & 1;
    if (local_131 != 0) {
      memcpy(local_190,aPStack_98,0x58);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      bVar4 = OVRPlugin_DestroyInsightTriangleMesh_m47FE862A94B72A6A0123B456373C6E96F424CA5A
                        (local_190[0],0);
      pIVar3 = local_40;
      if ((bVar4 & 1) != 0) {
        pDVar8 = *(Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 **)(local_28 + 0xd8);
        NullCheck(local_40);
        pGVar7 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)(pIVar3 + 0x10);
        NullCheck(pDVar8);
        Dictionary_2_Remove_m610665550A1C14B71031C93C0303AF829B354C94
                  (pDVar8,pGVar7,
                   *(MethodInfo **)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__0__
                  );
        return;
      }
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_11__
               ,0);
  }
  return;
}


