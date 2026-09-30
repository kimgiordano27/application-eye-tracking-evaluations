/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MatcherErrors.RoomServerOptionsInvalidData>
ENTRY_POINT: 044b8160
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonConvert__DeserializeObject<MatcherErrors_RoomServerOptionsInvalidData>
          (long param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
                    /* try { // try from 044b8168 to 045b8177 has its CatchHandler @ 044b81a4 */
  FUN_048b9fa8(param_2,*(undefined8 *)(param_1 + 8));
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x10) = unaff_x21;
    thunk_FUN_03afed3c();
                    /* try { // try from 044b8180 to 045b818b has its CatchHandler @ 044b81b4 */
    *(undefined8 *)(param_2 + 0x18) = unaff_x20;
                    /* try { // try from 044b818c to 045b81d7 has its CatchHandler @ 044b8014 */
    thunk_FUN_03afed3c();
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8168 with catch @ 044b81a4
                        */
      FUN_03ac4090();
    }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8158 with catch @ 044b81a8
                        */
    uVar1 = thunk_FUN_03ac74bc();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8128 with catch @ 044b81ac
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b80a4 with catch @ 044b81b0
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8180 with catch @ 044b81b4
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b80c4 with catch @ 044b81b8
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8050 with catch @ 044b81bc
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b806c with catch @ 044b81c0
                       catch(type#1 @ 07fde6e8) { ... } // from try @ 044b80f0 with catch @ 044b81c0
                        */
    FUN_0495f3e0(uVar1,param_2,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 044b81d8 to 045b81ef has its CatchHandler @ 044b8248 */
  FUN_03a8a9c0();
}


