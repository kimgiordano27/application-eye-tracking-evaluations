/*
FUNCTION_NAME: OVRManager.<>c$$<.cctor>b__470_0
ENTRY_POINT: 0366ff70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager_<>c__<_cctor>b__470_0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  if ((DAT_04833d86 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_105__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_106__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_107__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_108__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_103__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_04833d86 = 1;
  }
  puVar3 = Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_106__;
  puVar2 = Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_105__;
  puVar1 = Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__;
  in_stack_00000090 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  _fStack0000000000000080 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_03228a88(&stack0x00000008,*(long *)(param_1 + 0x130),
                 *(undefined8 *)Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_108__);
    memcpy(&stack0x00000050,&stack0x00000008,0x48);
    iVar5 = 0;
    while (uVar4 = FUN_02cbf6dc(&stack0x00000050,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
      if (in_stack_00000078._4_4_ * in_stack_00000078._4_4_ +
          fStack0000000000000080 * fStack0000000000000080 +
          fStack0000000000000084 * fStack0000000000000084 < **(float **)(*(long *)puVar1 + 0xb8)) {
        iVar5 = iVar5 + 1;
      }
    }
    FUN_02cbf6d8(&stack0x00000050,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x130) != 0) {
      return (float)iVar5 / (float)*(int *)(*(long *)(param_1 + 0x130) + 0x18) <=
             *(float *)(param_1 + 0x5c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


