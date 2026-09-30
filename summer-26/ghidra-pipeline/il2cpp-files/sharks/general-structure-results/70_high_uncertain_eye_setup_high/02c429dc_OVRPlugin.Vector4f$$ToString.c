/*
FUNCTION_NAME: OVRPlugin.Vector4f$$ToString
ENTRY_POINT: 02c429dc
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4f__ToString(ulong param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_x3;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = in_x3;
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f9758);
    FUN_017fc350(PTR_DAT_037f8680);
    *(undefined1 *)(unaff_x25 + 0x97) = 1;
  }
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x24;
  thunk_FUN_0188fd20();
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x23;
  thunk_FUN_0188fd20();
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x22;
  thunk_FUN_0188fd20();
  if ((unaff_w20 & 0xffffffa0) == 0) {
    uVar2 = unaff_w21 | unaff_w20;
    if (*(long *)(unaff_x19 + 0x18) == 0 || (unaff_w21 & 0x200) != 0) {
      uVar2 = unaff_w21 | unaff_w20 | 0x2000000;
    }
    thunk_FUN_0181f594();
    *(uint *)(unaff_x19 + 0x38) = uVar2;
                    /* try { // try from 02c42a68 to 02d42aa7 has its CatchHandler @ 02c42a68
                       catch() { ... } // from try @ 02c42a68 with catch @ 02c42a68
                       catch() { ... } // from try @ 02c42b38 with catch @ 02c42a68
                       catch() { ... } // from try @ 02c42b80 with catch @ 02c42a68
                       catch() { ... } // from try @ 02c42bdc with catch @ 02c42a68 */
    if ((((unaff_w20 >> 2 & 1) != 0) && (*(long *)(unaff_x19 + 0x30) != 0)) &&
       (uVar2 = FUN_02c43078(), (uVar2 >> 3 & 1) == 0)) {
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      FUN_02c42c34();
    }
    if (*(int *)(*(long *)PTR_DAT_037f9758 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    puVar1 = PTR_DAT_037f8680;
                    /* try { // try from 02c42aa8 to 02d42ab7 has its CatchHandler @ 02c42b98 */
    uVar3 = FUN_02c30424(&stack0x00000008,0);
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 02c42ac0 to 02d42ac3 has its CatchHandler @ 02c42b94 */
      FUN_02c42ca8();
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
                    /* try { // try from 02c42adc to 02d42adf has its CatchHandler @ 02c42b80 */
    FUN_02c30870(0);
                    /* try { // try from 02c42ae0 to 02d42ae3 has its CatchHandler @ 02c42b88 */
    FUN_02c42f88();
                    /* try { // try from 02c42afc to 02d42b23 has its CatchHandler @ 02c42b90 */
    return;
  }
  thunk_FUN_01851c08(PTR_DAT_037f86c0);
  uVar4 = thunk_FUN_01861bbc();
  uVar5 = thunk_FUN_01851c08(PTR_DAT_0380c5d8);
                    /* try { // try from 02c42b24 to 02d42b37 has its CatchHandler @ 02c42b8c */
  FUN_02b44e38(uVar4,uVar5,0);
                    /* try { // try from 02c42b38 to 02d42b7b has its CatchHandler @ 02c42a68 */
  uVar5 = thunk_FUN_01851c08(PTR_DAT_0380c5e8);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar4,uVar5);
}


