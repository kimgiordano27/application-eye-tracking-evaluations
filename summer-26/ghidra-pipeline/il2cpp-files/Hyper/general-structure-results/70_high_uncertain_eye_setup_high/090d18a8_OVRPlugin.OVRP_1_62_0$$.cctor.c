/*
FUNCTION_NAME: OVRPlugin.OVRP_1_62_0$$.cctor
ENTRY_POINT: 090d18a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_62_0___cctor(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  while( true ) {
    unaff_x21 = unaff_x21 + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)(uint)unaff_x21) break;
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x21) goto LAB_090d1904;
    if (*(long *)(unaff_x22 + unaff_x21 * 8) == 0) goto LAB_090d1900;
    FUN_090d1908();
  }
                    /* try { // try from 090d18b8 to 091d18bf has its CatchHandler @ 090d2078 */
  FUN_090d19b0();
  if (*(long *)(unaff_x19 + 0x30) == 0) {
    if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_090d1900:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) == 0) {
LAB_090d1904:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    FUN_090d1a38();
  }
                    /* try { // try from 090d18f4 to 091d191f has its CatchHandler @ 090d2070 */
  FUN_08fdfedc();
  return;
}


