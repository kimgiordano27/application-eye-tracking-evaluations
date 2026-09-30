/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<Room.PingClustersResponse>
ENTRY_POINT: 044b9614
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


undefined8 Newtonsoft_Json_JsonConvert__DeserializeObject<Room_PingClustersResponse>(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
                    /* try { // try from 044b9614 to 045b965f has its CatchHandler @ 044b949c */
  FUN_048ba8c8();
  if (unaff_x22 != 0) {
    *(undefined8 *)(unaff_x22 + 0x10) = unaff_x21;
    thunk_FUN_03afed3c();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b95f0 with catch @ 044b962c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b95e0 with catch @ 044b9630
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b95b0 with catch @ 044b9634
                        */
    *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b952c with catch @ 044b9638
                        */
    thunk_FUN_03afed3c();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b9608 with catch @ 044b963c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b954c with catch @ 044b9640
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b94d8 with catch @ 044b9644
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 044b94f4 with catch @ 044b9648
                       catch(type#1 @ 07fde6e8) { ... } // from try @ 044b9578 with catch @ 044b9648
                        */
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar1 = thunk_FUN_03ac74bc();
                    /* try { // try from 044b9660 to 045b9677 has its CatchHandler @ 044b96d0 */
    FUN_04960e38();
                    /* try { // try from 044b9678 to 045b96bf has its CatchHandler @ 044b949c */
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


