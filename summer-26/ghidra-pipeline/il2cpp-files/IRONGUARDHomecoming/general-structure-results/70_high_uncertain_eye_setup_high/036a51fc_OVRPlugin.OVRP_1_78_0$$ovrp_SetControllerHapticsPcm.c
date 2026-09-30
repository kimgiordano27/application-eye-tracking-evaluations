/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetControllerHapticsPcm
ENTRY_POINT: 036a51fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsPcm(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  undefined8 unaff_x22;
  
  FUN_04073314();
  lVar1 = FUN_040703d4();
                    /* try { // try from 036a520c to 037a5217 has its CatchHandler @ 036a527c */
  if (lVar1 != 0) {
                    /* try { // try from 036a5218 to 037a5243 has its CatchHandler @ 036a5050 */
    FUN_040732d0(lVar1,*(undefined4 *)(unaff_x20 + 0x3c),0);
    lVar1 = *(long *)(unaff_x20 + 0x68);
    if (lVar1 != 0) {
      lVar2 = thunk_FUN_01f116d0();
      if (lVar2 == 0) {
                    /* catch() { ... } // from try @ 036a5100 with catch @ 036a5274 */
        uVar3 = PrefabSceneManager__LoadSceneAsync();
                    /* catch() { ... } // from try @ 036a50d0 with catch @ 036a5278 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 036a520c with catch @ 036a527c
                       catch() { ... } // from try @ 036a5268 with catch @ 036a527c */
        FUN_01f08910(uVar3,0);
      }
      if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
                    /* try { // try from 036a5244 to 037a5267 has its CatchHandler @ 036a529c */
        *(undefined8 *)(lVar1 + (long)(int)unaff_w19 * 8 + 0x20) = unaff_x22;
        thunk_FUN_01f51358();
                    /* try { // try from 036a5268 to 037a526f has its CatchHandler @ 036a527c */
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 036a511c with catch @ 036a5270
                       try { // try from 036a5270 to 037a52af has its CatchHandler @ 036a5050 */
  FUN_01f08a3c();
}


