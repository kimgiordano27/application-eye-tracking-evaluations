/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValueAsync
ENTRY_POINT: 0170ff90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonTextReader__ParsePostValueAsync(long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  puVar1 = StringLiteral_7793;
  if (6 < param_2) {
    uStack000000000000000c = 0;
    uVar3 = thunk_FUN_00d48444(StringLiteral_7793);
    uVar3 = thunk_FUN_00d61fa0(uVar3,&stack0x0000000c);
    in_stack_00000008 = 6;
    uVar4 = thunk_FUN_00d48444(puVar1);
    uVar4 = thunk_FUN_00d61fa0(uVar4,&stack0x00000008);
    uVar5 = thunk_FUN_00d48444(PTR_DAT_033f1ef0);
    uVar3 = FUN_015e2494(uVar5,uVar3,uVar4,0);
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>_GetEnumerator__
                              );
    FUN_016efd4c(uVar4,uVar5,uVar3,0);
    uVar3 = thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_RequiresCanWrite__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar3);
  }
  lVar2 = *(long *)(param_1 + 0x90);
  if ((lVar2 == 0) && (lVar2 = FUN_0170e424(param_1), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (param_2 < *(uint *)(lVar2 + 0x18)) {
    return *(undefined8 *)(lVar2 + (long)(int)param_2 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


