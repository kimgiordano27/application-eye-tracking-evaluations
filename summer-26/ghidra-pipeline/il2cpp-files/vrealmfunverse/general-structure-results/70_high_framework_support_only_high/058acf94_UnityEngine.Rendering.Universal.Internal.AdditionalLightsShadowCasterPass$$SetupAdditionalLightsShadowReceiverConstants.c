/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass$$SetupAdditionalLightsShadowReceiverConstants
ENTRY_POINT: 058acf94
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass__SetupAdditionalLightsShadowReceiverConstants
               (void)

{
  short *psVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  short *unaff_x26;
  undefined8 *unaff_x27;
  ulong unaff_x28;
  undefined1 unaff_w29;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000028;
  uint in_stack_000000a8;
  
code_r0x058acf94:
  do {
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (unaff_w24 < *(int *)(unaff_x20 + 400)) {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      psVar1 = (short *)FUN_0499dea4(unaff_x20 + 0xd0,unaff_w24,*unaff_x27);
      if (*(char *)(unaff_x21 + 0x287) == '\0') {
        FUN_02b3c81c();
        *(undefined1 *)(unaff_x21 + 0x287) = unaff_w29;
      }
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (((*unaff_x26 != *psVar1) || (*(int *)(psVar1 + 8) != *(int *)(unaff_x26 + 8))) ||
         (*(int *)(psVar1 + 10) != *(int *)(unaff_x26 + 10))) {
        unaff_w24 = unaff_w24 + 1;
        goto code_r0x058acf94;
      }
    }
    else {
      unaff_w24 = -1;
    }
    if (*(int *)(*(long *)
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cc0680(&stack0x00000060,unaff_x22 & 0xffffffff,unaff_w24,0);
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x22 == unaff_x28) break;
    unaff_w24 = 0;
    unaff_x26 = (short *)(in_stack_00000028 + unaff_x22 * 0x18);
  } while( true );
  uVar2 = FUN_058aa534(in_stack_00000020,0);
  if ((uVar2 & 1) != 0) {
    in_stack_000000a8 = in_stack_000000a8 | 8;
  }
  if (*(int *)(unaff_x20 + 0x2a8) != 0) {
    uVar3 = FUN_03ab7248(in_stack_00000008 + 0x68,
                         *(int *)(unaff_x20 + 0x2a8) + *(int *)(unaff_x20 + 0x2a4) + -1,
                         *(undefined8 *)Method_UnityEngine_UIElements_ObjectListPool<string>_Get__);
    uVar2 = FUN_058a4b2c(&stack0x00000060,uVar3,0);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(in_stack_00000020 + 0x7b) = 0;
      iVar4 = *(int *)(unaff_x20 + 0x2a8) + -1;
      goto LAB_058ad114;
    }
  }
  FUN_03ab7378(in_stack_00000008 + 0x68,&stack0x00000060,
               *(undefined8 *)
                Method_UnityEngine_UIElements_ObjectListPool<IBindingRequest>_Release__);
  iVar4 = *(int *)(unaff_x20 + 0x2a8);
  *(int *)(unaff_x20 + 0x2a8) = iVar4 + 1;
  *(undefined1 *)(in_stack_00000020 + 0x7b) = 1;
LAB_058ad114:
  *(int *)(in_stack_00000020 + 0x24) = iVar4;
  return;
}


