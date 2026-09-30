/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnDiscoveryFinished$$BeginInvoke
ENTRY_POINT: 04a6de90
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnDiscoveryFinished__BeginInvoke(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  ulong unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  int unaff_w26;
  undefined4 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x04a6de90:
  uVar8 = (uint)unaff_x25;
  uVar4 = (*(code *)*param_1)(unaff_x23,unaff_x24);
  if ((uVar4 & 1) == 0) {
    uVar4 = unaff_x25;
    do {
      uVar8 = (uint)*(undefined8 *)(in_stack_00000008 + 0x18);
      if ((int)uVar8 <= unaff_w26) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar5 = thunk_FUN_02b79644();
        uVar6 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar5,unaff_x28);
      }
      if (uVar8 <= (uint)uVar4) goto LAB_04a6dfa8;
      uVar9 = unaff_x27[1];
      unaff_x25 = (ulong)uVar9;
      unaff_w26 = unaff_w26 + 1;
      unaff_x20 = uVar4 & 0xffffffff;
      if ((int)uVar9 < 0) {
        return 0;
      }
      if (uVar8 <= uVar9) goto LAB_04a6dfa8;
      unaff_x27 = (undefined4 *)(unaff_x29 + unaff_x25 * 0x10);
      uVar4 = unaff_x25;
    } while (*(int *)(unaff_x29 + unaff_x25 * 0x10) != unaff_w22);
    unaff_x23 = *(long **)(unaff_x21 + 0x30);
    if (unaff_x23 == (long *)0x0) goto LAB_04a6dfe8;
    unaff_x24 = *(undefined8 *)(unaff_x27 + 2);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x28 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218(lVar7);
    }
    lVar10 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          param_1 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto code_r0x04a6de90;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    param_1 = (undefined8 *)FUN_02b7654c(unaff_x23,lVar7,0);
    goto code_r0x04a6de90;
  }
  if ((int)(uint)unaff_x20 < 0) {
    uVar9 = *(uint *)(in_stack_00000008 + 0x18);
    if (uVar9 <= uVar8) goto LAB_04a6dfa8;
    lVar7 = *(long *)(unaff_x21 + 0x10);
    if (lVar7 == 0) {
LAB_04a6dfe8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar7 + 0x18) <= (uint)in_stack_00000000) goto LAB_04a6dfa8;
    *(int *)(lVar7 + in_stack_00000000 * 4 + 0x20) = unaff_x27[1] + 1;
  }
  else {
    uVar9 = *(uint *)(in_stack_00000008 + 0x18);
    if ((uVar9 <= uVar8) || (uVar9 <= (uint)unaff_x20)) goto LAB_04a6dfa8;
    *(undefined4 *)(unaff_x29 + (unaff_x20 & 0xffffffff) * 0x10 + 4) = unaff_x27[1];
  }
  if (uVar8 < uVar9) {
    uVar1 = *(undefined4 *)(unaff_x21 + 0x28);
    iVar2 = *(int *)(unaff_x21 + 0x20);
    iVar3 = *(int *)(unaff_x21 + 0x38);
    *unaff_x27 = 0xffffffff;
    unaff_x27[1] = uVar1;
    iVar2 = iVar2 + -1;
    *(int *)(unaff_x21 + 0x20) = iVar2;
    *(int *)(unaff_x21 + 0x38) = iVar3 + 1;
    if (iVar2 == 0) {
      uVar8 = 0xffffffff;
      *(undefined4 *)(unaff_x21 + 0x24) = 0;
    }
    *(uint *)(unaff_x21 + 0x28) = uVar8;
    return 1;
  }
LAB_04a6dfa8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


