/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers$$Deserialize
ENTRY_POINT: 06dfb67c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SerializationHelpers__Deserialize
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  undefined4 uStack0000000000000004;
  
  FUN_06f75240(*param_1,param_3,param_4,0);
  FUN_06f84868();
  uStack0000000000000004 = *(undefined4 *)(unaff_x19 + 0x78);
                    /* try { // try from 06dfb6ac to 06efb6b7 has its CatchHandler @ 06dfb984 */
  uVar1 = thunk_FUN_03cf4e64(*unaff_x22,&stack0x00000004);
                    /* try { // try from 06dfb6c8 to 06efb6d3 has its CatchHandler @ 06dfb980 */
  FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e922d0,uVar1,0);
  FUN_06f84868();
                    /* try { // try from 06dfb6e0 to 06efb6eb has its CatchHandler @ 06dfb908 */
  uVar1 = thunk_FUN_03cf4e64(*unaff_x22);
                    /* try { // try from 06dfb704 to 06efb723 has its CatchHandler @ 06dfb990 */
  FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e922b8,uVar1,0);
  FUN_06f84868();
                    /* try { // try from 06dfb730 to 06efb74f has its CatchHandler @ 06dfb98c */
  (**(code **)(*unaff_x20 + 0x168))();
  return;
}


