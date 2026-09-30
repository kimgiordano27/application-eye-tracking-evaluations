/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<ColocationSessionEventHandler.SpaceSharingInfo>
ENTRY_POINT: 04fff534
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<ColocationSessionEventHandler_SpaceSharingInfo>
               (long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  void *unaff_x19;
  long unaff_x23;
  long unaff_x29;
  
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04fff528 with catch @ 04fff534
                       try { // try from 04fff534 to 050ff56b has its CatchHandler @ 04fff294 */
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *(uint *)(param_1[1] + 0xfc);
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04fff450 with catch @ 04fff540
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04fff4f4 with catch @ 04fff544
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04fff3a0 with catch @ 04fff550
                        */
  uVar3 = *puVar1;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04fff3dc with catch @ 04fff554
                        */
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000000 + -((ulong)uVar2 + 0xf & 0x1fffffff0);
  (*(code *)puVar1[2])(uVar3);
                    /* try { // try from 04fff56c to 050ff56f has its CatchHandler @ 04fff57c */
  memcpy(unaff_x19,&stack0x00000000 + -((ulong)uVar2 + 0xf & 0x1fffffff0),(ulong)uVar2);
                    /* catch() { ... } // from try @ 04fff56c with catch @ 04fff57c */
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


