/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 05d28640
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetNativeOpenXRSession(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  FUN_06905eb0();
  if (unaff_x21 != 0) {
    FUN_06904aa4();
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      FUN_068cd970(*(long *)(unaff_x19 + 0x50),1,0);
      FUN_05d13c30(&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x40));
      FUN_05d286f4(&stack0x00000060);
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        uVar1 = FUN_068f5d7c(*(long *)(unaff_x20 + 0x20),0);
        FUN_05caf184(uVar1,0,0);
        in_stack_00000048 = in_stack_00000008;
        in_stack_00000040 = in_stack_00000000;
        in_stack_00000050 = in_stack_00000010;
        uVar1 = FUN_05caa7cc(unaff_x19 + 0x58,&stack0x00000040,&stack0x00000060,0);
        *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
        thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x70),uVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


