/*
FUNCTION_NAME: OVRManager_set_headPoseRelativeOffsetTranslation_m8B70891033EA3A0A28D9C1986E7B5D58016CCBA6
ENTRY_POINT: 02d803d0
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

void OVRManager_set_headPoseRelativeOffsetTranslation_m8B70891033EA3A0A28D9C1986E7B5D58016CCBA6
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_40 = param_5;
  local_38 = param_4;
  local_2c = param_1;
  uStack_28 = param_2;
  local_24 = param_3;
  if ((OVRManager_set_headPoseRelativeOffsetTranslation_m8B70891033EA3A0A28D9C1986E7B5D58016CCBA6::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_set_headPoseRelativeOffsetTranslation_m8B70891033EA3A0A28D9C1986E7B5D58016CCBA6::
    s_Il2CppMethodInitialized = 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar2 = OVRPlugin_GetHeadPoseModifier_mF5EB4C2BAE8E41E5282E28B72A3163B0411EC46A
                    (&local_50,&local_60,0);
  if ((bVar2 & 1) != 0) {
    local_98 = (undefined4)local_60;
    uStack_94 = (undefined4)((ulong)local_60 >> 0x20);
    uVar5 = local_58;
    uVar3 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62(local_98);
    bVar2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline
                      (uVar3,uStack_94,uVar5,local_2c,uStack_28,local_24,0);
    if ((bVar2 & 1) != 0) {
      uVar5 = uStack_28;
      uVar3 = local_24;
      uVar4 = OVRExtensions_ToFlippedZVector3f_m62CC475050FFCDA6E53230DCE20070AB0228D6FA(local_2c);
      local_60 = CONCAT44(uVar5,uVar4);
      local_58 = uVar3;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      OVRPlugin_SetHeadPoseModifier_mBB073CB97E2AC7C4952A36E1AE1F7A825AE9D815(&local_50,&local_60,0)
      ;
    }
  }
  *(ulong *)(local_38 + 0x58) = CONCAT44(uStack_28,local_2c);
  *(undefined4 *)(local_38 + 0x60) = local_24;
  return;
}


