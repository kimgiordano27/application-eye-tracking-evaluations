/*
FUNCTION_NAME: OVRManager$$InitOVRManager
ENTRY_POINT: 051a2c80
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__InitOVRManager(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined4 uVar6;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0xe78));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066085d0);
  *(undefined1 *)(unaff_x20 + 0x245) = 1;
  FUN_036c2e94();
  plVar5 = *(long **)(unaff_x19 + 0x120);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06604e78) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_051a2d04;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_06604e78,0);
LAB_051a2d04:
  uVar6 = (*(code *)*puVar1)(plVar5,puVar1[1]);
  *(undefined4 *)(unaff_x19 + 300) = uVar6;
  return;
}


