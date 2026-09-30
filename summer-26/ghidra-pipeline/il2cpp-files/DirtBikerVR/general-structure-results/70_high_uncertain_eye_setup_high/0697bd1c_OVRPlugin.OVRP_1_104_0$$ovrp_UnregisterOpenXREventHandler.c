/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_UnregisterOpenXREventHandler
ENTRY_POINT: 0697bd1c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_UnregisterOpenXREventHandler(long param_1)

{
  long *plVar1;
  int in_w8;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x21;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  
  while( true ) {
    if (in_w8 <= unaff_w20) {
      return;
    }
    plVar1 = (long *)FUN_04de82e0(param_1,unaff_w20,*unaff_x21);
    if (plVar1 == (long *)0x0) break;
    fVar2 = (float)(**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
    if ((unaff_s8 < fVar2) || (fVar2 < unaff_s9)) {
      FUN_0697bd84();
      return;
    }
    param_1 = *(long *)(unaff_x19 + 0x28);
    unaff_w20 = unaff_w20 + 1;
    if (param_1 == 0) break;
    in_w8 = *(int *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


