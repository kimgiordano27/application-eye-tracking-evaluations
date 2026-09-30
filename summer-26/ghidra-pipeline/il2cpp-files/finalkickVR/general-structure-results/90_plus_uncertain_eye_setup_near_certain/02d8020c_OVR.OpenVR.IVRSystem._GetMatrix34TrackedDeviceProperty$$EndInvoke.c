/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetMatrix34TrackedDeviceProperty$$EndInvoke
ENTRY_POINT: 02d8020c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVR_OpenVR_IVRSystem__GetMatrix34TrackedDeviceProperty__EndInvoke
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong *puStack0000000000000020;
  undefined8 *puStack0000000000000028;
  undefined4 uStack0000000000000054;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000084;
  undefined4 uStack000000000000008c;
  byte bStack00000000000000af;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 uStack00000000000000d0;
  long lStack00000000000000d8;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  
  puStack0000000000000020 = (ulong *)&stack0x000000e4;
  puStack0000000000000028 =
       (undefined8 *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  uStack00000000000000d0 = param_6;
  lStack00000000000000d8 = param_5;
  uStack00000000000000e4 = param_1;
  uStack00000000000000e8 = param_2;
  uStack00000000000000ec = param_3;
  if ((OVRManager_set_headPoseRelativeOffsetRotation_m607DFB21F99CE3107ECA6BD9E1C0A2B6AC4242FC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_set_headPoseRelativeOffsetRotation_m607DFB21F99CE3107ECA6BD9E1C0A2B6AC4242FC::
    s_Il2CppMethodInitialized = 1;
  }
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000028);
  bStack00000000000000af =
       OVRPlugin_GetHeadPoseModifier_mF5EB4C2BAE8E41E5282E28B72A3163B0411EC46A
                 (&stack0x000000c0,&stack0x000000b0,0);
  bStack00000000000000af = bStack00000000000000af & 1;
  if (bStack00000000000000af != 0) {
    uStack0000000000000074 = (undefined4)(*puStack0000000000000020 >> 0x20);
    uVar2 = uStack00000000000000ec;
    uVar1 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline
                      (*puStack0000000000000020 & 0xffffffff);
    uStack0000000000000084 = uStack0000000000000074;
    uStack000000000000008c = param_4;
    uVar1 = OVRExtensions_ToQuatf_mF7543BB09A1D01A842FB07FE7F7997E988BAC06E(uVar1,0);
    in_stack_000000c8 = CONCAT44(param_4,uVar2);
    in_stack_000000c0 = CONCAT44(uStack0000000000000074,uVar1);
    uStack0000000000000054 = uStack0000000000000074;
    uStack000000000000005c = param_4;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000028);
    OVRPlugin_SetHeadPoseModifier_mBB073CB97E2AC7C4952A36E1AE1F7A825AE9D815
              (&stack0x000000c0,&stack0x000000b0,0);
  }
  *(ulong *)(lStack00000000000000d8 + 0x4c) = *puStack0000000000000020;
  *(undefined4 *)(lStack00000000000000d8 + 0x54) = uStack00000000000000ec;
  return;
}


