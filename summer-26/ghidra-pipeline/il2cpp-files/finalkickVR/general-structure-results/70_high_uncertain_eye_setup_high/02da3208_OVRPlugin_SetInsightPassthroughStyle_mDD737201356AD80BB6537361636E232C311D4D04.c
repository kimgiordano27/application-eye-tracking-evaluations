/*
FUNCTION_NAME: OVRPlugin_SetInsightPassthroughStyle_mDD737201356AD80BB6537361636E232C311D4D04
ENTRY_POINT: 02da3208
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVRPlugin_SetInsightPassthroughStyle_mDD737201356AD80BB6537361636E232C311D4D04
               (undefined4 param_1,void *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined1 auStack_178 [44];
  undefined4 local_14c;
  undefined1 auStack_148 [40];
  undefined4 local_120;
  int local_11c;
  undefined1 auStack_118 [24];
  int local_100;
  int local_d4;
  undefined1 auStack_d0 [24];
  int local_b8;
  byte local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined4 local_70;
  byte local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  byte local_21;
  
  puVar3 = 
  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson_<>c_<ToLayout>b__24_1__;
  puVar2 = 
  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_3__
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_30 = param_3;
  local_28 = param_1;
  if ((OVRPlugin_SetInsightPassthroughStyle_mDD737201356AD80BB6537361636E232C311D4D04::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_<>c_<FromLayout>b__15_0__
              );
    OVRPlugin_SetInsightPassthroughStyle_mDD737201356AD80BB6537361636E232C311D4D04::
    s_Il2CppMethodInitialized = 1;
  }
  memset(auStack_58,0,0x28);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_60 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  local_68 = *puVar6;
  local_69 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_60,local_68,0);
  local_69 = local_69 & 1;
  if (local_69 == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_80 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    local_88 = *puVar6;
    local_89 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                         (local_80,local_88,0);
    local_89 = local_89 & 1;
    if (local_89 == 0) {
      local_21 = 0;
    }
    else {
      memcpy(auStack_d0,param_2,0x40);
      local_d4 = local_b8;
      if (local_b8 != 6) {
        memcpy(auStack_118,param_2,0x40);
        local_11c = local_100;
        if (local_100 != 7) {
          il2cpp_codegen_initobj(auStack_58,0x28);
          InsightPassthroughStyle2_CopyTo_m9CBE1B93A65DB9716EE9E073DD07733985DC99B3
                    (param_2,auStack_58);
          local_120 = local_28;
          memcpy(auStack_148,auStack_58,0x28);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          uVar4 = local_120;
          memcpy(auStack_178,auStack_148,0x28);
          local_14c = OVRP_1_63_0_ovrp_SetInsightPassthroughStyle_m6FB7611B50B6759CEC8F2AD92B7A8D1EDA754AC6
                                (uVar4,auStack_178,0);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          bVar5 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(local_14c,0);
          return bVar5 & 1;
        }
      }
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                (*(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_<>c_<FromLayout>b__15_0__
                 ,0);
      local_21 = 0;
    }
  }
  else {
    local_70 = local_28;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    local_74 = OVRP_1_84_0_ovrp_SetInsightPassthroughStyle2_m184A6C4F9E66EFD583808BB76C63B26E532842A6
                         (local_70,param_2);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_21 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(local_74,0);
    local_21 = local_21 & 1;
  }
  return local_21;
}


