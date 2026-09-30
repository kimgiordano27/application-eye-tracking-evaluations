/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$AddReference
ENTRY_POINT: 05abf440
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
                    /* catch() { ... } // from try @ 05abf214 with catch @ 05abf440 */
                    /* try { // try from 05abf450 to 05bbf453 has its CatchHandler @ 05abf508 */
  if ((DAT_07397080 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f9b3c0);
                    /* try { // try from 05abf46c to 05bbf4d3 has its CatchHandler @ 05abf53c */
    FUN_02fe925c(PTR_DAT_06f6dbb8);
    FUN_02fe925c(PTR_DAT_06f6df38);
    DAT_07397080 = 1;
  }
  FUN_05b32c00(param_1,0);
  puVar3 = PTR_DAT_06f9b3c0;
  puVar2 = PTR_DAT_06f6df38;
  puVar1 = PTR_DAT_06f6dbb8;
  if (-1 < param_2) {
    uVar4 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,param_2);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    thunk_FUN_03048534();
    uVar4 = FUN_02fe9340(*(undefined8 *)puVar2,param_2);
                    /* try { // try from 05abf4d4 to 05bbf4ef has its CatchHandler @ 05abf034 */
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_03048534();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 05abf4f0 to 05bbf4f3 has its CatchHandler @ 05abf510 */
      thunk_FUN_02fdcff0();
    }
    uVar4 = FUN_05aa33a0(0);
                    /* try { // try from 05abf500 to 05bbf527 has its CatchHandler @ 05abf53c */
                    /* catch() { ... } // from try @ 05abf450 with catch @ 05abf508 */
    uVar5 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 05abf4f0 with catch @ 05abf510 */
    FUN_05abb3d8(uVar5,uVar4);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
                    /* try { // try from 05abf528 to 05bbf533 has its CatchHandler @ 05abf034 */
    thunk_FUN_03048534((undefined8 *)(param_1 + 0x28),uVar5);
    return;
  }
                    /* try { // try from 05abf534 to 05bbf53b has its CatchHandler @ 05abf53c */
                    /* catch() { ... } // from try @ 05abf46c with catch @ 05abf53c
                       catch() { ... } // from try @ 05abf500 with catch @ 05abf53c
                       catch() { ... } // from try @ 05abf534 with catch @ 05abf53c */
  thunk_FUN_03037804(PTR_DAT_06f7a510);
  uVar4 = thunk_FUN_0301080c();
  uVar5 = thunk_FUN_03037804(PTR_DAT_06fac718);
  uVar6 = thunk_FUN_03037804(PTR_DAT_06f98f48);
  FUN_05a61b10(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_03037804(PTR_DAT_06fac720);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar4,uVar5);
}


