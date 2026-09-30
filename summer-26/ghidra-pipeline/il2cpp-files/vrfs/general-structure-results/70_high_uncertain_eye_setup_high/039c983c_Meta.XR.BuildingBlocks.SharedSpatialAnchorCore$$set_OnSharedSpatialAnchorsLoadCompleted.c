/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore$$set_OnSharedSpatialAnchorsLoadCompleted
ENTRY_POINT: 039c983c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_BuildingBlocks_SharedSpatialAnchorCore__set_OnSharedSpatialAnchorsLoadCompleted(void)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w8;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long lVar8;
  long unaff_x21;
  long unaff_x24;
  uint unaff_w25;
  uint uVar9;
  uint unaff_w26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  long in_stack_00000000;
  undefined2 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x039c983c:
  uVar9 = unaff_w25;
  lVar8 = (long)(int)uVar9;
  if (in_w8 == unaff_w28) {
    plVar4 = *(long **)(unaff_x19 + 0x30);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x10)
                                   + 8))();
      if (plVar4 == (long *)0x0) goto LAB_039c9a20;
      uVar6 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,*(undefined2 *)(unaff_x27 + lVar8 * unaff_x21 + 0x28),
                         in_stack_00000018._4_2_,*(undefined8 *)(*plVar4 + 0x1c0));
    }
    else {
      if (plVar4 == (long *)0x0) goto LAB_039c9a20;
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x148);
      uVar1 = *(undefined2 *)(unaff_x27 + lVar8 * unaff_x21 + 0x28);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_015c2790(lVar3);
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_039c991c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80(plVar4,lVar3,0);
LAB_039c991c:
      uVar6 = (*(code *)*puVar2)(plVar4,uVar1,in_stack_00000018._4_2_,puVar2[1]);
      unaff_x24 = in_stack_00000010;
    }
    if ((uVar6 & 1) != 0) {
      if (-1 < (int)unaff_w26) {
        lVar3 = *(long *)(unaff_x19 + 0x18);
        if (lVar3 == 0) goto LAB_039c9a20;
        if (unaff_w26 < *(uint *)(lVar3 + 0x18)) {
          *(undefined4 *)(lVar3 + (long)(int)unaff_w26 * 0xc + 0x24) =
               *(undefined4 *)(unaff_x27 + lVar8 * 0xc + 0x24);
LAB_039c99e0:
          lVar8 = unaff_x27 + lVar8 * 0xc;
          *in_stack_00000008 = *(undefined2 *)(lVar8 + 0x2a);
          *unaff_x29 = -1;
          *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar9;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
        goto LAB_039c9a24;
      }
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 != 0) {
        if ((uint)in_stack_00000000 < *(uint *)(lVar3 + 0x18)) {
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x27 + lVar8 * 0xc + 0x24) + 1;
          goto LAB_039c99e0;
        }
LAB_039c9a24:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      goto LAB_039c9a20;
    }
  }
  unaff_w25 = *(uint *)(unaff_x27 + lVar8 * unaff_x21 + 0x24);
  if ((int)unaff_w25 < 0) {
    *in_stack_00000008 = 0;
    return 0;
  }
  unaff_x27 = *(long *)(unaff_x19 + 0x18);
  if (unaff_x27 != 0) {
    if (*(uint *)(unaff_x27 + 0x18) <= unaff_w25) goto LAB_039c9a24;
    unaff_x29 = (int *)(unaff_x27 + (long)(int)unaff_w25 * (long)(int)unaff_x21 + 0x20);
    in_w8 = *unaff_x29;
    unaff_w26 = uVar9;
    goto code_r0x039c983c;
  }
LAB_039c9a20:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


