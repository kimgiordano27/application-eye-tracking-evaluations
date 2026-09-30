/*
FUNCTION_NAME: OVR.OpenVR.IVRRenderModels._FreeRenderModel$$EndInvoke
ENTRY_POINT: 02da2fec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_IVRRenderModels__FreeRenderModel__EndInvoke
               (void *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  Il2CppObject *pIVar4;
  long unaff_x29;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puStack0000000000000028;
  void *pvStack0000000000000030;
  undefined4 uStack000000000000004c;
  
  puStack0000000000000028 = (undefined8 *)(unaff_x29 + -0x80);
  *(undefined8 *)(unaff_x29 + -8) = param_6;
  *(undefined8 *)(unaff_x29 + -0x10) = param_7;
  pvStack0000000000000030 = param_1;
  if ((OVRPassthroughLayer_CreateOvrPluginStyleObject_m09B72144DD8F98B1B7E48E49C82266BBBDC97A32::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1_<CreateVolumeParameterWidget>b__2__
              );
    OVRPassthroughLayer_CreateOvrPluginStyleObject_m09B72144DD8F98B1B7E48E49C82266BBBDC97A32::
    s_Il2CppMethodInitialized = 1;
  }
  memset((void *)(unaff_x29 + -0x50),0,0x40);
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  il2cpp_codegen_initobj((void *)(unaff_x29 + -0x50),0x40);
  *(undefined4 *)(unaff_x29 + -0x50) = 7;
  uVar5 = OVRPassthroughLayer_get_textureOpacity_mE5EB92E62BFEA8E3169A6F9C6ED84A3C67843577_inline
                    (*(OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F **)
                      (unaff_x29 + -8),(MethodInfo *)0x0);
  *(undefined4 *)(unaff_x29 + -0x8c) = uVar5;
  *(undefined4 *)(unaff_x29 + -0x4c) = *(undefined4 *)(unaff_x29 + -0x8c);
  bVar1 = OVRPassthroughLayer_get_edgeRenderingEnabled_m0DEB261BE3411EBE8D93FF1C08AD7522A148B1CB_inline
                    (*(OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F **)
                      (unaff_x29 + -8),(MethodInfo *)0x0);
  *(byte *)(unaff_x29 + -0x8d) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x8d) & 1) == 0) {
    *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x50;
    il2cpp_codegen_initobj((void *)(unaff_x29 + -0x60),0x10);
    *(undefined4 *)(unaff_x29 + -0x60) = 0;
    *(undefined4 *)(unaff_x29 + -0x5c) = 0;
    *(undefined4 *)(unaff_x29 + -0x58) = 0;
    *(undefined4 *)(unaff_x29 + -0x54) = 0;
    puStack0000000000000028[1] = puStack0000000000000028[5];
    *puStack0000000000000028 = puStack0000000000000028[4];
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
  }
  else {
    *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x50;
    uVar5 = OVRPassthroughLayer_get_edgeColor_m7310EE93BAEA4840CEF66DA2BA583544DA65DB98_inline
                      (*(OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F **)
                        (unaff_x29 + -8),(MethodInfo *)0x0);
    uVar5 = OVRExtensions_ToColorf_m20FCBAD27C65FC66A589BD8F20399151B7704AE7(uVar5,0);
    puStack0000000000000028[1] = CONCAT44(param_5,param_4);
    *puStack0000000000000028 = CONCAT44(param_3,uVar5);
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x68);
  }
  lVar2 = *(long *)(unaff_x29 + -0x88);
  uVar6 = *puStack0000000000000028;
  *(undefined8 *)(lVar2 + 0x10) = puStack0000000000000028[1];
  *(undefined8 *)(lVar2 + 8) = uVar6;
  uStack000000000000004c = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x108);
  *(undefined4 *)(unaff_x29 + -0x38) = uStack000000000000004c;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined4 *)(unaff_x29 + -0x34) = 0;
  pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x110);
  NullCheck(pvVar3);
  pIVar4 = *(Il2CppObject **)((long)pvVar3 + 0x50);
  NullCheck(pIVar4);
  InterfaceActionInvoker1<InsightPassthroughStyle2_t92F955F761261A0BCDBFAD39416D56574826432A*>::
  Invoke(0,*(Il2CppClass **)
            Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1_<CreateVolumeParameterWidget>b__2__
         ,pIVar4,(InsightPassthroughStyle2_t92F955F761261A0BCDBFAD39416D56574826432A *)
                 (unaff_x29 + -0x50));
  memcpy(pvStack0000000000000030,
         (InsightPassthroughStyle2_t92F955F761261A0BCDBFAD39416D56574826432A *)(unaff_x29 + -0x50),
         0x40);
  return;
}


