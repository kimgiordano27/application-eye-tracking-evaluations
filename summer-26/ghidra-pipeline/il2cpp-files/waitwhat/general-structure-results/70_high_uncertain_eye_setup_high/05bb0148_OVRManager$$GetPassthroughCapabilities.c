/*
FUNCTION_NAME: OVRManager$$GetPassthroughCapabilities
ENTRY_POINT: 05bb0148
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRManager__GetPassthroughCapabilities
          (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  undefined4 uVar2;
  
  do {
    if (*(long *)(in_x10 + -2) == param_5) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_05bb017c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_031c0d08();
LAB_05bb017c:
  uVar2 = (*(code *)*puVar1)();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    uVar2 = FUN_0698550c(uVar2,*(long *)(unaff_x19 + 0x40),0);
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
                    /* try { // try from 05bb01b0 to 05cb01b3 has its CatchHandler @ 05bb0258 */
                    /* try { // try from 05bb01b4 to 05cb01b7 has its CatchHandler @ 05bb0208 */
                    /* try { // try from 05bb01b8 to 05cb01bb has its CatchHandler @ 05bb01f8 */
    FUN_0698550c(param_3,*(long *)(unaff_x19 + 0x38),0);
                    /* try { // try from 05bb01bc to 05cb01bf has its CatchHandler @ 05baff1c */
  }
                    /* try { // try from 05bb01c0 to 05cb01c7 has its CatchHandler @ 05bb01fc */
                    /* try { // try from 05bb01c8 to 05cb01cb has its CatchHandler @ 05bb01e8 */
                    /* try { // try from 05bb01cc to 05cb01cf has its CatchHandler @ 05bb01dc */
                    /* try { // try from 05bb01d0 to 05cb01d7 has its CatchHandler @ 05bb01e0 */
  return uVar2;
}


