/*
FUNCTION_NAME: UniJSON.ListTreeNodeExtensions$$GetDouble
ENTRY_POINT: 02f4a0e0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f4a140) */

void UniJSON_ListTreeNodeExtensions__GetDouble(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  uint unaff_w26;
  int in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (in_stack_00000008 != 1) {
    if (in_stack_00000018._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(in_stack_00000010);
  }
  plVar2 = (long *)__cxa_begin_catch(in_stack_00000010);
  lVar3 = *plVar2;
  __cxa_end_catch();
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  puVar1 = PTR_DAT_03cfe690;
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar3);
  }
  if ((unaff_w26 & 1) != 0) {
    lVar3 = *(long *)PTR_DAT_03cfe690;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    FusionStats__get_GraphColorBad(*(long *)(lVar3 + 0xb8) + 0x20,0);
    FUN_02f4ffa8();
  }
  return;
}


