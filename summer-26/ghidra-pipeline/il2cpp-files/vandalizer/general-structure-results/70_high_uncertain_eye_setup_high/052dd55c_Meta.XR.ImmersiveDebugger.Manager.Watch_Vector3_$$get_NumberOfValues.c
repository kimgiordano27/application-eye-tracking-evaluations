/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_NumberOfValues
ENTRY_POINT: 052dd55c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_NumberOfValues(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  undefined8 uVar7;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  lVar4 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4(lVar4);
  }
  if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2730();
  }
  puVar3 = (undefined8 *)thunk_FUN_0322f29c();
  in_stack_00000078 = puVar3[1];
  in_stack_00000070 = *puVar3;
  in_stack_00000088 = puVar3[3];
  in_stack_00000080 = puVar3[2];
  uVar7 = *(undefined8 *)((long)puVar3 + 0x1c);
  *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)((long)puVar3 + 0x24);
  *(undefined8 *)(unaff_x24 + 0x1c) = uVar7;
  in_stack_00000028 = unaff_x21[1];
  in_stack_00000020 = *unaff_x21;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  thunk_FUN_0322ed78(**(undefined8 **)(lVar4 + 0xc0),&stack0x00000020);
  in_stack_00000058 = (undefined4)in_stack_00000078;
  uStack000000000000005c = (undefined4)((ulong)in_stack_00000078 >> 0x20);
  in_stack_00000050 = in_stack_00000070;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4(lVar4);
  }
  thunk_FUN_0322ed78(**(undefined8 **)(lVar4 + 0xc0),&stack0x00000050);
  puVar1 = PTR_DAT_075d6ae8;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075d6ae8) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_052dd658;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_052dd658:
  uVar5 = (*(code *)*puVar3)();
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uStack0000000000000064 = *(undefined8 *)((long)unaff_x21 + 0x24);
    in_stack_00000050 = unaff_x21[2];
    in_stack_00000060 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0x1c) >> 0x20);
    in_stack_00000058 = (undefined4)unaff_x21[3];
    uStack000000000000005c = (undefined4)((ulong)unaff_x21[3] >> 0x20);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4();
    }
    thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000050);
    uStack0000000000000014 = *(undefined8 *)(unaff_x24 + 0x24);
    in_stack_00000040 = (undefined4)((ulong)*(undefined8 *)(unaff_x24 + 0x1c) >> 0x20);
    in_stack_00000028 = in_stack_00000078;
    in_stack_00000020 = in_stack_00000070;
    in_stack_00000038 = (undefined4)in_stack_00000088;
    uStack000000000000003c = (undefined4)((ulong)in_stack_00000088 >> 0x20);
    in_stack_00000030 = in_stack_00000080;
    uStack000000000000000c = uStack000000000000003c;
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uStack0000000000000044 = uStack0000000000000014;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4(lVar4);
    }
    thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10));
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_052dd75c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_052dd75c:
    uVar2 = (*(code *)*puVar3)();
  }
  return uVar2 & 1;
}


