/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$UnregisterRaycaster
ENTRY_POINT: 05642eac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__UnregisterRaycaster
               (long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  int in_w8;
  long unaff_x23;
  long lVar2;
  undefined8 *puVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  long in_stack_00000038;
  
  if (param_2 == 0) {
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  else {
    lVar2 = (long)in_w8 - (long)(int)param_4;
    puVar3 = (undefined8 *)(param_2 + (long)(int)param_4 * 0x14 + 0x20);
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
        if (*(long *)(unaff_x23 + 0x28) == in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        goto LAB_05642f88;
      }
      in_stack_00000030 = *(undefined4 *)(puVar3 + 2);
      in_stack_00000028 = puVar3[1];
      in_stack_00000020 = *puVar3;
      uVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,&stack0x00000020);
      if ((uVar1 & 1) != 0) goto LAB_05642f34;
      lVar2 = lVar2 + -1;
      puVar3 = (undefined8 *)((long)puVar3 + 0x14);
      param_4 = param_4 + 1;
    } while (lVar2 != 0);
    param_4 = 0xffffffff;
LAB_05642f34:
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000038) {
      return param_4;
    }
  }
LAB_05642f88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


