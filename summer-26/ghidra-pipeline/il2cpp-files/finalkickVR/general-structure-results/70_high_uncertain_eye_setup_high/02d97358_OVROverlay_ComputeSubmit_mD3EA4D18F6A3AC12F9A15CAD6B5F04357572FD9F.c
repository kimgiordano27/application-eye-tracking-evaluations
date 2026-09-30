/*
FUNCTION_NAME: OVROverlay_ComputeSubmit_mD3EA4D18F6A3AC12F9A15CAD6B5F04357572FD9F
ENTRY_POINT: 02d97358
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1
OVROverlay_ComputeSubmit_mD3EA4D18F6A3AC12F9A15CAD6B5F04357572FD9F
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
          undefined8 *param_5,float *param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  float *local_40;
  undefined8 *local_38;
  long local_30;
  undefined1 local_21;
  
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_58 = param_9;
  local_50 = param_8;
  local_48 = param_7;
  local_40 = param_6;
  local_38 = param_5;
  local_30 = param_4;
  if ((OVROverlay_ComputeSubmit_mD3EA4D18F6A3AC12F9A15CAD6B5F04357572FD9F::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass3_0_<CreateWireframeNotSupportedWarning>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass4_0_<CreateOverdrawMode>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass4_0_<CreateOverdrawMode>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass4_0_<CreateOverdrawMode>b__2__
              );
    OVROverlay_ComputeSubmit_mD3EA4D18F6A3AC12F9A15CAD6B5F04357572FD9F::s_Il2CppMethodInitialized =
         1;
  }
  local_5c = 0.0;
  OVROverlay_ComputePoseAndScale_m070BBBE8DCB557B6339514FC15C9B6BEBAD1777A
            (local_30,local_38,local_40,local_48,local_50,0);
  puVar3 = local_38;
  if (*(int *)(local_30 + 0xec) == 4) {
    pvVar5 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_30);
    NullCheck(pvVar5);
    uVar7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar5,0);
    *puVar3 = CONCAT44(param_2,uVar7);
    *(undefined4 *)(puVar3 + 1) = param_3;
    fVar8 = (float)Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline
                             ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)local_38,
                              (MethodInfo *)0x0);
    if (1.0 < fVar8) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass4_0_<CreateOverdrawMode>b__2__
                 ,0);
      return 0;
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  iVar4 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  if (((iVar4 == 3) || (*(int *)(local_30 + 0xec) != 1)) ||
     (local_5c = (float)il2cpp_codegen_multiply<float,float>
                                  ((*local_40 / local_40[2]) / 3.1415927,180.0), local_5c <= 180.0))
  {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    iVar4 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
    if ((iVar4 == 3) && (*(int *)(local_30 + 0xec) == 9)) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass3_0_<CreateWireframeNotSupportedWarning>b__0__
                 ,0);
      local_21 = 0;
    }
    else {
      local_21 = 1;
    }
  }
  else {
    uVar6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(&local_5c);
    uVar6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B
                      (*(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass4_0_<CreateOverdrawMode>b__0__
                       ,uVar6,*(undefined8 *)
                               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass4_0_<CreateOverdrawMode>b__1__
                       ,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(uVar6,0);
    local_21 = 0;
  }
  return local_21;
}


