/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColors
ENTRY_POINT: 076fe4d0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColors(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  
  uVar1 = FUN_04447ca8();
  if ((uVar1 & 1) == 0) {
    if (unaff_w22 != 0) {
      if (unaff_x21 == 0) {
        uVar3 = thunk_FUN_044915f0(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar3,0);
      }
      goto LAB_076fe4f4;
    }
    if (*(char *)(unaff_x19 + 0x70) == '\0') {
      pcVar4 = FUN_043523e8;
    }
    else {
      uVar1 = thunk_FUN_04498138();
      uVar2 = FUN_0444823c();
      if ((uVar1 & 1) == 0) {
        if ((uVar2 & 1) == 0) {
          pcVar4 = FUN_04352418;
        }
        else {
          pcVar4 = FUN_04352444;
        }
      }
      else if ((uVar2 & 1) == 0) {
        pcVar4 = FUN_043524c8;
      }
      else {
        pcVar4 = FUN_04352504;
      }
    }
  }
  else {
    if (unaff_w22 != 1) {
LAB_076fe4f4:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_076fe56c;
    }
    pcVar4 = FUN_04352408;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar4;
LAB_076fe56c:
  *(code **)(unaff_x19 + 0x38) = FUN_043523a0;
  return;
}


