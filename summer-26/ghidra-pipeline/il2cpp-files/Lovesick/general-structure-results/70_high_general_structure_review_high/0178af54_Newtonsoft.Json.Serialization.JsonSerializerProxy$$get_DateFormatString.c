/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateFormatString
ENTRY_POINT: 0178af54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateFormatString(void)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar7;
  long *unaff_x21;
  
  if (unaff_x19 == (long *)0x0) {
Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor:
    uVar6 = 0;
  }
  else {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (unaff_x20 != unaff_x19) {
      plVar2 = (long *)(**(code **)(*unaff_x20 + 0x348))();
      if (plVar2 == (long *)0x0) goto LAB_0178b0a8;
      uVar3 = FUN_0178a838();
      if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0178afc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
        return uVar6;
      }
      uVar3 = (**(code **)(*unaff_x19 + 0x2b8))();
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_0178b0b0();
        if ((uVar3 & 1) != 0) {
          uVar6 = FUN_0178b174();
          return uVar6;
        }
        uVar3 = (**(code **)(*unaff_x20 + 0x3c8))();
        if ((uVar3 & 1) == 0) goto Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor;
        lVar4 = (**(code **)(*unaff_x20 + 0x4b8))();
        if (lVar4 == 0) {
LAB_0178b0a8:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar1) {
          uVar7 = 0;
          lVar5 = lVar4;
          while( true ) {
            if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194(lVar5);
            }
            plVar2 = *(long **)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
            if (plVar2 == (long *)0x0) break;
            uVar3 = (**(code **)(*plVar2 + 0x2c8))();
            if ((uVar3 & 1) == 0) goto Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor;
            uVar1 = *(uint *)(lVar4 + 0x18);
            uVar7 = uVar7 + 1;
            lVar5 = 1;
            if ((int)uVar1 <= (int)uVar7) {
              return 1;
            }
          }
          goto LAB_0178b0a8;
        }
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}


