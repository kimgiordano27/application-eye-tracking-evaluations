/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 0241684c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>___ctor(long param_1)

{
  int iVar1;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_stack_00000018;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  iVar1 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
  if (0 < iVar1) {
    if ((unaff_w21 < *(uint *)(unaff_x19 + 0x18)) && (unaff_w20 < *(uint *)(unaff_x19 + 0x18))) {
      uVar2 = *unaff_x27;
                    /* try { // try from 0241689c to 025169bf has its CatchHandler @ 0241689c
                       catch() { ... } // from try @ 0241689c with catch @ 0241689c
                       catch() { ... } // from try @ 02416aa4 with catch @ 0241689c
                       catch() { ... } // from try @ 02416b88 with catch @ 0241689c
                       catch() { ... } // from try @ 02416b90 with catch @ 0241689c
                       catch() { ... } // from try @ 02416c34 with catch @ 0241689c */
      uVar4 = unaff_x28[1];
      uVar3 = *unaff_x28;
      unaff_x28[1] = unaff_x27[1];
      *unaff_x28 = uVar2;
      thunk_FUN_01e10808(unaff_x19 + unaff_x29 * 0x10 + 0x20,0);
      if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
        unaff_x27[1] = uVar4;
        *unaff_x27 = uVar3;
        thunk_FUN_01e10808(unaff_x19 + in_stack_00000018 * 0x10 + 0x20,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  return;
}


