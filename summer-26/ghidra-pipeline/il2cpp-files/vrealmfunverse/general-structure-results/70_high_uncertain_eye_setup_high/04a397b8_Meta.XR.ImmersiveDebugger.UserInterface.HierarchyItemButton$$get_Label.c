/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$get_Label
ENTRY_POINT: 04a397b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__get_Label
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong in_x9;
  int *in_x10;
  undefined8 unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  long in_stack_00000008;
  int *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
code_r0x04a397b8:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_04a397a8;
Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__Setup:
  puVar4 = (undefined8 *)FUN_02b7654c(unaff_x24,param_3,0);
  do {
    uVar8 = (uint)unaff_x27;
    uVar5 = (*(code *)*puVar4)(unaff_x24,unaff_x25,unaff_x20);
    if ((uVar5 & 1) != 0) {
      if ((int)(uint)unaff_x21 < 0) {
        uVar9 = *(uint *)(in_stack_00000028 + 0x18);
        if (uVar9 <= uVar8) goto LAB_04a39924;
        lVar10 = *(long *)(unaff_x23 + 0x10);
        if (lVar10 == 0) goto LAB_04a39964;
        if (*(uint *)(lVar10 + 0x18) <= (uint)in_stack_00000008) goto LAB_04a39924;
        *(int *)(lVar10 + in_stack_00000008 * 4 + 0x20) =
             *(int *)(unaff_x28 + (unaff_x29 & 0xffffffff) * 0x18 + 4) + 1;
      }
      else {
        uVar9 = *(uint *)(in_stack_00000028 + 0x18);
        if ((uVar9 <= uVar8) || (uVar9 <= (uint)unaff_x21)) goto LAB_04a39924;
        *(undefined4 *)(unaff_x28 + (unaff_x21 & 0xffffffff) * 0x18 + 4) =
             *(undefined4 *)(unaff_x28 + (unaff_x29 & 0xffffffff) * 0x18 + 4);
      }
      if (uVar8 < uVar9) {
        iVar1 = *(int *)(unaff_x23 + 0x38);
        uVar2 = *(undefined4 *)(unaff_x23 + 0x28);
        iVar3 = *(int *)(unaff_x23 + 0x20) + -1;
        *(int *)(unaff_x23 + 0x20) = iVar3;
        *in_stack_00000010 = -1;
        *(undefined4 *)(unaff_x28 + (unaff_x29 & 0xffffffff) * 0x18 + 4) = uVar2;
        *(int *)(unaff_x23 + 0x38) = iVar1 + 1;
        if (iVar3 == 0) {
          uVar8 = 0xffffffff;
          *(undefined4 *)(unaff_x23 + 0x24) = 0;
        }
        *(uint *)(unaff_x23 + 0x28) = uVar8;
        return 1;
      }
LAB_04a39924:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    do {
      uVar8 = (uint)*(undefined8 *)(in_stack_00000028 + 0x18);
      if ((int)uVar8 <= unaff_w22) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar6 = thunk_FUN_02b79644();
        uVar7 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar6,in_stack_00000020);
      }
      if (uVar8 <= (uint)unaff_x27) goto LAB_04a39924;
      unaff_w22 = unaff_w22 + 1;
      unaff_x21 = unaff_x27 & 0xffffffff;
      uVar9 = *(uint *)(unaff_x28 + (unaff_x29 & 0xffffffff) * 0x18 + 4);
      unaff_x27 = (ulong)uVar9;
      if ((int)uVar9 < 0) {
        return 0;
      }
      if (uVar8 <= uVar9) goto LAB_04a39924;
      in_stack_00000010 = (int *)(unaff_x28 + unaff_x27 * 0x18);
      unaff_x29 = unaff_x27;
    } while (*in_stack_00000010 != in_stack_00000018._4_4_);
    unaff_x24 = *(long **)(unaff_x23 + 0x30);
    if (unaff_x24 == (long *)0x0) {
LAB_04a39964:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x20);
    lVar10 = unaff_x28 + unaff_x27 * 0x18;
    unaff_x25 = *(undefined8 *)(lVar10 + 8);
    unaff_x20 = *(undefined8 *)(lVar10 + 0x10);
    if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_02b76218(param_3);
    }
    param_1 = *unaff_x24;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__Setup;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_04a397a8:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x04a397b8;
    }
    puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
}


