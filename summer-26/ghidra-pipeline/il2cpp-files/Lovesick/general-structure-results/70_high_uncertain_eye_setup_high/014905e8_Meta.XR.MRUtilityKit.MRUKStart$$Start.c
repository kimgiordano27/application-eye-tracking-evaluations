/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKStart$$Start
ENTRY_POINT: 014905e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01490670) */

void Meta_XR_MRUtilityKit_MRUKStart__Start(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined8 in_stack_00000008;
  
  FUN_017d75a8(param_1,param_2,0);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x24);
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  iVar2 = FUN_017724a8(unaff_x21 - lVar3,uVar1,0);
  *(int *)(unaff_x20 + 0x24) = iVar2;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    if (*(int *)(*(long *)(unaff_x20 + 0x10) + 0x18) <= iVar2) {
      FUN_014906e4();
    }
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_00d56f10();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


