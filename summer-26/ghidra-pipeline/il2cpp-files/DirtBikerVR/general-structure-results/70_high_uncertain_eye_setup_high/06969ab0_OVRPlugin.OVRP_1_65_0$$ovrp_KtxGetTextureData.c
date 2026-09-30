/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxGetTextureData
ENTRY_POINT: 06969ab0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxGetTextureData(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  int in_w8;
  int in_w9;
  long unaff_x19;
  
  puVar1 = PTR_DAT_08486be8;
  if (in_w9 < in_w8 * 2) {
    *(uint *)(unaff_x19 + 0x34) = in_w8 * 2 | 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
                    /* try { // try from 06969aec to 06a69b13 has its CatchHandler @ 0696a130 */
    FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6fd8,0);
  }
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar3 != 0)) {
    uVar2 = FUN_06936294(lVar3,0);
    *(undefined4 *)(unaff_x19 + 0x58) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


