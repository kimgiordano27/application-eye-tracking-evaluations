/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_ImmersiveDebuggerEnabled
ENTRY_POINT: 04a2ce1c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ImmersiveDebuggerEnabled(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  long *plVar10;
  long unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  do {
    if (*(int *)(unaff_x19 + in_x9) == unaff_w23) {
      plVar10 = *(long **)(unaff_x22 + 0x30);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x20);
      lVar7 = unaff_x19 + (unaff_x24 & 0xffffffff) * (unaff_x20 & 0xffffffff);
      uVar3 = *(undefined8 *)(lVar7 + 8);
      uVar4 = *(undefined8 *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218(lVar5);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ImmersiveDebuggerDisplayAtStartup;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar10,lVar5,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ImmersiveDebuggerDisplayAtStartup:
      uVar8 = (*(code *)*puVar2)(plVar10,uVar3,uVar4,in_stack_00000008,in_stack_00000010,puVar2[1]);
      if ((uVar8 & 1) != 0) goto LAB_04a2cef4;
      param_1 = *(undefined8 *)(unaff_x28 + 0x18);
    }
    uVar6 = (uint)param_1;
    if ((int)uVar6 <= unaff_w29) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar3 = thunk_FUN_02b79644();
      uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
      FUN_04d7b3f4(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar3,in_stack_00000018);
    }
    if (uVar6 <= (uint)unaff_x24) {
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowInfoLog:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    unaff_w29 = unaff_w29 + 1;
    uVar1 = *(uint *)(unaff_x19 + (unaff_x24 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 4);
    unaff_x24 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      unaff_x24 = 0xffffffff;
LAB_04a2cef4:
      return unaff_x24 & 0xffffffff;
    }
    if (uVar6 <= uVar1) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowInfoLog;
    in_x9 = unaff_x24 * (unaff_x20 & 0xffffffff);
  } while( true );
}


