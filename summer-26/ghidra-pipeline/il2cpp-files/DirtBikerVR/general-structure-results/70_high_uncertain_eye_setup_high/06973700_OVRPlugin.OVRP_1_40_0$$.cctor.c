/*
FUNCTION_NAME: OVRPlugin.OVRP_1_40_0$$.cctor
ENTRY_POINT: 06973700
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_40_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  undefined8 *unaff_x24;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_05f23338();
  puVar1 = PTR_DAT_0848ca60;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  FUN_05b6c134(&stack0x00000040);
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x28) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto OVRPlugin_OVRP_1_41_0___cctor;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4();
OVRPlugin_OVRP_1_41_0___cctor:
  puVar3 = PTR_DAT_084b73e8;
  puVar2 = PTR_DAT_084b73c0;
  (*(code *)*puVar4)();
  uVar5 = FUN_0675ff58(*unaff_x24,0);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  FUN_05b6c134(&stack0x00000030,uVar5,*(undefined8 *)PTR_DAT_084b73f0,*unaff_x29);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca50);
  FUN_04963d38(uVar5,0,*(undefined8 *)PTR_DAT_084b73a8,0);
  uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca18);
  FUN_05f23338(uVar6,0,*(undefined8 *)PTR_DAT_084b73c8,0);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_05b6c134(&stack0x00000020,uVar5,uVar6,*(undefined8 *)puVar1);
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x28) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_069738a8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4();
LAB_069738a8:
  (*(code *)*puVar4)();
  uVar5 = FUN_0675ff58(*unaff_x24,0);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_05b6c134(&stack0x00000010,uVar5,*(undefined8 *)puVar3,*unaff_x29);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848cae0);
  FUN_04962b78(uVar5,0,*(undefined8 *)PTR_DAT_084b73a0,0);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848cab0);
  FUN_05f228f0(uVar5,0,*(undefined8 *)puVar2,0);
  FUN_05b6c134();
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x28) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_069739a8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4();
LAB_069739a8:
  (*(code *)*puVar4)();
  return;
}


