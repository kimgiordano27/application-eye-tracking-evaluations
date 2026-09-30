/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.Pool<object>$$get_CountInactive
ENTRY_POINT: 05f2948c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_Pool<object>__get_CountInactive(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_03d8f26c();
  }
                    /* try { // try from 05f29498 to 060294a7 has its CatchHandler @ 05f294c0 */
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
                    /* try { // try from 05f294a8 to 060294c7 has its CatchHandler @ 05f294d0 */
  if (*(int *)(lVar1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 05f29350 with catch @ 05f294b0 */
    thunk_FUN_03db619c();
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 05f293f0 with catch @ 05f294c0
                       catch() { ... } // from try @ 05f29498 with catch @ 05f294c0 */
    lVar1 = FUN_03d8f26c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar1 != 0) {
    FUN_069e96dc(lVar1,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_091fd408);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


