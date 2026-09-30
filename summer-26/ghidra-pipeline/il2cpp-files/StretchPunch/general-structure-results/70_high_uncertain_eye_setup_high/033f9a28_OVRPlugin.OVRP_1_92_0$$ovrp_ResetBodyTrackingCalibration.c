/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_ResetBodyTrackingCalibration
ENTRY_POINT: 033f9a28
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_ResetBodyTrackingCalibration(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int unaff_w20;
  int unaff_w21;
  int *unaff_x22;
  long unaff_x23;
  undefined4 in_stack_00000008;
  
  FUN_01d7d918();
  *(undefined1 *)(unaff_x23 + 0xbe0) = 1;
  lVar4 = FUN_033f9ca0();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  iVar2 = FUN_033f9cfc();
  iVar3 = *unaff_x22;
  thunk_FUN_01da0934();
  puVar1 = StringLiteral_2260;
  if (iVar3 == iVar2) {
    uVar6 = thunk_FUN_01dd295c(StringLiteral_9467);
    uVar6 = FUN_033d6e4c(uVar6,0);
    thunk_FUN_01dd295c(StringLiteral_9468);
    uVar7 = thunk_FUN_01de27b8();
    FUN_033f2f74(uVar7,uVar6);
    uVar6 = thunk_FUN_01dd295c(StringLiteral_9469);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar7,uVar6);
  }
  in_stack_00000008 = 0;
  do {
    do {
      do {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033f53e0(&stack0x00000008);
        iVar3 = *unaff_x22;
        thunk_FUN_01da0934();
        if (iVar3 == 0) {
          FUN_033f9390();
          thunk_FUN_01da0934();
          iVar3 = thunk_FUN_01d99908();
          if (iVar3 == 0) {
            return;
          }
          FUN_033f9984();
        }
      } while (unaff_w21 == -1);
      if (unaff_w21 == 0) {
        return;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar5 = FUN_033f54e0(&stack0x00000008);
    } while ((uVar5 & 1) == 0);
    iVar3 = thunk_FUN_01dc9540(0);
    if (iVar3 - unaff_w20 < 0) {
      return;
    }
  } while (0 < unaff_w21 - (iVar3 - unaff_w20));
  return;
}


