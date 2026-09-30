/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveCollisionBoundsInfo$$Invoke
ENTRY_POINT: 02d8cc8c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo__Invoke(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 in_w8;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x29;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  
  *(undefined1 *)(unaff_x29 + -0x69) = in_w8;
  if ((*(byte *)(unaff_x29 + -0x69) & 1) != 0) {
    bVar2 = Media_Update_m2059A835F3BE32366432FED120C16EAB71614D8B(0);
    *(byte *)(unaff_x29 + -0x6a) = bVar2 & 1;
  }
  *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -8);
  NullCheck(*(void **)(unaff_x29 + -0x78));
  bVar2 = InterfaceFuncInvoker0<bool>::Invoke
                    (0,(Il2CppClass *)*in_stack_00000038,*(Il2CppObject **)(unaff_x29 + -0x78));
  *(byte *)(unaff_x29 + -0x79) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x79) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
    if ((*(byte *)(lVar4 + 0x1b1) & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass5_0_<CreateAlbedoMinLuminance>b__1__
                );
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
      *(undefined1 *)(lVar4 + 0x1b1) = 0;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
      OVRMixedReality_Cleanup_m312DAB9A4C89085DB090214409B45DEF56B82B62(0);
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
    uVar3 = OVRManager_FindMainCamera_mCCD7BE229B2DA34FFCB009A527BBE8F40F57EB49();
    *(undefined8 *)(unaff_x29 + -0x28) = uVar3;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    bVar2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar3,0);
    if ((bVar2 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
      if ((*(byte *)(lVar4 + 0x1c0) & 1) == 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
        Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                  (*(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass5_0_<CreateAlbedoMinLuminance>b__0__
                   ,0);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
        *(undefined1 *)(lVar4 + 0x1c0) = 1;
      }
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
      if ((*(byte *)(lVar4 + 0x1b1) & 1) == 0) {
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
        OVRPlugin_SendEvent_m2724870AAEAEC48E83D56DB0019FEB45B917A70D
                  (*(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass4_0_<CreateAlbedoCustomColor>b__2__
                   ,*(undefined8 *)
                     Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_GetPooled__,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>__ctor__
                  );
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
        Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                  (*(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass6_0_<CreateAlbedoMaxLuminance>b__0__
                   ,0);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
        *(undefined1 *)(lVar4 + 0x1b1) = 1;
      }
      uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar5 = *(undefined8 *)(unaff_x29 + -0x28);
      uVar6 = *(undefined8 *)(unaff_x29 + -8);
      uVar1 = *(undefined4 *)(unaff_x29 + -0x14);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
      OVRMixedReality_Update_m3D99309363838A6B8BC1BDA6F45ED303760EBD10(uVar3,uVar5,uVar6,uVar1,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
      *(undefined1 *)(lVar4 + 0x1c0) = 0;
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
  OVRMixedRealityCaptureConfigurationExtensions_ReadFrom_m585C78AFC92A80FE7A42CFC872B19375759C1E6D
            (*(undefined8 *)(lVar4 + 0x1b8),*(undefined8 *)(unaff_x29 + -8),0);
  return;
}


