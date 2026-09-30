/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c__DisplayClass38_0$$<CreateObjectUsingCreatorWithParameters>b__1
ENTRY_POINT: 01bc247c
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0__<CreateObjectUsingCreatorWithParameters>b__1
               (ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  uint unaff_w21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 01bc2484 to 01cc2603 has its CatchHandler @ 01bc2484
                       catch() { ... } // from try @ 01bc2484 with catch @ 01bc2484
                       catch() { ... } // from try @ 01bc264c with catch @ 01bc2484
                       catch() { ... } // from try @ 01bc284c with catch @ 01bc2484
                       catch() { ... } // from try @ 01bc2878 with catch @ 01bc2484
                       catch() { ... } // from try @ 01bc28b0 with catch @ 01bc2484
                       catch() { ... } // from try @ 01bc28f0 with catch @ 01bc2484 */
    thunk_FUN_0159f088(PTR_DAT_06e53b50);
    *(undefined1 *)(unaff_x22 + 0xcf1) = 1;
  }
  if (*(char *)(param_2 + 0x60) != '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e5f740);
    uVar1 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar2 = thunk_FUN_0159f088(PTR_DAT_06e51e90);
    FUN_031c8408(uVar1,uVar2,0);
    uVar2 = thunk_FUN_0159f088(PTR_DAT_06db7ee0);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar1,uVar2);
  }
  if (*(int *)(*(long *)PTR_DAT_06e53b50 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar1 = FUN_04393868();
  lVar3 = *(long *)(param_2 + 0x50);
  if (lVar3 != 0) {
    do {
      lVar3 = FUN_018752a4(lVar3,0);
      if (lVar3 == 0) {
        return;
      }
      if (*(long *)(lVar3 + 0x18) == 0) break;
      if (1 < *(byte *)(*(long *)(lVar3 + 0x18) + 0x3d) - 0x31) {
        FUN_01bc2578(param_2,uVar1,lVar3,unaff_w21 & 1);
      }
      lVar3 = *(long *)(param_2 + 0x50);
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


