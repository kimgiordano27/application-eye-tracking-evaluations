/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$get_ShouldSerialize
ENTRY_POINT: 027403a4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonProperty__get_ShouldSerialize
               (undefined8 param_1,ulong param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint local_34;
  
  if ((DAT_04124999 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc03b8);
    FUN_01ab69ac(PTR_DAT_03cf6448);
    FUN_01ab69ac(PTR_DAT_03cf0018);
    FUN_01ab69ac(PTR_DAT_03cbebc0);
    DAT_04124999 = 1;
  }
  puVar2 = PTR_DAT_03cf6448;
  puVar1 = PTR_DAT_03cc03b8;
  if (param_3 < 2) {
    if ((int)param_2 == 0) {
      lVar5 = **(long **)(*(long *)PTR_DAT_03cbebc0 + 0xb8);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_027407a4(param_2 & 0xffffffff,param_3 == 1);
      lVar5 = thunk_FUN_01a47d60(uVar4,0);
      uVar4 = FUN_01faf3c8(param_1,param_2,*(undefined8 *)puVar2);
      if (lVar5 == 0) {
        lVar8 = 0;
      }
      else {
        iVar3 = thunk_FUN_01a5ddb0(0);
        lVar8 = lVar5 + iVar3;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02740854(lVar8,uVar4,0,param_2 & 0xffffffff,param_3 == 1);
    }
    return lVar5;
  }
  local_34 = param_3;
  uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
  uVar4 = thunk_FUN_01a89a98(uVar4,&local_34);
  uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cefb80);
  uVar4 = FUN_025b4d3c(uVar6,uVar4,0);
  thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
  uVar6 = thunk_FUN_01a89e68();
  uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cf7610);
  FUN_026a7658(uVar6,uVar4,uVar7,0);
  uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfa148);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar6,uVar4);
}


