/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeValue
ENTRY_POINT: 054b8abc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue(void)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x23;
  long in_stack_00000008;
  
  FUN_053674f8();
  iVar2 = FUN_05372394();
  if (iVar2 < 0) {
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
                    /* try { // try from 054b9004 to 055b9117 has its CatchHandler @ 054b9004
                       catch() { ... } // from try @ 054b9004 with catch @ 054b9004
                       catch() { ... } // from try @ 054b9388 with catch @ 054b9004
                       catch() { ... } // from try @ 054b93d8 with catch @ 054b9004
                       catch() { ... } // from try @ 054b93fc with catch @ 054b9004 */
    uVar5 = thunk_FUN_02dd3144();
    uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a218c0);
    FUN_05452924(uVar5,uVar4,0);
                    /* catch() { ... } // from try @ 054b8f84 with catch @ 054b8f90 */
                    /* try { // try from 054b8f94 to 055b8f9b has its CatchHandler @ 054b8fe4 */
    uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a218b0);
                    /* try { // try from 054b8f9c to 055b8fbf has its CatchHandler @ 054b8a7c */
                    /* catch() { ... } // from try @ 054b8cb0 with catch @ 054b8fa0 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 054b8c54 with catch @ 054b8fa4
                       catch() { ... } // from try @ 054b8f1c with catch @ 054b8fa4 */
    FUN_02d96724(uVar5,uVar4);
  }
  sVar1 = FUN_053674f8();
  lVar6 = *unaff_x23;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar6);
    lVar6 = *unaff_x23;
  }
  if (*(short *)(*(long *)(lVar6 + 0xb8) + 10) != sVar1) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar6);
    }
    unaff_x19 = FUN_0536fcfc();
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
                    /* try { // try from 054b8e14 to 055b8e43 has its CatchHandler @ 054b8f64 */
  lVar6 = FUN_054be26c(unaff_x19);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_054b4628(unaff_w20);
  if ((uVar3 & 1) != 0) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 054b8dfc with catch @ 054b8f5c */
      FUN_02d96860();
    }
                    /* try { // try from 054b8e44 to 055b8f1b has its CatchHandler @ 054b8a7c */
    sVar1 = FUN_053674f8(lVar6,*(int *)(lVar6 + 0x10) + -1,0);
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar7);
      lVar7 = *unaff_x23;
    }
    if (*(short *)(*(long *)(lVar7 + 0xb8) + 10) != sVar1) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar7);
      }
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_054484f0(*(long *)(*unaff_x23 + 0xb8) + 10,0);
      lVar6 = FUN_05362cb4(lVar6,uVar4,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06a18a98 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_02d9f008(lVar6,&stack0x00000008);
  if ((uVar3 & 1) == 0) {
    in_stack_00000008 = lVar6;
  }
  return in_stack_00000008;
}


