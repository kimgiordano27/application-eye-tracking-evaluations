/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 06940074
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodePositionValid(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x20;
  
  FUN_03a8a718(PTR_DAT_08497858);
  *(undefined1 *)(unaff_x20 + 0xf9b) = 1;
  puVar1 = PTR_DAT_08497858;
                    /* try { // try from 06940088 to 06a40203 has its CatchHandler @ 06940088
                       catch() { ... } // from try @ 06940088 with catch @ 06940088
                       catch() { ... } // from try @ 069402b8 with catch @ 06940088
                       catch() { ... } // from try @ 06940358 with catch @ 06940088
                       catch() { ... } // from try @ 0694039c with catch @ 06940088 */
  lVar3 = *(long *)(unaff_x19 + 0x28);
  if (lVar3 != 0) {
    uVar2 = FUN_07c94160(0,*(undefined4 *)(lVar3 + 0x18),0);
    FUN_04de82e0(lVar3,uVar2,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


