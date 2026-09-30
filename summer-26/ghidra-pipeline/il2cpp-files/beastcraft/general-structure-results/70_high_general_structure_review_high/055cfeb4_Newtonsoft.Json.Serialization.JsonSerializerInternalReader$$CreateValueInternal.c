/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateValueInternal
ENTRY_POINT: 055cfeb4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal(void)

{
  long *plVar1;
  undefined8 *puVar2;
  uint unaff_w21;
  long unaff_x26;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x29;
  
  puVar2 = *(undefined8 **)(*unaff_x29 + 0xb8);
  lVar3 = puVar2[3];
  if (lVar3 == 0) {
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar2 = *(undefined8 **)(*unaff_x29 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a83200);
                    /* catch() { ... } // from try @ 055cff1c with catch @ 055cfef8
                       catch() { ... } // from try @ 055cff54 with catch @ 055cfef8
                       catch() { ... } // from try @ 055cff7c with catch @ 055cfef8 */
    FUN_05281854(lVar3,uVar4,*(undefined8 *)PTR_DAT_06a83210,0);
                    /* try { // try from 055cff14 to 056cff1b has its CatchHandler @ 055cff34 */
                    /* try { // try from 055cff1c to 056cff4f has its CatchHandler @ 055cfef8 */
    plVar1 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x18);
    *plVar1 = lVar3;
    thunk_FUN_02ee2be8(plVar1,lVar3);
  }
  uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a83208);
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 055cff14 with catch @ 055cff34
                        */
                    /* try { // try from 055cff50 to 056cff53 has its CatchHandler @ 055cff70 */
                    /* try { // try from 055cff54 to 056cff73 has its CatchHandler @ 055cfef8 */
  FUN_055cffcc(uVar4,1,unaff_w21 & 1,lVar3);
  if (unaff_x26 == 0) {
                    /* try { // try from 055cff7c to 056cff87 has its CatchHandler @ 055cfef8 */
    FUN_055d02d8();
  }
  else {
                    /* catch() { ... } // from try @ 055cff50 with catch @ 055cff70 */
    FUN_055d0150();
                    /* try { // try from 055cff74 to 056cff7b has its CatchHandler @ 055cff84 */
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 055cff74 with catch @ 055cff84
                        */
  return uVar4;
}


