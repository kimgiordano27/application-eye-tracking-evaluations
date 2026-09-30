/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$.cctor
ENTRY_POINT: 069735f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_38_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  undefined8 *unaff_x27;
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
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  FUN_05b6c134();
  puVar4 = PTR_DAT_084b73d8;
  puVar3 = PTR_DAT_084b73b8;
  puVar2 = PTR_DAT_084b7398;
  puVar1 = PTR_DAT_0848ca58;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 06973618 to 06a73643 has its CatchHandler @ 06973808 */
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
                    /* try { // try from 06973644 to 06a7364b has its CatchHandler @ 069737fc */
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
                    /* try { // try from 0697364c to 06a737e7 has its CatchHandler @ 069733cc */
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0848ca58) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_06973680;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4();
LAB_06973680:
  (*(code *)*puVar5)();
  uVar6 = FUN_0675ff58(*unaff_x27,0);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  FUN_05b6c134(&stack0x00000050,uVar6,*(undefined8 *)puVar4,*unaff_x29);
  uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca50);
  FUN_04963d38(uVar6,0,*(undefined8 *)puVar2,0);
  uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca18);
  FUN_05f23338(uVar7,0,*(undefined8 *)puVar3,0);
  puVar2 = PTR_DAT_0848ca60;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  FUN_05b6c134(&stack0x00000040,uVar6,uVar7,*(undefined8 *)PTR_DAT_0848ca60);
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto OVRPlugin_OVRP_1_41_0___cctor;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4();
OVRPlugin_OVRP_1_41_0___cctor:
  puVar4 = PTR_DAT_084b73e8;
  puVar3 = PTR_DAT_084b73c0;
  (*(code *)*puVar5)();
  uVar6 = FUN_0675ff58(*unaff_x27,0);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  FUN_05b6c134(&stack0x00000030,uVar6,*(undefined8 *)PTR_DAT_084b73f0,*unaff_x29);
  uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca50);
  FUN_04963d38(uVar6,0,*(undefined8 *)PTR_DAT_084b73a8,0);
  uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ca18);
  FUN_05f23338(uVar7,0,*(undefined8 *)PTR_DAT_084b73c8,0);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_05b6c134(&stack0x00000020,uVar6,uVar7,*(undefined8 *)puVar2);
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_069738a8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4();
LAB_069738a8:
  (*(code *)*puVar5)();
  uVar6 = FUN_0675ff58(*unaff_x27,0);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_05b6c134(&stack0x00000010,uVar6,*(undefined8 *)puVar4,*unaff_x29);
  uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848cae0);
  FUN_04962b78(uVar6,0,*(undefined8 *)PTR_DAT_084b73a0,0);
  uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848cab0);
  FUN_05f228f0(uVar6,0,*(undefined8 *)puVar3,0);
  FUN_05b6c134();
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_069739a8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4();
LAB_069739a8:
  (*(code *)*puVar5)();
  return;
}


