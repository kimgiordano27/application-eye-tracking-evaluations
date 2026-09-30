/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MatcherErrors.AppDisabledData>
ENTRY_POINT: 044b7cc4
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


undefined8
Newtonsoft_Json_JsonConvert__DeserializeObject<MatcherErrors_AppDisabledData>(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
                    /* try { // try from 044b7cc8 to 045b7cd3 has its CatchHandler @ 044b7d18 */
  FUN_048b9dcc(param_1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (param_1 != 0) {
                    /* try { // try from 044b7cd8 to 045b7ce7 has its CatchHandler @ 044b7d14 */
    *(undefined8 *)(param_1 + 0x10) = unaff_x21;
    thunk_FUN_03afed3c();
                    /* try { // try from 044b7cf0 to 045b7cfb has its CatchHandler @ 044b7d24 */
    *(undefined8 *)(param_1 + 0x18) = unaff_x20;
    thunk_FUN_03afed3c();
                    /* try { // try from 044b7cfc to 045b7d47 has its CatchHandler @ 044b7b84 */
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar1 = thunk_FUN_03ac74bc();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b7cd8 with catch @ 044b7d14
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b7cc8 with catch @ 044b7d18
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b7c98 with catch @ 044b7d1c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b7c14 with catch @ 044b7d20
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b7cf0 with catch @ 044b7d24
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b7c34 with catch @ 044b7d28
                        */
    FUN_0495e668(uVar1,param_1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


