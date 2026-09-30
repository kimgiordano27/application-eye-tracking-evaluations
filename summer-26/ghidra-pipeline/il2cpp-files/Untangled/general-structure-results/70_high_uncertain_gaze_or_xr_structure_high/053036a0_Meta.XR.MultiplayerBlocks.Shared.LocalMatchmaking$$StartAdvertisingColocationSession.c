/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartAdvertisingColocationSession
ENTRY_POINT: 053036a0
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartAdvertisingColocationSession
               (undefined8 param_1,undefined1 param_2 [16])

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  
  puVar1 = PTR_DAT_06d3e530;
  uStack0000000000000048 = param_2._8_8_;
                    /* try { // try from 053036a0 to 054036ab has its CatchHandler @ 053036e8 */
  uStack0000000000000040 = param_2._0_8_;
                    /* try { // try from 053036ac to 05403707 has its CatchHandler @ 05303604 */
  uStack0000000000000030 = param_1;
  while (uVar2 = FUN_04de5764(&stack0x00000030,*(undefined8 *)puVar1), (uVar2 & 1) != 0) {
    in_stack_00000028 = uStack0000000000000048;
    in_stack_00000020 = uStack0000000000000040;
    uVar2 = FUN_0692d89c(&stack0x00000020,0);
    if ((uVar2 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000028;
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000020;
      *(undefined1 *)(unaff_x19 + 0x30) = 1;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 053036a0 with catch @ 053036e8
                        */
    }
  }
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05303684 with catch @ 053036ec
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05303668 with catch @ 053036f0
                        */
  FUN_04de5760(&stack0x00000030,*(undefined8 *)PTR_DAT_06d3e528);
  return;
}


