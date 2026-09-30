/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_UnregisterOpenXREventHandler
ENTRY_POINT: 056a7d0c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_104_0__ovrp_UnregisterOpenXREventHandler(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  long in_stack_000000a8;
  
  uStack0000000000000008 = unaff_x19[1];
  uStack0000000000000000 = *unaff_x19;
  uStack0000000000000018 = unaff_x19[3];
  uStack0000000000000010 = unaff_x19[2];
  uStack0000000000000028 = unaff_x19[5];
  uStack0000000000000020 = unaff_x19[4];
  thunk_FUN_02dd3144(**(undefined8 **)(param_1 + 0xdf8));
  FUN_056a6420();
  lVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                              System_Threading_Tasks_TaskCompletionSource<GoogleSignInUser>_TypeInfo
                            );
  FUN_056a84f0();
  if ((in_stack_000000a8 != 0) && (*(long *)(in_stack_000000a8 + 0x40) != 0)) {
    FUN_04df85dc(*(long *)(in_stack_000000a8 + 0x40),unaff_w20,lVar1,
                 *(undefined8 *)System_Threading_Tasks_TaskCompletionSource<bool>_TypeInfo);
    if ((lVar1 != 0) && (in_stack_000000a8 != 0)) {
      lVar4 = *(long *)(in_stack_000000a8 + 0x30);
      if ((lVar4 == 0) ||
         (uVar2 = (**(code **)(lVar4 + 0x18))
                            (*(undefined8 *)(lVar4 + 0x40),unaff_w20,lVar1 + 0x18,lVar1 + 0x10,
                             *(undefined8 *)(in_stack_000000a8 + 0x38),*(undefined8 *)(lVar4 + 0x28)
                            ), (uVar2 & 1) == 0)) {
        uVar3 = 0;
      }
      else {
        if ((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) goto LAB_056a7df8;
        FUN_056a6df8();
        uVar3 = 1;
      }
      return uVar3;
    }
  }
LAB_056a7df8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


