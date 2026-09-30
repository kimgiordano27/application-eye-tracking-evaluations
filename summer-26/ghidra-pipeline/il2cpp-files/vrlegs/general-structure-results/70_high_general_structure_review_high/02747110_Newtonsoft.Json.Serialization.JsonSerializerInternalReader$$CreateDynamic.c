/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateDynamic
ENTRY_POINT: 02747110
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


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic
          (undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined8 local_28;
  
  puVar1 = PTR_DAT_03cbeeb0;
  if ((DAT_041249ee & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
    FUN_01ab69ac(PTR_DAT_03cc4b20);
    FUN_01ab69ac(PTR_DAT_03cd3d80);
    DAT_041249ee = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar2 = FUN_027454b4(param_1);
  if (iVar2 == 2) {
    local_28 = *param_1;
  }
  else {
    local_34[0] = 0;
    local_38[0] = 0;
    uVar6 = *param_1;
    if (*(int *)(*(long *)PTR_DAT_03cd3d80 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_026a447c(0);
    lVar4 = FUN_026a45ec(uVar6,uVar3,local_34,local_38,0);
    if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc4b20);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar5 = FUN_0274322c(param_1);
    if (lVar5 + lVar4 < 0x2bca2875f4374000) {
      if (lVar5 + lVar4 < 0) {
        if ((param_2 & 1) != 0) goto LAB_0274727c;
        local_28 = 0x8000000000000000;
      }
      else {
        local_28 = 0;
        FUN_02742b00(&local_28);
      }
    }
    else {
      if ((param_2 & 1) != 0) {
LAB_0274727c:
        thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
        uVar6 = thunk_FUN_01a89e68();
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cda960);
        FUN_026b274c(uVar6,uVar3,0);
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfa3d0);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar6,uVar3);
      }
      local_28 = 0xabca2875f4373fff;
    }
  }
  return local_28;
}


