/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 059d0134
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x059d02e8) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
               (code *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
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
  
  while (uVar2 = (*param_1)(param_2,param_3), plVar1 = in_stack_00000078, (uVar2 & 1) != 0) {
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0406aaec(lVar4);
    }
    lVar5 = *plVar1;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_059d01b0;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar1,lVar4,0);
LAB_059d01b0:
    (*(code *)*puVar3)(&stack0x00000020,plVar1,puVar3[1]);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar6 = *(uint *)(unaff_x20 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      FUN_059ce7b4();
      uVar6 = *(uint *)(unaff_x20 + 0x18);
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
    }
    param_2 = in_stack_00000078;
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    lVar4 = lVar4 + (long)(int)uVar6 * 0x20;
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000058;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000050;
    *(undefined8 *)(lVar4 + 0x38) = in_stack_00000068;
    *(undefined8 *)(lVar4 + 0x30) = in_stack_00000060;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *in_stack_00000078;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_059d012c;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000078,*unaff_x22,0);
LAB_059d012c:
    param_1 = (code *)*puVar3;
    param_3 = puVar3[1];
  }
  if (in_stack_00000078 != (long *)0x0) {
    lVar4 = *in_stack_00000078;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_059d02b0;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000078,*(long *)PTR_DAT_08f65868,0);
LAB_059d02b0:
    (*(code *)*puVar3)(plVar1,puVar3[1]);
  }
  return;
}


