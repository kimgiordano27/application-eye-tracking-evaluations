/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_Value
ENTRY_POINT: 052ddb94
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_Value(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x24;
  long *unaff_x25;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  iVar1 = (*(code *)*param_1)();
  if (iVar1 == 0) {
    uStack0000000000000034 = *(undefined8 *)(unaff_x21 + 0x24);
    in_stack_00000020 = *(undefined8 *)(unaff_x21 + 0x10);
    in_stack_00000030 = (undefined4)((ulong)*(undefined8 *)(unaff_x21 + 0x1c) >> 0x20);
    in_stack_00000028 = (undefined4)*(undefined8 *)(unaff_x21 + 0x18);
    uStack000000000000002c = (undefined4)((ulong)*(undefined8 *)(unaff_x21 + 0x18) >> 0x20);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10),&stack0x00000020);
    uStack0000000000000014 = *(undefined8 *)(unaff_x24 + 0x24);
    in_stack_00000060 = (undefined4)((ulong)*(undefined8 *)(unaff_x24 + 0x1c) >> 0x20);
    in_stack_00000048 = in_stack_00000078;
    in_stack_00000040 = in_stack_00000070;
    in_stack_00000058 = (undefined4)in_stack_00000088;
    uStack000000000000005c = (undefined4)((ulong)in_stack_00000088 >> 0x20);
    in_stack_00000050 = in_stack_00000080;
    uStack000000000000000c = uStack000000000000005c;
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uStack0000000000000064 = uStack0000000000000014;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4(lVar2);
    }
    thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10));
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_052ddc90;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_052ddc90:
    (*(code *)*puVar3)();
  }
  return;
}


