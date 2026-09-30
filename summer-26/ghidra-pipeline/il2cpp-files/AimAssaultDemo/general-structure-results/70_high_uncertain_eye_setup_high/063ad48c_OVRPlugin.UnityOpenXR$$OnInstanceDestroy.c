/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceDestroy
ENTRY_POINT: 063ad48c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnInstanceDestroy(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  uVar2 = (*(code *)*param_1)();
  puVar1 = PTR_DAT_07db6d50;
  lVar3 = thunk_FUN_037787d0();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54();
  }
  lVar3 = *(long *)puVar1;
  plVar4 = (long *)thunk_FUN_037787d0();
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54();
  }
  lVar6 = *plVar4;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_063ad564;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c(plVar4,lVar3,0);
LAB_063ad564:
                    /* WARNING: Could not recover jumptable at 0x063ad584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar4,uVar2,puVar5[1]);
  return;
}


