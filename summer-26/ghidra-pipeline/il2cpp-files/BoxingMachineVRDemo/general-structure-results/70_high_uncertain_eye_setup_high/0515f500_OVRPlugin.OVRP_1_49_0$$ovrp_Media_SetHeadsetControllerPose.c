/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 0515f500
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_02d6084c(PTR_DAT_06782398);
  FUN_02d6084c(PTR_DAT_067823d8);
  FUN_02d6084c(PTR_DAT_067823a0);
  FUN_02d6084c(PTR_DAT_067823e0);
  FUN_02d6084c(PTR_DAT_067823a8);
  FUN_02d6084c(PTR_DAT_067823e8);
  FUN_02d6084c(PTR_DAT_06782390);
  *(undefined1 *)(unaff_x20 + 0xe3f) = 1;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* try { // try from 0515f568 to 0525f56f has its CatchHandler @ 0515f634 */
  iVar2 = (**(code **)(*unaff_x19 + 0x1d8))();
  if (iVar2 == 0x11) {
    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782398);
    bVar1 = *(byte *)(*(long *)PTR_DAT_067823d8 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067823d8)
       ) {
LAB_0515f6c0:
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
    FUN_0515e8bc();
  }
  else if (iVar2 == 10) {
    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067823a0);
    bVar1 = *(byte *)(*(long *)PTR_DAT_067823e0 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067823e0)
       ) goto LAB_0515f6c0;
    FUN_0515e99c();
  }
  else if (iVar2 == 1) {
    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067823a8);
                    /* try { // try from 0515f5ac to 0525f5db has its CatchHandler @ 0515f638 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_067823e8 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067823e8)
       ) goto LAB_0515f6c0;
    FUN_0515eafc();
  }
  else {
    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782390);
    FUN_0504920c(lVar3,0);
    *(long **)(lVar3 + 0x10) = unaff_x19;
    thunk_FUN_02dd37b4();
  }
  return lVar3;
}


