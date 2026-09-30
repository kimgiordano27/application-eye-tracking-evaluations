/*
FUNCTION_NAME: OVRPlugin$$GetTrackerFrustum
ENTRY_POINT: 05d7a758
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerFrustum(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint *unaff_x22;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= *unaff_x22) {
LAB_05d7a7d8:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    lVar1 = *(long *)(lVar1 + (long)(int)*unaff_x22 * 8 + 0x20);
    if (lVar1 != 0) {
      if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
        uVar3 = 0;
                    /* try { // try from 05d7a78c to 05e7a793 has its CatchHandler @ 05d7a834 */
        uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
                    /* try { // try from 05d7a794 to 05e7a797 has its CatchHandler @ 05d7a248 */
        do {
                    /* try { // try from 05d7a798 to 05e7a79b has its CatchHandler @ 05d7a840 */
                    /* try { // try from 05d7a79c to 05e7a79f has its CatchHandler @ 05d7a834 */
          if (uVar2 <= uVar3) goto LAB_05d7a7d8;
                    /* try { // try from 05d7a7a0 to 05e7a7ab has its CatchHandler @ 05d7a848 */
                    /* try { // try from 05d7a7ac to 05e7a7b3 has its CatchHandler @ 05d7a844 */
          FUN_05d7a8d0();
          uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05d7a7dc to 05e7a7e3 has its CatchHandler @ 05d7a838 */
  FUN_032d5ee8();
}


