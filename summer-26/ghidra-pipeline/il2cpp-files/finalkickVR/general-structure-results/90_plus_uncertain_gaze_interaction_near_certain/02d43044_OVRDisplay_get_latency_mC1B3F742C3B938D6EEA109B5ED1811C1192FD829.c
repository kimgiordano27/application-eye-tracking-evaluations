/*
FUNCTION_NAME: OVRDisplay_get_latency_mC1B3F742C3B938D6EEA109B5ED1811C1192FD829
ENTRY_POINT: 02d43044
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_10;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_6
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRDisplay_get_latency_mC1B3F742C3B938D6EEA109B5ED1811C1192FD829
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  void *pvVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  Il2CppObject *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = param_3;
  local_28 = param_2;
  if ((OVRDisplay_get_latency_mC1B3F742C3B938D6EEA109B5ED1811C1192FD829::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Image>_Add__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Threading_Timer_Scheduler_TimerCB__);
    OVRDisplay_get_latency_mC1B3F742C3B938D6EEA109B5ED1811C1192FD829::s_Il2CppMethodInitialized = 1;
  }
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = (Il2CppObject *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar1 & 1) == 0) {
    il2cpp_codegen_initobj(&local_70,0x14);
    param_1[1] = uStack_68;
    *param_1 = local_70;
    *(undefined4 *)(param_1 + 2) = local_60;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    local_38 = OVRPlugin_get_latency_mBE733B8BEBAEC5CBFA114AB9BB0D03657CFCA511();
    pvVar2 = (void *)il2cpp_codegen_object_new
                               (*(Il2CppClass **)Method_System_Collections_Generic_List<Image>_Add__
                               );
    Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621
              (pvVar2,*(undefined8 *)Method_System_Threading_Timer_Scheduler_TimerCB__,0,0);
    il2cpp_codegen_initobj(&local_50,0x14);
    uVar4 = local_38;
    NullCheck(pvVar2);
    pIVar3 = (Il2CppObject *)Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(pvVar2,uVar4,0);
    local_58 = pIVar3;
    NullCheck(pIVar3);
    bVar1 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(pIVar3,0);
    pIVar3 = local_58;
    if ((bVar1 & 1) != 0) {
      NullCheck(local_58);
      pvVar2 = (void *)VirtualFuncInvoker0<GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E*>
                       ::Invoke(5,pIVar3);
      NullCheck(pvVar2);
      pvVar2 = (void *)GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3(pvVar2,1);
      NullCheck(pvVar2);
      uVar4 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(pvVar2,0);
      uVar5 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(uVar4,0);
      pIVar3 = local_58;
      local_50 = CONCAT44(local_50._4_4_,uVar5);
      NullCheck(local_58);
      pvVar2 = (void *)VirtualFuncInvoker0<GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E*>
                       ::Invoke(5,pIVar3);
      NullCheck(pvVar2);
      pvVar2 = (void *)GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3
                                 (pvVar2,2,0);
      NullCheck(pvVar2);
      uVar4 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(pvVar2,0);
      uVar5 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(uVar4,0);
      pIVar3 = local_58;
      local_50 = CONCAT44(uVar5,(undefined4)local_50);
      NullCheck(local_58);
      pvVar2 = (void *)VirtualFuncInvoker0<GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E*>
                       ::Invoke(5,pIVar3);
      NullCheck(pvVar2);
      pvVar2 = (void *)GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3
                                 (pvVar2,3,0);
      NullCheck(pvVar2);
      uVar4 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(pvVar2,0);
      uVar5 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(uVar4,0);
      uStack_48 = CONCAT44(uStack_48._4_4_,uVar5);
    }
    param_1[1] = uStack_48;
    *param_1 = local_50;
    *(undefined4 *)(param_1 + 2) = local_40;
  }
  return;
}


