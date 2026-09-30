/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$EndInvoke
ENTRY_POINT: 07c9f1c0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__EndInvoke(undefined4 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  plVar1 = (long *)FUN_07c9b974();
  if (plVar1 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f4d938) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07c9f240;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac(plVar1,*(long *)PTR_DAT_09f4d938,0);
LAB_07c9f240:
    uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  }
  FUN_07c9f284(unaff_x20,unaff_x21,param_1,uVar3);
  return;
}


