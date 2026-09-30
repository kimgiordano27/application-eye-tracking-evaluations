/*
FUNCTION_NAME: FUN_0636851c
ENTRY_POINT: 0636851c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063686a0) */

void FUN_0636851c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((DAT_06b8c5fc & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(Method_System_Net_WebRequestStream_Close_internal__);
    FUN_02d6084c(Method_System_Data_DataRelationCollection_DataSetRelationCollection_get_Item__);
    DAT_06b8c5fc = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = FUN_0636725c(param_1);
    if (lVar3 == 0) {
      plVar4 = *(long **)(param_1 + 0x20);
      if (plVar4 == (long *)0x0) goto LAB_06368698;
      lVar3 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0));
    }
    FUN_063681c4(param_1,lVar3);
    if (param_2 == 0) {
LAB_06368698:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar9 = *(undefined4 *)(param_2 + 0x20);
    uVar8 = *(undefined4 *)(param_2 + 0x24);
    uVar1 = **(undefined4 **)
              (*(long *)
                Method_System_Data_DataRelationCollection_DataSetRelationCollection_get_Item__ +
              0xb8);
    if (*(int *)(*(long *)Method_System_Net_WebRequestStream_Close_internal__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    puVar2 = PTR_DAT_0675f3d0;
    plVar4 = (long *)FUN_062f17dc(uVar9,uVar8,uVar1,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_062e8218(plVar4,lVar3,0);
    FUN_06367710(param_1,plVar4,param_2);
    lVar3 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06368674;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar2,0);
LAB_06368674:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return;
}


