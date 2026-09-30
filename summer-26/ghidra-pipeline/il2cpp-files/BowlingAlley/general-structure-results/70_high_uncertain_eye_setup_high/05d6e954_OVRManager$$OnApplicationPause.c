/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 05d6e954
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationPause(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  undefined4 uVar6;
  
  if (in_x9 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 0x10) * 0x10 + 0x138);
        goto LAB_05d6e998;
      }
      in_x9 = in_x9 + -1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d6e998:
  uVar6 = (*(code *)*puVar2)();
  *(undefined4 *)(unaff_x19 + 0x18) = uVar6;
  lVar3 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x22) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_05d6ea00;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d6ea00:
  bVar1 = (*(code *)*puVar2)();
  if (*(byte *)(unaff_x19 + 0x1c) != (bVar1 & 1)) {
    *(undefined1 *)(unaff_x19 + 0x1d) = 1;
  }
  *(byte *)(unaff_x19 + 0x1c) = bVar1 & 1;
  return;
}


