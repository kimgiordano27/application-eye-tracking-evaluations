/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_79
ENTRY_POINT: 01dc3df8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__819_79(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if ((DAT_0247daba & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bbc8);
    FUN_00fdc2e4(PTR_DAT_0234c0c0);
    FUN_00fdc2e4(PTR_DAT_0234c848);
    FUN_00fdc2e4(PTR_DAT_0235abe0);
    DAT_0247daba = 1;
  }
  if (param_2 != 0) {
    plVar5 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234c848);
    FUN_01dc9010(plVar5,*(int *)(param_2 + 0x18) * 3,0x7fffffff);
    puVar4 = PTR_DAT_0235abe0;
    puVar3 = PTR_DAT_0234c0c0;
    puVar2 = PTR_DAT_0234bbc8;
    if (0 < *(int *)(param_2 + 0x18)) {
      if (plVar5 == (long *)0x0) goto LAB_01dc3e88;
      uVar9 = 0;
      do {
        if (0 < (int)plVar5[4] + *(int *)((long)plVar5 + 0x24)) {
          FUN_01dc37f8(plVar5,0x20);
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar6 = FUN_01d22d48(0);
        if (*(uint *)(param_2 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        in_stack_00000008._4_1_ = *(undefined1 *)(param_2 + 0x20 + uVar9);
        uVar7 = thunk_FUN_0103fd0c(*(undefined8 *)puVar2,(long)&stack0x00000008 + 4);
        uVar8 = *(undefined8 *)puVar4;
        in_stack_00000038 = 0;
        in_stack_00000030 = 0;
        in_stack_00000048 = 0;
        in_stack_00000040 = 0;
        FUN_01d58088(&stack0x00000030,uVar7,0);
        in_stack_00000018 = in_stack_00000038;
        in_stack_00000010 = in_stack_00000030;
        in_stack_00000028 = in_stack_00000048;
        in_stack_00000020 = in_stack_00000040;
        FUN_01dcb520(plVar5,uVar6,uVar8,&stack0x00000010);
        uVar1 = uVar9 + 1;
      } while ((uVar9 < 0x13) && (uVar9 = uVar1, (long)uVar1 < (long)*(int *)(param_2 + 0x18)));
      if ((int)uVar1 == 0x14) {
        uVar6 = thunk_FUN_010303a8(PTR_DAT_0235aba8);
        FUN_01dc3848(plVar5,uVar6);
      }
    }
    FUN_00e5db80(plVar5);
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    uVar7 = thunk_FUN_010303a8(PTR_DAT_0235abe8);
    uVar6 = FUN_01c42574(uVar7,uVar6,0);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar7 = thunk_FUN_010400dc();
    uVar8 = thunk_FUN_010303a8(PTR_DAT_0235abf0);
    FUN_01c5e198(uVar7,uVar6,uVar8,0);
    uVar6 = thunk_FUN_010303a8(PTR_DAT_0235abf8);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar7,uVar6);
  }
LAB_01dc3e88:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


