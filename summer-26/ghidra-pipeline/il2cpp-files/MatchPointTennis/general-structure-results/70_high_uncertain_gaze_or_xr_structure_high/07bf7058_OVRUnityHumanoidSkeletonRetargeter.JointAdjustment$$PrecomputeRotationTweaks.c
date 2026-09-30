/*
FUNCTION_NAME: OVRUnityHumanoidSkeletonRetargeter.JointAdjustment$$PrecomputeRotationTweaks
ENTRY_POINT: 07bf7058
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRUnityHumanoidSkeletonRetargeter_JointAdjustment__PrecomputeRotationTweaks(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f4e748);
                    /* try { // try from 07bf7070 to 07cf7073 has its CatchHandler @ 07bf7364 */
  FUN_04447ba8(PTR_DAT_09f4e7d0);
  *(undefined1 *)(unaff_x23 + 0x281) = 1;
                    /* try { // try from 07bf7080 to 07cf708f has its CatchHandler @ 07bf73c0 */
  uVar1 = thunk_FUN_0448520c(*unaff_x28);
  OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(uVar1,0);
                    /* try { // try from 07bf7094 to 07cf709f has its CatchHandler @ 07bf739c */
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x10),uVar1);
                    /* try { // try from 07bf70a4 to 07cf70af has its CatchHandler @ 07bf7398 */
  uVar1 = thunk_FUN_0448520c(*unaff_x27);
  FUN_05aea430(uVar1,*unaff_x26);
                    /* try { // try from 07bf70b4 to 07cf70bf has its CatchHandler @ 07bf73cc */
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x28),uVar1);
  *(undefined8 *)(unaff_x19 + 0x30) = 0xa0000000a;
  uVar1 = thunk_FUN_0448520c(*unaff_x25);
  FUN_05b03fc8(uVar1,*unaff_x24);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x40),uVar1);
  FUN_07a80df4();
                    /* try { // try from 07bf70fc to 07cf70ff has its CatchHandler @ 07bf7368 */
                    /* try { // try from 07bf7100 to 07cf7113 has its CatchHandler @ 07bf73c4 */
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x22;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18));
  *(undefined4 *)(unaff_x19 + 0x20) = unaff_w21;
  *(undefined4 *)(unaff_x19 + 0x38) = unaff_w20;
                    /* try { // try from 07bf7118 to 07cf7123 has its CatchHandler @ 07bf73a8 */
                    /* try { // try from 07bf7128 to 07cf7133 has its CatchHandler @ 07bf73a4 */
  uVar1 = NEON_smax(*(undefined8 *)(unaff_x19 + 0x30),0x100000001,4);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
                    /* try { // try from 07bf7138 to 07cf7143 has its CatchHandler @ 07bf73cc */
  return;
}


