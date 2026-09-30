/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Binder
ENTRY_POINT: 058bb300
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


ulong Newtonsoft_Json_JsonSerializerSettings__get_Binder
                (ulong param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined4 unaff_w19;
  long unaff_x23;
  long *unaff_x24;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07290a18);
    thunk_FUN_032e1da0(PTR_DAT_07297170);
    *(undefined1 *)(unaff_x23 + 0x20) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
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
        iVar1 = (**(code **)(*param_2 + 0x1b8))(param_2,param_3,0,iVar1,param_4,0,iVar1,unaff_w19);
        uVar2 = (ulong)(iVar1 == 0);
      }
      return uVar2;
    }
  }
  else {
    plVar3 = (long *)FUN_058bce0c(param_2);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07297170) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_058bb41c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(plVar3,*(long *)PTR_DAT_07297170,2);
LAB_058bb41c:
                    /* WARNING: Could not recover jumptable at 0x058bb444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar4)(plVar3,param_3,param_4,unaff_w19,puVar4[1]);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


