/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MatcherErrors.ApplicationEntitlementData>
ENTRY_POINT: 044b8820
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
Newtonsoft_Json_JsonConvert__DeserializeObject<MatcherErrors_ApplicationEntitlementData>(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  FUN_03ac40ec();
                    /* try { // try from 044b8830 to 045b883b has its CatchHandler @ 044b8880 */
  if ((*(ushort *)(**(long **)(unaff_x19 + 0x38) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  lVar1 = thunk_FUN_03ac74bc();
                    /* try { // try from 044b8840 to 045b884f has its CatchHandler @ 044b887c */
  FUN_048ba258(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (lVar1 != 0) {
                    /* try { // try from 044b8858 to 045b8863 has its CatchHandler @ 044b888c */
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
    thunk_FUN_03afed3c();
                    /* try { // try from 044b8864 to 045b88af has its CatchHandler @ 044b86ec */
    *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
    thunk_FUN_03afed3c();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8840 with catch @ 044b887c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8830 with catch @ 044b8880
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8800 with catch @ 044b8884
                        */
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b877c with catch @ 044b8888
                        */
      FUN_03ac4090();
    }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8858 with catch @ 044b888c
                        */
    uVar2 = thunk_FUN_03ac74bc();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b879c with catch @ 044b8890
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8728 with catch @ 044b8894
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8744 with catch @ 044b8898
                       catch(type#1 @ 07fde6e8) { ... } // from try @ 044b87c8 with catch @ 044b8898
                        */
    FUN_0495fa34(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
                    /* try { // try from 044b88b0 to 045b88c7 has its CatchHandler @ 044b8920 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


