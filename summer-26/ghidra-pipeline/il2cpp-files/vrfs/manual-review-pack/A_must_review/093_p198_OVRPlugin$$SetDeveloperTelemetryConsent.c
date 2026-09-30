/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 03230ad8
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SetDeveloperTelemetryConsent(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *in_x10;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_03230b24;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_015c2a80();
LAB_03230b24:
  (*(code *)*puVar1)();
  plVar5 = *(long **)(unaff_x19 + 0x30);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *(long *)PTR_DAT_06d9fd78;
  if ((*(byte *)(lVar2 + 300) <= *(byte *)(*plVar5 + 300)) &&
     (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar2 + 300) * 8 + -8) == lVar2)) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar3 = FUN_051d2ac0(plVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    plVar5 = *(long **)(unaff_x19 + 0x30);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06df6998) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 10) * 0x10 + 0x138);
        goto LAB_03230bfc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_015c2a80(plVar5,*(long *)PTR_DAT_06df6998,10);
LAB_03230bfc:
                    /* WARNING: Could not recover jumptable at 0x03230c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5);
  return;
}


