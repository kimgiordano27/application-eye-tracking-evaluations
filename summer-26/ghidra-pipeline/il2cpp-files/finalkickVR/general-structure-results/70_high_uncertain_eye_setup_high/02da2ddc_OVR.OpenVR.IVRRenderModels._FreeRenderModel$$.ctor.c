/*
FUNCTION_NAME: OVR.OpenVR.IVRRenderModels._FreeRenderModel$$.ctor
ENTRY_POINT: 02da2ddc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_IVRRenderModels__FreeRenderModel___ctor(void)

{
  byte bVar1;
  undefined4 uVar2;
  long unaff_x29;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000034;
  
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
  *(byte *)(unaff_x29 + -0x11) = *(byte *)(*(long *)(unaff_x29 + -8) + 0x2c) & 1;
  if ((*(byte *)(unaff_x29 + -0x11) & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0xd0);
    NullCheck(*(void **)(unaff_x29 + -0x20));
    uVar2 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                      (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(unaff_x29 + -0x20)
                       ,(MethodInfo *)0x0);
    *(undefined4 *)(unaff_x29 + -0x24) = uVar2;
    if (0 < *(int *)(unaff_x29 + -0x24)) {
      *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x20);
      if (*(int *)(unaff_x29 + -0x28) == 1) {
        OVRPassthroughLayer_UpdateSurfaceGeometryTransforms_m09886EE22E34D5D1407697F5CE4E81C84E5C74F5
                  (0,*(undefined8 *)(unaff_x29 + -8));
        OVRPassthroughLayer_AddDeferredSurfaceGeometries_m3BB89081441B40EBFE130E9B66B1FCF7ADCA097B
                  (*(undefined8 *)(unaff_x29 + -8),0);
      }
      uStack0000000000000034 = 1;
      OVRPassthroughLayer_UpdateColorMapFromControls_m225CA79F217B89D23261324CEBD84B2BD26441E3
                (*(undefined8 *)(unaff_x29 + -8),0,0);
      *(byte *)(unaff_x29 + -0x29) =
           *(byte *)(*(long *)(unaff_x29 + -8) + 0x10c) & (byte)uStack0000000000000034;
      if ((*(byte *)(unaff_x29 + -0x29) & 1) != 0) {
        *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x110);
        NullCheck(*(void **)(unaff_x29 + -0x38));
        *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(*(long *)(unaff_x29 + -0x38) + 0x50);
        NullCheck(*(void **)(unaff_x29 + -0x40));
        bVar1 = InterfaceFuncInvoker0<bool>::Invoke
                          (2,*(Il2CppClass **)
                              Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1_<CreateVolumeParameterWidget>b__2__
                           ,*(Il2CppObject **)(unaff_x29 + -0x40));
        *(byte *)(unaff_x29 + -0x41) = bVar1 & 1;
        if ((*(byte *)(unaff_x29 + -0x41) & 1) != 0) {
          *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0xd0);
          NullCheck(*(void **)(unaff_x29 + -0x50));
          uVar2 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                            (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)
                              (unaff_x29 + -0x50),(MethodInfo *)0x0);
          *(undefined4 *)(unaff_x29 + -0x54) = uVar2;
          OVRPassthroughLayer_CreateOvrPluginStyleObject_m09B72144DD8F98B1B7E48E49C82266BBBDC97A32
                    (*(undefined8 *)(unaff_x29 + -8),0);
          memcpy((void *)(unaff_x29 + -0x98),&stack0x00000088,0x40);
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
          uStack000000000000001c = *(undefined4 *)(unaff_x29 + -0x54);
          memcpy(&stack0x00000040,(void *)(unaff_x29 + -0x98),0x40);
          OVRPlugin_SetInsightPassthroughStyle_mDD737201356AD80BB6537361636E232C311D4D04
                    (uStack000000000000001c,&stack0x00000040,0);
        }
        *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x10c) = 0;
      }
    }
  }
  return;
}


