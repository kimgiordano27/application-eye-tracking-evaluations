/*
FUNCTION_NAME: OVRPassthroughLayer_CreateOvrPluginStyleObject_m09B72144DD8F98B1B7E48E49C82266BBBDC97A32
ENTRY_POINT: 02da2fdc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPassthroughLayer_CreateOvrPluginStyleObject_m09B72144DD8F98B1B7E48E49C82266BBBDC97A32
               (void *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5,
               OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F *param_6,
               undefined8 param_7)

{
  byte bVar1;
  void *pvVar2;
  Il2CppObject *pIVar3;
  undefined4 uVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_30;
  OVRPassthroughLayer_tE81E021B78942BCB1DCCAEDDC82A25C9F6AD771F *local_28;
  
  local_30 = param_7;
  local_28 = param_6;
  if ((OVRPassthroughLayer_CreateOvrPluginStyleObject_m09B72144DD8F98B1B7E48E49C82266BBBDC97A32::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1_<CreateVolumeParameterWidget>b__2__
              );
    OVRPassthroughLayer_CreateOvrPluginStyleObject_m09B72144DD8F98B1B7E48E49C82266BBBDC97A32::
    s_Il2CppMethodInitialized = 1;
  }
  memset(&local_70,0,0x40);
  local_80 = 0;
  uStack_78 = 0;
  il2cpp_codegen_initobj(&local_70,0x40);
  local_70 = 7;
  local_6c = OVRPassthroughLayer_get_textureOpacity_mE5EB92E62BFEA8E3169A6F9C6ED84A3C67843577_inline
                       (local_28,(MethodInfo *)0x0);
  bVar1 = OVRPassthroughLayer_get_edgeRenderingEnabled_m0DEB261BE3411EBE8D93FF1C08AD7522A148B1CB_inline
                    (local_28,(MethodInfo *)0x0);
  if ((bVar1 & 1) == 0) {
    il2cpp_codegen_initobj(&local_80,0x10);
    local_80 = 0;
    uStack_78 = 0;
    uStack_98 = 0;
    local_a0 = 0;
  }
  else {
    uVar4 = OVRPassthroughLayer_get_edgeColor_m7310EE93BAEA4840CEF66DA2BA583544DA65DB98_inline
                      (local_28,(MethodInfo *)0x0);
    uVar4 = OVRExtensions_ToColorf_m20FCBAD27C65FC66A589BD8F20399151B7704AE7(uVar4,0);
    uStack_98 = CONCAT44(param_5,param_4);
    local_a0 = CONCAT44(param_3,uVar4);
  }
  uStack_60 = uStack_98;
  local_68 = local_a0;
  local_58 = *(undefined4 *)(local_28 + 0x108);
  local_50 = 0;
  local_54 = 0;
  pvVar2 = *(void **)(local_28 + 0x110);
  NullCheck(pvVar2);
  pIVar3 = *(Il2CppObject **)((long)pvVar2 + 0x50);
  NullCheck(pIVar3);
  InterfaceActionInvoker1<InsightPassthroughStyle2_t92F955F761261A0BCDBFAD39416D56574826432A*>::
  Invoke(0,*(Il2CppClass **)
            Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1_<CreateVolumeParameterWidget>b__2__
         ,pIVar3,(InsightPassthroughStyle2_t92F955F761261A0BCDBFAD39416D56574826432A *)&local_70);
  memcpy(param_1,(InsightPassthroughStyle2_t92F955F761261A0BCDBFAD39416D56574826432A *)&local_70,
         0x40);
  return;
}


