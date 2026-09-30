/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveCollisionBoundsInfo$$EndInvoke
ENTRY_POINT: 02d8cd78
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo__EndInvoke(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x29;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000040;
  undefined4 uStack000000000000005c;
  byte bStack000000000000007d;
  
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bStack000000000000007d =
       OVRPlugin_SendEvent_m2724870AAEAEC48E83D56DB0019FEB45B917A70D
                 (*(undefined8 *)
                   Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass4_0_<CreateAlbedoCustomColor>b__2__
                  ,*(undefined8 *)
                    Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_GetPooled__,
                  *(undefined8 *)
                   Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>__ctor__)
  ;
  bStack000000000000007d = bStack000000000000007d & 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
  Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
            (*(undefined8 *)
              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass6_0_<CreateAlbedoMaxLuminance>b__0__
             ,0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
  *(undefined1 *)(lVar1 + 0x1b1) = 1;
  uVar2 = *(undefined8 *)(unaff_x29 + -0x10);
  uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
  uVar4 = *(undefined8 *)(unaff_x29 + -8);
  uStack000000000000005c = *(undefined4 *)(unaff_x29 + -0x14);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
  OVRMixedReality_Update_m3D99309363838A6B8BC1BDA6F45ED303760EBD10
            (uVar2,uVar3,uVar4,uStack000000000000005c,0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
  *(undefined1 *)(lVar1 + 0x1c0) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
  OVRMixedRealityCaptureConfigurationExtensions_ReadFrom_m585C78AFC92A80FE7A42CFC872B19375759C1E6D
            (*(undefined8 *)(lVar1 + 0x1b8),*(undefined8 *)(unaff_x29 + -8),0);
  return;
}


