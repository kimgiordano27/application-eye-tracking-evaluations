/*
FUNCTION_NAME: OVRPlugin.OVRP_1_43_0$$.cctor
ENTRY_POINT: 04f8ff38
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_43_0___cctor(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  
  while( true ) {
    FUN_05d1190c(unaff_x22,unaff_x23,0);
    lVar2 = *(long *)(unaff_x19 + 0x68);
    unaff_w21 = unaff_w21 + 1;
    iVar1 = unaff_w26;
    if (lVar2 == 0) break;
    while (unaff_w26 = iVar1, *(int *)(lVar2 + 0x18) <= unaff_w21) {
      if (*(int *)(lVar2 + 0x18) <= unaff_w26) {
        return;
      }
      unaff_w21 = unaff_w26 + 1;
      iVar1 = unaff_w21;
      unaff_w20 = unaff_w26;
    }
    lVar2 = FUN_037a6268(lVar2,unaff_w20,*unaff_x24);
    if ((lVar2 == 0) || (*(long *)(unaff_x19 + 0x68) == 0)) break;
    unaff_x22 = *(undefined8 *)(lVar2 + 0x20);
    lVar2 = FUN_037a6268(*(long *)(unaff_x19 + 0x68),unaff_w21,*unaff_x24);
    if (lVar2 == 0) break;
    unaff_x23 = *(undefined8 *)(lVar2 + 0x20);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


