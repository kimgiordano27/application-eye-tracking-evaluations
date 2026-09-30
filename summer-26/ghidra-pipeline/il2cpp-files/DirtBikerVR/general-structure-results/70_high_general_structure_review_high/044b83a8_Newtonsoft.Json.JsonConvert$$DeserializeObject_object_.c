/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 044b83a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__DeserializeObject<object>(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
                    /* try { // try from 044b83b0 to 045b83bf has its CatchHandler @ 044b83ec */
  FUN_048ba080(param_1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = unaff_x21;
                    /* try { // try from 044b83c8 to 045b83d3 has its CatchHandler @ 044b83fc */
    thunk_FUN_03afed3c();
                    /* try { // try from 044b83d4 to 045b841f has its CatchHandler @ 044b825c */
    *(undefined8 *)(param_1 + 0x18) = unaff_x20;
    thunk_FUN_03afed3c();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b83b0 with catch @ 044b83ec
                        */
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b83a0 with catch @ 044b83f0
                        */
      FUN_03ac4090();
    }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8370 with catch @ 044b83f4
                        */
    uVar1 = thunk_FUN_03ac74bc();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b82ec with catch @ 044b83f8
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b83c8 with catch @ 044b83fc
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b830c with catch @ 044b8400
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8298 with catch @ 044b8404
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b82b4 with catch @ 044b8408
                       catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8338 with catch @ 044b8408
                        */
    FUN_0495f818(uVar1,param_1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
                    /* try { // try from 044b8420 to 045b8437 has its CatchHandler @ 044b8490 */
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


