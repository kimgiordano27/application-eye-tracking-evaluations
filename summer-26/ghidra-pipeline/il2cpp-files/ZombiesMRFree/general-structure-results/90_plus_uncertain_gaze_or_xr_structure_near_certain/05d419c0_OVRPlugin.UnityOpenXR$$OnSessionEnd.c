/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 05d419c0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionEnd(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *plVar8;
  
  lVar3 = *unaff_x20;
  plVar8 = *(long **)(unaff_x23 + 0xb60);
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *plVar8) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0x14) * 0x10 + 0x138);
        goto LAB_05d41a30;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_05d41a30:
  (*(code *)*puVar1)();
  plVar7 = *(long **)(unaff_x19 + 0x38);
  uVar2 = thunk_FUN_0301080c(*unaff_x22);
  FUN_05a645d0();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar4 = *plVar7;
  lVar3 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x14) * 0x10 + 0x138);
        goto LAB_05d41ab4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_02feb5b8(plVar7,lVar3,0x14);
LAB_05d41ab4:
                    /* WARNING: Could not recover jumptable at 0x05d41ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar7,uVar2,puVar1[1]);
  return;
}


