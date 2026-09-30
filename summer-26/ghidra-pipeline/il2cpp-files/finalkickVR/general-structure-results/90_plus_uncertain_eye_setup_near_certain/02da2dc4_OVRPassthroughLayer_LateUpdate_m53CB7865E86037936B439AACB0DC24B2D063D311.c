/*
FUNCTION_NAME: OVRPassthroughLayer_LateUpdate_m53CB7865E86037936B439AACB0DC24B2D063D311
ENTRY_POINT: 02da2dc4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPassthroughLayer_LateUpdate_m53CB7865E86037936B439AACB0DC24B2D063D311
               (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_140 [72];
  undefined1 auStack_f8 [64];
  undefined1 auStack_b8 [68];
  undefined4 local_74;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_70;
  byte local_61;
  Il2CppObject *local_60;
  void *local_58;
  byte local_49;
  int local_48;
  int local_44;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_40;
  byte local_31;
  undefined8 local_30;
  long local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRPassthroughLayer_LateUpdate_m53CB7865E86037936B439AACB0DC24B2D063D311::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1_<CreateVolumeParameterWidget>b__2__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPassthroughLayer_LateUpdate_m53CB7865E86037936B439AACB0DC24B2D063D311::
    s_Il2CppMethodInitialized = 1;
  }
  local_31 = *(byte *)(local_28 + 0x2c) & 1;
  if (local_31 == 0) {
    local_40 = *(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(local_28 + 0xd0);
    NullCheck(local_40);
    local_44 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                         (local_40,(MethodInfo *)0x0);
    if (0 < local_44) {
      local_48 = *(int *)(local_28 + 0x20);
      if (local_48 == 1) {
        OVRPassthroughLayer_UpdateSurfaceGeometryTransforms_m09886EE22E34D5D1407697F5CE4E81C84E5C74F5
                  (0,local_28);
        OVRPassthroughLayer_AddDeferredSurfaceGeometries_m3BB89081441B40EBFE130E9B66B1FCF7ADCA097B
                  (local_28,0);
      }
      OVRPassthroughLayer_UpdateColorMapFromControls_m225CA79F217B89D23261324CEBD84B2BD26441E3
                (local_28,0,0);
      local_49 = *(byte *)(local_28 + 0x10c) & 1;
      if ((*(byte *)(local_28 + 0x10c) & 1) != 0) {
        local_58 = *(void **)(local_28 + 0x110);
        NullCheck(local_58);
        local_60 = *(Il2CppObject **)((long)local_58 + 0x50);
        NullCheck(local_60);
        local_61 = InterfaceFuncInvoker0<bool>::Invoke
                             (2,*(Il2CppClass **)
                                 Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1_<CreateVolumeParameterWidget>b__2__
                              ,local_60);
        local_61 = local_61 & 1;
        if (local_61 != 0) {
          local_70 = *(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(local_28 + 0xd0);
          NullCheck(local_70);
          local_74 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                               (local_70,(MethodInfo *)0x0);
          OVRPassthroughLayer_CreateOvrPluginStyleObject_m09B72144DD8F98B1B7E48E49C82266BBBDC97A32
                    (local_28,0);
          memcpy(auStack_b8,auStack_f8,0x40);
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
          uVar1 = local_74;
          memcpy(auStack_140,auStack_b8,0x40);
          OVRPlugin_SetInsightPassthroughStyle_mDD737201356AD80BB6537361636E232C311D4D04
                    (uVar1,auStack_140,0);
        }
        *(undefined1 *)(local_28 + 0x10c) = 0;
      }
    }
  }
  return;
}


