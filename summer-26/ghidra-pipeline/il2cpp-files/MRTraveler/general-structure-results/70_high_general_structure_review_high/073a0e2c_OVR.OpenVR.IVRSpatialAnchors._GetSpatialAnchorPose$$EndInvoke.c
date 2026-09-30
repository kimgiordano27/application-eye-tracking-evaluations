/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 073a0e2c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x073a125c) */
/* WARNING: Removing unreachable block (ram,0x073a10a4) */

void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 uVar9;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
code_r0x073a0e2c:
                    /* try { // try from 073a0e2c to 074a0e2f has its CatchHandler @ 073a0e54 */
  puVar2 = (undefined8 *)(param_1 + 0x138);
LAB_073a0e30:
                    /* try { // try from 073a0e30 to 074a0e33 has its CatchHandler @ 073a0e4c */
                    /* try { // try from 073a0e34 to 074a0e37 has its CatchHandler @ 073a0e3c */
                    /* catch() { ... } // from try @ 073a0db8 with catch @ 073a0e38 */
  plVar1 = (long *)(*(code *)*puVar2)(unaff_x23,puVar2[1]);
                    /* catch() { ... } // from try @ 073a0e34 with catch @ 073a0e3c */
                    /* catch() { ... } // from try @ 073a0d98 with catch @ 073a0e40 */
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
                    /* catch() { ... } // from try @ 073a0e0c with catch @ 073a0e44 */
    lVar5 = *plVar1;
                    /* catch() { ... } // from try @ 073a0de4 with catch @ 073a0e48 */
                    /* catch() { ... } // from try @ 073a0e30 with catch @ 073a0e4c */
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch() { ... } // from try @ 073a0d24 with catch @ 073a0e50 */
                    /* catch() { ... } // from try @ 073a0e2c with catch @ 073a0e54 */
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a290) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_073a0e98;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar1,*(long *)PTR_DAT_08e6a290,0);
LAB_073a0e98:
    uVar7 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar7 & 1) == 0) break;
    lVar5 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08eb4db8) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_073a0efc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar1,*(long *)PTR_DAT_08eb4db8,0);
LAB_073a0efc:
    uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar5 = FUN_0476e7ec(uVar9,*(undefined8 *)PTR_DAT_08e69dd0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = FUN_0469cbf4(lVar5,*(undefined8 *)PTR_DAT_08eb50d0);
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0739ea68(lVar4,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                 *(undefined4 *)(unaff_x24 + 0x10),uVar3);
    lVar5 = FUN_085dee20(lVar5,0);
    uVar3 = FUN_085dbb5c();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(uVar3,uVar3);
    }
    FUN_085eba08(lVar5,uVar3,0);
    if (*(char *)(unaff_x27 + 0xff0) == '\0') {
      FUN_03c8f898();
      *(undefined1 *)(unaff_x27 + 0xff0) = unaff_w19;
    }
    lVar4 = *(long *)(*unaff_x21 + 0xb8);
    FUN_085eb934(*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                 *(undefined4 *)(lVar4 + 0x14),lVar5,0);
    if (*(char *)(unaff_x29 + 0xffc) == '\0') {
      FUN_03c8f898();
      *(undefined1 *)(unaff_x29 + 0xffc) = unaff_w19;
    }
    puVar6 = *(undefined4 **)(*unaff_x22 + 0xb8);
    FUN_085eb51c(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar5,0);
    if (*(char *)(unaff_x28 + 0xff5) == '\0') {
      FUN_03c8f898();
      *(undefined1 *)(unaff_x28 + 0xff5) = unaff_w19;
    }
    puVar6 = *(undefined4 **)(*unaff_x21 + 0xb8);
    FUN_085ea6e8(*puVar6,puVar6[1],puVar6[2],lVar5,0);
  } while( true );
  if (plVar1 != (long *)0x0) {
    lVar5 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_073a1094;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar1,*(long *)PTR_DAT_08e6a288,0);
LAB_073a1094:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar5 = *in_stack_00000008;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a290) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_073a0d58;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(in_stack_00000008,*(long *)PTR_DAT_08e6a290,0);
LAB_073a0d58:
  uVar7 = (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
  if ((uVar7 & 1) == 0) {
    if (in_stack_00000008 == (long *)0x0) {
      return;
    }
    lVar5 = *in_stack_00000008;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 == 0) goto LAB_073a1180;
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    goto LAB_073a1168;
  }
  lVar5 = *in_stack_00000008;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08eb5040) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_073a0dc0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(in_stack_00000008,*(long *)PTR_DAT_08eb5040,0);
LAB_073a0dc0:
  unaff_x24 = (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  unaff_x23 = *(long **)(unaff_x24 + 0x18);
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  param_1 = *unaff_x23;
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08eb4db0) {
        param_1 = param_1 + (long)*piVar8 * 0x10;
        goto code_r0x073a0e2c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(unaff_x23,*(long *)PTR_DAT_08eb4db0,0);
  goto LAB_073a0e30;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_073a1168:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_073a119c;
    }
  }
LAB_073a1180:
  puVar2 = (undefined8 *)FUN_03cf1348(in_stack_00000008,*(long *)PTR_DAT_08e6a288,0);
LAB_073a119c:
  (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
  return;
}


