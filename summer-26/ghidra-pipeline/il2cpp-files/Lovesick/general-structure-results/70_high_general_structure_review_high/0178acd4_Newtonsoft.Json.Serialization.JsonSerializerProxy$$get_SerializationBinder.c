/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_SerializationBinder
ENTRY_POINT: 0178acd4
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


long * Newtonsoft_Json_Serialization_JsonSerializerProxy__get_SerializationBinder(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x21;
  long lVar7;
  uint unaff_w22;
  ulong unaff_x23;
  uint uVar8;
  long unaff_x24;
  
  do {
    uVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),*(undefined8 *)(unaff_x24 + unaff_x23 * 8))
    ;
    if ((uVar2 & 1) == 0) {
      if (*(uint *)(unaff_x19 + 3) <= unaff_x23) break;
      *(undefined8 *)(unaff_x24 + unaff_x23 * 8) = 0;
    }
    else {
      unaff_w22 = unaff_w22 + 1;
    }
    uVar8 = *(uint *)(unaff_x19 + 3);
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)uVar8 <= (long)unaff_x23) {
      if (unaff_w22 == uVar8) {
        return unaff_x19;
      }
      plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_System_Collections_Generic_List<PropertyInfo>_get_Item__
                                    ,unaff_w22);
      puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
      if ((int)unaff_x19[3] < 1) {
        return plVar3;
      }
      uVar2 = 0;
      uVar8 = 0;
      uVar6 = unaff_x19[3] & 0xffffffff;
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Formatting;
    }
  } while (unaff_x23 < uVar8);
LAB_0178adf4:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Formatting:
  if (uVar6 <= uVar2) goto LAB_0178adf4;
  lVar7 = unaff_x19[uVar2 + 4];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (lVar7 != 0) {
    if (*(uint *)(unaff_x19 + 3) <= uVar2) goto LAB_0178adf4;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = unaff_x19[uVar2 + 4];
    if ((lVar7 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar5,0);
    }
    if (*(uint *)(plVar3 + 3) <= uVar8) goto LAB_0178adf4;
    lVar4 = (long)(int)uVar8;
    uVar8 = uVar8 + 1;
    plVar3[lVar4 + 4] = lVar7;
  }
  uVar6 = (ulong)*(uint *)(unaff_x19 + 3);
  uVar2 = uVar2 + 1;
  if ((long)(int)*(uint *)(unaff_x19 + 3) <= (long)uVar2) {
    return plVar3;
  }
  goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Formatting;
}


