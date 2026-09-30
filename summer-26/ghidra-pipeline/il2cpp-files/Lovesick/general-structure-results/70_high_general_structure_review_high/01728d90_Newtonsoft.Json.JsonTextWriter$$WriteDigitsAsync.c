/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteDigitsAsync
ENTRY_POINT: 01728d90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_4;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextWriter__WriteDigitsAsync(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  lVar3 = FUN_0174d880(*(long *)(*unaff_x20 + 0xb8) + 8,0);
  if (lVar3 <= unaff_x19) {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar3 = FUN_0174d880(*(long *)(*unaff_x20 + 0xb8) + 0x10,0);
    if (unaff_x19 <= lVar3) {
      return;
    }
  }
  thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
  FUN_00acb0a4();
  uVar4 = FUN_01731954(0);
  uVar5 = thunk_FUN_00d48444(StringLiteral_2032);
  uVar5 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar5,0);
  puVar1 = Method_TMPro_FastAction<bool,_Object>__ctor__;
  thunk_FUN_00d48444(Method_TMPro_FastAction<bool,_Object>__ctor__);
  FUN_00acb0a4();
  lVar3 = thunk_FUN_00d48444(puVar1);
  puVar2 = StringLiteral_2672;
  in_stack_00000008 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  uVar6 = thunk_FUN_00d48444(StringLiteral_2672);
  uVar6 = thunk_FUN_00d61fa0(uVar6,&stack0x00000008);
  thunk_FUN_00d48444(puVar1);
  thunk_FUN_00d48444(puVar2);
  uVar7 = thunk_FUN_00d61fa0();
  uVar4 = FUN_01600ce8(uVar4,uVar5,uVar6,uVar7,0);
  thunk_FUN_00d48444(StringLiteral_8570);
  uVar5 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar6 = thunk_FUN_00d48444(Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo);
  FUN_016efd4c(uVar5,uVar6,uVar4,0);
  uVar4 = thunk_FUN_00d48444(Method_System_Threading_SynchronizationContext_Wait__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,uVar4);
}


