/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.NetcodeGameObjectsMessenger$$remove_AnchorShareRequestReceived
ENTRY_POINT: 05f4db28
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


uint Meta_XR_MultiplayerBlocks_NGO_NetcodeGameObjectsMessenger__remove_AnchorShareRequestReceived
               (void)

{
  ulong uVar1;
  uint unaff_w19;
  void *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  code *pcVar2;
  long in_stack_00000368;
  
  do {
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    memcpy(&stack0x000000e0,(void *)(unaff_x21 + (long)(int)unaff_w19 * 0xd8 + 0x20),0xd8);
    memcpy(&stack0x00000008,unaff_x20,0xd8);
    pcVar2 = *(code **)(*unaff_x22 + 0x1b8);
    memcpy(&stack0x00000290,&stack0x000000e0,0xd8);
    memcpy(&stack0x000001b8,&stack0x00000008,0xd8);
    uVar1 = (*pcVar2)();
    if ((uVar1 & 1) != 0) goto LAB_05f4dbac;
    unaff_w19 = unaff_w19 - 1;
  } while (unaff_w24 <= (int)unaff_w19);
  unaff_w19 = 0xffffffff;
LAB_05f4dbac:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000368) {
    return unaff_w19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


