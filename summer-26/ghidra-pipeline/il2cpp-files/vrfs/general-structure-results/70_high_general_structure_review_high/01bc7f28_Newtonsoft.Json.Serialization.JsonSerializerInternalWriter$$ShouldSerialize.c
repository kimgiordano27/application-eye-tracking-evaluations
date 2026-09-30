/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize
ENTRY_POINT: 01bc7f28
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize
               (undefined1 param_1 [16],undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  
                    /* try { // try from 01bc7f34 to 01cc7f37 has its CatchHandler @ 01bc7f60 */
  FUN_04f19338(param_1._0_4_,param_2,param_1._0_8_,0);
                    /* try { // try from 01bc7f38 to 01cc7f6f has its CatchHandler @ 01bc7d84 */
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    Fusion_CloudServices_<Join>d__84__SetStateMachine(*(long *)(unaff_x19 + 0x50),0);
    FUN_04f18f38(0);
                    /* catch() { ... } // from try @ 01bc7f34 with catch @ 01bc7f60 */
                    /* try { // try from 01bc7f70 to 01cc7f77 has its CatchHandler @ 01bc7f8c */
                    /* try { // try from 01bc7f78 to 01cc7f83 has its CatchHandler @ 01bc7d84 */
    FUN_04f19338(0);
                    /* try { // try from 01bc7f84 to 01cc7f8b has its CatchHandler @ 01bc7f8c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01bc7f70 with catch @ 01bc7f8c
                       catch(type#2 @ 00000000) { ... } // from try @ 01bc7f84 with catch @ 01bc7f8c
                        */
    if ((*(long *)(unaff_x19 + 0x50) != 0) &&
       (lVar1 = FUN_051e5130(*(long *)(unaff_x19 + 0x50),0), lVar1 != 0)) {
      Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar1,0);
      FUN_04f18f38(0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


