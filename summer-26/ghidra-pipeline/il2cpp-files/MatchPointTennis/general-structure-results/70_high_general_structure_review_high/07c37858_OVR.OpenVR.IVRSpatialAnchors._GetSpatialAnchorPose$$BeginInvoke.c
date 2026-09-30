/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$BeginInvoke
ENTRY_POINT: 07c37858
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__BeginInvoke(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c376f0 with catch @ 07c37858
                        */
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f4f990);
                    /* try { // try from 07c37870 to 07d37887 has its CatchHandler @ 07c37934 */
  FUN_04447ba8(PTR_DAT_09f4f9a0);
  FUN_04447ba8(PTR_DAT_09f4f9a8);
                    /* try { // try from 07c37888 to 07d37923 has its CatchHandler @ 07c37568 */
  FUN_04447ba8(PTR_DAT_09f4eb50);
  FUN_04447ba8(PTR_DAT_09f4f998);
  FUN_04447ba8(PTR_DAT_09f4f9b0);
  *(undefined1 *)(unaff_x20 + 0x535) = 1;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uVar5 = FUN_09525150();
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x48);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(lVar6 + 0x18) != 0) {
      FUN_05e49d18(lVar6,*(undefined8 *)PTR_DAT_09f4f998);
      puVar4 = PTR_DAT_09f4f980;
      puVar3 = PTR_DAT_09f4eb50;
      in_stack_00000028 = in_stack_00000008;
      in_stack_00000020 = in_stack_00000000;
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      do {
        uVar7 = FUN_051cbce4(&stack0x00000020,*(undefined8 *)puVar4);
        uVar5 = in_stack_00000030;
        if ((uVar7 & 1) == 0) {
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
        plVar10 = *(long **)(unaff_x19 + 0x38);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar6 = *plVar10;
                    /* try { // try from 07c37924 to 07d37933 has its CatchHandler @ 07c37934 */
        uVar1 = *(undefined4 *)(in_stack_00000038 + 0x10);
        uVar2 = *(undefined4 *)(in_stack_00000038 + 0x14);
        uVar11 = *(undefined8 *)(in_stack_00000038 + 0x18);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_07c3797c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_044822ac(plVar10,*(long *)puVar3,1);
LAB_07c3797c:
        uVar5 = (*(code *)*puVar8)(plVar10,uVar5 & 0xffffffff,uVar2,uVar1,uVar11,puVar8[1]);
        if ((uVar5 & 1) == 0) {
          *(undefined1 *)(unaff_x19 + 0x50) = 0;
          FUN_051cbce0(&stack0x00000020,*(undefined8 *)PTR_DAT_09f4f978);
          return 0;
        }
      } while( true );
    }
  }
  *(undefined1 *)(unaff_x19 + 0x50) = 0;
  return 0;
}


