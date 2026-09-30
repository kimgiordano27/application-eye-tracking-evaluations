/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$Invoke
ENTRY_POINT: 06a85670
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x06a85724) */
/* WARNING: Removing unreachable block (ram,0x06a8573c) */
/* WARNING: Removing unreachable block (ram,0x06a85744) */
/* WARNING: Removing unreachable block (ram,0x06a857dc) */
/* WARNING: Removing unreachable block (ram,0x06a85750) */
/* WARNING: Removing unreachable block (ram,0x06a8576c) */
/* WARNING: Removing unreachable block (ram,0x06a85788) */
/* WARNING: Removing unreachable block (ram,0x06a857a0) */
/* WARNING: Removing unreachable block (ram,0x06a857a4) */

undefined4 OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__Invoke(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cca30,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x2b) = unaff_w22;
  if (unaff_w19 == 0) {
    return 0;
  }
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_083cca30) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xd) * 0x10 + 0x138);
          goto LAB_06a856f4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06a856f4:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (*(int *)(DAT_083cbfd0 + 0xe0) == 0) {
      FUN_033b9870();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


