/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$remove_FlushStarted
ENTRY_POINT: 08df4be8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Analytics_Internal_Dispatcher__remove_FlushStarted(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long unaff_x19;
  int unaff_w20;
  
  if (unaff_w20 < 0) {
    unaff_w20 = unaff_w20 + 1;
  }
                    /* try { // try from 08df4bf4 to 08ef4bff has its CatchHandler @ 08df4c84 */
  iVar4 = *(int *)(param_1 + 0x18);
  iVar2 = unaff_w20 >> 1;
  if (unaff_w20 >> 1 <= iVar4) {
    iVar2 = iVar4;
  }
                    /* try { // try from 08df4c00 to 08ef4c4f has its CatchHandler @ 08df4718 */
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar1 = iVar2 + 1;
  }
  iVar3 = iVar1 >> 1;
  if (iVar1 >> 1 <= iVar4) {
    iVar3 = iVar4;
  }
  *(int *)(unaff_x19 + 0xa4) = iVar3;
  *(int *)(unaff_x19 + 0xa8) = iVar2;
  uVar5 = *(undefined4 *)(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x19 + 0x20) = 9;
  *(undefined4 *)(unaff_x19 + 0x24) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x20) = DAT_01c73ee0;
  *(undefined8 *)(unaff_x19 + 0x20) = DAT_01c73df8;
  *(undefined8 *)(unaff_x19 + 0x20) = DAT_01c740b8;
                    /* try { // try from 08df4c50 to 08ef4c53 has its CatchHandler @ 08df4cb0 */
  return;
}


