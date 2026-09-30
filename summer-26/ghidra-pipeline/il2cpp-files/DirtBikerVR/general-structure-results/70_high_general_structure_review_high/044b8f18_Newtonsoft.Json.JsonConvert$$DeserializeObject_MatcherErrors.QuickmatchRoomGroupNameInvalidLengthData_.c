/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MatcherErrors.QuickmatchRoomGroupNameInvalidLengthData>
ENTRY_POINT: 044b8f18
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
Newtonsoft_Json_JsonConvert__DeserializeObject<MatcherErrors_QuickmatchRoomGroupNameInvalidLengthData>
          (ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
                    /* try { // try from 044b8f18 to 045b8f27 has its CatchHandler @ 044b8f54 */
  if ((param_1 & 1) == 0) {
    FUN_03ac4090();
  }
  lVar1 = thunk_FUN_03ac74bc();
                    /* try { // try from 044b8f30 to 045b8f3b has its CatchHandler @ 044b8f64 */
  FUN_048ba534(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (lVar1 != 0) {
                    /* try { // try from 044b8f3c to 045b8f87 has its CatchHandler @ 044b8dc4 */
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8f18 with catch @ 044b8f54
                        */
    thunk_FUN_03afed3c();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8f08 with catch @ 044b8f58
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8ed8 with catch @ 044b8f5c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8e54 with catch @ 044b8f60
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8f30 with catch @ 044b8f64
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8e74 with catch @ 044b8f68
                        */
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8e00 with catch @ 044b8f6c
                        */
      FUN_03ac4090();
    }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8e1c with catch @ 044b8f70
                       catch(type#1 @ 07fde6e8) { ... } // from try @ 044b8ea0 with catch @ 044b8f70
                        */
    uVar2 = thunk_FUN_03ac74bc();
                    /* try { // try from 044b8f88 to 045b8f9f has its CatchHandler @ 044b8ff8 */
    FUN_049602a4(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 044b8fa0 to 045b8fe7 has its CatchHandler @ 044b8dc4 */
  FUN_03a8a9c0();
}


