/*
FUNCTION_NAME: Unity.Mathematics.math$$lerp
ENTRY_POINT: 03b1f5dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03b1f764) */
/* WARNING: Removing unreachable block (ram,0x03b1f7a0) */

long Unity_Mathematics_math__lerp(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  uint uVar6;
  long unaff_x22;
  long *plVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  
  puVar1 = StringLiteral_11610;
  plVar7 = *(long **)(unaff_x22 + 0xe08);
  uVar6 = 0;
  do {
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar7) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03b1f638;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03b1f638:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_03b1f758;
      lVar3 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_03b1f730;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03b1f694;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03b1f694:
    (*(code *)*puVar2)();
    FUN_03b25478(&stack0x00000020);
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000058 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000030;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar3 = unaff_x19 + (long)(int)uVar6 * 0x20;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000028;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000020;
    *(undefined8 *)(lVar3 + 0x38) = in_stack_00000038;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000030;
    thunk_FUN_01f51358(lVar3 + 0x20,0);
    uVar6 = uVar6 + 1;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03b1f74c;
    }
  }
LAB_03b1f730:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03b1f74c:
  (*(code *)*puVar2)();
LAB_03b1f758:
  in_stack_00000068 = unaff_x19;
  thunk_FUN_01f51358(&stack0x00000068);
  return in_stack_00000068;
}


