/*
FUNCTION_NAME: OVRPlugin.FovfPair$$set_Item
ENTRY_POINT: 01f8f9d4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01f8fa78) */

void OVRPlugin_FovfPair__set_Item(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 unaff_x21;
  undefined8 in_stack_00000008;
  
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f8f890 with catch @ 01f8f9d4
                       catch(type#1 @ 026574d8) { ... } // from try @ 01f8f9a0 with catch @ 01f8f9d4
                        */
  FUN_01fc6790();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
                    /* try { // try from 01f8f9ec to 0208f9ef has its CatchHandler @ 01f8fa00 */
  lVar3 = *(long *)(lVar2 + 0x10);
  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
                    /* catch() { ... } // from try @ 01f8f9ec with catch @ 01f8fa00 */
  uVar1 = *(uint *)(lVar2 + 0x18);
                    /* try { // try from 01f8fa0c to 0208fa17 has its CatchHandler @ 01f8fa2c */
  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 01f8fa18 to 0208fa23 has its CatchHandler @ 01f8f7e0 */
    *(uint *)(lVar2 + 0x18) = uVar1 + 1;
    puVar4 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
    *puVar4 = unaff_x21;
                    /* try { // try from 01f8fa24 to 0208fa2b has its CatchHandler @ 01f8fa2c */
    thunk_FUN_01286abc(puVar4);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f8fa0c with catch @ 01f8fa2c
                       catch(type#2 @ 00000000) { ... } // from try @ 01f8fa24 with catch @ 01f8fa2c
                        */
  }
  else {
    FUN_01953fdc();
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_0125a7c4();
  }
  return;
}


