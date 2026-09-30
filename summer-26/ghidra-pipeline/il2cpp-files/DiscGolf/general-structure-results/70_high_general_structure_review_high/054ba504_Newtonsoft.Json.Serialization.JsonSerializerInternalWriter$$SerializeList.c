/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList
ENTRY_POINT: 054ba504
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  
                    /* catch() { ... } // from try @ 054ba01c with catch @ 054ba504 */
                    /* catch() { ... } // from try @ 054ba44c with catch @ 054ba508 */
  uVar1 = (**(code **)(param_1 + 0x1b8))(param_2,*(undefined8 *)(param_1 + 0x1c0));
                    /* catch() { ... } // from try @ 054ba1f0 with catch @ 054ba50c */
  if ((uVar1 & 1) == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069fba18);
    uVar4 = thunk_FUN_02dd3144();
                    /* try { // try from 054ba5f4 to 055ba77f has its CatchHandler @ 054ba5f4
                       catch() { ... } // from try @ 054ba5f4 with catch @ 054ba5f4
                       catch() { ... } // from try @ 054baa44 with catch @ 054ba5f4
                       catch() { ... } // from try @ 054baaf8 with catch @ 054ba5f4
                       catch() { ... } // from try @ 054bab68 with catch @ 054ba5f4
                       catch() { ... } // from try @ 054bac0c with catch @ 054ba5f4 */
    uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a21998);
    FUN_054e3304(uVar4,uVar3,0);
LAB_054ba608:
    uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a219a8);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar4,uVar3);
  }
  if (*(char *)(unaff_x19 + 0x40) == '\0') {
    lVar2 = *(long *)(unaff_x19 + 0x68) + (long)*(int *)(unaff_x19 + 100);
  }
  else {
                    /* catch() { ... } // from try @ 054b9e00 with catch @ 054ba520 */
    uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
                    /* catch() { ... } // from try @ 054ba448 with catch @ 054ba524 */
                    /* catch() { ... } // from try @ 054ba444 with catch @ 054ba528 */
                    /* catch() { ... } // from try @ 054ba440 with catch @ 054ba52c */
    if (*(int *)(*(long *)PTR_DAT_06a18a98 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 054b9dcc with catch @ 054ba530 */
      thunk_FUN_02df485c();
    }
                    /* catch() { ... } // from try @ 054b9ed4 with catch @ 054ba534 */
                    /* catch() { ... } // from try @ 054b9e68 with catch @ 054ba538 */
                    /* catch() { ... } // from try @ 054b9df0 with catch @ 054ba53c */
                    /* catch() { ... } // from try @ 054b9db8 with catch @ 054ba540 */
                    /* catch() { ... } // from try @ 054ba050 with catch @ 054ba544 */
    lVar2 = FUN_054ba094(uVar4,0,1,(long)&stack0x00000008 + 4);
    if (in_stack_00000008._4_4_ != 0) {
                    /* try { // try from 054ba558 to 055ba55b has its CatchHandler @ 054ba564 */
      uVar4 = FUN_054b94e8();
                    /* catch() { ... } // from try @ 054ba558 with catch @ 054ba564 */
                    /* try { // try from 054ba568 to 055ba56f has its CatchHandler @ 054ba578 */
      thunk_FUN_02dfd288(PTR_DAT_06a18a98);
                    /* try { // try from 054ba570 to 055ba57b has its CatchHandler @ 054b9c28 */
      FUN_0297e1b4();
                    /* catch() { ... } // from try @ 054ba484 with catch @ 054ba578
                       catch() { ... } // from try @ 054ba4e8 with catch @ 054ba578
                       catch() { ... } // from try @ 054ba568 with catch @ 054ba578 */
      uVar4 = FUN_054b956c(uVar4,in_stack_00000008._4_4_);
      goto LAB_054ba608;
    }
  }
  return lVar2;
}


