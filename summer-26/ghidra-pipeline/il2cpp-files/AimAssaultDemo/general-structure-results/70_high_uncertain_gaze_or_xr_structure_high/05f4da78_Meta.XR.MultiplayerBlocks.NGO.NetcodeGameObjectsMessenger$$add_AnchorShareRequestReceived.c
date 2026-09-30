/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.NetcodeGameObjectsMessenger$$add_AnchorShareRequestReceived
ENTRY_POINT: 05f4da78
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_NGO_NetcodeGameObjectsMessenger__add_AnchorShareRequestReceived(void)

{
  ulong uVar1;
  uint unaff_w19;
  void *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  code *unaff_x27;
  long in_stack_00000368;
  
  do {
    uVar1 = (*unaff_x27)();
    if ((uVar1 & 1) != 0) {
LAB_05f4da9c:
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000368) {
        return unaff_w19;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x25 = unaff_x25 + -1;
    unaff_x23 = (void *)((long)unaff_x23 + 0xd8);
    if (unaff_x25 == 0) {
      unaff_w19 = 0xffffffff;
      goto LAB_05f4da9c;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    memcpy(&stack0x000000e0,unaff_x23,0xd8);
    memcpy(&stack0x00000008,unaff_x20,0xd8);
    unaff_x27 = *(code **)(*unaff_x22 + 0x1b8);
    memcpy(&stack0x00000290,&stack0x000000e0,0xd8);
    memcpy(&stack0x000001b8,&stack0x00000008,0xd8);
  } while( true );
}


