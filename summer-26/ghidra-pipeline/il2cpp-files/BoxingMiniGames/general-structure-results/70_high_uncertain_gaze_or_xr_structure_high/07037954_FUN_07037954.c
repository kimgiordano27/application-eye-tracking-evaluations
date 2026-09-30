/*
FUNCTION_NAME: FUN_07037954
ENTRY_POINT: 07037954
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void FUN_07037954(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = OVRPlugin_UnityOpenXR_TypeInfo;
  puVar3 = OVRPlugin_TrackingConfidence_TypeInfo;
  puVar2 = Unity_Jobs_LowLevel_Unsafe_JobsUtility_TypeInfo;
  puVar1 = PTR_DAT_079ff478;
                    /* try { // try from 0703795c to 07137967 has its CatchHandler @ 07038034 */
  if ((DAT_07eebe0a & 1) == 0) {
                    /* try { // try from 0703798c to 07137997 has its CatchHandler @ 07038014 */
    FUN_03642964(PTR_DAT_079ff478);
    FUN_03642964(Unity_Jobs_LowLevel_Unsafe_JobsUtility_TypeInfo);
    FUN_03642964(OVRPlugin_UnityOpenXR_TypeInfo);
    FUN_03642964(OVRPlugin_TrackingConfidence_TypeInfo);
    DAT_07eebe0a = 1;
  }
  uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_06ea9e10(uVar5,*(undefined8 *)puVar3,0);
                    /* try { // try from 070379dc to 071379df has its CatchHandler @ 07037fd4 */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar5;
                    /* try { // try from 070379f4 to 071379ff has its CatchHandler @ 07038070 */
  thunk_FUN_036b7ad0(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar5);
  uVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_06ea9e10(uVar5,*(undefined8 *)puVar4,0);
                    /* try { // try from 07037a18 to 07137a23 has its CatchHandler @ 0703806c */
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar6 = uVar5;
  thunk_FUN_036b7ad0(puVar6,uVar5);
  return;
}


