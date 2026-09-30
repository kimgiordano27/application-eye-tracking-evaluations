/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$GetState
ENTRY_POINT: 08a188e8
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__GetState(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long in_x11;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  undefined8 in_stack_00000018;
  
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == **(long **)(in_x11 + 0xdc0)) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x16) * 0x10 + 0x138);
        goto LAB_08a1895c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_08a1895c:
  lVar2 = (*(code *)*puVar1)();
  if (lVar2 != 0) {
    in_stack_00000018 = FUN_0775b55c(lVar2,*(undefined8 *)PTR_DAT_0ac0b070);
    uVar3 = FUN_07683eec(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac0b068);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
      thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a21664(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      FUN_07683f2c(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac0b060);
      lVar2 = *unaff_x23;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_08c7f478(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


