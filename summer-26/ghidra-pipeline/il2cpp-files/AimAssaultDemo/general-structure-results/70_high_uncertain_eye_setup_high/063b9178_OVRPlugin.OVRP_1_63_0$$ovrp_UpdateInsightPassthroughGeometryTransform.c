/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 063b9178
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_UpdateInsightPassthroughGeometryTransform(void)

{
  long unaff_x19;
  undefined4 uVar1;
  
                    /* try { // try from 063b9180 to 064b9187 has its CatchHandler @ 063b9188 */
  uVar1 = FUN_054d36c8();
  *(undefined4 *)(unaff_x19 + 0x40) = uVar1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063b9168 with catch @ 063b9188
                       catch(type#2 @ 00000000) { ... } // from try @ 063b9180 with catch @ 063b9188
                        */
  uVar1 = FUN_054d36c8(*(undefined4 *)(unaff_x19 + 0x24),*(undefined4 *)(unaff_x19 + 0x34));
  *(undefined4 *)(unaff_x19 + 0x44) = uVar1;
  uVar1 = FUN_054d36c8(*(undefined4 *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x19 + 0x38));
  *(undefined4 *)(unaff_x19 + 0x48) = uVar1;
  uVar1 = FUN_054d36c8(*(undefined4 *)(unaff_x19 + 0x2c),*(undefined4 *)(unaff_x19 + 0x3c));
  *(undefined4 *)(unaff_x19 + 0x4c) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(long *)(unaff_x19 + 0xc0) != 0) {
    FUN_07574c0c(*(undefined4 *)(unaff_x19 + 200),*(undefined4 *)(unaff_x19 + 0xcc),
                 *(undefined4 *)(unaff_x19 + 0xd0),*(undefined4 *)(unaff_x19 + 0xd4),
                 *(long *)(unaff_x19 + 0xc0),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


