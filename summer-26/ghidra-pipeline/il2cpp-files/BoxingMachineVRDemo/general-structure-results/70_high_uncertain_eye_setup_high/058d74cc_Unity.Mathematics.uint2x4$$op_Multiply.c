/*
FUNCTION_NAME: Unity.Mathematics.uint2x4$$op_Multiply
ENTRY_POINT: 058d74cc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Mathematics_uint2x4__op_Multiply(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long *unaff_x28;
  int iStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  int in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000148;
  
  FUN_0585d9b0(&stack0x00000030,*(undefined4 *)(param_1 + 0x248),in_stack_00000148);
  in_stack_000000c0 = in_stack_00000040;
  in_stack_000000b8 = in_stack_00000038;
  in_stack_000000b0 = in_stack_00000030;
  FUN_0585da04(&stack0x00000030,&stack0x000000b0,0);
  memcpy(&stack0x000000d0,&stack0x00000030,0x70);
  iVar5 = in_stack_000000a8;
  puVar4 = OVRPlugin_OVRP_1_102_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_101_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_100_0_TypeInfo;
  puVar1 = UnityEngine_UIElements_MouseOverEvent_<>c_TypeInfo;
  iStack0000000000000024 = in_stack_000000a8 + 1;
  do {
    uVar9 = FUN_0585da2c(&stack0x000000d0,0);
    uVar6 = in_stack_00000118;
    if ((uVar9 & 1) == 0) break;
    lVar10 = *unaff_x28;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar10 = *unaff_x28;
    }
    FUN_0436dca4(*(long *)(lVar10 + 0xb8) + 0xb8,*(undefined8 *)puVar2);
    iVar12 = 0;
    while( true ) {
      lVar10 = *unaff_x28;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar10 = *unaff_x28;
      }
      iVar8 = FUN_0436d8f4(*(long *)(lVar10 + 0xb8) + 0xb8,*(undefined8 *)puVar1);
      if (iVar8 <= iVar12) break;
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar10 = *(long *)(*unaff_x28 + 0xb8);
        iVar11 = *(int *)(lVar10 + 0x10);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar10 = *(long *)(*unaff_x28 + 0xb8);
        }
      }
      else {
        lVar10 = *(long *)(*unaff_x28 + 0xb8);
        iVar11 = *(int *)(lVar10 + 0x10);
      }
      lVar10 = FUN_0436d8fc(lVar10 + 0xb8,iVar12,*(undefined8 *)puVar4);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(lVar10 + 0x18))
                (*(undefined8 *)(lVar10 + 0x40),uVar6,in_stack_00000148,
                 *(undefined8 *)(lVar10 + 0x28));
      lVar10 = *unaff_x28;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar10);
        lVar10 = *unaff_x28;
      }
      if (iVar11 != *(int *)(*(long *)(lVar10 + 0xb8) + 0x10)) {
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar10);
        }
        cVar7 = FUN_058d53c8();
        if (cVar7 != '\0') break;
      }
      iVar12 = iVar12 + 1;
    }
    lVar10 = *unaff_x28;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar10 = *unaff_x28;
    }
    FUN_0436dcb0(*(long *)(lVar10 + 0xb8) + 0xb8,*(undefined8 *)puVar3);
  } while (iVar8 <= iVar12);
  in_stack_000000a8 = iVar5;
  FUN_0585e9d4(&stack0x000000d0,0);
  return;
}


