/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Culture
ENTRY_POINT: 0178af9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Culture(ulong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar7;
  long *unaff_x21;
  
  if ((param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0178afc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*unaff_x21 + 0x2c8))();
    return uVar2;
  }
  uVar3 = (**(code **)(*unaff_x19 + 0x2b8))();
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  uVar3 = FUN_0178b0b0();
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_0178b174();
    return uVar2;
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x3c8))();
  if ((uVar3 & 1) != 0) {
    lVar4 = (**(code **)(*unaff_x20 + 0x4b8))();
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if ((int)uVar1 < 1) {
        return 1;
      }
      uVar7 = 0;
      lVar6 = lVar4;
      while( true ) {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194(lVar6);
        }
        plVar5 = *(long **)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
        if (plVar5 == (long *)0x0) break;
        uVar3 = (**(code **)(*plVar5 + 0x2c8))();
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar7 = uVar7 + 1;
        lVar6 = 1;
        if ((int)uVar1 <= (int)uVar7) {
          return 1;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return 0;
}


