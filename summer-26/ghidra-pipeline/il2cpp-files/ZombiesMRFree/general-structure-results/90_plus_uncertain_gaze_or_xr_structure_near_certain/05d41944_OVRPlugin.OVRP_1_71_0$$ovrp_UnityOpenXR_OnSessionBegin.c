/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 05d41944
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


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f73f20);
    FUN_02fe925c(PTR_DAT_06fb9028);
    FUN_02fe925c(PTR_DAT_06fb9030);
    FUN_02fe925c(PTR_DAT_06fb4b60);
    *(undefined1 *)(unaff_x20 + 0xafe) = 1;
  }
  puVar1 = PTR_DAT_06f73f20;
  if (*(char *)(unaff_x19 + 0x50) == '\0') {
    return;
  }
  plVar8 = *(long **)(unaff_x19 + 0x28);
  uVar3 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f73f20);
  FUN_05a645d0();
  puVar2 = PTR_DAT_06fb4b60;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06fb4b60) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
          goto LAB_05d41a30;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06fb4b60,0x14);
LAB_05d41a30:
    (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
    plVar8 = *(long **)(unaff_x19 + 0x38);
    uVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
    FUN_05a645d0();
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
            goto LAB_05d41ab4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)puVar2,0x14);
LAB_05d41ab4:
                    /* WARNING: Could not recover jumptable at 0x05d41ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


