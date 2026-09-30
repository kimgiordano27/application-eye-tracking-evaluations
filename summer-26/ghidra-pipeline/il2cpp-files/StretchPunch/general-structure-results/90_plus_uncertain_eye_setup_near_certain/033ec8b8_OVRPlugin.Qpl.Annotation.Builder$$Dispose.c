/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Dispose
ENTRY_POINT: 033ec8b8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Dispose(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *unaff_x19;
  long unaff_x20;
  ulong uVar8;
  long *unaff_x23;
  uint unaff_w24;
  long unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  uint uVar9;
  long in_stack_00000000;
  int iStack0000000000000008;
  int iStack000000000000000c;
  ulong in_stack_00000010;
  uint in_stack_00000018;
  long in_stack_00000028;
  
code_r0x033ec8b8:
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar9 = unaff_w28;
LAB_033ec8bc:
  uVar8 = 0;
  uVar7 = 0;
  do {
    uVar1 = *(uint *)(unaff_x26 + uVar7 * 4);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar2 = in_stack_00000010;
    uVar6 = uVar8 + (ulong)uVar1 * (ulong)uVar5;
    uVar1 = (int)uVar7 + 1;
    uVar8 = uVar6 >> 0x20;
    *(int *)(unaff_x26 + uVar7 * 4) = (int)uVar6;
    uVar7 = (ulong)uVar1;
  } while (uVar1 <= unaff_w27);
  iVar3 = (int)(uVar6 >> 0x20);
  if (iVar3 != 0) {
    unaff_w27 = unaff_w27 + 1;
    *(int *)(unaff_x26 + (ulong)unaff_w27 * 4) = iVar3;
  }
  unaff_w28 = uVar9 - 9;
  if (unaff_w28 != 0 && 8 < (int)uVar9) goto LAB_033ec878;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar7 = *(ulong *)(unaff_x20 + 8);
  uVar5 = *(uint *)(unaff_x20 + 4);
  if (iStack0000000000000008 != iStack000000000000000c) {
    uVar8 = uVar2 - uVar7;
    uVar9 = in_stack_00000018 - uVar5;
    if (uVar2 < uVar7) {
      uVar9 = uVar9 - 1;
      if (uVar9 < in_stack_00000018) goto LAB_033ecafc;
    }
    else if (uVar5 <= in_stack_00000018) goto LAB_033ecafc;
    uVar7 = 3;
    do {
      iVar3 = *(int *)((long)&stack0x00000010 + uVar7 * 4);
      *(int *)((long)&stack0x00000010 + uVar7 * 4) = iVar3 + -1;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (iVar3 == 0);
    if (*(int *)((long)&stack0x00000010 + (ulong)unaff_w27 * 4) != 0) goto LAB_033ecafc;
    uVar7 = (ulong)(unaff_w27 - 1);
    if (unaff_w27 - 1 < 3) goto LAB_033ecb38;
    goto LAB_033ecb00;
  }
  uVar8 = uVar7 + uVar2;
  uVar9 = uVar5 + in_stack_00000018;
  if (CARRY8(uVar7,uVar2)) {
    uVar9 = uVar9 + 1;
    if (in_stack_00000018 < uVar9) goto LAB_033ecafc;
  }
  else if (in_stack_00000018 <= uVar9) goto LAB_033ecafc;
  uVar7 = 3;
  goto LAB_033eca9c;
LAB_033ec878:
  uVar5 = 1000000000;
  uVar9 = unaff_w28;
  if ((int)unaff_w28 < 9) goto code_r0x033ec888;
  goto LAB_033ec8bc;
code_r0x033ec888:
  lVar4 = *unaff_x23;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar4 = *unaff_x23;
  }
  param_1 = **(long **)(lVar4 + 0xb8);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(uint *)(param_1 + 0x18) <= unaff_w28) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  param_1 = param_1 + (ulong)unaff_w28 * 4;
  goto code_r0x033ec8b8;
LAB_033ecafc:
  uVar7 = (ulong)unaff_w27;
  goto LAB_033ecb00;
  while( true ) {
    uVar5 = (int)uVar7 + 1;
    uVar7 = (ulong)uVar5;
    if (unaff_w27 < uVar5) break;
LAB_033eca9c:
    iVar3 = *(int *)((long)&stack0x00000010 + uVar7 * 4);
    *(int *)((long)&stack0x00000010 + uVar7 * 4) = iVar3 + 1;
    if (iVar3 != -1) goto LAB_033ecafc;
  }
  *(undefined4 *)((long)&stack0x00000010 + (ulong)uVar5 * 4) = 1;
LAB_033ecb00:
  in_stack_00000010 = uVar8;
  in_stack_00000018 = uVar9;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  iVar3 = FUN_033f1594(&stack0x00000010,uVar7,unaff_w24 >> 0x10 & 0xff);
  unaff_w24 = unaff_w24 & 0xff00ffff | iVar3 << 0x10;
  uVar8 = in_stack_00000010;
  uVar9 = in_stack_00000018;
LAB_033ecb38:
  *unaff_x19 = unaff_w24;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  unaff_x19[1] = uVar9;
  *(ulong *)(unaff_x19 + 2) = uVar8;
  if (*(long *)(in_stack_00000000 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


