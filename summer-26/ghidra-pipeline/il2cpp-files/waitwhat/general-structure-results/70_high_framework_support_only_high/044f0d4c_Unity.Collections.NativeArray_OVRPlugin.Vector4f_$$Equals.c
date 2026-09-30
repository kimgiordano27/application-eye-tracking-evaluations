/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Equals
ENTRY_POINT: 044f0d4c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x044f0e34) */
/* WARNING: Removing unreachable block (ram,0x044f0e30) */
/* WARNING: Removing unreachable block (ram,0x044f0e78) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Equals(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000058;
  
code_r0x044f0d4c:
  puVar2 = (undefined8 *)FUN_031c0d08(param_1,param_2,0);
  param_1 = unaff_x23;
  do {
    (*(code *)*puVar2)(&stack0x00000008,param_1,puVar2[1]);
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000018;
    FUN_044f0738();
    plVar1 = in_stack_00000058;
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar3 = *in_stack_00000058;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_044f0ce0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(in_stack_00000058,*unaff_x24,0);
LAB_044f0ce0:
    uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    param_1 = in_stack_00000058;
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000058 == (long *)0x0) goto LAB_044f0e24;
      lVar3 = *in_stack_00000058;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_044f0dfc;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_031c09d4(param_2);
    }
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    unaff_x23 = param_1;
    if (uVar4 == 0) goto code_r0x044f0d4c;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != param_2) {
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
      if (uVar4 == 0) goto code_r0x044f0d4c;
    }
    puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_044f0e18;
    }
  }
LAB_044f0dfc:
  puVar2 = (undefined8 *)FUN_031c0d08(in_stack_00000058,*(long *)PTR_DAT_070c2e88,0);
LAB_044f0e18:
  (*(code *)*puVar2)(param_1,puVar2[1]);
LAB_044f0e24:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


