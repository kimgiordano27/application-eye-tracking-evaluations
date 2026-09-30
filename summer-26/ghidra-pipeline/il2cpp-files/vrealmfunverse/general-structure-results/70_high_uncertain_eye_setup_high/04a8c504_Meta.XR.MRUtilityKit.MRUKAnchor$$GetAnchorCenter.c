/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetAnchorCenter
ENTRY_POINT: 04a8c504
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKAnchor__GetAnchorCenter(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *plVar12;
  ulong unaff_x24;
  long unaff_x25;
  int unaff_w26;
  long unaff_x28;
  ulong unaff_x29;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  do {
    unaff_w26 = unaff_w26 + 1;
    uVar4 = *(uint *)(unaff_x28 + (unaff_x24 & 0xffffffff) * (unaff_x29 & 0xffffffff) + 4);
    unaff_x24 = (ulong)uVar4;
    if ((int)uVar4 < 0) {
      uVar4 = *(uint *)(unaff_x19 + 0x28);
      if ((int)uVar4 < 0) {
                    /* try { // try from 04a8c544 to 04b8c5a7 has its CatchHandler @ 04a8c98c */
        if (unaff_x25 == 0) goto LAB_04a8c6a4;
        uVar4 = *(uint *)(unaff_x19 + 0x24);
        uVar7 = *(uint *)(unaff_x25 + 0x18);
        if (uVar4 == uVar7) {
          FUN_04a8c140();
          if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a8c6a4;
          uVar4 = *(uint *)(unaff_x19 + 0x24);
          unaff_x25 = *(long *)(unaff_x19 + 0x18);
          uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
          *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
          if (unaff_x25 == 0) goto LAB_04a8c6a4;
          iVar1 = 0;
          iVar6 = (int)uVar9;
          if (iVar6 != 0) {
            iVar1 = unaff_w21 / iVar6;
          }
          in_stack_00000008._4_4_ = unaff_w21 - iVar1 * iVar6;
          uVar7 = *(uint *)(unaff_x25 + 0x18);
        }
        else {
          *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
        }
      }
      else {
        if (unaff_x25 == 0) goto LAB_04a8c6a4;
        uVar7 = *(uint *)(unaff_x25 + 0x18);
        if (uVar7 <= uVar4) break;
        *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x25 + (ulong)uVar4 * 0x38 + 0x24);
      }
      if (uVar4 < uVar7) {
        piVar10 = (int *)(unaff_x25 + 0x20 + (long)(int)uVar4 * 0x38);
        *piVar10 = unaff_w21;
        uVar14 = unaff_x20[3];
        uVar13 = unaff_x20[2];
                    /* try { // try from 04a8c5c8 to 04b8c627 has its CatchHandler @ 04a8c988 */
        uVar3 = unaff_x20[5];
        uVar9 = unaff_x20[4];
        uVar15 = *unaff_x20;
        *(undefined8 *)(piVar10 + 4) = unaff_x20[1];
        *(undefined8 *)(piVar10 + 2) = uVar15;
        *(undefined8 *)(piVar10 + 0xc) = uVar3;
        *(undefined8 *)(piVar10 + 10) = uVar9;
        *(undefined8 *)(piVar10 + 8) = uVar14;
        *(undefined8 *)(piVar10 + 6) = uVar13;
        lVar11 = *(long *)(unaff_x19 + 0x10);
        if (lVar11 == 0) {
LAB_04a8c6a4:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if ((in_stack_00000008._4_4_ < *(uint *)(lVar11 + 0x18)) &&
           (uVar4 < *(uint *)(unaff_x25 + 0x18))) {
          lVar11 = lVar11 + (ulong)in_stack_00000008._4_4_ * 4;
          *(int *)(unaff_x25 + 0x20 + (long)(int)uVar4 * 0x38 + 4) = *(int *)(lVar11 + 0x20) + -1;
          *(uint *)(lVar11 + 0x20) = uVar4 + 1;
          *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
          *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
          return 1;
        }
      }
      break;
    }
    if ((uint)param_1 <= uVar4) break;
    if (*(int *)(unaff_x28 + unaff_x24 * (unaff_x29 & 0xffffffff)) == unaff_w21) {
      lVar11 = unaff_x28 + unaff_x24 * (unaff_x29 & 0xffffffff);
      uVar13 = unaff_x20[1];
      uVar9 = *unaff_x20;
      uVar17 = unaff_x20[3];
      uVar15 = unaff_x20[2];
      plVar12 = *(long **)(unaff_x19 + 0x30);
      uVar21 = *(undefined8 *)(lVar11 + 0x10);
      uVar19 = *(undefined8 *)(lVar11 + 8);
      uVar14 = *(undefined8 *)(lVar11 + 0x20);
      uVar3 = *(undefined8 *)(lVar11 + 0x18);
      uVar18 = *(undefined8 *)(lVar11 + 0x30);
      uVar16 = *(undefined8 *)(lVar11 + 0x28);
      uVar22 = unaff_x20[5];
      uVar20 = unaff_x20[4];
      if (plVar12 == (long *)0x0) goto LAB_04a8c6a4;
      lVar11 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      lVar5 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar11) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04a8c4b4;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar12,lVar11,0);
LAB_04a8c4b4:
      in_stack_00000070 = uVar9;
      in_stack_00000078 = uVar13;
      in_stack_00000080 = uVar15;
      in_stack_00000088 = uVar17;
      in_stack_00000090 = uVar20;
      in_stack_00000098 = uVar22;
      in_stack_000000a0 = uVar19;
      in_stack_000000a8 = uVar21;
      in_stack_000000b0 = uVar3;
      in_stack_000000b8 = uVar14;
      in_stack_000000c0 = uVar16;
      in_stack_000000c8 = uVar18;
      uVar8 = (*(code *)*puVar2)(plVar12,&stack0x000000a0,&stack0x00000070,puVar2[1]);
      if ((uVar8 & 1) != 0) {
        return 0;
      }
      param_1 = *(undefined8 *)(unaff_x25 + 0x18);
    }
    if ((int)(uint)param_1 <= unaff_w26) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar9 = thunk_FUN_02b79644();
      uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
      FUN_04d7b3f4(uVar9,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar9);
    }
  } while (uVar4 < (uint)param_1);
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


