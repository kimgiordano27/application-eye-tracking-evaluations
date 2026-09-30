/*
FUNCTION_NAME: OVRPlugin$$StartKeyboardTracking
ENTRY_POINT: 051c3478
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartKeyboardTracking(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x21;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608d08);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608d00);
  *(undefined1 *)(unaff_x19 + 0x3a5) = 1;
  if (*(char *)(unaff_x21 + 0x5c) == '\0') {
    return;
  }
  plVar6 = *(long **)(unaff_x21 + 0x50);
  uVar1 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c8998);
  FUN_04e9e238();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06608d00) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xb) * 0x10 + 0x138);
        goto LAB_051c353c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_06608d00,0xb);
LAB_051c353c:
                    /* WARNING: Could not recover jumptable at 0x051c3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  return;
}


