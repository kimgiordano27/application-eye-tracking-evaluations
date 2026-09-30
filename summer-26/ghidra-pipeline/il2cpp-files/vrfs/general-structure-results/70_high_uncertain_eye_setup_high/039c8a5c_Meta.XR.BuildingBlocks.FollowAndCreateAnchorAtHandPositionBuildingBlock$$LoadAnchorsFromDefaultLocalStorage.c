/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.FollowAndCreateAnchorAtHandPositionBuildingBlock$$LoadAnchorsFromDefaultLocalStorage
ENTRY_POINT: 039c8a5c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_BuildingBlocks_FollowAndCreateAnchorAtHandPositionBuildingBlock__LoadAnchorsFromDefaultLocalStorage
          (long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  uint in_w10;
  int *piVar10;
  uint uVar11;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  undefined2 unaff_w25;
  long unaff_x26;
  int unaff_w27;
  int *piVar12;
  uint unaff_w29;
  int iVar13;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined2 uStack0000000000000018;
  undefined2 uStack000000000000001c;
  
  iVar13 = 0;
  if (in_w10 != 0) {
    iVar13 = unaff_w27 / (int)in_w10;
  }
  uVar11 = unaff_w27 - iVar13 * in_w10;
  if (uVar11 < in_w10) {
    piVar12 = (int *)(param_1 + (ulong)uVar11 * 4 + 0x20);
    uVar11 = *piVar12 - 1;
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x26 == 0) goto LAB_039c8de8;
      uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar7;
      if (uVar11 < uVar6) {
        iVar13 = 0;
        do {
          uVar6 = (uint)uVar7;
          lVar4 = (long)(int)uVar11;
          if (*(int *)(unaff_x26 + (long)(int)uVar11 * 0xc + 0x20) == unaff_w27) {
            plVar3 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) +
                                                   0x10) + 8))();
            if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_039c8de4;
            if (plVar3 == (long *)0x0) goto LAB_039c8de8;
            uVar9 = (**(code **)(*plVar3 + 0x1b8))
                              (plVar3,*(undefined2 *)(unaff_x26 + lVar4 * 0xc + 0x28),
                               uStack000000000000001c,*(undefined8 *)(*plVar3 + 0x1c0));
            if ((uVar9 & 1) != 0) {
              if ((unaff_w29 & 0xff) != 2) {
                if ((unaff_w29 & 0xff) != 1) {
                  return 0;
                }
                if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
                  *(undefined2 *)(unaff_x26 + lVar4 * 0xc + 0x2a) = unaff_w25;
                  return 1;
                }
                goto LAB_039c8de4;
              }
              uStack0000000000000018 = uStack000000000000001c;
              lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
              if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                lVar4 = FUN_015c2790();
              }
              puVar2 = (undefined8 *)&stack0x00000018;
              goto LAB_039c8dd0;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar11) goto LAB_039c8de4;
          uVar11 = *(uint *)(unaff_x26 + lVar4 * 0xc + 0x24);
          if ((int)uVar6 <= iVar13) {
            FUN_031dbf48(0);
          }
          uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar13 = iVar13 + 1;
          uVar6 = (uint)uVar7;
        } while (uVar11 < uVar6);
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_039c8de8;
      uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar7;
      if (uVar11 < uVar6) {
                    /* try { // try from 039c8a8c to 03ac8d1b has its CatchHandler @ 039c8a8c
                       catch() { ... } // from try @ 039c8a8c with catch @ 039c8a8c
                       catch() { ... } // from try @ 039c8d28 with catch @ 039c8a8c
                       catch() { ... } // from try @ 039c8df0 with catch @ 039c8a8c */
        iVar13 = 0;
        uStack000000000000000c = unaff_w29;
        do {
          uVar6 = (uint)uVar7;
          if (*(int *)(unaff_x26 + (long)(int)uVar11 * 0xc + 0x20) == unaff_w27) {
            lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x148);
            if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
              lVar4 = FUN_015c2790(lVar4);
            }
            lVar8 = *unaff_x23;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar4) {
                  puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_039c8b24;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar2 = (undefined8 *)FUN_015c2a80();
LAB_039c8b24:
            uVar9 = (*(code *)*puVar2)();
            if ((uVar9 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) {
                in_stack_00000010._4_2_ = uStack000000000000001c;
                lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
                if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                  lVar4 = FUN_015c2790();
                }
                puVar2 = (undefined8 *)((long)&stack0x00000010 + 4);
LAB_039c8dd0:
                uVar7 = thunk_FUN_015d01b0(lVar4,puVar2);
                FUN_031dbe34(uVar7,0);
                return 0;
              }
              if ((uStack000000000000000c & 0xff) != 1) {
                return 0;
              }
              if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
                *(undefined2 *)(unaff_x26 + (long)(int)uVar11 * 0xc + 0x2a) = unaff_w25;
                return 1;
              }
              goto LAB_039c8de4;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar11) goto LAB_039c8de4;
          uVar11 = *(uint *)(unaff_x26 + (long)(int)uVar11 * 0xc + 0x24);
          if ((int)uVar6 <= iVar13) {
            FUN_031dbf48(0);
          }
          uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar13 = iVar13 + 1;
          uVar6 = (uint)uVar7;
        } while (uVar11 < uVar6);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar11 = *(uint *)(unaff_x20 + 0x20);
      if (uVar11 == uVar6) {
        (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168) + 8))();
        lVar4 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
        if (lVar4 == 0) goto LAB_039c8de8;
        uVar6 = *(uint *)(lVar4 + 0x18);
        iVar13 = 0;
        if (uVar6 != 0) {
          iVar13 = unaff_w27 / (int)uVar6;
        }
        uVar1 = unaff_w27 - iVar13 * uVar6;
        if (uVar6 <= uVar1) goto LAB_039c8de4;
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        piVar12 = (int *)(lVar4 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
      }
      if (unaff_x26 == 0) {
LAB_039c8de8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      bVar5 = false;
    }
    else {
      uVar11 = *(uint *)(unaff_x20 + 0x24);
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      bVar5 = true;
    }
    if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
      if (bVar5) {
        *(undefined4 *)(unaff_x20 + 0x24) =
             *(undefined4 *)(unaff_x26 + (long)(int)uVar11 * 0xc + 0x24);
      }
      lVar4 = unaff_x26 + (long)(int)uVar11 * 0xc;
      *(int *)(lVar4 + 0x20) = unaff_w27;
      *(int *)(lVar4 + 0x24) = *piVar12 + -1;
      *(undefined2 *)(lVar4 + 0x2a) = unaff_w25;
      *(undefined2 *)(lVar4 + 0x28) = uStack000000000000001c;
      *piVar12 = uVar11 + 1;
      return 1;
    }
  }
LAB_039c8de4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


