/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$MoveNext
ENTRY_POINT: 04426fb8
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__MoveNext
               (long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04427008 with catch @ 0442705c
                        */
    FUN_0160eeb4();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_015c2790(lVar2);
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* try { // try from 04427008 to 04527013 has its CatchHandler @ 0442705c */
      if (*(long *)(piVar5 + -2) == lVar2) {
                    /* try { // try from 0442703c to 04527043 has its CatchHandler @ 04427054 */
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_04427040;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 04427024 to 0452702f has its CatchHandler @ 04427058 */
  puVar1 = (undefined8 *)FUN_015c2a80(plVar6,lVar2,2);
LAB_04427040:
                    /* try { // try from 04427048 to 0452704b has its CatchHandler @ 04427050 */
                    /* try { // try from 0442704c to 04527073 has its CatchHandler @ 04426f70 */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04427048 with catch @ 04427050
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0442703c with catch @ 04427054
                        */
                    /* WARNING: Could not recover jumptable at 0x04427058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04427024 with catch @ 04427058
                        */
  (*(code *)*puVar1)(plVar6,param_2,param_3,puVar1[1]);
  return;
}


