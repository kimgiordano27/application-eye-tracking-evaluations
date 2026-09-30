/*
FUNCTION_NAME: OVRPlugin$$GetControllerState4
ENTRY_POINT: 0566d248
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState4(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000038;
  
  if (param_2 != 1) {
    FUN_02d015a0();
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  plVar3 = (long *)__cxa_begin_catch(param_1);
  lVar4 = *plVar3;
  __cxa_end_catch();
  FUN_052199b8(in_stack_00000008,
               *(undefined8 *)System_Collections_Generic_List<GlyphPairAdjustmentRecord>_TypeInfo);
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar4);
  }
  if (unaff_x21 != 0) {
    FUN_03fb6fa8(&stack0x00000028);
    puVar1 = System_Collections_Generic_List<GlyphRenderMode>_TypeInfo;
    while (uVar2 = FUN_0514478c(&stack0x00000028,*(undefined8 *)puVar1), (uVar2 & 1) != 0) {
      FUN_056766b4();
    }
    FUN_05144788(&stack0x00000028,*(undefined8 *)System_Collections_Generic_List<Glyph>_TypeInfo);
    *(undefined4 *)(unaff_x20 + 0x204) = *(undefined4 *)(unaff_x19 + 0x30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


