/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$RefreshRaycaster
ENTRY_POINT: 057ab2e0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__RefreshRaycaster(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar1 = FUN_02fe9358();
  if ((uVar1 & 1) == 0) {
    if (unaff_w22 != 4) {
      if (unaff_x20 == 0) {
        uVar2 = thunk_FUN_03022100(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar2,0);
      }
      goto LAB_057ab31c;
    }
    pcVar3 = FUN_02c683b0;
  }
  else {
    if (unaff_w22 != 5) {
LAB_057ab31c:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_057ab32c;
    }
    pcVar3 = FUN_02c683d0;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar3;
LAB_057ab32c:
  *(code **)(unaff_x19 + 0x38) = FUN_02c68338;
  return;
}


