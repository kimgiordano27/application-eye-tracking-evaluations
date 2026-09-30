/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 06dd27f4
PROGRAM: Hyper-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__Dispose(void)

{
  undefined1 in_NG;
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    if ((bool)in_NG) {
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
                    /* try { // try from 06dd27fc to 06ed282f has its CatchHandler @ 06dd2830 */
    if (lVar2 == 0) goto LAB_06dd28a0;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w22) {
LAB_06dd28a4:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x21 == 0) {
LAB_06dd28a0:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar4 = unaff_x23 & 0xffffffff;
    lVar2 = lVar2 + uVar4 * (unaff_x24 & 0xffffffff);
    in_stack_00000028 = *(undefined8 *)(lVar2 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar2 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar2 + 0x30);
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x21 + 0x28));
    unaff_x23 = unaff_x23 - 1;
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x10);
      if (lVar2 != 0) {
        if (unaff_w22 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + uVar4 * 0x18;
          uVar5 = *(undefined8 *)(lVar2 + 0x20);
          uVar3 = *(undefined8 *)(lVar2 + 0x30);
          unaff_x19[1] = *(undefined8 *)(lVar2 + 0x28);
          *unaff_x19 = uVar5;
          unaff_x19[2] = uVar3;
          return;
        }
        goto LAB_06dd28a4;
      }
      goto LAB_06dd28a0;
    }
    unaff_w22 = unaff_w22 - 1;
    in_NG = (int)unaff_w22 < 0;
  } while( true );
}


