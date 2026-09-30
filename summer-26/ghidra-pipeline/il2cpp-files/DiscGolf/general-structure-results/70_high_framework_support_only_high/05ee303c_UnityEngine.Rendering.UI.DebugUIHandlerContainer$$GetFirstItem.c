/*
FUNCTION_NAME: UnityEngine.Rendering.UI.DebugUIHandlerContainer$$GetFirstItem
ENTRY_POINT: 05ee303c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_Rendering_UI_DebugUIHandlerContainer__GetFirstItem
               (long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  if ((DAT_06dc3f86 & 1) == 0) {
    FUN_02d965b8(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                );
    DAT_06dc3f86 = 1;
  }
  uVar8 = param_3[1];
  uVar6 = *param_3;
  uVar10 = param_3[3];
  uVar9 = param_3[2];
  uVar2 = param_3[4];
  lVar5 = *(long *)(param_1 + 0x20);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  LeanTween__value();
  in_stack_00000030 = param_2[1];
  uVar7 = *param_2;
  in_stack_00000038 = param_2[2];
  LeanTween__value(&stack0x00000030,0);
  if (lVar5 != 0) {
    lVar3 = *(long *)(lVar5 + 0x10);
    lVar4 = *(long *)
             Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    in_stack_00000078 = in_stack_00000038;
    in_stack_00000070 = in_stack_00000030;
    in_stack_00000040 = uVar6;
    in_stack_00000048 = uVar8;
    in_stack_00000050 = uVar9;
    in_stack_00000058 = uVar10;
    in_stack_00000060 = uVar2;
    in_stack_00000068 = uVar7;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0x40;
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + 0x28) = uVar8;
        *(undefined8 *)(lVar3 + 0x20) = uVar6;
        *(undefined8 *)(lVar3 + 0x38) = uVar10;
        *(undefined8 *)(lVar3 + 0x30) = uVar9;
        *(undefined8 *)(lVar3 + 0x48) = uVar7;
        *(undefined8 *)(lVar3 + 0x40) = uVar2;
        *(undefined8 *)(lVar3 + 0x58) = in_stack_00000038;
        *(undefined8 *)(lVar3 + 0x50) = in_stack_00000030;
        LeanTween__value(lVar3 + 0x20,0);
      }
      else {
        in_stack_000000b8 = in_stack_00000038;
        in_stack_000000b0 = in_stack_00000030;
        in_stack_00000080 = uVar6;
        in_stack_00000088 = uVar8;
        in_stack_00000090 = uVar9;
        in_stack_00000098 = uVar10;
        in_stack_000000a0 = uVar2;
        in_stack_000000a8 = uVar7;
        FUN_0411b1ac(lVar5,&stack0x00000080,
                     *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


