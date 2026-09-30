/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateDictionary
ENTRY_POINT: 055ce150
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x055ce400) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateDictionary(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  undefined8 uVar6;
  int iVar7;
  long *in_stack_00000038;
  int in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000078;
  
  lVar3 = FUN_02e7568c();
  uVar4 = FUN_047c25a0(&stack0x00000050,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 055ce2c0 to 056ce2c7 has its CatchHandler @ 055ce4e4 */
    in_stack_00000078._4_4_ = 2;
    *unaff_x19 = 2;
                    /* try { // try from 055ce2c8 to 056ce4b7 has its CatchHandler @ 055ce1a0 */
    *(undefined8 *)(unaff_x19 + 0x1e) = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000050;
    thunk_FUN_02ee2be8(unaff_x19 + 0x1c,0);
    FUN_03596a88(unaff_x19 + 2,&stack0x00000050);
    iVar2 = 0;
    iVar7 = 5;
  }
  else {
    lVar3 = *(long *)(*(long *)PTR_DAT_06a6fe08 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02e7568c();
    }
    iVar2 = FUN_047c26cc(&stack0x00000050,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20));
                    /* try { // try from 055ce1a0 to 056ce283 has its CatchHandler @ 055ce1a0
                       catch() { ... } // from try @ 055ce1a0 with catch @ 055ce1a0
                       catch() { ... } // from try @ 055ce2c8 with catch @ 055ce1a0
                       catch() { ... } // from try @ 055ce4c8 with catch @ 055ce1a0
                       catch() { ... } // from try @ 055ce514 with catch @ 055ce1a0
                       catch() { ... } // from try @ 055ce594 with catch @ 055ce1a0 */
    iVar2 = unaff_x19[0x1a] + iVar2;
    iVar7 = 0xb;
  }
  if (in_stack_00000078._4_4_ < 0) {
    if ((*in_stack_00000038 == 0) || (lVar3 = FUN_055c9924(), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_0566da8c(lVar3,0);
  }
  puVar1 = PTR_DAT_06a83188;
  if (iVar7 == 0xb) {
    *unaff_x19 = 0xfffffffe;
    FUN_04922620(unaff_x19 + 2,iVar2,*(undefined8 *)puVar1);
  }
  else if (iVar7 == 0) {
    uVar6 = *(undefined8 *)(&stack0x00000040 + (long)(in_stack_00000048 + -1) * 8);
    *unaff_x19 = 0xfffffffe;
    uVar5 = thunk_FUN_02ea289c(PTR_DAT_06a83190);
    FUN_049226bc(unaff_x19 + 2,uVar6,uVar5);
  }
  return;
}


