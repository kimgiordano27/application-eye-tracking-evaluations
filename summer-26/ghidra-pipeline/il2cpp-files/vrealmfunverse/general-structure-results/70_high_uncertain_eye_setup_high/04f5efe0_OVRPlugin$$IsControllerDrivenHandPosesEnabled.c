/*
FUNCTION_NAME: OVRPlugin$$IsControllerDrivenHandPosesEnabled
ENTRY_POINT: 04f5efe0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsControllerDrivenHandPosesEnabled(void)

{
  uint in_w8;
  uint uVar1;
  long unaff_x19;
  undefined8 uVar2;
  
                    /* try { // try from 04f5efe0 to 0505efeb has its CatchHandler @ 04f5ed0c */
  if (0 < (int)in_w8) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f5ef90 with catch @ 04f5efe8
                       catch(type#2 @ 00000000) { ... } // from try @ 04f5efd8 with catch @ 04f5efe8
                        */
    uVar1 = in_w8 & ((int)in_w8 >> 0x1f ^ 0xffffffffU);
    do {
      if (in_w8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar1 = uVar1 - 1;
      in_w8 = in_w8 - 1;
    } while (uVar1 != 0);
  }
  uVar2 = *(undefined8 *)(unaff_x19 + 0x168);
  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05c8c45c(uVar2,0,0);
  FUN_04e833f4();
  return;
}


