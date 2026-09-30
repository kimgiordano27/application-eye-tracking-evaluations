/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 04ab79e4
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


long Meta_WitAi_Json_JsonConvert__DeserializeObject<object>(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  
  lVar1 = FUN_040316d0(**(undefined8 **)(param_1 + 0xd88),1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar2 = thunk_FUN_0406ddbc();
  if (lVar2 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    *(undefined8 *)(lVar1 + 0x20) = unaff_x20;
    lVar1 = FUN_0750ff7c(param_2,lVar1,0);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0406aaec(lVar2);
    }
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = thunk_FUN_0406ddbc(lVar1,lVar2);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04031c0c(lVar1,lVar2);
      }
    }
    return lVar3;
  }
  uVar4 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
  FUN_04031750(uVar4,0);
}


