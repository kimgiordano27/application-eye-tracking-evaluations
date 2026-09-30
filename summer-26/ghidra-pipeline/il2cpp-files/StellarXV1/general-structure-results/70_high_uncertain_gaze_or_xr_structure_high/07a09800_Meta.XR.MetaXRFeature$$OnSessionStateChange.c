/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 07a09800
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MetaXRFeature__OnSessionStateChange(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_x9;
  int *in_x10;
  undefined4 *unaff_x19;
  undefined4 unaff_s8;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
LAB_07a09830:
                    /* try { // try from 07a09844 to 07b09847 has its CatchHandler @ 07a09d98 */
      uVar2 = (*(code *)*puVar1)(unaff_s8);
      if ((uVar2 & 1) != 0) {
        uVar2 = FUN_07a098c8(0);
        if ((uVar2 & 1) != 0) {
                    /* try { // try from 07a09874 to 07b09877 has its CatchHandler @ 07a09e44 */
                    /* try { // try from 07a09878 to 07b0987f has its CatchHandler @ 07a09dcc */
                    /* try { // try from 07a09894 to 07b0989f has its CatchHandler @ 07a09e04 */
          uVar3 = FUN_0797bcb4(*unaff_x19,unaff_x19[1],unaff_x19[2],uStack0000000000000010,
                               uStack0000000000000014,in_stack_00000018,DAT_01aecd50,0);
          return uVar3;
        }
      }
      return 0;
    }
                    /* try { // try from 07a09804 to 07b0980f has its CatchHandler @ 07a09e00 */
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_040b1e00();
      goto LAB_07a09830;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


