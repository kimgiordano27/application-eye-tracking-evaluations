/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$RegisterAnchorRemovedCallback
ENTRY_POINT: 077337e8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__RegisterAnchorRemovedCallback(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w23;
  undefined8 *unaff_x26;
  
  do {
    lVar3 = *(long *)(unaff_x20 + 0x18);
                    /* try { // try from 077337ec to 0783380f has its CatchHandler @ 07733ad4 */
    if (lVar3 == 0) {
LAB_0773385c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar1 = *(uint *)(param_1 + (long)(int)unaff_w23 * 4 + 0x20);
    if (*(uint *)(lVar3 + 0x18) <= uVar1) break;
    lVar3 = *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_0773385c;
    uVar2 = FUN_05bae1d4(lVar3);
                    /* try { // try from 07733820 to 0783383b has its CatchHandler @ 07733ae0 */
    if ((uVar2 & 1) != 0) {
      FUN_05baf38c(lVar3);
      if (*(int *)(lVar3 + 0x18) == 0) {
                    /* try { // try from 0773383c to 078338c3 has its CatchHandler @ 07733af4 */
        if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0773385c;
        FUN_0564a0ec(*(long *)(unaff_x20 + 0x20),uVar1,*unaff_x26);
      }
    }
    param_1 = *(long *)(unaff_x19 + 0x40);
    unaff_w23 = unaff_w23 + 1;
    if (param_1 == 0) goto LAB_0773385c;
    if ((int)*(uint *)(param_1 + 0x18) <= (int)unaff_w23) {
      return;
    }
  } while (unaff_w23 < *(uint *)(param_1 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


