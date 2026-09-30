/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorSpawnerBuildingBlock$$set_FollowHand
ENTRY_POINT: 039c951c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__set_FollowHand(void)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  uint unaff_w24;
  uint uVar8;
  int *piVar9;
  long unaff_x26;
  int unaff_w27;
  long lVar10;
  uint unaff_w29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar8 = unaff_w24;
                    /* try { // try from 039c9520 to 03ac9537 has its CatchHandler @ 039c9598 */
    if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_039c9704;
    piVar9 = (int *)(unaff_x26 + (long)(int)uVar8 * (long)(int)unaff_x20 + 0x20);
    lVar10 = (long)(int)uVar8;
                    /* try { // try from 039c9538 to 03ac9587 has its CatchHandler @ 039c9378 */
    if (*piVar9 == unaff_w27) {
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10
                                               ) + 8))();
        if (plVar4 == (long *)0x0) goto LAB_039c9700;
        uVar6 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,*(undefined2 *)(unaff_x26 + lVar10 * unaff_x20 + 0x28),
                           in_stack_00000018._4_2_,*(undefined8 *)(*plVar4 + 0x1c0));
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_039c9700;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x148);
        uVar1 = *(undefined2 *)(unaff_x26 + lVar10 * unaff_x20 + 0x28);
        if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
          lVar3 = FUN_015c2790(lVar3);
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
                    /* try { // try from 039c9588 to 03ac9597 has its CatchHandler @ 039c9598 */
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 039c9520 with catch @ 039c9598
                       catch() { ... } // from try @ 039c9588 with catch @ 039c9598 */
                    /* try { // try from 039c959c to 03ac959f has its CatchHandler @ 039c95a8 */
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_039c9610;
            }
                    /* try { // try from 039c95a0 to 03ac95ab has its CatchHandler @ 039c9378 */
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039c94ac with catch @ 039c95a8
                       catch(type#2 @ 00000000) { ... } // from try @ 039c959c with catch @ 039c95a8
                        */
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_015c2a80(plVar4,lVar3,0);
LAB_039c9610:
        uVar6 = (*(code *)*puVar2)(plVar4,uVar1,in_stack_00000018._4_2_,puVar2[1]);
        unaff_x23 = in_stack_00000010;
      }
      if ((uVar6 & 1) != 0) {
        if ((int)unaff_w29 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_039c9700;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000008) goto LAB_039c9704;
          *(int *)(lVar3 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x26 + lVar10 * 0xc + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) goto LAB_039c9700;
          if (*(uint *)(lVar3 + 0x18) <= unaff_w29) {
LAB_039c9704:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          *(undefined4 *)(lVar3 + (long)(int)unaff_w29 * 0xc + 0x24) =
               *(undefined4 *)(unaff_x26 + lVar10 * 0xc + 0x24);
        }
        *piVar9 = -1;
        *(undefined4 *)(unaff_x26 + lVar10 * 0xc + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
        *(uint *)(unaff_x19 + 0x24) = uVar8;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    unaff_w24 = *(uint *)(unaff_x26 + lVar10 * unaff_x20 + 0x24);
    if ((int)unaff_w24 < 0) {
      return 0;
    }
    unaff_x26 = *(long *)(unaff_x19 + 0x18);
    unaff_w29 = uVar8;
    if (unaff_x26 == 0) {
LAB_039c9700:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
  } while( true );
}


