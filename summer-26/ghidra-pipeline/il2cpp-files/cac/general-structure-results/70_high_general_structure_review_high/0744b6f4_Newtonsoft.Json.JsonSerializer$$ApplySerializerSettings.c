/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ApplySerializerSettings
ENTRY_POINT: 0744b6f4
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_JsonSerializer__ApplySerializerSettings
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w19;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  undefined8 *puVar4;
  int in_stack_00000008;
  
  puVar4 = *(undefined8 **)(unaff_x23 + 0xa8);
  uVar1 = FUN_07325a24(param_1,*puVar4,param_3,0);
                    /* try { // try from 0744b704 to 0754b707 has its CatchHandler @ 0744b864 */
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 0744b7d0 to 0754b7fb has its CatchHandler @ 0744b870 */
    in_stack_00000008 = unaff_w19 + unaff_w22;
    uVar3 = thunk_FUN_03f4e2c4(*(undefined8 *)(PTR_DAT_0910b550 + 0x48),&stack0x00000008);
    uVar2 = thunk_FUN_03f786f8(PTR_DAT_091310c0);
    uVar2 = FUN_0731d5f8(uVar2,uVar3,0);
    thunk_FUN_03f786f8(PTR_DAT_0910e988);
    uVar3 = thunk_FUN_03f4e68c();
    FUN_07419a00(uVar3,uVar2,0);
                    /* try { // try from 0744b7b4 to 0754b7bf has its CatchHandler @ 0744b868 */
    uVar2 = thunk_FUN_03f786f8(PTR_DAT_091310b8);
                    /* WARNING: Subroutine does not return */
    FUN_03f134f0(uVar3,uVar2);
  }
                    /* try { // try from 0744b708 to 0754b713 has its CatchHandler @ 0744b86c */
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    uVar2 = FUN_0744bcac();
                    /* try { // try from 0744b724 to 0754b7af has its CatchHandler @ 0744b874 */
    uVar2 = FUN_0731ca20(*puVar4,uVar2,0);
    FUN_0744bff4(uVar2,uVar2,unaff_w19);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


