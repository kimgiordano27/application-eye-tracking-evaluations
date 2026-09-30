/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceCreate
ENTRY_POINT: 063ad410
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


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceCreate
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 10) * 0x10 + 0x138);
      goto LAB_063ad4a0;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_0377596c();
LAB_063ad4a0:
  uVar3 = (*(code *)*puVar2)();
  puVar1 = PTR_DAT_07db6d50;
  lVar4 = thunk_FUN_037787d0();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54();
  }
  lVar4 = *(long *)puVar1;
  plVar5 = (long *)thunk_FUN_037787d0();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54();
  }
  lVar6 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_063ad564;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c(plVar5,lVar4,0);
LAB_063ad564:
                    /* WARNING: Could not recover jumptable at 0x063ad584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,uVar3,puVar2[1]);
  return;
}


