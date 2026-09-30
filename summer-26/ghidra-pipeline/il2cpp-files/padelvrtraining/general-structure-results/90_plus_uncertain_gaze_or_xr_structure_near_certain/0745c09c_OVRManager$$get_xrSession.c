/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 0745c09c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__get_xrSession(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x22;
  
  puVar1 = PTR_DAT_091a0cb0;
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x22) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 7) * 0x10 + 0x138);
        goto LAB_0745c0f8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_0745c0f8:
  (*(code *)*puVar2)();
  plVar7 = *(long **)(unaff_x19 + 0x28);
  uVar3 = thunk_FUN_03d2ef40(*(undefined8 *)puVar1);
  FUN_070caf4c();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x22) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
        goto LAB_0745c17c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370(plVar7,*unaff_x22,0xd);
LAB_0745c17c:
  (*(code *)*puVar2)(plVar7,uVar3,puVar2[1]);
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  return;
}


