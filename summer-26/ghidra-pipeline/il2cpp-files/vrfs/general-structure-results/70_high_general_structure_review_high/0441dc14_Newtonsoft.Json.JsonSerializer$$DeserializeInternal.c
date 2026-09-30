/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$DeserializeInternal
ENTRY_POINT: 0441dc14
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__DeserializeInternal(void)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x3;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x21;
  
  lVar2 = *(long *)(*(long *)(*(long *)(in_x3 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_015c2790(lVar2);
  }
  lVar3 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* try { // try from 0441dc50 to 0451dc5f has its CatchHandler @ 0441dc64 */
      if (*(long *)(piVar5 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_0441dc88;
      }
      uVar4 = uVar4 - 1;
                    /* try { // try from 0441dc60 to 0451dc67 has its CatchHandler @ 0441db08 */
      piVar5 = piVar5 + 4;
                    /* catch() { ... } // from try @ 0441dbd0 with catch @ 0441dc64
                       catch() { ... } // from try @ 0441dc50 with catch @ 0441dc64 */
    } while (uVar4 != 0);
  }
                    /* try { // try from 0441dc68 to 0451dc6b has its CatchHandler @ 0441dc74 */
                    /* try { // try from 0441dc6c to 0451dc77 has its CatchHandler @ 0441db08 */
  puVar1 = (undefined8 *)FUN_015c2a80();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0441dc68 with catch @ 0441dc74
                        */
LAB_0441dc88:
                    /* WARNING: Could not recover jumptable at 0x0441dca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


