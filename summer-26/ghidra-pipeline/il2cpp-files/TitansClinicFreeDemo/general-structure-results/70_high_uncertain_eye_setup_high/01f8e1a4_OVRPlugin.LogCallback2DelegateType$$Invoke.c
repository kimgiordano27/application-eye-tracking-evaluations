/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$Invoke
ENTRY_POINT: 01f8e1a4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__Invoke(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *plVar4;
  undefined8 unaff_x21;
  long unaff_x22;
  int unaff_w24;
  int unaff_w28;
  long in_stack_00000000;
  
  lVar2 = thunk_FUN_0124baac();
  if (lVar2 != 0) {
    uVar1 = unaff_w28 + unaff_w24;
    if (uVar1 < *(uint *)(unaff_x22 + 0x18)) {
      *(undefined8 *)(unaff_x22 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
      thunk_FUN_01286abc();
      plVar4 = *(long **)(unaff_x19 + 8);
      if (plVar4 == (long *)0x0) {
        return;
      }
      if ((in_stack_00000000 != 0) &&
         (lVar2 = thunk_FUN_0124baac(in_stack_00000000,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)
         ) goto LAB_01f8e25c;
      if (uVar1 < *(uint *)(plVar4 + 3)) {
        plVar4[(long)(int)uVar1 + 4] = in_stack_00000000;
        thunk_FUN_01286abc(plVar4 + (long)(int)uVar1 + 4,in_stack_00000000);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
LAB_01f8e25c:
  uVar3 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar3,0);
}


