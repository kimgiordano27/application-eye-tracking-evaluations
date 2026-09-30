/*
FUNCTION_NAME: FUN_0685711c
ENTRY_POINT: 0685711c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0685711c(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_071d6b34 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d08068);
    FUN_02f07e70(PTR_DAT_06d3b718);
    FUN_02f07e70(PTR_DAT_06d36b50);
    FUN_02f07e70(OVRPlugin_OVRP_1_10_0_TypeInfo);
    DAT_071d6b34 = 1;
  }
  puVar1 = PTR_DAT_06d3b718;
  plVar8 = *(long **)(param_1 + 0x458);
  puVar4 = (undefined8 *)(param_1 + 0x458);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)FUN_068d22c8(param_1,0);
    uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d08068);
    FUN_0555e110(uVar3,param_1,*(undefined8 *)OVRPlugin_OVRP_1_10_0_TypeInfo,0);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06d36b50) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_068572ec;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02eea86c(plVar8,*(long *)PTR_DAT_06d36b50,1);
LAB_068572ec:
      uVar3 = (*(code *)*puVar2)(plVar8,uVar3,puVar2[1]);
      *puVar4 = uVar3;
      thunk_FUN_02f411dc(puVar4,uVar3);
      return;
    }
  }
  else {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06d3b718) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_06857260;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(plVar8,*(long *)PTR_DAT_06d3b718,2);
LAB_06857260:
    (*(code *)*puVar2)(plVar8,puVar2[1]);
    plVar8 = (long *)*puVar4;
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_068572c4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar8,*(long *)puVar1,1);
LAB_068572c4:
                    /* WARNING: Could not recover jumptable at 0x068572d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar8,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


