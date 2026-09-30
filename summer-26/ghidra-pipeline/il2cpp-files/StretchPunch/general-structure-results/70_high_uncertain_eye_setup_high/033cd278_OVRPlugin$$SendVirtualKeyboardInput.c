/*
FUNCTION_NAME: OVRPlugin$$SendVirtualKeyboardInput
ENTRY_POINT: 033cd278
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__SendVirtualKeyboardInput(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint unaff_w21;
  long *unaff_x22;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  
  if ((int)param_1 != 0) {
    uStack0000000000000020 = param_2;
    uStack0000000000000030 = param_1;
    if (unaff_x19 == 0) {
LAB_033cd3f4:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (((int)param_1 == 1) && (*(long *)(unaff_x19 + 0x18) == 0)) {
      plVar2 = (long *)FUN_03083224(&stack0x00000020,0,*(undefined8 *)StringLiteral_8929);
      if (plVar2 == (long *)0x0) goto LAB_033cd3f4;
      lVar3 = (**(code **)(*plVar2 + 0x3b8))(plVar2,*(undefined8 *)(*plVar2 + 0x3c0));
      if (lVar3 == 0) {
        return plVar2;
      }
      if (*(long *)(lVar3 + 0x18) == 0) {
        return plVar2;
      }
    }
    if ((unaff_w21 >> 0x10 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) {
        if (*(int *)(*(long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                    + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        unaff_x22 = (long *)FUN_033ad654(0);
        uVar4 = FUN_0308325c(&stack0x00000020,*(undefined8 *)StringLiteral_8914);
        if (unaff_x22 == (long *)0x0) goto LAB_033cd3f4;
      }
      else {
        uVar4 = FUN_0308325c(&stack0x00000020,*(undefined8 *)StringLiteral_8914);
      }
      plVar2 = (long *)(**(code **)(*unaff_x22 + 0x1b8))(unaff_x22,unaff_w21,uVar4);
    }
    else {
      uVar4 = FUN_0308325c(&stack0x00000020,*(undefined8 *)StringLiteral_8914);
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
      }
      plVar2 = (long *)FUN_033c2da8(uVar4);
    }
    if (plVar2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)StringLiteral_2471 + 0x130);
      if (bVar1 <= *(byte *)(*plVar2 + 0x130)) {
        if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)StringLiteral_2471) {
          return plVar2;
        }
        return (long *)0x0;
      }
    }
  }
  return (long *)0x0;
}


