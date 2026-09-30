/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$BeginInvoke
ENTRY_POINT: 073a0d40
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x073a10a4) */
/* WARNING: Removing unreachable block (ram,0x073a125c) */

void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__BeginInvoke(long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
code_r0x073a0d40:
                    /* try { // try from 073a0d44 to 074a0d4f has its CatchHandler @ 073a0c18 */
  puVar1 = (undefined8 *)FUN_03cf1348(param_1,param_2,0);
LAB_073a0d58:
                    /* try { // try from 073a0d5c to 074a0d5f has its CatchHandler @ 073a0e58 */
  uVar2 = (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 073a0d6c to 074a0d97 has its CatchHandler @ 073a0c18 */
    lVar5 = *in_stack_00000008;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08eb5040) {
                    /* try { // try from 073a0db8 to 074a0dbb has its CatchHandler @ 073a0e38 */
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_073a0dc0;
        }
                    /* try { // try from 073a0d98 to 074a0db7 has its CatchHandler @ 073a0e40 */
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348(in_stack_00000008,*(long *)PTR_DAT_08eb5040,0);
LAB_073a0dc0:
    lVar5 = (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar9 = *(long **)(lVar5 + 0x18);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *plVar9;
                    /* try { // try from 073a0de4 to 074a0deb has its CatchHandler @ 073a0e48 */
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08eb4db0) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_073a0e30;
        }
        uVar2 = uVar2 - 1;
                    /* try { // try from 073a0e0c to 074a0e13 has its CatchHandler @ 073a0e44 */
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08eb4db0,0);
LAB_073a0e30:
    plVar9 = (long *)(*(code *)*puVar1)(plVar9,puVar1[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar6 = *plVar9;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a290) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_073a0e98;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e6a290,0);
LAB_073a0e98:
      uVar2 = (*(code *)*puVar1)(plVar9,puVar1[1]);
      if ((uVar2 & 1) == 0) goto LAB_073a1038;
      lVar6 = *plVar9;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08eb4db8) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_073a0efc;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08eb4db8,0);
LAB_073a0efc:
      uVar3 = (*(code *)*puVar1)(plVar9,puVar1[1]);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar6 = FUN_0476e7ec(uVar10,*(undefined8 *)PTR_DAT_08e69dd0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar4 = FUN_0469cbf4(lVar6,*(undefined8 *)PTR_DAT_08eb50d0);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0739ea68(lVar4,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                   *(undefined4 *)(lVar5 + 0x10),uVar3);
      lVar6 = FUN_085dee20(lVar6,0);
      uVar3 = FUN_085dbb5c();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(uVar3,uVar3);
      }
      FUN_085eba08(lVar6,uVar3,0);
      if (*(char *)(unaff_x27 + 0xff0) == '\0') {
        FUN_03c8f898();
        *(undefined1 *)(unaff_x27 + 0xff0) = unaff_w19;
      }
      lVar4 = *(long *)(*unaff_x21 + 0xb8);
      FUN_085eb934(*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                   *(undefined4 *)(lVar4 + 0x14),lVar6,0);
      if (*(char *)(unaff_x29 + 0xffc) == '\0') {
        FUN_03c8f898();
        *(undefined1 *)(unaff_x29 + 0xffc) = unaff_w19;
      }
      puVar7 = *(undefined4 **)(*unaff_x22 + 0xb8);
      FUN_085eb51c(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar6,0);
      if (*(char *)(unaff_x28 + 0xff5) == '\0') {
        FUN_03c8f898();
        *(undefined1 *)(unaff_x28 + 0xff5) = unaff_w19;
      }
      puVar7 = *(undefined4 **)(*unaff_x21 + 0xb8);
      FUN_085ea6e8(*puVar7,puVar7[1],puVar7[2],lVar6,0);
    } while( true );
  }
  if (in_stack_00000008 == (long *)0x0) {
    return;
  }
  lVar5 = *in_stack_00000008;
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar2 == 0) goto LAB_073a1180;
  piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
  goto LAB_073a1168;
LAB_073a1038:
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_073a1094;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e6a288,0);
LAB_073a1094:
    (*(code *)*puVar1)(plVar9,puVar1[1]);
  }
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar5 = *in_stack_00000008;
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  param_2 = *(long *)PTR_DAT_08e6a290;
  param_1 = in_stack_00000008;
  if (uVar2 == 0) goto code_r0x073a0d40;
  piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
  while (*(long *)(piVar8 + -2) != param_2) {
    uVar2 = uVar2 - 1;
    piVar8 = piVar8 + 4;
    if (uVar2 == 0) goto code_r0x073a0d40;
  }
  puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
  goto LAB_073a0d58;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar8 = piVar8 + 4;
    if (uVar2 == 0) break;
LAB_073a1168:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_073a119c;
    }
  }
LAB_073a1180:
  puVar1 = (undefined8 *)FUN_03cf1348(in_stack_00000008,*(long *)PTR_DAT_08e6a288,0);
LAB_073a119c:
  (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
  return;
}


