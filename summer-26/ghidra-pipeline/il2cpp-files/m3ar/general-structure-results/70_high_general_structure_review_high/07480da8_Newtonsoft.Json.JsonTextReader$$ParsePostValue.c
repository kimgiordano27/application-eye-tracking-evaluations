/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 07480da8
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonTextReader__ParsePostValue(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fa13f8);
    FUN_0403162c(PTR_DAT_08f8fa08);
    *(undefined1 *)(unaff_x22 + 0xadd) = 1;
  }
  puVar1 = PTR_DAT_08fa13f8;
  if (unaff_x20 == unaff_x19) {
    uVar3 = 0;
  }
  else if (unaff_x20 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (unaff_x19 != 0) {
      plVar8 = *(long **)(param_2 + 0x18);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)thunk_FUN_0406ddbc();
        if (plVar8 == (long *)0x0) {
          thunk_FUN_04097b88(PTR_DAT_08f66298);
          uVar3 = thunk_FUN_0406deb8();
          uVar4 = thunk_FUN_04097b88(PTR_DAT_08fa1400);
          FUN_0744a62c(uVar3,uVar4,0);
          uVar4 = thunk_FUN_04097b88(PTR_DAT_08fa14e0);
                    /* WARNING: Subroutine does not return */
          FUN_04031750(uVar3,uVar4);
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07480ee8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar1,0);
LAB_07480ee8:
                    /* WARNING: Could not recover jumptable at 0x07480f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)*puVar2)(plVar8);
        return uVar3;
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f8fa08) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07480ebc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f8fa08,0);
LAB_07480ebc:
                    /* WARNING: Could not recover jumptable at 0x07480ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar2)(plVar8);
      return uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}


