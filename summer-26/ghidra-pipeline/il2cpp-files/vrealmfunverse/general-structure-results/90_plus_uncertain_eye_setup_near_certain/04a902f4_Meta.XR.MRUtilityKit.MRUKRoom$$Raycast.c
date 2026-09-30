/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 04a902f4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKRoom__Raycast(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long in_x9;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  ulong unaff_x26;
  int unaff_w27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  
code_r0x04a902f4:
  puVar2 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
LAB_04a902fc:
  uStack0000000000000070 = in_stack_00000030;
  uStack0000000000000068 = in_stack_00000028;
  uStack0000000000000060 = in_stack_00000020;
  uStack0000000000000048 = in_stack_00000008;
  uStack0000000000000040 = in_stack_00000000;
  uStack0000000000000050 = in_stack_00000010;
  uVar3 = (*(code *)*puVar2)(unaff_x23,&stack0x00000060,&stack0x00000040,puVar2[1]);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
LAB_04a9033c:
  uVar5 = (uint)*(undefined8 *)(unaff_x25 + 0x18);
  if ((int)uVar5 <= unaff_w27) {
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar8 = thunk_FUN_02b79644();
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
    FUN_04d7b3f4(uVar8,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar8);
  }
  if ((uint)unaff_x26 < uVar5) {
    uVar7 = *(uint *)(unaff_x29 + 4);
    unaff_x26 = (ulong)uVar7;
    unaff_w27 = unaff_w27 + 1;
    if (-1 < (int)uVar7) {
      if (uVar5 <= uVar7) goto LAB_04a90484;
      unaff_x29 = unaff_x28 + unaff_x26 * 0x20;
      if (*(int *)(unaff_x28 + unaff_x26 * 0x20) == unaff_w21) goto code_r0x04a90268;
      goto LAB_04a9033c;
    }
    uVar5 = *(uint *)(unaff_x19 + 0x28);
    if ((int)uVar5 < 0) {
      if (unaff_x25 == 0) goto LAB_04a904c4;
      uVar5 = *(uint *)(unaff_x19 + 0x24);
      uVar7 = *(uint *)(unaff_x25 + 0x18);
      if (uVar5 == uVar7) {
        FUN_04a8ff94();
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a904c4;
        uVar5 = *(uint *)(unaff_x19 + 0x24);
        unaff_x25 = *(long *)(unaff_x19 + 0x18);
        uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
        *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
        if (unaff_x25 == 0) goto LAB_04a904c4;
        iVar1 = 0;
        iVar6 = (int)uVar8;
        if (iVar6 != 0) {
          iVar1 = unaff_w21 / iVar6;
        }
        unaff_w24 = unaff_w21 - iVar1 * iVar6;
        uVar7 = *(uint *)(unaff_x25 + 0x18);
      }
      else {
        *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
      }
    }
    else {
      if (unaff_x25 == 0) goto LAB_04a904c4;
      uVar7 = *(uint *)(unaff_x25 + 0x18);
      if (uVar7 <= uVar5) goto LAB_04a90484;
      *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x25 + (ulong)uVar5 * 0x20 + 0x24);
    }
    if (uVar7 <= uVar5) goto LAB_04a90484;
    piVar9 = (int *)(unaff_x25 + 0x20 + (long)(int)uVar5 * 0x20);
    *piVar9 = unaff_w21;
    uVar4 = unaff_x20[1];
    uVar8 = *unaff_x20;
    *(undefined8 *)(piVar9 + 6) = unaff_x20[2];
    *(undefined8 *)(piVar9 + 4) = uVar4;
    *(undefined8 *)(piVar9 + 2) = uVar8;
    lVar10 = *(long *)(unaff_x19 + 0x10);
    if (lVar10 == 0) goto LAB_04a904c4;
    if ((unaff_w24 < *(uint *)(lVar10 + 0x18)) && (uVar5 < *(uint *)(unaff_x25 + 0x18))) {
      lVar10 = lVar10 + (ulong)unaff_w24 * 4;
      piVar9[1] = *(int *)(lVar10 + 0x20) + -1;
      *(uint *)(lVar10 + 0x20) = uVar5 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
LAB_04a90484:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
code_r0x04a90268:
  in_stack_00000030 = *(undefined8 *)(unaff_x29 + 0x18);
  in_stack_00000028 = *(undefined8 *)(unaff_x29 + 0x10);
  in_stack_00000020 = *(undefined8 *)(unaff_x29 + 8);
  in_stack_00000008 = unaff_x20[1];
  in_stack_00000000 = *unaff_x20;
  unaff_x23 = *(long **)(unaff_x19 + 0x30);
  in_stack_00000010 = unaff_x20[2];
  if (unaff_x23 == (long *)0x0) {
LAB_04a904c4:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar10 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02b76218(lVar10);
  }
  param_1 = *unaff_x23;
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar10) {
        in_x9 = (long)*piVar9;
        goto code_r0x04a902f4;
      }
      uVar3 = uVar3 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c(unaff_x23,lVar10,0);
  goto LAB_04a902fc;
}


