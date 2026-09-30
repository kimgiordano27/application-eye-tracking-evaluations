/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 0697356c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 uVar9;
  long unaff_x21;
  undefined8 *puVar10;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *puVar11;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *puVar12;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
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
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  puVar12 = *(undefined8 **)(unaff_x26 + 0xa18);
  puVar10 = *(undefined8 **)(unaff_x21 + 0x3d0);
  puVar11 = *(undefined8 **)(unaff_x24 + 0xa60);
  uVar9 = *unaff_x27;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar9 = FUN_0675ff58(uVar9,0);
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  FUN_05b6c134(&stack0x00000070,uVar9,*unaff_x23,*unaff_x25);
                    /* try { // try from 069735b4 to 06a735db has its CatchHandler @ 0697380c */
  uVar9 = thunk_FUN_03ac74bc(*unaff_x28);
  FUN_04963d38(uVar9,0,*unaff_x22,0);
  uVar5 = thunk_FUN_03ac74bc(*puVar12);
  FUN_05f23338(uVar5,0,*puVar10,0);
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  FUN_05b6c134(&stack0x00000060,uVar9,uVar5,*puVar11);
  puVar4 = PTR_DAT_084b73d8;
  puVar3 = PTR_DAT_084b73b8;
  puVar2 = PTR_DAT_084b7398;
  puVar1 = PTR_DAT_0848ca58;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0848ca58) {
        puVar10 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_06973680;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_06973680:
  (*(code *)*puVar10)();
  uVar9 = FUN_0675ff58(*unaff_x27,0);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  FUN_05b6c134(&stack0x00000050,uVar9,*(undefined8 *)puVar4,*unaff_x25);
  uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca50);
  FUN_04963d38(uVar9,0,*(undefined8 *)puVar2,0);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca18);
  FUN_05f23338(uVar5,0,*(undefined8 *)puVar3,0);
  puVar2 = PTR_DAT_0848ca60;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  FUN_05b6c134(&stack0x00000040,uVar9,uVar5,*(undefined8 *)PTR_DAT_0848ca60);
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar10 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto OVRPlugin_OVRP_1_41_0___cctor;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4();
OVRPlugin_OVRP_1_41_0___cctor:
  puVar4 = PTR_DAT_084b73e8;
  puVar3 = PTR_DAT_084b73c0;
  (*(code *)*puVar10)();
  uVar9 = FUN_0675ff58(*unaff_x27,0);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  FUN_05b6c134(&stack0x00000030,uVar9,*(undefined8 *)PTR_DAT_084b73f0,*unaff_x25);
  uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca50);
  FUN_04963d38(uVar9,0,*(undefined8 *)PTR_DAT_084b73a8,0);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca18);
  FUN_05f23338(uVar5,0,*(undefined8 *)PTR_DAT_084b73c8,0);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_05b6c134(&stack0x00000020,uVar9,uVar5,*(undefined8 *)puVar2);
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar10 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_069738a8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_069738a8:
  (*(code *)*puVar10)();
  uVar9 = FUN_0675ff58(*unaff_x27,0);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_05b6c134(&stack0x00000010,uVar9,*(undefined8 *)puVar4,*unaff_x25);
  uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848cae0);
  FUN_04962b78(uVar9,0,*(undefined8 *)PTR_DAT_084b73a0,0);
  uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848cab0);
  FUN_05f228f0(uVar9,0,*(undefined8 *)puVar3,0);
  FUN_05b6c134();
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar10 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_069739a8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar10 = (undefined8 *)FUN_03ac43c4();
LAB_069739a8:
  (*(code *)*puVar10)();
  return;
}


