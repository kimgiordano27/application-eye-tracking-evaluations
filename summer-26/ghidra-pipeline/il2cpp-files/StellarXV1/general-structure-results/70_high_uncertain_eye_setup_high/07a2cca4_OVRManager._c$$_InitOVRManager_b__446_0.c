/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__446_0
ENTRY_POINT: 07a2cca4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_<>c__<InitOVRManager>b__446_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  undefined8 uStack0000000000000030;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  uStack000000000000003c = (undefined4)param_2;
  uStack0000000000000040 = (undefined4)((ulong)param_2 >> 0x20);
  uStack0000000000000030 = param_1;
  FUN_079bc3b0(&stack0x00000070,param_4,4,&stack0x00000030,*(undefined8 *)(unaff_x19 + 0x108),0);
  uVar6 = in_stack_00000098;
  uVar5 = in_stack_00000090;
  uVar4 = in_stack_00000088;
  uVar3 = in_stack_00000080;
  uVar2 = in_stack_00000078;
  uVar1 = in_stack_00000070;
  if ((*(long *)(unaff_x19 + 0xd0) == 0) ||
     (plVar11 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092babe8) {
        puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_07a2cd38;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092babe8,0);
LAB_07a2cd38:
  in_stack_000000c8 = uVar2;
  in_stack_000000c0 = uVar1;
  in_stack_000000d8 = uVar4;
  in_stack_000000d0 = uVar3;
  in_stack_000000e8 = uVar6;
  in_stack_000000e0 = uVar5;
  (*(code *)*puVar7)(plVar11,&stack0x000000c0,puVar7[1]);
  return;
}


