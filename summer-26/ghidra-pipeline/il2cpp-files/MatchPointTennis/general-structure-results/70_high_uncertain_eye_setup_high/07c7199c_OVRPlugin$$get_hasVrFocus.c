/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 07c7199c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasVrFocus(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar3;
  
  FUN_07a80df4();
  puVar2 = PTR_DAT_09f505f8;
  puVar1 = PTR_DAT_09f22d48;
                    /* try { // try from 07c719a0 to 07d719a3 has its CatchHandler @ 07c71a54 */
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* try { // try from 07c719a4 to 07d719a7 has its CatchHandler @ 07c71ab4 */
                    /* try { // try from 07c719a8 to 07d719ab has its CatchHandler @ 07c71ad0 */
                    /* try { // try from 07c719ac to 07d719af has its CatchHandler @ 07c71aac */
                    /* try { // try from 07c719b0 to 07d719b3 has its CatchHandler @ 07c71acc */
                    /* try { // try from 07c719b4 to 07d719b7 has its CatchHandler @ 07c71aa0 */
                    /* try { // try from 07c719b8 to 07d719bb has its CatchHandler @ 07c71ac8 */
                    /* try { // try from 07c719bc to 07d719c3 has its CatchHandler @ 07c71ad4 */
                    /* try { // try from 07c719c4 to 07d719c7 has its CatchHandler @ 07c71a80 */
                    /* try { // try from 07c719c8 to 07d719cb has its CatchHandler @ 07c71a6c */
  plVar3 = (long *)(unaff_x21 + 0x10);
  *plVar3 = unaff_x22;
                    /* try { // try from 07c719cc to 07d719cf has its CatchHandler @ 07c71a70 */
  thunk_FUN_044bb4b4(plVar3);
                    /* try { // try from 07c719dc to 07d719df has its CatchHandler @ 07c71a50 */
  *(long **)(unaff_x21 + 0x18) = unaff_x19;
                    /* try { // try from 07c719e4 to 07d719f7 has its CatchHandler @ 07c71a4c */
  thunk_FUN_044bb4b4();
  unaff_x19[0x31] = *plVar3;
  thunk_FUN_044bb4b4(unaff_x19 + 0x31);
  thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_0554a0ac();
  (**(code **)(*unaff_x19 + 0x4a8))();
  thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_055482e0();
  (**(code **)(*unaff_x19 + 0x4c8))();
  if ((unaff_x20 & 1) != 0) {
    return;
  }
  thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_055482e0();
                    /* WARNING: Could not recover jumptable at 0x07c71ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x4e8))();
  return;
}


