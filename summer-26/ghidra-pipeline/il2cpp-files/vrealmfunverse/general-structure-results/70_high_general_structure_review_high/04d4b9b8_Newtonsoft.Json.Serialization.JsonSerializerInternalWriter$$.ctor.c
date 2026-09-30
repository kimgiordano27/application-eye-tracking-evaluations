/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$.ctor
ENTRY_POINT: 04d4b9b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor(long param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  if ((DAT_066c86e6 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063122f8);
    FUN_02b3c81c(PTR_DAT_0632a790);
    DAT_066c86e6 = 1;
  }
  if (param_2 < 0) {
    uVar6 = thunk_FUN_02ba3594(PTR_DAT_0631ed68);
    uVar6 = FUN_04dbdb84(uVar6,0);
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar7 = thunk_FUN_02b79644();
    uVar8 = thunk_FUN_02ba3594(PTR_DAT_0631ea50);
    FUN_04cf1968(uVar7,uVar8,uVar6,0);
    uVar6 = thunk_FUN_02ba3594(PTR_DAT_063327b8);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar7,uVar6);
  }
  puVar1 = (undefined8 *)PTR_DAT_063122f8;
  plVar4 = (long *)PTR_DAT_0632a790;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_04d49890(0);
    puVar1 = (undefined8 *)PTR_DAT_063122f8;
    plVar4 = (long *)PTR_DAT_0632a790;
  }
  PTR_DAT_063122f8 = (undefined *)puVar1;
  PTR_DAT_0632a790 = (undefined *)plVar4;
  if (param_2 == 0) {
    lVar5 = *plVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar5 = *plVar4;
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
  }
  else {
    lVar3 = FUN_02b3c908(*puVar1,param_2);
    iVar9 = 0;
    do {
      plVar4 = *(long **)(param_1 + 0x10);
      if (plVar4 == (long *)0x0) goto LAB_04d4bae4;
      iVar2 = (**(code **)(*plVar4 + 0x338))
                        (plVar4,lVar3,iVar9,param_2,*(undefined8 *)(*plVar4 + 0x340));
      if (iVar2 == 0) break;
      param_2 = param_2 - iVar2;
      iVar9 = iVar2 + iVar9;
    } while (0 < param_2);
    if (lVar3 == 0) {
LAB_04d4bae4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar5 = lVar3;
    if (iVar9 != *(int *)(lVar3 + 0x18)) {
      lVar5 = FUN_02b3c908(*puVar1,iVar9);
      thunk_FUN_02b4c8e4(lVar3,0,lVar5,0,iVar9,0);
    }
  }
  return lVar5;
}


