/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetEnumerator
ENTRY_POINT: 06e2631c
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06e2643c) */
/* WARNING: Removing unreachable block (ram,0x06e26438) */
/* WARNING: Removing unreachable block (ram,0x06e26480) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetEnumerator(long param_1)

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
  long *in_stack_000000a8;
  
  do {
    param_1 = FUN_04980b34(param_1);
    do {
      lVar3 = *unaff_x23;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == param_1) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_06e2636c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_04980e68(unaff_x23,param_1,0);
LAB_06e2636c:
      (*(code *)*puVar2)(unaff_x23,puVar2[1]);
      memcpy(&stack0x00000058,&stack0x00000000,0x48);
      FUN_06e25d38();
      plVar1 = in_stack_000000a8;
      if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar3 = *in_stack_000000a8;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_06e262e8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_04980e68(in_stack_000000a8,*unaff_x24,0);
LAB_06e262e8:
      uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      plVar1 = in_stack_000000a8;
      if ((uVar4 & 1) == 0) {
        if (in_stack_000000a8 == (long *)0x0) goto LAB_06e2642c;
        lVar3 = *in_stack_000000a8;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_06e26404;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_06e263ec;
      }
      if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      param_1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      unaff_x23 = in_stack_000000a8;
    } while ((*(ushort *)(param_1 + 0x135) & 1) != 0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_06e263ec:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_06e26420;
    }
  }
LAB_06e26404:
  puVar2 = (undefined8 *)FUN_04980e68(in_stack_000000a8,*(long *)PTR_DAT_0ac09b90,0);
LAB_06e26420:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_06e2642c:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


