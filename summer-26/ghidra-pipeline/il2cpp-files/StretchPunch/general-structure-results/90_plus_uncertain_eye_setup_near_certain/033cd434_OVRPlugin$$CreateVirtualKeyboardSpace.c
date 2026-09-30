/*
FUNCTION_NAME: OVRPlugin$$CreateVirtualKeyboardSpace
ENTRY_POINT: 033cd434
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__CreateVirtualKeyboardSpace(ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_8523);
    FUN_01d7d918(StringLiteral_8915);
    FUN_01d7d918(StringLiteral_8926);
    FUN_01d7d918(StringLiteral_8930);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    *(undefined1 *)(unaff_x26 + 0xa06) = 1;
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  _iStack0000000000000018 = 0;
  if (unaff_x24 == 0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar3 = thunk_FUN_01de27b8();
    FUN_0328ec88(uVar3,0);
    uVar4 = thunk_FUN_01dd295c(StringLiteral_8931);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar3,uVar4);
  }
  FUN_033cb948(&stack0x00000008);
  if (iStack0000000000000018 == 0) {
LAB_033cd514:
    plVar1 = (long *)0x0;
  }
  else {
    if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) {
      if (iStack0000000000000018 == 1) {
        plVar1 = (long *)FUN_03083224(&stack0x00000008,0,*(undefined8 *)StringLiteral_8930);
        if (unaff_x19 == (long *)0x0) {
          return plVar1;
        }
        if (plVar1 == (long *)0x0) goto LAB_033cd690;
        (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
        uVar2 = (**(code **)(*unaff_x19 + 0x868))();
        if ((uVar2 & 1) != 0) {
          return plVar1;
        }
        goto LAB_033cd514;
      }
      if (unaff_x19 == (long *)0x0) {
        uVar3 = thunk_FUN_01dd295c(StringLiteral_6016);
        uVar3 = FUN_033d6e4c(uVar3,0);
        thunk_FUN_01dd295c(StringLiteral_5868);
        uVar4 = thunk_FUN_01de27b8();
        FUN_033063d0(uVar4,uVar3,0);
        uVar3 = thunk_FUN_01dd295c(StringLiteral_8931);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar4,uVar3);
      }
    }
    if ((unaff_w22 >> 0x10 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) {
        if (*(int *)(*(long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                    + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        unaff_x23 = (long *)FUN_033ad654(0);
        uVar3 = FUN_0308325c(&stack0x00000008,*(undefined8 *)StringLiteral_8915);
        if (unaff_x23 == (long *)0x0) {
LAB_033cd690:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
      }
      else {
        uVar3 = FUN_0308325c(&stack0x00000008,*(undefined8 *)StringLiteral_8915);
      }
      plVar1 = (long *)(**(code **)(*unaff_x23 + 0x1c8))(unaff_x23,unaff_w22,uVar3);
    }
    else {
      uVar3 = FUN_0308325c(&stack0x00000008,*(undefined8 *)StringLiteral_8915);
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
      }
      plVar1 = (long *)FUN_033c3158(uVar3);
    }
  }
  return plVar1;
}


