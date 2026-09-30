/*
FUNCTION_NAME: Unity.Mathematics.math$$lerp
ENTRY_POINT: 03b1f604
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03b1f764) */
/* WARNING: Removing unreachable block (ram,0x03b1f7a0) */

long Unity_Mathematics_math__lerp(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_03b1f638;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03b1f638:
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_03b1f758;
        lVar3 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto LAB_03b1f730;
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_03b1f718;
      }
      lVar3 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_03b1f694;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03b1f694:
      (*(code *)*puVar1)();
      FUN_03b25478(&stack0x00000020);
      in_stack_00000048 = in_stack_00000028;
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000058 = in_stack_00000038;
      in_stack_00000050 = in_stack_00000030;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar3 = unaff_x19 + (long)(int)unaff_w21 * 0x20;
      *(undefined8 *)(lVar3 + 0x28) = in_stack_00000028;
      *(undefined8 *)(lVar3 + 0x20) = in_stack_00000020;
      *(undefined8 *)(lVar3 + 0x38) = in_stack_00000038;
      *(undefined8 *)(lVar3 + 0x30) = in_stack_00000030;
      thunk_FUN_01f51358(lVar3 + 0x20,0);
      unaff_w21 = unaff_w21 + 1;
      param_1 = *unaff_x20;
      param_3 = *unaff_x22;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
LAB_03b1f718:
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_03b1f74c;
    }
  }
LAB_03b1f730:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03b1f74c:
  (*(code *)*puVar1)();
LAB_03b1f758:
  in_stack_00000068 = unaff_x19;
  thunk_FUN_01f51358(&stack0x00000068);
  return in_stack_00000068;
}


