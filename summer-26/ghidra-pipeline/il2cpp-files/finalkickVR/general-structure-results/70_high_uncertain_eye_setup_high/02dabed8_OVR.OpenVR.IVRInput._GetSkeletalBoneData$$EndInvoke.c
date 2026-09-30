/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._GetSkeletalBoneData$$EndInvoke
ENTRY_POINT: 02dabed8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVR_OpenVR_IVRInput__GetSkeletalBoneData__EndInvoke(long param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0xe20));
  OVRPlugin_GetTrackerPose_mB193F95ACEFE43EE149B747BF97E288121C9827E::s_Il2CppMethodInitialized = 1;
  *(undefined4 *)(unaff_x29 + -0x14) = *(undefined4 *)(unaff_x29 + -4);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar1 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x14),5);
  OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(uVar1,0xffffffff,0);
  in_stack_00000008[1] = in_stack_00000018;
  *in_stack_00000008 = in_stack_00000010;
  *(undefined8 *)((long)in_stack_00000008 + 0x14) = uStack0000000000000024;
  *(ulong *)((long)in_stack_00000008 + 0xc) =
       CONCAT44(uStack0000000000000020,in_stack_00000018._4_4_);
  return;
}


