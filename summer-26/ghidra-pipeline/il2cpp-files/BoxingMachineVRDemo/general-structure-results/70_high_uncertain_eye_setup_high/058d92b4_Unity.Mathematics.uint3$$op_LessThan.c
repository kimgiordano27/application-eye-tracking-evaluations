/*
FUNCTION_NAME: Unity.Mathematics.uint3$$op_LessThan
ENTRY_POINT: 058d92b4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Mathematics_uint3__op_LessThan(void)

{
  undefined *puVar1;
  int iVar2;
  int unaff_w19;
  int iVar3;
  long unaff_x20;
  long unaff_x21;
  long in_stack_000001d0;
  
  FUN_02d6084c();
  *(undefined1 *)(unaff_x20 + 0xb37) = 1;
  puVar1 = OVRPlugin_OVRP_1_38_0_TypeInfo;
  if (*(int *)(unaff_x21 + 0x128) == unaff_w19) {
    iVar3 = *(int *)(unaff_x21 + 300);
  }
  else {
    if (0 < *(int *)(unaff_x21 + 0x138)) {
      iVar3 = 0;
      do {
        iVar2 = FUN_03794e9c((int *)(unaff_x21 + 0x138),iVar3,*(undefined8 *)puVar1);
        if (iVar2 == unaff_w19) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(unaff_x21 + 0x138));
    }
    puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
    if (0 < *(int *)(unaff_x21 + 0x160)) {
      iVar3 = 0;
      do {
        FUN_03799508((int *)(unaff_x21 + 0x160),iVar3,*(undefined8 *)puVar1);
        if (in_stack_000001d0 == 0) {
LAB_058d93a4:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(int *)(in_stack_000001d0 + 400) == unaff_w19) {
          return iVar3;
        }
        if (*(int *)(in_stack_000001d0 + 400) != 0) {
          if (*(long *)(in_stack_000001d0 + 0x188) == 0) goto LAB_058d93a4;
          if (*(int *)(*(long *)(in_stack_000001d0 + 0x188) + 0xe0) == unaff_w19) {
            return iVar3;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(unaff_x21 + 0x160));
    }
    iVar3 = -1;
  }
  return iVar3;
}


