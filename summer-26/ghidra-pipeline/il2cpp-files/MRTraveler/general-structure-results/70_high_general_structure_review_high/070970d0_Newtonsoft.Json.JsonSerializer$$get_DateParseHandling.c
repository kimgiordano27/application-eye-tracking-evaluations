/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateParseHandling
ENTRY_POINT: 070970d0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__get_DateParseHandling
                (long *param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  
  puVar1 = PTR_DAT_08e9bb60;
  if ((DAT_0941bdf4 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e9bb60);
    FUN_03c8f898(PTR_DAT_08ea2898);
    DAT_0941bdf4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar3 = FUN_07098584();
  if ((uVar3 & 1) == 0) {
    if ((param_2 != 0) && (param_3 != 0)) {
      iVar2 = *(int *)(param_3 + 0x10);
      if (*(int *)(param_2 + 0x10) < iVar2) {
        uVar3 = 0;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x1b8))
                          (param_1,param_2,*(int *)(param_2 + 0x10) - iVar2,iVar2,param_3,0,iVar2,
                           param_4);
        uVar3 = (ulong)(iVar2 == 0);
      }
      return uVar3;
    }
  }
  else {
    plVar4 = (long *)FUN_070986d0(param_1);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08ea2898) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto FUN_07097204;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08ea2898,3);
FUN_07097204:
                    /* WARNING: Could not recover jumptable at 0x0709722c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar5)(plVar4,param_2,param_3,param_4,puVar5[1]);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


