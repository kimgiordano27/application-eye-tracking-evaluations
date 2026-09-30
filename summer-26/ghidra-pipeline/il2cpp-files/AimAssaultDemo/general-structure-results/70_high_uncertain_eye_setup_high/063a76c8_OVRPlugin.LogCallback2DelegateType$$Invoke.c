/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$Invoke
ENTRY_POINT: 063a76c8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__Invoke(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x24;
  
  uVar1 = FUN_063349dc(param_1,0);
  if ((uVar1 & 1) == 0) {
    (**(code **)(*unaff_x19 + 0x5d8))();
    lVar4 = *unaff_x22;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_063a7744;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_063a7744:
    (*(code *)*puVar2)();
    (**(code **)(*unaff_x19 + 0x698))();
  }
  lVar4 = *unaff_x22;
  uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar1 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x24) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_063a77b8;
      }
      uVar1 = uVar1 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c();
LAB_063a77b8:
  uVar3 = (*(code *)*puVar2)();
  uVar1 = FUN_063349dc(uVar3,0);
  if ((uVar1 & 1) == 0) {
    (**(code **)(*unaff_x19 + 0x5d8))();
    lVar4 = *unaff_x22;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_063a7840;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_063a7840:
    (*(code *)*puVar2)();
    (**(code **)(*unaff_x19 + 0x698))();
  }
  (**(code **)(*unaff_x19 + 0x588))();
  return;
}


