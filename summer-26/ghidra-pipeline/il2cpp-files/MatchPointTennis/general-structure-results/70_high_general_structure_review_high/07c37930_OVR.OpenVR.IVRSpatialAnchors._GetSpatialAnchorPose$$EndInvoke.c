/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 07c37930
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *piVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  undefined8 unaff_x22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined4 in_stack_00000030;
  long in_stack_00000038;
  
  do {
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
                    /* catch() { ... } // from try @ 07c37870 with catch @ 07c37934
                       catch() { ... } // from try @ 07c37924 with catch @ 07c37934 */
                    /* try { // try from 07c37938 to 07d3793b has its CatchHandler @ 07c37944 */
    if (uVar2 != 0) {
                    /* try { // try from 07c3793c to 07d37947 has its CatchHandler @ 07c37568 */
      piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07c37938 with catch @ 07c37944
                        */
        if (*(long *)(piVar3 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(param_1 + (long)(*piVar3 + 1) * 0x10 + 0x138);
          goto LAB_07c3797c;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac(unaff_x20,*unaff_x26,1);
LAB_07c3797c:
    uVar2 = (*(code *)*puVar1)(unaff_x20,unaff_w21,unaff_w24,unaff_w23,unaff_x22,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x50) = 0;
      FUN_051cbce0(&stack0x00000020,*(undefined8 *)PTR_DAT_09f4f978);
      return 0;
    }
    uVar2 = FUN_051cbce4(&stack0x00000020,*unaff_x25);
    if ((uVar2 & 1) == 0) {
      FUN_051cbce0(&stack0x00000020,*(undefined8 *)PTR_DAT_09f4f978);
      if (*(char *)(unaff_x19 + 0x50) == '\0') {
        FUN_07c1d5b4(0x48506f7365446574,0);
      }
      *(undefined1 *)(unaff_x19 + 0x50) = 1;
      return 1;
    }
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    unaff_x20 = *(long **)(unaff_x19 + 0x38);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    param_1 = *unaff_x20;
    unaff_w23 = *(undefined4 *)(in_stack_00000038 + 0x10);
    unaff_w24 = *(undefined4 *)(in_stack_00000038 + 0x14);
    unaff_x22 = *(undefined8 *)(in_stack_00000038 + 0x18);
    unaff_w21 = in_stack_00000030;
  } while( true );
}


