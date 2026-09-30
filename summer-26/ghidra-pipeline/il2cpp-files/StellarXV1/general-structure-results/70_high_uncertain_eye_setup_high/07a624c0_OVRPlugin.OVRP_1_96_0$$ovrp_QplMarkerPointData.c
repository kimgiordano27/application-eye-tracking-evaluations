/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$ovrp_QplMarkerPointData
ENTRY_POINT: 07a624c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_96_0__ovrp_QplMarkerPointData(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_x10;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  *(int *)(unaff_x19 + 0x18) = (int)in_x10 + 1;
                    /* try { // try from 07a624cc to 07b6252f has its CatchHandler @ 07a624cc
                       catch() { ... } // from try @ 07a624cc with catch @ 07a624cc
                       catch() { ... } // from try @ 07a62564 with catch @ 07a624cc
                       catch() { ... } // from try @ 07a6263c with catch @ 07a624cc
                       catch() { ... } // from try @ 07a626b8 with catch @ 07a624cc */
  *(undefined4 *)(param_1 + in_x10 * 4 + 0x20) = 2;
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
                    /* try { // try from 07a62530 to 07b62533 has its CatchHandler @ 07a62604 */
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 3;
                    /* try { // try from 07a62540 to 07b62547 has its CatchHandler @ 07a6260c */
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
                    /* try { // try from 07a6255c to 07b62563 has its CatchHandler @ 07a62608 */
    FUN_05bccd7c();
                    /* try { // try from 07a62564 to 07b62623 has its CatchHandler @ 07a624cc */
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  puVar2 = PTR_DAT_092f0ca8;
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 4;
  }
  else {
    FUN_05bccd7c();
  }
  *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
  thunk_FUN_040ec700();
  uVar3 = FUN_04077674(*unaff_x22,5);
  FUN_07593f88(uVar3,*(undefined8 *)puVar2,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  *puVar4 = uVar3;
  thunk_FUN_040ec700(puVar4,uVar3);
  return;
}


