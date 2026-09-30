/*
FUNCTION_NAME: OVRPlugin.OVRP_1_126_0$$.cctor
ENTRY_POINT: 05d5433c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_126_0___cctor(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x24;
  uint uVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  puVar3 = PTR_DAT_06fb3530;
  puVar2 = PTR_DAT_06fb3528;
  if (0 < unaff_w21) {
    if (unaff_x22 == 0) goto LAB_05d544dc;
    FUN_052bca5c(&stack0x00000008);
    uVar8 = 1;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar5 = FUN_055c9450(&stack0x00000030,*(undefined8 *)puVar3), uVar4 = in_stack_00000048,
          uVar6 = in_stack_00000040, (uVar5 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar6 = FUN_05d53194(uVar6);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(uint *)(param_1 + 0x18) <= uVar8 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      *(undefined8 *)(param_1 + (long)(int)(uVar8 - 1) * 8 + 0x20) = uVar6;
      uVar6 = FUN_05d53194(uVar4);
      if (*(uint *)(param_1 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar1 = (long)(int)uVar8;
      uVar8 = uVar8 + 2;
      *(undefined8 *)(param_1 + lVar1 * 8 + 0x20) = uVar6;
    }
    FUN_055c9570(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_06f93e98;
  FUN_05b4a5e0((long)unaff_w21,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*unaff_x24);
  }
  FUN_05d54558();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  free(unaff_x20);
  if (param_1 != 0) {
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar5 = 0;
      uVar7 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        __ptr = *(void **)(param_1 + 0x20 + uVar5 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        free(__ptr);
        uVar7 = (ulong)*(uint *)(param_1 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(param_1 + 0x18));
    }
    return;
  }
LAB_05d544dc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


