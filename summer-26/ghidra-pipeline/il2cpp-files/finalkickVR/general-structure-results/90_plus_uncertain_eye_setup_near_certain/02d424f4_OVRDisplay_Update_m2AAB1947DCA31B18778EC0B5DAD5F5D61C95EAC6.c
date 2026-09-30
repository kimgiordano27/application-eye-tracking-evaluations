/*
FUNCTION_NAME: OVRDisplay_Update_m2AAB1947DCA31B18778EC0B5DAD5F5D61C95EAC6
ENTRY_POINT: 02d424f4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRDisplay_Update_m2AAB1947DCA31B18778EC0B5DAD5F5D61C95EAC6(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar5;
  
  puVar3 = Method_System_Threading_Timer_Scheduler_SchedulerThread__;
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  if ((OVRDisplay_Update_m2AAB1947DCA31B18778EC0B5DAD5F5D61C95EAC6::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    OVRDisplay_Update_m2AAB1947DCA31B18778EC0B5DAD5F5D61C95EAC6::s_Il2CppMethodInitialized = 1;
  }
  OVRDisplay_UpdateTextures_m2A2CA0BA4FA2CBC6D14AA970B7DDAB91587A8836(param_1,0);
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) &&
     (iVar4 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(0),
     *(int *)(param_1 + 0x24) < iVar4)) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(*(undefined8 *)puVar3,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      pAVar5 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(param_1 + 0x30);
      NullCheck(pAVar5);
      Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar5,(MethodInfo *)0x0);
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x7fffffff;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  iVar4 = OVRPlugin_GetSystemHeadsetType_m78DFDBECE24A926CF89B9A8D93931C78A3824B01(0);
  if (7 < iVar4) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    iVar4 = OVRPlugin_GetSystemHeadsetType_m78DFDBECE24A926CF89B9A8D93931C78A3824B01(0);
    if (iVar4 < 0x1000) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      iVar4 = OVRPlugin_GetLocalTrackingSpaceRecenterCount_m985226B8EF52AEBC99563EAE477B0C2FB6E12EAA
                        (0);
      if (*(int *)(param_1 + 0x28) != iVar4) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(*(undefined8 *)puVar3,0);
        if (*(long *)(param_1 + 0x30) != 0) {
          pAVar5 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(param_1 + 0x30);
          NullCheck(pAVar5);
          Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar5,(MethodInfo *)0x0);
        }
        *(int *)(param_1 + 0x28) = iVar4;
      }
    }
  }
  return;
}


