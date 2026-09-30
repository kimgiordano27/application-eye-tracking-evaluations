/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxLoadFromMemory
ENTRY_POINT: 06033e10
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxLoadFromMemory(long param_1,long param_2)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 06033df0 with catch @ 06033e14 */
                    /* try { // try from 06033e1c to 06133e23 has its CatchHandler @ 06033e38 */
                    /* try { // try from 06033e24 to 06133e2f has its CatchHandler @ 06033ad8 */
  if ((DAT_07a46c10 & 1) == 0) {
                    /* try { // try from 06033e30 to 06133e37 has its CatchHandler @ 06033e38 */
    FUN_031f20f4(PTR_DAT_075f7968);
                    /* catch() { ... } // from try @ 06033dc4 with catch @ 06033e38
                       catch() { ... } // from try @ 06033e1c with catch @ 06033e38
                       catch() { ... } // from try @ 06033e30 with catch @ 06033e38 */
    FUN_031f20f4(PTR_DAT_075f7970);
    DAT_07a46c10 = 1;
  }
  *(long *)(param_1 + 0x30) = param_2;
  thunk_FUN_0329bf60((long *)(param_1 + 0x30),param_2);
  if ((param_2 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    FUN_055e5220(lVar1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x28),
                 *(undefined4 *)(lVar1 + 0x24),*(undefined8 *)PTR_DAT_075f7968);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


