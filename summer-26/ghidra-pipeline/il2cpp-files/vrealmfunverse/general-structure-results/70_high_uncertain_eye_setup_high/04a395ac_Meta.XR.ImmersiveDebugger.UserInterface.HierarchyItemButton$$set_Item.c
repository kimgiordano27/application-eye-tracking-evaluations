/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$set_Item
ENTRY_POINT: 04a395ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__set_Item
          (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  int unaff_w28;
  ulong unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x04a395ac:
  puVar2 = (undefined8 *)FUN_02b7654c(unaff_x24,param_2,0);
  do {
    uVar3 = (*(code *)*puVar2)(unaff_x24,unaff_x25,unaff_x26,in_stack_00000018);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    do {
      uVar6 = (uint)*(undefined8 *)(in_stack_00000008 + 0x18);
      if ((int)uVar6 <= unaff_w28) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar4 = thunk_FUN_02b79644();
        uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar4,unaff_x27);
      }
      if (uVar6 <= (uint)unaff_x29) {
LAB_04a39648:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      unaff_w28 = unaff_w28 + 1;
      uVar1 = *(uint *)(unaff_x19 + (unaff_x22 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 4);
      unaff_x22 = (ulong)uVar1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (uVar6 <= uVar1) goto LAB_04a39648;
      unaff_x29 = unaff_x22;
    } while (*(int *)(unaff_x19 + unaff_x22 * (unaff_x20 & 0xffffffff)) != in_stack_00000010._4_4_);
    unaff_x24 = *(long **)(unaff_x23 + 0x30);
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x27 + 0x20) + 0xc0) + 0x20);
    lVar7 = unaff_x19 + unaff_x22 * (unaff_x20 & 0xffffffff);
    unaff_x25 = *(undefined8 *)(lVar7 + 8);
    unaff_x26 = *(undefined8 *)(lVar7 + 0x10);
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_02b76218(param_2);
    }
    lVar7 = *unaff_x24;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 == 0) goto code_r0x04a395ac;
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar8 + -2) != param_2) {
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
      if (uVar3 == 0) goto code_r0x04a395ac;
    }
    puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
  } while( true );
}


