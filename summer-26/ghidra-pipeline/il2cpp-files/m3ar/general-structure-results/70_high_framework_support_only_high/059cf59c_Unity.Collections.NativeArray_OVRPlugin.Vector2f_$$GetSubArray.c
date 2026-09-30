/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetSubArray
ENTRY_POINT: 059cf59c
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x059cf6fc) */
/* WARNING: Removing unreachable block (ram,0x059cf6f8) */
/* WARNING: Removing unreachable block (ram,0x059cf740) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetSubArray
               (long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_00000058;
  
code_r0x059cf59c:
  puVar1 = (undefined8 *)FUN_0406ae20(param_1,param_2,param_3);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x23,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      if (in_stack_00000058 == (long *)0x0) goto LAB_059cf6ec;
      lVar3 = *in_stack_00000058;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_059cf6c4;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_059cf6ac;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec(lVar3);
    }
    lVar4 = *in_stack_00000058;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_059cf634;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000058,lVar3,0);
LAB_059cf634:
    (*(code *)*puVar1)(in_stack_00000058,puVar1[1]);
    FUN_059cf01c();
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *in_stack_00000058;
    param_2 = *unaff_x24;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    unaff_x23 = in_stack_00000058;
    if (uVar2 == 0) break;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != param_2) {
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
      if (uVar2 == 0) goto LAB_059cf594;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
LAB_059cf594:
  param_3 = 0;
  param_1 = in_stack_00000058;
  goto code_r0x059cf59c;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_059cf6ac:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_059cf6e0;
    }
  }
LAB_059cf6c4:
  puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000058,*(long *)PTR_DAT_08f65868,0);
LAB_059cf6e0:
  (*(code *)*puVar1)(in_stack_00000058,puVar1[1]);
LAB_059cf6ec:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


