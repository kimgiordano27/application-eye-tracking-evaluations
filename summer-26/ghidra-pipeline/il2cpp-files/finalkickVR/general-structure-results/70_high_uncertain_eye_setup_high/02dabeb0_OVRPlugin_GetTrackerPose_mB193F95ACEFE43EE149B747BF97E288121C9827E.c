/*
FUNCTION_NAME: OVRPlugin_GetTrackerPose_mB193F95ACEFE43EE149B747BF97E288121C9827E
ENTRY_POINT: 02dabeb0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPlugin_GetTrackerPose_mB193F95ACEFE43EE149B747BF97E288121C9827E
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  if ((OVRPlugin_GetTrackerPose_mB193F95ACEFE43EE149B747BF97E288121C9827E::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetTrackerPose_mB193F95ACEFE43EE149B747BF97E288121C9827E::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar1 = il2cpp_codegen_add<int,int>(param_2,5);
  OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(uVar1,0xffffffff,0);
  param_1[1] = uStack_38;
  *param_1 = local_40;
  *(undefined8 *)((long)param_1 + 0x14) = uStack_2c;
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_30,uStack_38._4_4_);
  return;
}


