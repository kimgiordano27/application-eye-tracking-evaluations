/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$OnRoomAnchorAdded
ENTRY_POINT: 04a7b628
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


undefined8 Meta_XR_MRUtilityKit_MRUK__OnRoomAnchorAdded(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long in_x11;
  int *piVar12;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  long *plVar13;
  long unaff_x24;
  ulong unaff_x25;
  int unaff_w27;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long lStack0000000000000008;
  
  lStack0000000000000008 = in_x11;
  do {
    if ((uint)param_1 <= unaff_w28) goto LAB_04a7b844;
    if (*(int *)(unaff_x29 + (ulong)unaff_w28 * (unaff_x25 & 0xffffffff)) == unaff_w21) {
      plVar13 = *(long **)(unaff_x19 + 0x30);
      if (plVar13 == (long *)0x0) goto LAB_04a7b884;
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x20);
      uVar1 = *(undefined4 *)(unaff_x29 + (ulong)unaff_w28 * (unaff_x25 & 0xffffffff) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218(lVar5);
      }
      lVar7 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_04a7b6cc;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar13,lVar5,0);
LAB_04a7b6cc:
      uVar10 = (*(code *)*puVar3)(plVar13,uVar1,unaff_w22,puVar3[1]);
      if ((uVar10 & 1) != 0) {
        return 0;
      }
      param_1 = *(undefined8 *)(lStack0000000000000008 + 0x18);
      in_x11 = lStack0000000000000008;
    }
    if ((int)(uint)param_1 <= unaff_w27) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar11 = thunk_FUN_02b79644();
      uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
      FUN_04d7b3f4(uVar11,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar11,unaff_x24);
    }
    if ((uint)param_1 <= unaff_w28) goto LAB_04a7b844;
    unaff_w27 = unaff_w27 + 1;
    unaff_w28 = *(uint *)(unaff_x29 + (ulong)unaff_w28 * (unaff_x25 & 0xffffffff) + 4);
  } while (-1 < (int)unaff_w28);
  uVar6 = *(uint *)(unaff_x19 + 0x28);
  if ((int)uVar6 < 0) {
    if (in_x11 == 0) goto LAB_04a7b884;
    uVar6 = *(uint *)(unaff_x19 + 0x24);
    uVar9 = *(uint *)(in_x11 + 0x18);
    if (uVar6 == uVar9) {
      FUN_04a7b37c();
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a7b884;
      uVar6 = *(uint *)(unaff_x19 + 0x24);
      in_x11 = *(long *)(unaff_x19 + 0x18);
      uVar11 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
      *(uint *)(unaff_x19 + 0x24) = uVar6 + 1;
      if (in_x11 == 0) goto LAB_04a7b884;
      iVar2 = 0;
      iVar8 = (int)uVar11;
      if (iVar8 != 0) {
        iVar2 = unaff_w21 / iVar8;
      }
      in_stack_00000000._4_4_ = unaff_w21 - iVar2 * iVar8;
      uVar9 = *(uint *)(in_x11 + 0x18);
    }
    else {
      *(uint *)(unaff_x19 + 0x24) = uVar6 + 1;
    }
  }
  else {
    if (in_x11 == 0) goto LAB_04a7b884;
    uVar9 = *(uint *)(in_x11 + 0x18);
    if (uVar9 <= uVar6) goto LAB_04a7b844;
    *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(in_x11 + (ulong)uVar6 * 0xc + 0x24);
  }
  if (uVar6 < uVar9) {
    piVar12 = (int *)(in_x11 + 0x20 + (long)(int)uVar6 * 0xc);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    *piVar12 = unaff_w21;
    piVar12[2] = unaff_w22;
    if (lVar5 == 0) {
LAB_04a7b884:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (in_stack_00000000._4_4_ < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (ulong)in_stack_00000000._4_4_ * 4;
      *(int *)(in_x11 + 0x20 + (long)(int)uVar6 * 0xc + 4) = *(int *)(lVar5 + 0x20) + -1;
      *(uint *)(lVar5 + 0x20) = uVar6 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
LAB_04a7b844:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


