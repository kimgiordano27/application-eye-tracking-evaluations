/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 06dd276c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>___ctor
               (undefined8 param_1,undefined1 param_2 [16],undefined8 param_3,undefined1 *param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  code *in_x9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  while( true ) {
    uStack0000000000000010 = param_1;
    uStack0000000000000020 = uStack0000000000000000;
    uStack0000000000000028 = uStack0000000000000008;
    uStack0000000000000030 = param_1;
    uVar2 = (*in_x9)(param_3,param_4,param_5);
                    /* try { // try from 06dd2780 to 06ed27fb has its CatchHandler @ 06dd2704 */
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x22 = unaff_x22 + -1;
    unaff_x23 = unaff_x23 + 0x18;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x22 == 0) {
      return 0xffffffff;
    }
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x20 == 0) break;
    puVar1 = (undefined8 *)(lVar3 + unaff_x23);
    in_x9 = *(code **)(unaff_x20 + 0x18);
    param_3 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack0000000000000008 = puVar1[1];
    uStack0000000000000000 = *puVar1;
    param_1 = puVar1[2];
    param_4 = (undefined1 *)&stack0x00000020;
    param_5 = *(undefined8 *)(unaff_x20 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


