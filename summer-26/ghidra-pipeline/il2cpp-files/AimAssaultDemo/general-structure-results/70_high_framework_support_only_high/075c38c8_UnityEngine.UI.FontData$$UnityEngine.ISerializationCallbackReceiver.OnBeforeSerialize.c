/*
FUNCTION_NAME: UnityEngine.UI.FontData$$UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
ENTRY_POINT: 075c38c8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


int UnityEngine_UI_FontData__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
              (long param_1,long param_2)

{
  bool in_CY;
  int iVar1;
  long lVar2;
  long in_x9;
  long in_x10;
  long *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  int iVar3;
  ulong uVar4;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  int in_stack_000000e0;
  
  if (in_CY) {
    in_stack_000000c8 = in_stack_000000a8;
    in_stack_000000c0 = in_stack_000000a0;
    in_stack_000000d8 = in_stack_000000b8;
    in_stack_000000d0 = in_stack_000000b0;
    in_stack_000000e0 = 0;
    FUN_049f0fa8(param_2,&stack0x000000c0,
                 *(undefined8 *)(*(long *)(*(long *)(in_x10 + 0x20) + 0xc0) + 0x70));
  }
  else {
    *(int *)(param_2 + 0x18) = (int)in_x9 + 1;
    param_1 = param_1 + in_x9 * 0x28;
    *(undefined8 *)(param_1 + 0x28) = in_stack_000000a8;
    *(undefined8 *)(param_1 + 0x20) = in_stack_000000a0;
    *(undefined8 *)(param_1 + 0x38) = in_stack_000000b8;
    *(undefined8 *)(param_1 + 0x30) = in_stack_000000b0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = unaff_w22;
    thunk_FUN_037aeb94(param_1 + 0x20,0);
  }
  lVar2 = *(long *)(unaff_x20 + 8);
  if (lVar2 == 0) {
    iVar3 = 0;
LAB_075c3980:
    if (*unaff_x19 != 0) {
      in_stack_000000c8 = in_stack_00000088;
      in_stack_000000c0 = in_stack_00000080;
      in_stack_000000d8 = in_stack_00000098;
      in_stack_000000d0 = in_stack_00000090;
      in_stack_000000e0 = iVar3;
      FUN_049f0c50(*unaff_x19,unaff_w21,&stack0x000000c0,
                   *(undefined8 *)OVRPlugin_OVRP_1_49_0_TypeInfo);
      return iVar3 + 1;
    }
  }
  else {
    uVar4 = 0;
    iVar3 = 0;
    do {
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar4) goto LAB_075c3980;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      uVar4 = uVar4 + 1;
      iVar1 = FUN_075c37d0();
      lVar2 = *(long *)(unaff_x20 + 8);
      iVar3 = iVar1 + iVar3;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


