/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartBodyTracking
ENTRY_POINT: 07a6dde4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  puVar4 = PTR_DAT_092f0ea0;
  if ((DAT_09895701 & 1) == 0) {
    FUN_04077588(PTR_DAT_092f0ea0);
    FUN_04077588(PTR_DAT_092883c8);
    FUN_04077588(PTR_DAT_09288408);
    FUN_04077588(PTR_DAT_09288428);
    FUN_04077588(PTR_DAT_09288470);
    FUN_04077588(PTR_DAT_092884a0);
    FUN_04077588(PTR_DAT_092b6c98);
    FUN_04077588(PTR_DAT_092884c8);
    FUN_04077588(PTR_DAT_09287ee8);
    FUN_04077588(PTR_DAT_092acc38);
    DAT_09895701 = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar2 = PTR_DAT_092b6c98;
  pvVar7 = (void *)FUN_07a6cd4c(param_1);
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_06efc490(param_2,*(undefined8 *)PTR_DAT_09288408);
  }
  lVar8 = FUN_04077674(*(undefined8 *)puVar2,iVar6 << 1);
  puVar3 = PTR_DAT_09288470;
  puVar2 = PTR_DAT_09288428;
  if (0 < iVar6) {
    if (param_2 == 0) goto LAB_07a6e08c;
    FUN_06efcc0c(&stack0x00000008,param_2,*(undefined8 *)PTR_DAT_092883c8);
    uVar12 = 1;
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000030;
    while (uVar9 = FUN_05385f24(&stack0x00000030,*(undefined8 *)puVar3), uVar5 = in_stack_00000048,
          uVar10 = in_stack_00000040, (uVar9 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar10 = FUN_07a6cd4c(uVar10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar12 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined8 *)(lVar8 + (long)(int)(uVar12 - 1) * 8 + 0x20) = uVar10;
      uVar10 = FUN_07a6cd4c(uVar5);
      if (*(uint *)(lVar8 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar1 = (long)(int)uVar12;
      uVar12 = uVar12 + 2;
      *(undefined8 *)(lVar8 + lVar1 * 8 + 0x20) = uVar10;
    }
    FUN_05386044(&stack0x00000030,*(undefined8 *)puVar2);
  }
  puVar2 = PTR_DAT_092acc38;
  uVar10 = FUN_076d5104((long)iVar6,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)puVar4);
  }
  FUN_07a6e0f4(pvVar7,lVar8,uVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  free(pvVar7);
  if (lVar8 != 0) {
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar9 = 0;
      uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        pvVar7 = *(void **)(lVar8 + 0x20 + uVar9 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        free(pvVar7);
        uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    return;
  }
LAB_07a6e08c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


