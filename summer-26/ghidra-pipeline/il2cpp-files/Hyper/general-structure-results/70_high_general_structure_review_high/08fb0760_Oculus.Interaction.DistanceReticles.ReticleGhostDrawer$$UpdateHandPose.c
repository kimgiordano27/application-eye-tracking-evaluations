/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.ReticleGhostDrawer$$UpdateHandPose
ENTRY_POINT: 08fb0760
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_DistanceReticles_ReticleGhostDrawer__UpdateHandPose(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  long unaff_x21;
  uint uVar8;
  long lVar9;
  long in_stack_00000008;
  
  FUN_04947ee4();
  *(undefined1 *)(unaff_x21 + 0x93a) = 1;
  puVar1 = PTR_DAT_0ac09b30;
  in_stack_00000008 = 0;
  if (unaff_x19 == (long *)0x0) {
    thunk_FUN_049ae08c(PTR_DAT_0ac0ac50);
    uVar4 = thunk_FUN_04983f60();
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac749c0);
                    /* try { // try from 08fb0960 to 090b0983 has its CatchHandler @ 08fb13f4 */
    System_RuntimeType__get_Assembly(uVar4,uVar5,0);
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac749c8);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar4,uVar5);
  }
  plVar7 = (long *)(unaff_x20 + 0x28);
                    /* try { // try from 08fb0780 to 090b078f has its CatchHandler @ 08fb0790 */
  if (*plVar7 == 0) {
    lVar9 = thunk_FUN_04983e64();
    if (lVar9 == 0) goto LAB_08fb090c;
    plVar2 = (long *)FUN_04947fd0(*(undefined8 *)puVar1,1);
    if (plVar2 == (long *)0x0) goto LAB_08fb0980;
    lVar9 = thunk_FUN_04983e64();
    if (lVar9 == 0) goto LAB_08fb092c;
    if ((int)plVar2[3] == 0) goto LAB_08fb0928;
    plVar2[4] = (long)unaff_x19;
  }
  else {
    in_stack_00000008 = thunk_FUN_04983e64(*plVar7,*(undefined8 *)PTR_DAT_0ac09b30);
                    /* catch() { ... } // from try @ 08fb06e4 with catch @ 08fb0790
                       catch() { ... } // from try @ 08fb0780 with catch @ 08fb0790 */
    if (in_stack_00000008 != 0) {
                    /* try { // try from 08fb0794 to 090b0797 has its CatchHandler @ 08fb07a0 */
                    /* try { // try from 08fb0798 to 090b07a3 has its CatchHandler @ 08fb0070 */
      uVar6 = (uint)*(undefined8 *)(in_stack_00000008 + 0x18);
                    /* catch() { ... } // from try @ 08fb0794 with catch @ 08fb07a0 */
      if ((int)uVar6 < 1) {
        lVar9 = 0;
LAB_08fb0890:
        uVar8 = (uint)lVar9;
        if (uVar8 == uVar6) goto LAB_08fb0898;
      }
      else {
        lVar9 = 0;
        do {
          if (*(long *)(in_stack_00000008 + 0x20 + lVar9 * 8) == 0) goto LAB_08fb0890;
          lVar9 = lVar9 + 1;
          uVar8 = uVar6;
        } while (uVar6 != (uint)lVar9);
LAB_08fb0898:
        FUN_0599517c(&stack0x00000008,uVar6 << 1,*(undefined8 *)PTR_DAT_0ac68c28);
        *plVar7 = in_stack_00000008;
        thunk_FUN_049ee3d8(plVar7);
        if (in_stack_00000008 == 0) {
LAB_08fb0980:
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
      }
      lVar9 = in_stack_00000008;
      lVar3 = thunk_FUN_04983e64();
      if (lVar3 != 0) {
        if (uVar8 < *(uint *)(lVar9 + 0x18)) {
          *(long **)(lVar9 + (long)(int)uVar8 * 8 + 0x20) = unaff_x19;
          thunk_FUN_049ee3d8();
          return;
        }
LAB_08fb0928:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
LAB_08fb092c:
      uVar4 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar4,0);
    }
    plVar2 = (long *)FUN_04947fd0(*(undefined8 *)puVar1,2);
    if (plVar2 == (long *)0x0) goto LAB_08fb0980;
                    /* try { // try from 08fb0820 to 090b095f has its CatchHandler @ 08fb0820
                       catch() { ... } // from try @ 08fb0820 with catch @ 08fb0820
                       catch() { ... } // from try @ 08fb1160 with catch @ 08fb0820
                       catch() { ... } // from try @ 08fb132c with catch @ 08fb0820
                       catch() { ... } // from try @ 08fb1424 with catch @ 08fb0820
                       catch() { ... } // from try @ 08fb14c0 with catch @ 08fb0820 */
    lVar9 = *plVar7;
    if ((lVar9 != 0) &&
       (lVar3 = thunk_FUN_04983e64(lVar9,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_08fb092c;
    if ((int)plVar2[3] == 0) goto LAB_08fb0928;
    plVar2[4] = lVar9;
    thunk_FUN_049ee3d8(plVar2 + 4,lVar9);
    lVar9 = thunk_FUN_04983e64();
    if (lVar9 == 0) goto LAB_08fb092c;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) goto LAB_08fb0928;
    plVar2[5] = (long)unaff_x19;
  }
  thunk_FUN_049ee3d8();
  unaff_x19 = plVar2;
LAB_08fb090c:
  *plVar7 = (long)unaff_x19;
  thunk_FUN_049ee3d8(plVar7,unaff_x19);
  return;
}


