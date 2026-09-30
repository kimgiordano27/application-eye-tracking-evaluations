/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_TypeNameAssemblyFormat
ENTRY_POINT: 061ded54
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_TypeNameAssemblyFormat(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x21;
  undefined8 uVar6;
  
  if ((*(byte *)(unaff_x21 + 0x5e5) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07dace30);
    FUN_0373b518(PTR_DAT_07da51d8);
    FUN_0373b518(PTR_DAT_07dace38);
    *(undefined1 *)(unaff_x21 + 0x5e5) = 1;
  }
  FUN_062855bc(param_1,0);
  puVar2 = PTR_DAT_07dace38;
  if (param_2 == 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d8ebe8);
    uVar6 = thunk_FUN_037788cc();
    uVar4 = thunk_FUN_037a15ac(PTR_DAT_07d98ae8);
    FUN_061a1b40(uVar6,uVar4,0);
    uVar4 = thunk_FUN_037a15ac(PTR_DAT_07dace40);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar6,uVar4);
  }
  uVar6 = *(undefined8 *)PTR_DAT_07dace30;
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar6 = FUN_062519f8(uVar6,0);
  plVar3 = (long *)FUN_06147170(param_2,*(undefined8 *)puVar2,uVar6,0);
  if (plVar3 != (long *)0x0) {
    lVar5 = *(long *)PTR_DAT_07da51d8;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar5)) {
      *(long **)(param_1 + 0x10) = plVar3;
      if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
         (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar5)) goto LAB_061dee58;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54(plVar3);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
LAB_061dee58:
  thunk_FUN_037aeb94(param_1 + 0x10,plVar3);
  return;
}


