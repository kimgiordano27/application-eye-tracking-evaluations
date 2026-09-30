/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 059d019c
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x059d02e8) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
               (long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000078;
  
code_r0x059d019c:
  puVar2 = (undefined8 *)FUN_0406ae20(param_1,param_2,param_3);
  param_1 = unaff_x21;
  do {
    (*(code *)*puVar2)(&stack0x00000020,param_1,puVar2[1]);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar4 = *(uint *)(unaff_x20 + 0x18);
    if (uVar4 == *(uint *)(lVar3 + 0x18)) {
      FUN_059ce7b4();
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
    }
    plVar1 = in_stack_00000078;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    lVar3 = lVar3 + (long)(int)uVar4 * 0x20;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000058;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000050;
    *(undefined8 *)(lVar3 + 0x38) = in_stack_00000068;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000060;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *in_stack_00000078;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_059d012c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000078,*unaff_x22,0);
LAB_059d012c:
    uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    param_1 = in_stack_00000078;
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000078 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000078;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_059d0294;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_059d027c;
    }
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_0406aaec(param_2);
    }
    lVar3 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 == 0) break;
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != param_2) {
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
      if (uVar5 == 0) goto LAB_059d0194;
    }
    puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
LAB_059d0194:
  param_3 = 0;
  unaff_x21 = param_1;
  goto code_r0x059d019c;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_059d027c:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_059d02b0;
    }
  }
LAB_059d0294:
  puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000078,*(long *)PTR_DAT_08f65868,0);
LAB_059d02b0:
  (*(code *)*puVar2)(param_1,puVar2[1]);
  return;
}


