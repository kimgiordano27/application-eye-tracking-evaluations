/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingState
ENTRY_POINT: 073e4b00
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandTrackingState(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    Oculus_Platform_Models_AssetFileDownloadResult___ctor(*(long *)(unaff_x19 + 0x70),0);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      uVar1 = FUN_085dbb5c(*(long *)(unaff_x19 + 0x48),0);
      lVar2 = *(long *)(unaff_x19 + 0x70);
      if (lVar2 != 0) {
        in_stack_00000078 = *(undefined4 *)(lVar2 + 0x30);
        in_stack_00000070 = *(undefined8 *)(lVar2 + 0x28);
        in_stack_00000068 = *(undefined8 *)(lVar2 + 0x20);
        in_stack_00000060 = *(undefined8 *)(lVar2 + 0x18);
        FUN_0736d7a4(uVar1,&stack0x00000060,0,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


