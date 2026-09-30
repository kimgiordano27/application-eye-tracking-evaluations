/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_CheckAdditionalContent
ENTRY_POINT: 01bc91a0
PROGRAM: vrfs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__set_CheckAdditionalContent
              (undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_06e2bc10;
  puVar3 = PTR_DAT_06db8e88;
  puVar2 = PTR_DAT_06d9fd78;
  puVar1 = PTR_DAT_06d893c8;
  while( true ) {
    if ((DAT_0722bd13 & 1) == 0) {
      thunk_FUN_0159f088(puVar4);
      thunk_FUN_0159f088(puVar1);
      thunk_FUN_0159f088(puVar2);
      thunk_FUN_0159f088(puVar3);
      DAT_0722bd13 = 1;
    }
    if (param_3 == 0x37) {
      return 0x37;
    }
    if (param_2 == 0) break;
    uVar5 = FUN_02679270(param_2,param_3,0);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar7);
    }
    uVar6 = FUN_051d2ac0(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      return param_3;
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar7 = *(long *)puVar1;
    }
    if ((**(long **)(lVar7 + 0xb8) == 0) ||
       (lVar7 = FUN_03d20510(**(long **)(lVar7 + 0xb8),param_3,*(undefined8 *)puVar4), lVar7 == 0))
    break;
    param_3 = *(int *)(lVar7 + 0x14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


