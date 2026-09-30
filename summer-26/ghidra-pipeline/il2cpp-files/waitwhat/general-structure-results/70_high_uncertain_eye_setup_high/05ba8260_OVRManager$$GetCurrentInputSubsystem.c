/*
FUNCTION_NAME: OVRManager$$GetCurrentInputSubsystem
ENTRY_POINT: 05ba8260
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentInputSubsystem(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar4;
  
                    /* catch() { ... } // from try @ 05ba81cc with catch @ 05ba8260 */
                    /* catch() { ... } // from try @ 05ba7eb8 with catch @ 05ba8264 */
                    /* catch() { ... } // from try @ 05ba81b8 with catch @ 05ba8268 */
  FUN_03188a78(PTR_DAT_07113260);
                    /* catch() { ... } // from try @ 05ba81a4 with catch @ 05ba826c */
                    /* catch() { ... } // from try @ 05ba7f50 with catch @ 05ba8270 */
  *(undefined1 *)(unaff_x21 + 0x9b5) = 1;
                    /* catch() { ... } // from try @ 05ba8190 with catch @ 05ba8274 */
                    /* catch() { ... } // from try @ 05ba7f70 with catch @ 05ba8278 */
                    /* catch() { ... } // from try @ 05ba817c with catch @ 05ba827c */
                    /* catch() { ... } // from try @ 05ba8168 with catch @ 05ba8280 */
  lVar2 = FUN_05974d7c(*(undefined8 *)(unaff_x19 + 0x90));
  puVar1 = PTR_DAT_07113260;
                    /* catch() { ... } // from try @ 05ba7f7c with catch @ 05ba8284 */
  if (lVar2 == 0) {
                    /* catch() { ... } // from try @ 05ba808c with catch @ 05ba82c8 */
    *(undefined8 *)(unaff_x19 + 0x90) = 0;
                    /* catch() { ... } // from try @ 05ba8078 with catch @ 05ba82cc */
                    /* catch() { ... } // from try @ 05ba7d2c with catch @ 05ba82d0 */
                    /* catch() { ... } // from try @ 05ba7d18 with catch @ 05ba82d4 */
    return;
  }
                    /* catch() { ... } // from try @ 05ba7f04 with catch @ 05ba8288 */
                    /* catch() { ... } // from try @ 05ba8140 with catch @ 05ba828c */
                    /* catch() { ... } // from try @ 05ba812c with catch @ 05ba8290 */
                    /* catch() { ... } // from try @ 05ba8118 with catch @ 05ba8294 */
  uVar4 = *(undefined8 *)PTR_DAT_07113260;
                    /* catch() { ... } // from try @ 05ba8104 with catch @ 05ba8298 */
                    /* catch() { ... } // from try @ 05ba80f0 with catch @ 05ba829c */
  lVar3 = thunk_FUN_031c3cac(lVar2,uVar4);
                    /* catch() { ... } // from try @ 05ba80dc with catch @ 05ba82a0 */
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 05ba7de0 with catch @ 05ba82a4 */
    uVar4 = *(undefined8 *)puVar1;
                    /* catch() { ... } // from try @ 05ba7e5c with catch @ 05ba82a8 */
    *(long *)(unaff_x19 + 0x90) = lVar3;
                    /* catch() { ... } // from try @ 05ba7e14 with catch @ 05ba82ac */
                    /* catch() { ... } // from try @ 05ba7e80 with catch @ 05ba82b0 */
                    /* catch() { ... } // from try @ 05ba7db0 with catch @ 05ba82b4 */
    lVar3 = thunk_FUN_031c3cac(lVar2,uVar4);
                    /* catch() { ... } // from try @ 05ba80b4 with catch @ 05ba82b8 */
    if (lVar3 != 0) {
      return;
    }
  }
                    /* catch() { ... } // from try @ 05ba7ed0 with catch @ 05ba82bc */
                    /* catch() { ... } // from try @ 05ba80c8 with catch @ 05ba82c0
                       catch() { ... } // from try @ 05ba8154 with catch @ 05ba82c0 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05ba80a0 with catch @ 05ba82c4 */
  FUN_03189058(lVar2,uVar4);
}


