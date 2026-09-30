/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager.ShouldRetrieveInstanceDelegate$$EndInvoke
ENTRY_POINT: 076f2198
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager_ShouldRetrieveInstanceDelegate__EndInvoke(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long lVar6;
  long *unaff_x21;
  long *unaff_x22;
  
  lVar3 = *unaff_x19;
  lVar6 = **(long **)(*unaff_x21 + 0xb8);
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x22) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_076f21f0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_076f21f0:
  uVar2 = (*(code *)*puVar1)();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_07443e70(lVar6,uVar2,*(undefined8 *)PTR_DAT_09f2f7d8);
  lVar3 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x076f2244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
    return;
  }
  return;
}


