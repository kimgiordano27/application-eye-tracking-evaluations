/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceComponentStatus
ENTRY_POINT: 051eb160
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceComponentStatus(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char in_NG;
  char in_OV;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x19;
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
  
  puVar3 = PTR_DAT_065e42f0;
  puVar2 = PTR_DAT_065e42e8;
  if (in_NG == in_OV) {
    if (unaff_x22 == 0) goto LAB_051eb2f8;
    FUN_046796b0(&stack0x00000008);
    uVar8 = 1;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar5 = FUN_048a9bcc(&stack0x00000030,*(undefined8 *)puVar3), uVar4 = in_stack_00000048,
          uVar6 = in_stack_00000040, (uVar5 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_051e9fc0(uVar6);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar8 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(undefined8 *)(unaff_x19 + (long)(int)(uVar8 - 1) * 8 + 0x20) = uVar6;
      uVar6 = FUN_051e9fc0(uVar4);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      lVar1 = (long)(int)uVar8;
      uVar8 = uVar8 + 2;
      *(undefined8 *)(unaff_x19 + lVar1 * 8 + 0x20) = uVar6;
    }
    FUN_048a9ce0(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_065c9178;
  FUN_04f8ad80((long)unaff_w21,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*unaff_x24);
  }
  FUN_051eb374();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  free(unaff_x20);
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar5 = 0;
      uVar7 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        __ptr = *(void **)(unaff_x19 + 0x20 + uVar5 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        free(__ptr);
        uVar7 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return;
  }
LAB_051eb2f8:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


