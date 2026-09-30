/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryResults
ENTRY_POINT: 06924734
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRManager__remove_SpaceQueryResults(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint unaff_w20;
  long unaff_x21;
  
  iVar2 = FUN_06924588();
  if ((iVar2 == 0) && ((*(byte *)(unaff_x21 + 0x18) & 1) == 0)) {
    iVar3 = 0;
  }
  else {
                    /* try { // try from 06924754 to 06a24767 has its CatchHandler @ 06924768 */
    uVar1 = unaff_w20 << 3 | 6;
    if (uVar1 < 0x80) {
      iVar2 = 1;
    }
    else {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06924754 with catch @ 06924768
                       try { // try from 06924768 to 06a2477f has its CatchHandler @ 069246c0 */
      if (uVar1 < 0x4000) {
        iVar2 = 2;
      }
      else if (uVar1 < 0x200000) {
                    /* try { // try from 06924780 to 06a24797 has its CatchHandler @ 06924810 */
        iVar2 = 3;
      }
      else {
        iVar2 = 4;
        if ((unaff_w20 & 0x1fffffff) >> 0x19 != 0) {
          iVar2 = 5;
        }
      }
    }
                    /* try { // try from 06924798 to 06a247ff has its CatchHandler @ 069246c0 */
    iVar3 = FUN_069247b4();
    iVar3 = iVar3 + iVar2;
  }
  return iVar3;
}


