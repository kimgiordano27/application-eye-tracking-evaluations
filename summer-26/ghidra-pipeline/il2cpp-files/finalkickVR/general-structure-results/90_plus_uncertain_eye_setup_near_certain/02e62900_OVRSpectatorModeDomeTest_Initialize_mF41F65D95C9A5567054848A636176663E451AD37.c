/*
FUNCTION_NAME: OVRSpectatorModeDomeTest_Initialize_mF41F65D95C9A5567054848A636176663E451AD37
ENTRY_POINT: 02e62900
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRSpectatorModeDomeTest_Initialize_mF41F65D95C9A5567054848A636176663E451AD37
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  byte local_e1;
  Il2CppObject *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  Il2CppArray *local_d0;
  Il2CppArray *local_c8;
  Il2CppObject *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  Il2CppArray *local_b0;
  Il2CppArray *local_a8;
  byte local_9b;
  byte local_9a;
  byte local_99;
  undefined1 auStack_98 [56];
  undefined1 auStack_60 [48];
  undefined8 local_30;
  long local_28;
  
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
  ;
  puVar1 = Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRSpectatorModeDomeTest_Initialize_mF41F65D95C9A5567054848A636176663E451AD37::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_704);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_705);
    OVRSpectatorModeDomeTest_Initialize_mF41F65D95C9A5567054848A636176663E451AD37::
    s_Il2CppMethodInitialized = 1;
  }
  memset(auStack_60,0,0x30);
  memset(auStack_98,0,0x38);
  local_99 = *(byte *)(local_28 + 0x20) & 1;
  if (local_99 == 0) {
    local_9a = Media_GetInitialized_m0786F11D130FC9598B90C01A542F76A002F4D048(0);
    local_9a = local_9a & 1;
    if (local_9a != 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
      local_9b = OVRPlugin_ResetDefaultExternalCamera_mABA1DDF03790F2D8CABBDFF98204604AE9D674B6();
      local_9b = local_9b & 1;
      local_b0 = (Il2CppArray *)SZArrayNew(*(Il2CppClass **)puVar2,1);
      local_a8 = local_b0;
      local_b8 = OVRPlugin_GetExternalCameraCount_mCF884D51AD3C5666FB5C4B9CDC8E7A6C0CF719F7(0);
      local_b4 = local_b8;
      local_c0 = (Il2CppObject *)Box(*(Il2CppClass **)puVar1,&local_b8);
      NullCheck(local_b0);
      ArrayElementTypeCheck(local_b0,local_c0);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_b0,0,local_c0);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                (*(undefined8 *)StringLiteral_705,local_b0,0);
      OVRSpectatorModeDomeTest_UpdateDefaultExternalCamera_mD87883591FCB75925D0FD0672E6F704FD46ED9EA
                (local_28,0);
      local_d0 = (Il2CppArray *)SZArrayNew(*(Il2CppClass **)puVar2,1);
      local_c8 = local_d0;
      local_d8 = OVRPlugin_GetExternalCameraCount_mCF884D51AD3C5666FB5C4B9CDC8E7A6C0CF719F7(0);
      local_d4 = local_d8;
      local_e0 = (Il2CppObject *)Box(*(Il2CppClass **)puVar1,&local_d8);
      NullCheck(local_d0);
      ArrayElementTypeCheck(local_d0,local_e0);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_d0,0,local_e0);
      Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                (*(undefined8 *)StringLiteral_704,local_d0,0);
      local_e1 = OVRPlugin_GetMixedRealityCameraInfo_m22A50602684F756CAF5CF17E526DFF0B8CB7E4C6
                           (0,auStack_98,auStack_60,0);
      local_e1 = local_e1 & 1;
      memcpy(auStack_118,auStack_60,0x30);
      *(undefined8 *)(local_28 + 0x38) = uStack_100;
      *(undefined8 *)(local_28 + 0x30) = local_108;
      *(undefined1 *)(local_28 + 0x20) = 1;
      *(undefined1 *)(local_28 + 0x54) = 1;
    }
  }
  return;
}


