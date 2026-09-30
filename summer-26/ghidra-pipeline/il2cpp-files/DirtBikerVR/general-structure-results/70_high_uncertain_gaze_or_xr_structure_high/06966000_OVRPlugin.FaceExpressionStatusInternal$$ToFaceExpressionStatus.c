/*
FUNCTION_NAME: OVRPlugin.FaceExpressionStatusInternal$$ToFaceExpressionStatus
ENTRY_POINT: 06966000
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_possible_biometrics_hits_4
*/


undefined8 OVRPlugin_FaceExpressionStatusInternal__ToFaceExpressionStatus(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x24;
  long in_stack_00000028;
  long in_stack_00000040;
  
  while( true ) {
    if ((param_1 & 1) == 0) {
      FUN_061c1960(&stack0x00000030,*(undefined8 *)PTR_DAT_084b6f00);
      if (*(long *)(unaff_x24 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_04de90b8(&stack0x00000018,*(long *)(unaff_x24 + 0x28),*(undefined8 *)PTR_DAT_084b6f30);
      puVar1 = PTR_DAT_084b6f10;
      while( true ) {
        uVar2 = FUN_061c1964(&stack0x00000018,*(undefined8 *)puVar1);
        if ((uVar2 & 1) == 0) {
          FUN_061c1960(&stack0x00000018,*(undefined8 *)PTR_DAT_084b6ef8);
          *(undefined8 *)(unaff_x19 + 0x18) = 0;
          thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),0);
          *(undefined4 *)(unaff_x19 + 0x10) = 2;
          return 1;
        }
        if (in_stack_00000028 == 0) break;
        FUN_07c9877c(in_stack_00000028,0,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (in_stack_00000040 == 0) break;
    FUN_07c61ca8(in_stack_00000040,0,0);
    param_1 = FUN_061c1964(&stack0x00000030,*unaff_x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


