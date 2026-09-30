/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 08e015e8
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeXNode(undefined8 param_1,long *param_2)

{
  byte bVar1;
  
  if ((DAT_0b32ebfb & 1) == 0) {
                    /* try { // try from 08e01604 to 08f01613 has its CatchHandler @ 08e01614 */
    FUN_04947ee4(PTR_DAT_0ac10af0);
    DAT_0b32ebfb = 1;
  }
  if (param_2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 08e015b8 with catch @ 08e01614
                       catch() { ... } // from try @ 08e01604 with catch @ 08e01614 */
                    /* try { // try from 08e01618 to 08f0161b has its CatchHandler @ 08e01624 */
                    /* try { // try from 08e0161c to 08f01627 has its CatchHandler @ 08e014e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 08e01618 with catch @ 08e01624
                        */
                    /* try { // try from 08e01628 to 08f016b3 has its CatchHandler @ 08e01628
                       catch() { ... } // from try @ 08e01628 with catch @ 08e01628
                       catch() { ... } // from try @ 08e016c4 with catch @ 08e01628
                       catch() { ... } // from try @ 08e01750 with catch @ 08e01628
                       catch() { ... } // from try @ 08e017b4 with catch @ 08e01628 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_0ac10af0 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0ac10af0))
    {
      FUN_08df8614(param_2,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494850c(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


