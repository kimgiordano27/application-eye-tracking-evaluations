/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails
ENTRY_POINT: 055d58c8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CalculatePropertyDetails
          (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_06e8d5f4 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a2f548);
    FUN_02e3ca1c(PTR_DAT_06a7b720);
    DAT_06e8d5f4 = 1;
  }
  puVar2 = PTR_DAT_06a7b720;
  puVar1 = PTR_DAT_06a2f548;
  if (-1 < param_2) {
    if (*(long *)(param_1 + 0x10) != 0) {
      if (param_2 == 0) {
        lVar6 = *(long *)PTR_DAT_06a7b720;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar6 = *(long *)puVar2;
        }
        uVar5 = **(undefined8 **)(lVar6 + 0xb8);
      }
      else {
        uVar4 = FUN_02e3cb08(*(undefined8 *)PTR_DAT_06a2f548,param_2);
        iVar3 = FUN_055d55a8(param_1,uVar4,0,param_2);
        uVar5 = uVar4;
        if (iVar3 != param_2) {
          uVar5 = FUN_02e3cb08(*(undefined8 *)puVar1,iVar3);
          thunk_FUN_02e4c7a0(uVar4,0,uVar5,0,iVar3 << 1,0);
        }
      }
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_055d3c24();
  }
  uVar5 = thunk_FUN_02ea289c(PTR_DAT_06a6c9c8);
  uVar5 = FUN_05648560(uVar5,0);
  thunk_FUN_02ea289c(PTR_DAT_06a32848);
  uVar4 = thunk_FUN_02e78ab8();
  uVar7 = thunk_FUN_02ea289c(PTR_DAT_06a38760);
  FUN_05576434(uVar4,uVar7,uVar5,0);
  uVar5 = thunk_FUN_02ea289c(PTR_DAT_06a83430);
                    /* WARNING: Subroutine does not return */
  FUN_02e3cb88(uVar4,uVar5);
}


