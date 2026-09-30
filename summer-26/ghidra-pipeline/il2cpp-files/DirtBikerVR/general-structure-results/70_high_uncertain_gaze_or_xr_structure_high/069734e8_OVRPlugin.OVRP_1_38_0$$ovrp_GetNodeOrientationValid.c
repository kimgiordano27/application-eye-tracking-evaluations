/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodeOrientationValid
ENTRY_POINT: 069734e8
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


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodeOrientationValid(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 *unaff_x27;
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
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xa60));
  FUN_03a8a718(PTR_DAT_0848ca68);
  FUN_03a8a718(PTR_DAT_084b73d8);
  FUN_03a8a718(PTR_DAT_084b73e0);
  FUN_03a8a718(PTR_DAT_084b73e8);
  FUN_03a8a718(PTR_DAT_084b73f0);
  *(undefined1 *)(unaff_x20 + 0x10a) = 1;
  puVar7 = PTR_DAT_084b73e0;
  puVar6 = PTR_DAT_084b73d0;
  puVar5 = PTR_DAT_084b73b0;
  puVar4 = PTR_DAT_0848ca68;
  puVar3 = PTR_DAT_0848ca60;
  puVar2 = PTR_DAT_0848ca50;
  puVar1 = PTR_DAT_0848ca18;
  uVar13 = *unaff_x27;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar13 = FUN_0675ff58(uVar13,0);
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  FUN_05b6c134(&stack0x00000070,uVar13,*(undefined8 *)puVar7,*(undefined8 *)puVar4);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_04963d38(uVar13,0,*(undefined8 *)puVar5,0);
  uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_05f23338(uVar8,0,*(undefined8 *)puVar6,0);
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  FUN_05b6c134(&stack0x00000060,uVar13,uVar8,*(undefined8 *)puVar3);
  puVar5 = PTR_DAT_084b73d8;
  puVar3 = PTR_DAT_084b73b8;
  puVar2 = PTR_DAT_084b7398;
  puVar1 = PTR_DAT_0848ca58;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0848ca58) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_06973680;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_06973680:
  (*(code *)*puVar9)();
  uVar13 = FUN_0675ff58(*unaff_x27,0);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  FUN_05b6c134(&stack0x00000050,uVar13,*(undefined8 *)puVar5,*(undefined8 *)puVar4);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca50);
  FUN_04963d38(uVar13,0,*(undefined8 *)puVar2,0);
  uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca18);
  FUN_05f23338(uVar8,0,*(undefined8 *)puVar3,0);
  puVar2 = PTR_DAT_0848ca60;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  FUN_05b6c134(&stack0x00000040,uVar13,uVar8,*(undefined8 *)PTR_DAT_0848ca60);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto OVRPlugin_OVRP_1_41_0___cctor;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_03ac43c4();
OVRPlugin_OVRP_1_41_0___cctor:
  puVar5 = PTR_DAT_084b73e8;
  puVar3 = PTR_DAT_084b73c0;
  (*(code *)*puVar9)();
  uVar13 = FUN_0675ff58(*unaff_x27,0);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  FUN_05b6c134(&stack0x00000030,uVar13,*(undefined8 *)PTR_DAT_084b73f0,*(undefined8 *)puVar4);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca50);
  FUN_04963d38(uVar13,0,*(undefined8 *)PTR_DAT_084b73a8,0);
  uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca18);
  FUN_05f23338(uVar8,0,*(undefined8 *)PTR_DAT_084b73c8,0);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_05b6c134(&stack0x00000020,uVar13,uVar8,*(undefined8 *)puVar2);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_069738a8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_069738a8:
  (*(code *)*puVar9)();
  uVar13 = FUN_0675ff58(*unaff_x27,0);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_05b6c134(&stack0x00000010,uVar13,*(undefined8 *)puVar5,*(undefined8 *)puVar4);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848cae0);
  FUN_04962b78(uVar13,0,*(undefined8 *)PTR_DAT_084b73a0,0);
  uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848cab0);
  FUN_05f228f0(uVar13,0,*(undefined8 *)puVar3,0);
  FUN_05b6c134();
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_069739a8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_03ac43c4();
LAB_069739a8:
  (*(code *)*puVar9)();
  return;
}


