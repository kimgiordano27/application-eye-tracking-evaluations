/*
FUNCTION_NAME: OVRManager$$ReturnToLauncher
ENTRY_POINT: 05125950
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__ReturnToLauncher(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x20;
  long *unaff_x23;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 7) * 0x10 + 0x138);
        goto OVRManager__PlatformUIConfirmQuit;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
OVRManager__PlatformUIConfirmQuit:
  (*(code *)*puVar1)();
  FUN_05124258();
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_05125a14;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05125a14:
  (*(code *)*puVar1)();
  return;
}


