/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 06dd26d8
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>___ctor
               (undefined8 param_1,uint param_2,int param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint in_w8;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (in_w8 < param_2) {
    FUN_08d9dc40(0);
  }
  if ((param_3 < 0) || (*(int *)(unaff_x21 + 0x18) - param_3 < (int)unaff_w19)) {
                    /* try { // try from 06dd2704 to 06ed274f has its CatchHandler @ 06dd2704
                       catch() { ... } // from try @ 06dd2704 with catch @ 06dd2704
                       catch() { ... } // from try @ 06dd2780 with catch @ 06dd2704
                       catch() { ... } // from try @ 06dd2830 with catch @ 06dd2704
                       catch() { ... } // from try @ 06dd2860 with catch @ 06dd2704
                       catch() { ... } // from try @ 06dd28d4 with catch @ 06dd2704 */
    FUN_08d9dc6c(0);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_08d8ca5c(8,0);
  }
  if ((int)unaff_w19 < (int)(param_3 + unaff_w19)) {
    lVar4 = (long)(int)(param_3 + unaff_w19) - (long)(int)unaff_w19;
    lVar5 = (long)(int)unaff_w19 * 0x18 + 0x20;
    do {
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) {
LAB_06dd27b0:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      if (unaff_x20 == 0) goto LAB_06dd27b0;
                    /* try { // try from 06dd2750 to 06ed277f has its CatchHandler @ 06dd2830 */
      puVar1 = (undefined8 *)(lVar3 + lVar5);
      in_stack_00000028 = puVar1[1];
      in_stack_00000020 = *puVar1;
      in_stack_00000030 = puVar1[2];
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000020,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar2 & 1) != 0) {
        return unaff_w19;
      }
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + 0x18;
      unaff_w19 = unaff_w19 + 1;
    } while (lVar4 != 0);
  }
  return 0xffffffff;
}


