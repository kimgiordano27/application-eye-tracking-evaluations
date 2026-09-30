/*
FUNCTION_NAME: OVRPlugin$$GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 069511a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetLocalTrackingSpaceRecenterCount(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  long lStack0000000000000028;
  
  *(undefined1 *)(unaff_x20 + 0x21) = 1;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  lStack0000000000000028 = 0;
  FUN_06936c78();
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x28), lVar3 != 0)) {
    FUN_07cac924(lVar3,0);
    if ((*(long *)(unaff_x19 + 0x10) != 0) &&
       (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x28), lVar3 != 0)) {
      FUN_07cac824(lVar3,0);
      puVar2 = PTR_DAT_084b6968;
      puVar1 = PTR_DAT_084b6960;
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_04de90b8(&stack0x00000018,*(long *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_084b6978);
        while( true ) {
          uVar4 = FUN_061c1964(&stack0x00000018,*(undefined8 *)puVar2);
          if ((uVar4 & 1) == 0) {
            FUN_061c1960(&stack0x00000018,*(undefined8 *)puVar1);
            return;
          }
          if (lStack0000000000000028 == 0) break;
          FUN_06950d90();
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


