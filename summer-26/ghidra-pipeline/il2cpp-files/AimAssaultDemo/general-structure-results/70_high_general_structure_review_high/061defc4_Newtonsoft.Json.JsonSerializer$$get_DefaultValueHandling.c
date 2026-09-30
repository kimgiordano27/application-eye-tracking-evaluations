/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DefaultValueHandling
ENTRY_POINT: 061defc4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__get_DefaultValueHandling
                (undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x21;
  
  puVar1 = PTR_DAT_07dace50;
  if ((param_2 != 0) && (param_3 != 0)) {
    if (*(long **)(unaff_x21 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x061defe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(long **)(unaff_x21 + 0x10) + 0x198))();
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar4 = (long *)thunk_FUN_037787d0();
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)thunk_FUN_037787d0();
    if (plVar4 == (long *)0x0) {
      thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
      uVar6 = thunk_FUN_037788cc();
      uVar7 = thunk_FUN_037a15ac(PTR_DAT_07dace58);
      FUN_061a843c(uVar6,uVar7,0);
      uVar7 = thunk_FUN_037a15ac(PTR_DAT_07dace60);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar6,uVar7);
    }
    lVar9 = *plVar4;
    lVar8 = *(long *)puVar1;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_061df0e8;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,lVar8,0);
LAB_061df0e8:
    iVar2 = (*(code *)*puVar5)(plVar4);
    return (ulong)(uint)-iVar2;
  }
  lVar9 = *plVar4;
  lVar8 = *(long *)puVar1;
  uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar3 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar8) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_061df0c0;
      }
      uVar3 = uVar3 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar3 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c(plVar4,lVar8,0);
LAB_061df0c0:
                    /* WARNING: Could not recover jumptable at 0x061df0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar5)(plVar4);
  return uVar3;
}


