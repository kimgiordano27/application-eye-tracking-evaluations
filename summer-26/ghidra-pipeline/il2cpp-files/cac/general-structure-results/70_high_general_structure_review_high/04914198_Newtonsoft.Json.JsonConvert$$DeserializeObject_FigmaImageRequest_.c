/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<FigmaImageRequest>
ENTRY_POINT: 04914198
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_JsonConvert__DeserializeObject<FigmaImageRequest>
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_3 + 0x38);
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 04914188 with catch @ 049141ac
                        */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 04914170 with catch @ 049141b0
                        */
  if (plVar3 == (long *)0x0) {
    FUN_03f4b2bc(param_3);
    plVar3 = *(long **)(param_3 + 0x38);
  }
                    /* try { // try from 049141cc to 04a141cf has its CatchHandler @ 049141e8 */
                    /* try { // try from 049141d0 to 04a141eb has its CatchHandler @ 0491410c */
  if ((*(ushort *)(*plVar3 + 0x135) & 1) == 0) {
    FUN_03f4b260();
  }
  lVar1 = thunk_FUN_03f4e68c();
                    /* catch() { ... } // from try @ 049141cc with catch @ 049141e8 */
  FUN_059cc514(lVar1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
                    /* try { // try from 049141ec to 04a141f3 has its CatchHandler @ 049141fc */
  if (lVar1 != 0) {
                    /* try { // try from 049141f4 to 04a141ff has its CatchHandler @ 0491410c */
    *(undefined8 *)(lVar1 + 0x10) = param_2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 049141ec with catch @ 049141fc
                        */
    thunk_FUN_03f86000((undefined8 *)(lVar1 + 0x10),param_2);
    *(undefined8 *)(lVar1 + 0x18) = param_1;
    thunk_FUN_03f86000((undefined8 *)(lVar1 + 0x18),param_1);
    if ((*(ushort *)(*(long *)(*(long *)(param_3 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_03f4b260();
    }
    uVar2 = thunk_FUN_03f4e68c();
    System_Collections_Generic_HashSet<PropertyPath>__Remove
              (uVar2,lVar1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20),
               *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x30));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


