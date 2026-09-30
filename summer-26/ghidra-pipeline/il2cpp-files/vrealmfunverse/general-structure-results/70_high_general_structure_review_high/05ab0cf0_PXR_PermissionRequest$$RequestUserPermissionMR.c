/*
FUNCTION_NAME: PXR_PermissionRequest$$RequestUserPermissionMR
ENTRY_POINT: 05ab0cf0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_4
*/


void PXR_PermissionRequest__RequestUserPermissionMR(void)

{
  bool in_ZR;
  long *plVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x21;
  long in_stack_00000008;
  long *in_stack_00000010;
  
                    /* try { // try from 05ab0cf0 to 05bb0cfb has its CatchHandler @ 05ab0914 */
  if (!in_ZR) {
    FUN_02ae14cc(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_02c2be1c();
  }
                    /* catch() { ... } // from try @ 05ab0ce8 with catch @ 05ab0cf8 */
  plVar1 = (long *)__cxa_begin_catch();
  in_stack_00000008 = *plVar1;
  __cxa_end_catch();
  if (*in_stack_00000010 != 0) {
    FUN_05c36cb8(*in_stack_00000010,0);
  }
  if (in_stack_00000008 == 0) {
    *(undefined8 *)(unaff_x21 + 0x80) = unaff_x20;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x21 + 0x80));
    lVar2 = *(long *)(unaff_x21 + 0x50);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}


