/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DateFormatString
ENTRY_POINT: 0178af78
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DateFormatString(void)

{
  uint uVar1;
  bool in_ZR;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar7;
  
  if (in_ZR) {
    return 1;
  }
  plVar2 = (long *)(**(code **)(*unaff_x20 + 0x348))();
  if (plVar2 != (long *)0x0) {
    uVar3 = FUN_0178a838();
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0178afc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
      return uVar4;
    }
    uVar3 = (**(code **)(*unaff_x19 + 0x2b8))();
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    uVar3 = FUN_0178b0b0();
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_0178b174();
      return uVar4;
    }
    uVar3 = (**(code **)(*unaff_x20 + 0x3c8))();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    lVar5 = (**(code **)(*unaff_x20 + 0x4b8))();
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if ((int)uVar1 < 1) {
        return 1;
      }
      uVar7 = 0;
      lVar6 = lVar5;
      while( true ) {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194(lVar6);
        }
        plVar2 = *(long **)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
        if (plVar2 == (long *)0x0) break;
        uVar3 = (**(code **)(*plVar2 + 0x2c8))();
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar7 = uVar7 + 1;
        lVar6 = 1;
        if ((int)uVar1 <= (int)uVar7) {
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


