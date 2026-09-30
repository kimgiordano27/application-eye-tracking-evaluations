/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 07a4b9a4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin__RequestBoundaryVisibility(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  uint uVar7;
  long unaff_x20;
  uint uVar8;
  
  if ((*(byte *)(unaff_x20 + 0x403) & 1) == 0) {
    FUN_04077588(PTR_DAT_092ee658);
    *(undefined1 *)(unaff_x20 + 0x403) = 1;
  }
  puVar2 = PTR_DAT_092ee658;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar7 = 0;
  uVar8 = 0;
  do {
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07a4ba24;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00();
LAB_07a4ba24:
    uVar5 = (*(code *)*puVar3)();
    uVar1 = 1 << (ulong)(uVar8 & 0x1f);
    uVar8 = uVar8 + 1;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    uVar7 = uVar1 | uVar7;
    if (uVar8 == 5) {
      return uVar7;
    }
  } while( true );
}


