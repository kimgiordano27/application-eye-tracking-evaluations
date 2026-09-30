/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 02416844
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>___ctor
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

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
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  iVar1 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
  if (0 < iVar1) {
    if ((unaff_w21 < *(uint *)(unaff_x19 + 0x18)) && (unaff_w20 < *(uint *)(unaff_x19 + 0x18))) {
      uVar2 = *unaff_x27;
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


