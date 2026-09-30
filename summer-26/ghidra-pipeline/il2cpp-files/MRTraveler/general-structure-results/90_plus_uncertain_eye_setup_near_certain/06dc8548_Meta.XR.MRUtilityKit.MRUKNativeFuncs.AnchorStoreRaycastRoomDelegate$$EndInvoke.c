/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomDelegate$$EndInvoke
ENTRY_POINT: 06dc8548
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dc88d8) */

void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  long *plVar10;
  long unaff_x23;
  long *plVar11;
  int unaff_w24;
  long lVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  lVar12 = *(long *)(unaff_x19 + 8);
  plVar10 = *(long **)(unaff_x22 + 0xcc8);
  plVar11 = *(long **)(unaff_x23 + 0x550);
  if (unaff_w24 == 0) {
    in_stack_00000058 = *(undefined8 *)(unaff_x19 + 10);
    unaff_w24 = -1;
    *(undefined8 *)(unaff_x19 + 10) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar12 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar8 = *(long **)(lVar12 + 0x60);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = *plVar8;
    uVar9 = *(undefined8 *)(*(long *)(lVar12 + 0x40) + 0xc0);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *plVar10) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_06dc85d8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar8,*plVar10,1);
LAB_06dc85d8:
    lVar5 = (*(code *)*puVar4)(plVar8,uVar9,puVar4[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000058 = FUN_071787d8(lVar5,0);
    uVar6 = FUN_0701d1d0(&stack0x00000058,0);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000058;
      thunk_FUN_03d233cc(unaff_x19 + 10,0);
      if (*(int *)(*plVar11 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_04526ff8(unaff_x19 + 2,&stack0x00000058);
      return;
    }
  }
  FUN_0701d29c(&stack0x00000058,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(long *)(lVar12 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(char *)(*(long *)(lVar12 + 0x40) + 0xd0) != '\0') {
    plVar8 = *(long **)(lVar12 + 0x60);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *plVar10) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06dc86c4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar8,*plVar10,0);
LAB_06dc86c4:
    lVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar6 = FUN_06db80e8(lVar5,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_06df94c0(*(undefined8 *)PTR_DAT_08e90e00,0,0);
    }
    plVar8 = *(long **)(lVar12 + 0x60);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *plVar10) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06dc8764;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar8,*plVar10,0);
LAB_06dc8764:
    lVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar5 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06a4e7b0(&stack0x00000008,*(long *)(lVar5 + 0x48),*(undefined8 *)PTR_DAT_08e90dd0);
    puVar2 = PTR_DAT_08e90de0;
    puVar1 = PTR_DAT_08e90178;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar6 = FUN_04aa6440(&stack0x00000030,*(undefined8 *)puVar2), uVar3 = in_stack_00000048,
          uVar9 = in_stack_00000040, (uVar6 & 1) != 0) {
      plVar10 = *(long **)(lVar12 + 0x48);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_06dc8820;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)puVar1,5);
LAB_06dc8820:
      (*(code *)*puVar4)(plVar10,uVar9,uVar3,puVar4[1]);
    }
    if (unaff_w24 < 0) {
      FUN_04aa6560(&stack0x00000030,*(undefined8 *)PTR_DAT_08e90dd8);
    }
  }
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0701e078(unaff_x19 + 2,0);
  return;
}


