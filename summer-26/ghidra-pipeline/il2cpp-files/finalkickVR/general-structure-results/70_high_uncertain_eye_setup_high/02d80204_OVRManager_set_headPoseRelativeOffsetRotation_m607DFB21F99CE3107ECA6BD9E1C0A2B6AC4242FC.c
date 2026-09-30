/*
FUNCTION_NAME: OVRManager_set_headPoseRelativeOffsetRotation_m607DFB21F99CE3107ECA6BD9E1C0A2B6AC4242FC
ENTRY_POINT: 02d80204
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRManager_set_headPoseRelativeOffsetRotation_m607DFB21F99CE3107ECA6BD9E1C0A2B6AC4242FC
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_30 = param_6;
  local_28 = param_5;
  local_1c = param_1;
  uStack_18 = param_2;
  local_14 = param_3;
  if ((OVRManager_set_headPoseRelativeOffsetRotation_m607DFB21F99CE3107ECA6BD9E1C0A2B6AC4242FC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_set_headPoseRelativeOffsetRotation_m607DFB21F99CE3107ECA6BD9E1C0A2B6AC4242FC::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  local_48 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar2 = OVRPlugin_GetHeadPoseModifier_mF5EB4C2BAE8E41E5282E28B72A3163B0411EC46A
                    (&local_40,&local_50,0);
  if ((bVar2 & 1) != 0) {
    uVar4 = uStack_18;
    uVar5 = local_14;
    uVar3 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(local_1c);
    uVar3 = OVRExtensions_ToQuatf_mF7543BB09A1D01A842FB07FE7F7997E988BAC06E(uVar3,0);
    uStack_38 = CONCAT44(param_4,uVar5);
    local_40 = CONCAT44(uVar4,uVar3);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRPlugin_SetHeadPoseModifier_mBB073CB97E2AC7C4952A36E1AE1F7A825AE9D815(&local_40,&local_50,0);
  }
  *(ulong *)(local_28 + 0x4c) = CONCAT44(uStack_18,local_1c);
  *(undefined4 *)(local_28 + 0x54) = local_14;
  return;
}


