/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$ReadDecimalString
ENTRY_POINT: 01707a70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


long Newtonsoft_Json_JsonReader__ReadDecimalString(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 *unaff_x23;
  
  *(undefined1 *)(unaff_x20 + 0x9ad) = 1;
  lVar3 = thunk_FUN_00d62348(*unaff_x23);
  puVar1 = PTR_DAT_033f3620;
  if (lVar3 != 0) {
    FUN_017b46ec(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = unaff_x22;
    *(undefined8 *)(lVar3 + 0x18) = unaff_x21;
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar1;
    }
    puVar2 = System_Func<KeyValuePair<string,_JSONNode>,_bool>_TypeInfo;
    if (*(long *)(*(long *)(lVar4 + 0xb8) + 8) == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar4 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar4 == 0) goto LAB_01707b94;
      FUN_012ce9c0(lVar4,uVar6,*(undefined8 *)PTR_DAT_033f3908,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar4;
    }
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnDisable>b__2_0__
                              );
    puVar1 = StringLiteral_7;
    if (lVar4 != 0) {
      FUN_012cbce8();
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        FUN_012ce910(lVar5,lVar3,*(undefined8 *)Sirenix_Serialization_Int32Serializer_var,0);
        *(long *)(lVar4 + 0x30) = lVar5;
        return lVar4;
      }
    }
  }
LAB_01707b94:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


