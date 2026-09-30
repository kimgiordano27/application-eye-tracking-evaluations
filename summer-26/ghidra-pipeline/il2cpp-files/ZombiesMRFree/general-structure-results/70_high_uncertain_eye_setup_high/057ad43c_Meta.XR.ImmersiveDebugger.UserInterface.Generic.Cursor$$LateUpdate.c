/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$LateUpdate
ENTRY_POINT: 057ad43c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__LateUpdate
               (undefined8 param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x19;
  long unaff_x21;
  
  thunk_FUN_03048534();
  cVar1 = *(char *)(unaff_x21 + 0x52);
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar2 = FUN_02fe9358();
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x04') {
      if (param_2 == 0) {
        uVar3 = thunk_FUN_03022100(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar3,0);
      }
      goto LAB_057ad488;
    }
    pcVar4 = FUN_02c6a128;
  }
  else {
    if (cVar1 != '\x05') {
LAB_057ad488:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_057ad498;
    }
    pcVar4 = FUN_02c6a148;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar4;
LAB_057ad498:
  *(code **)(unaff_x19 + 0x38) = FUN_02c6a0b0;
  return;
}


