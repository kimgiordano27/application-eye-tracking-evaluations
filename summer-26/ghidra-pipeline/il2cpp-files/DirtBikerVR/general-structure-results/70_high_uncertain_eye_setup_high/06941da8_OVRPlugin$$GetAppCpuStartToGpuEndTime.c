/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 06941da8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAppCpuStartToGpuEndTime(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  thunk_FUN_03afed3c();
  plVar1 = (long *)thunk_FUN_03a9a6e8();
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
  }
  if (2 < *(uint *)(unaff_x21 + 0x18)) {
    *(undefined8 *)(unaff_x21 + 0x30) = uVar2;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x21 + 0x30));
    if ((*(uint *)(unaff_x21 + 0x18) & 0xfffffffc) != 0) {
      *(undefined8 *)(unaff_x21 + 0x38) = *(undefined8 *)PTR_DAT_084b62d8;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x21 + 0x38));
      if (4 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined8 *)(unaff_x21 + 0x40) = unaff_x20;
        thunk_FUN_03afed3c();
        FUN_065ce45c();
        if (unaff_x19 != 0) {
          FUN_0693a250();
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


