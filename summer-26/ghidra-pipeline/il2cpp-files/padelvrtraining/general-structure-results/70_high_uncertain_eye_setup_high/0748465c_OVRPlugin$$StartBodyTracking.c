/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking
ENTRY_POINT: 0748465c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  undefined4 uVar6;
  
  uVar6 = (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  *(undefined4 *)(unaff_x19 + 0x18) = uVar6;
  lVar3 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x22) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_074846cc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_074846cc:
  bVar1 = (*(code *)*puVar2)();
  if (*(byte *)(unaff_x19 + 0x1c) != (bVar1 & 1)) {
    *(undefined1 *)(unaff_x19 + 0x1d) = 1;
  }
  *(byte *)(unaff_x19 + 0x1c) = bVar1 & 1;
  return;
}


