/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TraceWriter
ENTRY_POINT: 058bb2f0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializerSettings__get_TraceWriter
                (long *param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x23;
  
  puVar1 = PTR_DAT_07290a18;
  if ((*(byte *)(unaff_x23 + 0x20) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07290a18);
    thunk_FUN_032e1da0(PTR_DAT_07297170);
    *(undefined1 *)(unaff_x23 + 0x20) = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar3 = FUN_058bccc0();
  if ((uVar3 & 1) == 0) {
    if ((param_2 != 0) && (param_3 != 0)) {
      iVar2 = *(int *)(param_3 + 0x10);
      if (*(int *)(param_2 + 0x10) < iVar2) {
        uVar3 = 0;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x1b8))(param_1,param_2,0,iVar2,param_3,0,iVar2,param_4);
        uVar3 = (ulong)(iVar2 == 0);
      }
      return uVar3;
    }
  }
  else {
    plVar4 = (long *)FUN_058bce0c(param_1);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07297170) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_058bb41c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_032937ac(plVar4,*(long *)PTR_DAT_07297170,2);
LAB_058bb41c:
                    /* WARNING: Could not recover jumptable at 0x058bb444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar5)(plVar4,param_2,param_3,param_4,puVar5[1]);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


