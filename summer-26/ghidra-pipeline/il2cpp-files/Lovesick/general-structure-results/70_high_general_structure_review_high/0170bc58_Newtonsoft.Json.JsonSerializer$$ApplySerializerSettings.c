/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ApplySerializerSettings
ENTRY_POINT: 0170bc58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


ulong Newtonsoft_Json_JsonSerializer__ApplySerializerSettings
                (long *param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  
  puVar1 = System_Func<Spectrum_Point,_float>_TypeInfo;
  if ((DAT_037789ec & 1) == 0) {
    thunk_FUN_00d48444(System_Func<Spectrum_Point,_float>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2157);
    DAT_037789ec = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0170d19c();
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
    plVar4 = (long *)FUN_0170d2e0(param_1);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_2157) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_0170bd90;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)StringLiteral_2157,3);
LAB_0170bd90:
                    /* WARNING: Could not recover jumptable at 0x0170bdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar5)(plVar4,param_2,param_3,param_4,puVar5[1]);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


