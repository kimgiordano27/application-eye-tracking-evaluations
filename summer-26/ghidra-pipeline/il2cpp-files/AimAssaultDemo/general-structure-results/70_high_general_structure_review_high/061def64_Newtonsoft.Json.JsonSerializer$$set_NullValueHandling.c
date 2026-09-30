/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_NullValueHandling
ENTRY_POINT: 061def64
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__set_NullValueHandling
                (long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  
  if ((DAT_0825b5e7 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07dace50);
    DAT_0825b5e7 = 1;
  }
  puVar2 = PTR_DAT_07dace50;
  if (param_2 == param_3) {
    uVar4 = 0;
  }
  else if (param_2 == (long *)0x0) {
    uVar4 = 0xffffffff;
  }
  else if (param_3 == (long *)0x0) {
    uVar4 = 1;
  }
  else {
    plVar5 = param_2;
    if (*param_2 != *(long *)(PTR_DAT_07d86548 + 0x90)) {
      plVar5 = (long *)0x0;
    }
    plVar1 = param_3;
    if (*param_3 != *(long *)(PTR_DAT_07d86548 + 0x90)) {
      plVar1 = (long *)0x0;
    }
    if ((plVar5 != (long *)0x0) && (plVar1 != (long *)0x0)) {
      if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x061defe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x198))();
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar5 = (long *)thunk_FUN_037787d0(param_2,*(undefined8 *)PTR_DAT_07dace50);
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_061df0c0;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,0);
LAB_061df0c0:
                    /* WARNING: Could not recover jumptable at 0x061df0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)*puVar6)(plVar5,param_3,puVar6[1]);
      return uVar4;
    }
    plVar5 = (long *)thunk_FUN_037787d0(param_3,*(undefined8 *)puVar2);
    if (plVar5 == (long *)0x0) {
      thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
      uVar7 = thunk_FUN_037788cc();
      uVar8 = thunk_FUN_037a15ac(PTR_DAT_07dace58);
      FUN_061a843c(uVar7,uVar8,0);
      uVar8 = thunk_FUN_037a15ac(PTR_DAT_07dace60);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar7,uVar8);
    }
    lVar9 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_061df0e8;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,0);
LAB_061df0e8:
    iVar3 = (*(code *)*puVar6)(plVar5,param_2,puVar6[1]);
    uVar4 = (ulong)(uint)-iVar3;
  }
  return uVar4;
}


