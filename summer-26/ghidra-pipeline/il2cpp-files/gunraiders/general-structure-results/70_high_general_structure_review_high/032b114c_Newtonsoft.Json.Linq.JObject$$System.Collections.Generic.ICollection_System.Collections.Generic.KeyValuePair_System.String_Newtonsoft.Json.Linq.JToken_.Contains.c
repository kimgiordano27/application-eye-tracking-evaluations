/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JObject$$System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Contains
ENTRY_POINT: 032b114c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_Linq_JObject__System_Collections_Generic_ICollection<System_Collections_Generic_KeyValuePair<System_String,Newtonsoft_Json_Linq_JToken>>_Contains
               (ulong param_1,ulong *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint unaff_w19;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long unaff_x27;
  ulong uVar8;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  uint in_stack_00000060;
  
                    /* try { // try from 032b1158 to 033b1167 has its CatchHandler @ 032b122c */
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f960);
    *(undefined1 *)(unaff_x27 + 0xd91) = 1;
  }
  puVar2 = PTR_DAT_0422fd80;
                    /* try { // try from 032b1174 to 033b118f has its CatchHandler @ 032b1258 */
  if (999 < unaff_w19) {
    uStack000000000000000c = 0;
    uVar7 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
    uVar7 = thunk_FUN_01c49334(uVar7,&stack0x0000000c);
    in_stack_00000008 = 999;
    uVar5 = thunk_FUN_01c273e8(puVar2);
    uVar5 = thunk_FUN_01c49334(uVar5,&stack0x00000008);
    uVar6 = thunk_FUN_01c273e8(BRPotionSpawner_<DespawnAfterTime>d__9_TypeInfo);
    uVar7 = FUN_03132e60(uVar6,uVar7,uVar5,0);
    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
    uVar5 = thunk_FUN_01c496e0();
    uVar6 = thunk_FUN_01c273e8(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
                              );
    FUN_03243400(uVar5,uVar6,uVar7,0);
    uVar7 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>__ctor__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,uVar7);
  }
  uVar8 = (ulong)in_stack_00000060;
  if (in_stack_00000060 < 3) {
    if (*(int *)(*(long *)PTR_DAT_0422f960 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
                    /* try { // try from 032b11ac to 033b11b7 has its CatchHandler @ 032b1254 */
    lVar3 = FUN_032b0afc(param_3,param_4,param_5);
                    /* try { // try from 032b11b8 to 033b11ef has its CatchHandler @ 032b0da4 */
    lVar4 = FUN_032b0d60(unaff_w23,unaff_w22,unaff_w21);
    uVar1 = lVar3 + (ulong)unaff_w19 * 10000 + lVar4;
    if (uVar1 < 0x2bca2875f4374000) {
      *param_2 = uVar1 | uVar8 << 0x3e;
      return;
    }
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar6 = thunk_FUN_01c496e0();
    uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_Dictionary<int,_char>_ContainsKey__
                              );
    FUN_032467a0(uVar6,uVar7,0);
  }
  else {
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar6 = thunk_FUN_01c496e0();
    uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__);
    uVar5 = thunk_FUN_01c273e8(Method_System_Collections_Generic_Dictionary<int,_bool>_Add__);
    FUN_0323fce4(uVar6,uVar7,uVar5,0);
  }
  uVar7 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>__ctor__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar6,uVar7);
}


