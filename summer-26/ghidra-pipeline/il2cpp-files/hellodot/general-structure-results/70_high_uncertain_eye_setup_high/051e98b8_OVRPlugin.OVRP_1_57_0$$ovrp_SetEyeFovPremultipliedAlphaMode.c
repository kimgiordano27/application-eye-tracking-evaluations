/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_SetEyeFovPremultipliedAlphaMode
ENTRY_POINT: 051e98b8
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_57_0__ovrp_SetEyeFovPremultipliedAlphaMode(void)

{
  int iVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x20;
  int iVar3;
  long *unaff_x24;
  
  if (in_w8 == 0) {
    thunk_FUN_02cd038c();
  }
  uVar2 = FUN_051e9954();
  iVar1 = FUN_04f8ad7c(uVar2,0);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_051e99d0();
      FUN_051e9a38();
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_04679278();
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return;
}


