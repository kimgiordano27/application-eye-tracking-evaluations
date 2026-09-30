/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$EndInvoke
ENTRY_POINT: 063a779c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__EndInvoke(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x24;
  
  puVar1 = (undefined8 *)FUN_0377596c();
  uVar2 = (*(code *)*puVar1)();
  uVar3 = FUN_063349dc(uVar2,0);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*unaff_x19 + 0x5d8))();
    lVar4 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_063a7840;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_063a7840:
    (*(code *)*puVar1)();
    (**(code **)(*unaff_x19 + 0x698))();
  }
  (**(code **)(*unaff_x19 + 0x588))();
  return;
}


