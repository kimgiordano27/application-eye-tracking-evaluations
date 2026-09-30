/*
FUNCTION_NAME: FUN_06368ef8
ENTRY_POINT: 06368ef8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06369038) */

void FUN_06368ef8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  puVar3 = Method_System_Data_DataRelationCollection_DataSetRelationCollection_get_Item__;
  puVar2 = Method_System_Net_WebRequestStream_Close_internal__;
  if ((DAT_06b8c5ff & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(Method_System_Net_WebRequestStream_Close_internal__);
    FUN_02d6084c(Method_System_Data_DataRelationCollection_DataSetRelationCollection_get_Item__);
    DAT_06b8c5ff = 1;
  }
  uVar1 = **(undefined4 **)(*(long *)puVar3 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar2 = PTR_DAT_0675f3d0;
  plVar4 = (long *)FUN_062f18dc(param_3,uVar1,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_062e8218(plVar4,param_4,0);
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_063077cc(*(long *)(param_1 + 0x20),plVar4,1,0);
  lVar6 = *plVar4;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_06369010;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar2,0);
LAB_06369010:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


