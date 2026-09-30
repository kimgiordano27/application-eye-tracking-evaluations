/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawAxis
ENTRY_POINT: 04a55db4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawAxis(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x11;
  int *piVar7;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  undefined8 in_stack_00000000;
  
  uVar1 = *(uint *)(unaff_x19 + 0x24);
  uVar4 = *(uint *)(in_x11 + 0x18);
  if (uVar1 == uVar4) {
    FUN_04a559ec();
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a55ef4;
    uVar1 = *(uint *)(unaff_x19 + 0x24);
    in_x11 = *(long *)(unaff_x19 + 0x18);
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    *(uint *)(unaff_x19 + 0x24) = uVar1 + 1;
    if (in_x11 == 0) goto LAB_04a55ef4;
    iVar2 = 0;
    iVar3 = (int)uVar5;
    if (iVar3 != 0) {
      iVar2 = unaff_w21 / iVar3;
    }
    in_stack_00000000._4_4_ = unaff_w21 - iVar2 * iVar3;
    uVar4 = *(uint *)(in_x11 + 0x18);
  }
  else {
    *(uint *)(unaff_x19 + 0x24) = uVar1 + 1;
  }
  if (uVar1 < uVar4) {
    piVar7 = (int *)(in_x11 + 0x20 + (long)(int)uVar1 * 0xc);
    lVar6 = *(long *)(unaff_x19 + 0x10);
    *piVar7 = unaff_w21;
    piVar7[2] = unaff_w22;
    if (lVar6 == 0) {
LAB_04a55ef4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (in_stack_00000000._4_4_ < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (ulong)in_stack_00000000._4_4_ * 4;
      *(int *)(in_x11 + 0x20 + (long)(int)uVar1 * 0xc + 4) = *(int *)(lVar6 + 0x20) + -1;
      *(uint *)(lVar6 + 0x20) = uVar1 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


