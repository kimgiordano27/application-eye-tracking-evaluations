/*
FUNCTION_NAME: Normal.Realtime.SessionCaptureFileStream$$ReadDeltaUpdate
ENTRY_POINT: 06801dc8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Normal_Realtime_SessionCaptureFileStream__ReadDeltaUpdate(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  
  if (unaff_x20 != 0) {
    *(undefined1 *)(unaff_x20 + 0x98) = 1;
    puVar2 = PTR_DAT_0848ab18;
    iVar1 = *(int *)(*unaff_x22 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05330be4(unaff_x19 + 2,1,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


