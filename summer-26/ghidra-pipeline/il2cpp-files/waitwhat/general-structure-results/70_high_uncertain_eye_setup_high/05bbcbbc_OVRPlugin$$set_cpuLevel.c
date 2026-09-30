/*
FUNCTION_NAME: OVRPlugin$$set_cpuLevel
ENTRY_POINT: 05bbcbbc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_cpuLevel
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_069e7098();
  puVar1 = PTR_DAT_071162a0;
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    lVar3 = FUN_069d3a80();
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05bbcd4c;
    FUN_069e5200(*(long *)(unaff_x19 + 0x20),0);
  }
  else {
    plVar7 = *(long **)(unaff_x19 + 0x50);
    if (plVar7 == (long *)0x0) goto LAB_05bbcd4c;
                    /* try { // try from 05bbcbdc to 05cbcbe7 has its CatchHandler @ 05bbce18 */
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_071162a0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_05bbcc5c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)PTR_DAT_071162a0,1);
LAB_05bbcc5c:
    (*(code *)*puVar2)(plVar7,unaff_x19 + 0x3c,puVar2[1]);
    lVar3 = FUN_069d3a80();
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05bbcd4c;
    plVar7 = *(long **)(unaff_x19 + 0x50);
    uVar8 = FUN_069e5200(*(long *)(unaff_x19 + 0x20),0);
    uVar9 = FUN_069e3244(0);
    if (plVar7 == (long *)0x0) goto LAB_05bbcd4c;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_05bbcd04;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar1,2);
LAB_05bbcd04:
    (*(code *)*puVar2)(uVar8,param_2,param_3,param_4,uVar9,plVar7,puVar2[1]);
  }
  if (lVar3 != 0) {
    FUN_069e7254(lVar3,0);
    return;
  }
LAB_05bbcd4c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


