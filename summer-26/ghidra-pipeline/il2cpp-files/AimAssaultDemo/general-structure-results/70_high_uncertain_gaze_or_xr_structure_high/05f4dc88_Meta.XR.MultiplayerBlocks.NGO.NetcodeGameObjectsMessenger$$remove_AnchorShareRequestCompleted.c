/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.NetcodeGameObjectsMessenger$$remove_AnchorShareRequestCompleted
ENTRY_POINT: 05f4dc88
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_NGO_NetcodeGameObjectsMessenger__remove_AnchorShareRequestCompleted
               (void *param_1,void *param_2)

{
  long *unaff_x19;
  code *pcVar1;
  long unaff_x22;
  long in_stack_000001b8;
  
  memcpy(param_1,param_2,0xd8);
  pcVar1 = *(code **)(*unaff_x19 + 0x1c8);
  memcpy(&stack0x000000e0,&stack0x00000008,0xd8);
  (*pcVar1)();
  if (*(long *)(unaff_x22 + 0x28) == in_stack_000001b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


