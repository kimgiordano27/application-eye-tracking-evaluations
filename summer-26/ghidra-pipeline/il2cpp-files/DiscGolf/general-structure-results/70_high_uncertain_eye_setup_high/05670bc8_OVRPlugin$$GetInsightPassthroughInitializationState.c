/*
FUNCTION_NAME: OVRPlugin$$GetInsightPassthroughInitializationState
ENTRY_POINT: 05670bc8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetInsightPassthroughInitializationState(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x21;
  long in_stack_00000008;
  
  if ((*(byte *)(unaff_x21 + 0x653) & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_List<JSONNode>_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x653) = 1;
  }
  in_stack_00000008 = 0;
  if (*(long *)(param_1 + 0x170) != 0) {
    uVar1 = FUN_04e95158(*(long *)(param_1 + 0x170),param_2,&stack0x00000008,
                         *(undefined8 *)System_Collections_Generic_List<JSONNode>_TypeInfo);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      if (in_stack_00000008 == 0) goto LAB_05670c44;
      uVar2 = 0;
      if (*(long *)(in_stack_00000008 + 0x98) != 0) {
        uVar2 = FUN_0634ee08(*(long *)(in_stack_00000008 + 0x98),0);
      }
    }
    return uVar2;
  }
LAB_05670c44:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


