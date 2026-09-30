/*
FUNCTION_NAME: FUN_06b07ee8
ENTRY_POINT: 06b07ee8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_06b07ee8(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam000000000755fa21 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070ca248);
    bRam000000000755fa21 = 1;
  }
  lVar3 = FUN_06bd45cc(param_1,0);
  if (lVar3 == 0) {
    return;
  }
  plVar4 = (long *)FUN_06bd45cc(param_1,0);
  puVar1 = PTR_DAT_070ca248;
  if (plVar4 != (long *)0x0) {
    lVar3 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_070ca248) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_06b07f98;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)PTR_DAT_070ca248,1);
LAB_06b07f98:
    iVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (iVar2 == param_2) {
      return;
    }
    FUN_06b08064(param_1);
    plVar4 = (long *)FUN_06bd45cc(param_1,0);
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto UnityEngine_UIElements_RadioButtonGroup__ScheduleRadioButtons;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar1,1);
UnityEngine_UIElements_RadioButtonGroup__ScheduleRadioButtons:
      iVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      NewAnalyticsManager__SendUpdateSessionStarted(param_1,iVar2 + -1,0);
      FUN_06bd372c(param_1,0xffffffff,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


