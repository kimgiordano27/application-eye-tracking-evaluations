/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$get_ShouldSerialize
ENTRY_POINT: 04d3f138
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d3f25c) */

undefined8
Newtonsoft_Json_Serialization_JsonProperty__get_ShouldSerialize
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar1 = PTR_DAT_0632aaa8;
  if ((DAT_066c8677 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_0632aaa8);
    DAT_066c8677 = 1;
  }
  plVar2 = (long *)thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04d38a60(plVar2,param_1,param_2,1,0x400);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar3 = (**(code **)(*plVar2 + 0x1f8))(plVar2,*(undefined8 *)(*plVar2 + 0x200));
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04d3f230;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar2,*(long *)PTR_DAT_06312f78,0);
LAB_04d3f230:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return uVar3;
}


