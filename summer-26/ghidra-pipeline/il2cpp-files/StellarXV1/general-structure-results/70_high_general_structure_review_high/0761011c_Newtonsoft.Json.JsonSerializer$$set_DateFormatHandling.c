/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateFormatHandling
ENTRY_POINT: 0761011c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializer__set_DateFormatHandling(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x22;
  
  lVar3 = *param_1;
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07610104 with catch @ 07610124
                       try { // try from 07610124 to 0771013b has its CatchHandler @ 0761009c */
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* try { // try from 0761013c to 07710153 has its CatchHandler @ 07610188 */
      if (*(long *)(piVar5 + -2) == *unaff_x22) {
                    /* catch() { ... } // from try @ 0761013c with catch @ 07610188
                       catch() { ... } // from try @ 07610178 with catch @ 07610188 */
                    /* try { // try from 0761018c to 0771018f has its CatchHandler @ 07610198 */
                    /* try { // try from 07610190 to 0771019b has its CatchHandler @ 0761009c */
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_07610194;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 07610154 to 07710177 has its CatchHandler @ 0761009c */
  puVar2 = (undefined8 *)FUN_040b1e00(param_1,*unaff_x22,0);
LAB_07610194:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0761018c with catch @ 07610198
                        */
  iVar1 = (*(code *)*puVar2)(param_1);
  return -iVar1;
}


