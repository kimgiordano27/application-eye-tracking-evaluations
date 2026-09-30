/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$.cctor
ENTRY_POINT: 056a0c3c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_49_0___cctor(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x21;
  undefined2 unaff_w22;
  undefined2 unaff_w23;
  
  while( true ) {
    if (unaff_w20 < 2) {
      return unaff_x19;
    }
    lVar2 = FUN_02d966a4(*unaff_x21,2);
    if (lVar2 == 0) break;
    if ((*(int *)(lVar2 + 0x18) == 0) ||
       (*(undefined2 *)(lVar2 + 0x20) = unaff_w22, *(int *)(lVar2 + 0x18) == 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    *(undefined2 *)(lVar2 + 0x22) = unaff_w23;
    if (unaff_x19 == 0) break;
    iVar1 = FUN_05372d78(unaff_x19,lVar2,0);
    if (iVar1 == -1) {
      return unaff_x19;
    }
    unaff_x19 = FUN_0536f444(unaff_x19,0,iVar1,0);
    unaff_w20 = unaff_w20 + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


