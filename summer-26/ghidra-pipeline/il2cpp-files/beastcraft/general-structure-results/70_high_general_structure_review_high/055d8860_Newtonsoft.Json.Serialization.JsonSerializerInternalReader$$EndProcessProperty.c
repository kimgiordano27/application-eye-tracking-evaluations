/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EndProcessProperty
ENTRY_POINT: 055d8860
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty(void)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 unaff_w20;
  long *unaff_x23;
  long in_stack_00000008;
  
  uVar2 = FUN_05482ce0();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar3 = FUN_055ddde0(uVar2);
                    /* try { // try from 055d8a14 to 056d8a17 has its CatchHandler @ 055d8a70 */
                    /* try { // try from 055d8a18 to 056d8a97 has its CatchHandler @ 055d8794 */
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar4 = FUN_055d3e14(unaff_w20);
  if ((uVar4 & 1) != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 055d8b50 to 056d8bdf has its CatchHandler @ 055d8b50
                       catch() { ... } // from try @ 055d8b50 with catch @ 055d8b50
                       catch() { ... } // from try @ 055d8c70 with catch @ 055d8b50
                       catch() { ... } // from try @ 055d8d14 with catch @ 055d8b50
                       catch() { ... } // from try @ 055d8d64 with catch @ 055d8b50 */
      FUN_02e3ccc4();
    }
    sVar1 = FUN_05487524(lVar3,*(int *)(lVar3 + 0x10) + -1,0);
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar5);
      lVar5 = *unaff_x23;
    }
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 055d895c with catch @ 055d8a6c
                        */
    if (*(short *)(*(long *)(lVar5 + 0xb8) + 10) != sVar1) {
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 055d8a14 with catch @ 055d8a70
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 055d8978 with catch @ 055d8a74
                        */
      if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 055d8928 with catch @ 055d8a78
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 055d88c4 with catch @ 055d8a7c
                        */
        thunk_FUN_02e9a04c(lVar5);
      }
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
                    /* try { // try from 055d8a98 to 056d8a9b has its CatchHandler @ 055d8aa8 */
                    /* catch() { ... } // from try @ 055d8a98 with catch @ 055d8aa8 */
      uVar2 = FUN_0556e974(*(long *)(*unaff_x23 + 0xb8) + 10,0);
                    /* try { // try from 055d8aac to 056d8ab3 has its CatchHandler @ 055d8abc */
                    /* try { // try from 055d8ab4 to 056d8abf has its CatchHandler @ 055d8794 */
      lVar3 = FUN_05482ce0(lVar3,uVar2,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 055d8aac with catch @ 055d8abc
                        */
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06a7aba8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar4 = FUN_02e452e4(lVar3,&stack0x00000008);
  if ((uVar4 & 1) == 0) {
    in_stack_00000008 = lVar3;
  }
  return in_stack_00000008;
}


