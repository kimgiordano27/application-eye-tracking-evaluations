/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$.cctor
ENTRY_POINT: 07410628
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_45_0___cctor(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *unaff_x20;
  void *__ptr;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  uint uVar10;
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
  
  iVar5 = FUN_06a4e050(param_2,*param_1);
  lVar6 = FUN_03c8f97c(*unaff_x23,iVar5 << 1);
  puVar3 = PTR_DAT_08e82de8;
  puVar2 = PTR_DAT_08e82de0;
  if (0 < iVar5) {
    if (unaff_x22 == 0) goto LAB_074107e8;
    FUN_06a4e7b0(&stack0x00000008);
    uVar10 = 1;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    while (uVar7 = FUN_04aa6440(&stack0x00000030,*(undefined8 *)puVar3), uVar4 = in_stack_00000048,
          uVar8 = in_stack_00000040, (uVar7 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar8 = FUN_0740f4a0(uVar8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar10 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      *(undefined8 *)(lVar6 + (long)(int)(uVar10 - 1) * 8 + 0x20) = uVar8;
      uVar8 = FUN_0740f4a0(uVar4);
      if (*(uint *)(lVar6 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar1 = (long)(int)uVar10;
      uVar10 = uVar10 + 2;
      *(undefined8 *)(lVar6 + lVar1 * 8 + 0x20) = uVar8;
    }
    FUN_04aa6560(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_08e80830;
  FUN_0715d344((long)iVar5,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*unaff_x24);
  }
  FUN_07410864();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  free(unaff_x20);
  if (lVar6 != 0) {
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar7 = 0;
      uVar9 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        __ptr = *(void **)(lVar6 + 0x20 + uVar7 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        free(__ptr);
        uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    return;
  }
LAB_074107e8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


