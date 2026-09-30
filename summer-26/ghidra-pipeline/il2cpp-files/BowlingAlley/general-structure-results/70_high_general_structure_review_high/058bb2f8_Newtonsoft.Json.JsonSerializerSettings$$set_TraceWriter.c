/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TraceWriter
ENTRY_POINT: 058bb2f8
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


ulong Newtonsoft_Json_JsonSerializerSettings__set_TraceWriter
                (ulong param_1,long *param_2,long param_3,long param_4,undefined4 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x23;
  long unaff_x24;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x24 + 0xa18);
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07290a18);
    thunk_FUN_032e1da0(PTR_DAT_07297170);
    *(undefined1 *)(unaff_x23 + 0x20) = 1;
  }
  if (*(int *)(*plVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_058bccc0();
  if ((uVar2 & 1) == 0) {
    if ((param_3 != 0) && (param_4 != 0)) {
      iVar1 = *(int *)(param_4 + 0x10);
      if (*(int *)(param_3 + 0x10) < iVar1) {
        uVar2 = 0;
      }
      else {
        iVar1 = (**(code **)(*param_2 + 0x1b8))(param_2,param_3,0,iVar1,param_4,0,iVar1,param_5);
        uVar2 = (ulong)(iVar1 == 0);
      }
      return uVar2;
    }
  }
  else {
    plVar6 = (long *)FUN_058bce0c(param_2);
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07297170) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_058bb41c;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_032937ac(plVar6,*(long *)PTR_DAT_07297170,2);
LAB_058bb41c:
                    /* WARNING: Could not recover jumptable at 0x058bb444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar3)(plVar6,param_3,param_4,param_5,puVar3[1]);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


