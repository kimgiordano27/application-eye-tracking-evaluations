/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Allocate
ENTRY_POINT: 05544e48
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Allocate(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int in_w8;
  long unaff_x20;
  void *unaff_x21;
  undefined8 *unaff_x23;
  size_t unaff_x24;
  long unaff_x26;
  undefined8 *unaff_x27;
  long lVar4;
  long unaff_x29;
  
  if (in_w8 == 0) {
    thunk_FUN_03cd7500();
  }
  lVar1 = FUN_08484e48(*unaff_x27,0);
  lVar4 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 05544e68 to 05644e6f has its CatchHandler @ 05544f14 */
                    /* try { // try from 05544e70 to 05644eeb has its CatchHandler @ 05544c44 */
  if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x70) + 0x28)) {
    unaff_x21 = (void *)(unaff_x29 + -0x18);
  }
  memcpy(unaff_x23,unaff_x21,unaff_x24);
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar4 + 0xc0);
    puVar3 = *(undefined8 **)(lVar4 + 0xb0);
    uVar2 = *puVar3;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x70) + 0x28)) {
      unaff_x23 = (undefined8 *)*unaff_x23;
    }
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x23;
    (*(code *)puVar3[2])(uVar2,puVar3,lVar1,unaff_x29 + -0x10,unaff_x23);
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    lVar1 = *(long *)(lVar4 + 0x70);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03cf1244(lVar1);
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    }
    FUN_03c90414(lVar1,*(undefined8 *)(lVar4 + 0xb8));
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0))();
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


