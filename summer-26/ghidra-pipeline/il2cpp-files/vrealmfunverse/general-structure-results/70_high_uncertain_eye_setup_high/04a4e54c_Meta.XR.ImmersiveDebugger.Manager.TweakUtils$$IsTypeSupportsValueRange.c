/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$IsTypeSupportsValueRange
ENTRY_POINT: 04a4e54c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_TweakUtils__IsTypeSupportsValueRange
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong in_x9;
  undefined8 uVar8;
  long in_x10;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
code_r0x04a4e54c:
  piVar10 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04a4e584;
    }
    in_x9 = in_x9 - 1;
    piVar10 = piVar10 + 4;
  } while (in_x9 != 0);
LAB_04a4e568:
  puVar2 = (undefined8 *)FUN_02b7654c(unaff_x24,param_3,0);
LAB_04a4e584:
  uVar3 = (*(code *)*puVar2)(unaff_x24,unaff_w22 != 0,uStack000000000000000c & 1,puVar2[1]);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
LAB_04a4e5ac:
  uVar5 = (uint)*(undefined8 *)(unaff_x26 + 0x18);
  if ((int)uVar5 <= unaff_w27) {
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar8 = thunk_FUN_02b79644();
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
    FUN_04d7b3f4(uVar8,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar8,unaff_x23);
  }
  if ((uint)unaff_x28 < uVar5) {
    unaff_w27 = unaff_w27 + 1;
    uVar7 = *(uint *)(unaff_x29 + (unaff_x25 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 4);
    unaff_x25 = (ulong)uVar7;
    if (-1 < (int)uVar7) {
      if (uVar5 <= uVar7) goto LAB_04a4e708;
      unaff_x28 = unaff_x25;
      if (*(int *)(unaff_x29 + unaff_x25 * (unaff_x20 & 0xffffffff)) == unaff_w21)
      goto code_r0x04a4e500;
      goto LAB_04a4e5ac;
    }
    uVar5 = *(uint *)(unaff_x19 + 0x28);
    if ((int)uVar5 < 0) {
      if (unaff_x26 == 0) goto LAB_04a4e748;
      uVar5 = *(uint *)(unaff_x19 + 0x24);
      uVar7 = *(uint *)(unaff_x26 + 0x18);
      if (uVar5 == uVar7) {
        FUN_04a4e230();
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a4e748;
        uVar5 = *(uint *)(unaff_x19 + 0x24);
        unaff_x26 = *(long *)(unaff_x19 + 0x18);
        uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
        *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
        if (unaff_x26 == 0) goto LAB_04a4e748;
        iVar1 = 0;
        iVar6 = (int)uVar8;
        if (iVar6 != 0) {
          iVar1 = unaff_w21 / iVar6;
        }
        uStack0000000000000008 = unaff_w21 - iVar1 * iVar6;
        uVar7 = *(uint *)(unaff_x26 + 0x18);
      }
      else {
        *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_04a4e748;
      uVar7 = *(uint *)(unaff_x26 + 0x18);
      if (uVar7 <= uVar5) goto LAB_04a4e708;
      *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x26 + (ulong)uVar5 * 0xc + 0x24);
    }
    if (uVar7 <= uVar5) goto LAB_04a4e708;
    piVar10 = (int *)(unaff_x26 + 0x20 + (long)(int)uVar5 * 0xc);
    lVar9 = *(long *)(unaff_x19 + 0x10);
    *piVar10 = unaff_w21;
    *(undefined1 *)(piVar10 + 2) = in_stack_00000000._4_1_;
    if (lVar9 == 0) goto LAB_04a4e748;
    if (uStack0000000000000008 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = lVar9 + (ulong)uStack0000000000000008 * 4;
      *(int *)(unaff_x26 + 0x20 + (long)(int)uVar5 * 0xc + 4) = *(int *)(lVar9 + 0x20) + -1;
      *(uint *)(lVar9 + 0x20) = uVar5 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
LAB_04a4e708:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
code_r0x04a4e500:
  unaff_x24 = *(long **)(unaff_x19 + 0x30);
  if (unaff_x24 == (long *)0x0) {
LAB_04a4e748:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  param_3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x20);
  unaff_w22 = (uint)*(byte *)(unaff_x29 + unaff_x25 * (unaff_x20 & 0xffffffff) + 8);
  if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_02b76218(param_3);
  }
  param_1 = *unaff_x24;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 != 0) goto code_r0x04a4e548;
  goto LAB_04a4e568;
code_r0x04a4e548:
  in_x10 = *(long *)(param_1 + 0xb0);
  goto code_r0x04a4e54c;
}


