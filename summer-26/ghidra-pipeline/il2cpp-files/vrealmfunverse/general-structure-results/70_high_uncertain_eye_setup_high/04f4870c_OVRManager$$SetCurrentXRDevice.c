/*
FUNCTION_NAME: OVRManager$$SetCurrentXRDevice
ENTRY_POINT: 04f4870c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__SetCurrentXRDevice(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  float fVar4;
  float unaff_s9;
  
  while( true ) {
                    /* try { // try from 04f4870c to 05048713 has its CatchHandler @ 04f488b4 */
    fVar4 = (float)FUN_04f48798();
    if (fVar4 < unaff_s9) {
                    /* try { // try from 04f48718 to 05048727 has its CatchHandler @ 04f488ac */
      *unaff_x19 = unaff_w23;
      unaff_s9 = fVar4;
      unaff_w22 = unaff_w23;
    }
    puVar1 = System_Collections_Generic_Dictionary<string,_ConfigurationEntry>_TypeInfo;
    unaff_w23 = unaff_w23 + 1;
    if (unaff_w24 == unaff_w23) break;
    if (unaff_w21 == unaff_w23) {
LAB_04f48794:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (*(long *)(unaff_x20 + (long)(int)unaff_w23 * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
                    /* try { // try from 04f48738 to 05048763 has its CatchHandler @ 04f488bc */
  if (unaff_w22 == 0xffffffff) {
    lVar2 = *(long *)System_Collections_Generic_Dictionary<string,_ConfigurationEntry>_TypeInfo;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
                    /* try { // try from 04f48770 to 050487f7 has its CatchHandler @ 04f488d0 */
    puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  }
  else {
    if (unaff_w21 <= unaff_w22) goto LAB_04f48794;
    puVar3 = (undefined8 *)(unaff_x20 + (long)(int)unaff_w22 * 8 + 0x20);
  }
  return *puVar3;
}


