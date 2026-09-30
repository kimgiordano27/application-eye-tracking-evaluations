/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 039a6c04
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined8 param_4,undefined1 *param_5)

{
  int iVar1;
  long lVar2;
  code *in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000018 = param_3._8_8_;
  uStack0000000000000010 = param_3._0_8_;
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  while( true ) {
    uStack0000000000000020 = param_1[4];
    uStack0000000000000030 = uStack0000000000000000;
    uStack0000000000000038 = uStack0000000000000008;
    uStack0000000000000040 = uStack0000000000000010;
    uStack0000000000000048 = uStack0000000000000018;
    uStack0000000000000050 = uStack0000000000000020;
                    /* try { // try from 039a6c18 to 03aa6c2b has its CatchHandler @ 039a6c38 */
    (*in_x9)(param_4,param_5,*(undefined8 *)(unaff_x20 + 0x28));
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x28;
                    /* try { // try from 039a6c2c to 03aa6c4f has its CatchHandler @ 039a6bd8 */
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)unaff_x22) break;
    iVar1 = *(int *)(unaff_x19 + 0x1c);
    if (unaff_w21 != iVar1) goto LAB_039a6c38;
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 == 0) {
LAB_039a6c5c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (unaff_x20 == 0) goto LAB_039a6c5c;
    param_1 = (undefined8 *)(lVar2 + unaff_x23);
    in_x9 = *(code **)(unaff_x20 + 0x18);
    param_4 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack0000000000000008 = param_1[1];
    uStack0000000000000000 = *param_1;
    uStack0000000000000018 = param_1[3];
    uStack0000000000000010 = param_1[2];
    param_5 = (undefined1 *)&stack0x00000030;
  }
  iVar1 = *(int *)(unaff_x19 + 0x1c);
LAB_039a6c38:
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 039a6c18 with catch @ 039a6c38
                        */
  if (unaff_w21 != iVar1) {
    FUN_04d9c6d8(0);
  }
                    /* try { // try from 039a6c50 to 03aa6c67 has its CatchHandler @ 039a6ca0 */
  return;
}


