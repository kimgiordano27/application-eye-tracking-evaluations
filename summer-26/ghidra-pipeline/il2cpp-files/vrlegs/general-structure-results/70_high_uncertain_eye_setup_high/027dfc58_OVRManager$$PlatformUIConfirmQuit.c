/*
FUNCTION_NAME: OVRManager$$PlatformUIConfirmQuit
ENTRY_POINT: 027dfc58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__PlatformUIConfirmQuit(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((DAT_0412508a & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7210);
    DAT_0412508a = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((*(uint *)(param_1 + 0x30) >> 2 & 1) == 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffffe;
  }
  lVar2 = FUN_027df29c();
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  FUN_0267b3a8(0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *(long *)(lVar2 + 0x30);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  puVar1 = PTR_DAT_03cd7210;
  if (((lVar4 == 0) || (uVar3 = FUN_027dfedc(lVar4,param_4 & 1), (uVar3 & 1) != 0)) &&
     (uVar3 = FUN_027dfedc(param_1,param_4 & 1), (uVar3 & 1) != 0)) {
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar4 + 0x38);
    }
    if (lVar5 == *(long *)(param_1 + 0x38)) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027dff54(lVar2,0,&stack0x00000020);
      goto LAB_027dfd5c;
    }
  }
  if ((*(byte *)(param_1 + 0x30) >> 2 & 1) != 0) {
    param_1 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_027b3d9c(param_1,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027dffc0(param_1,param_4 & 1);
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000020 = lVar4;
LAB_027dfd5c:
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x18))
              (*(undefined8 *)(param_2 + 0x40),param_3,*(undefined8 *)(param_2 + 0x28));
    FUN_027dec2c(&stack0x00000020);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


