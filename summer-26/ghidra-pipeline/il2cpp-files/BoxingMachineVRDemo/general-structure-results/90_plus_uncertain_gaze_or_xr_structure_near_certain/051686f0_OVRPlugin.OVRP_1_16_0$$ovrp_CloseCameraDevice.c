/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 051686f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *in_x10;
  int *piVar4;
  long *unaff_x19;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 7) * 0x10 + 0x138);
        goto LAB_05168798;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05168798:
  (*(code *)*puVar1)();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_067823f0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
        goto FUN_05168878;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
FUN_05168878:
                    /* WARNING: Could not recover jumptable at 0x0516889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


