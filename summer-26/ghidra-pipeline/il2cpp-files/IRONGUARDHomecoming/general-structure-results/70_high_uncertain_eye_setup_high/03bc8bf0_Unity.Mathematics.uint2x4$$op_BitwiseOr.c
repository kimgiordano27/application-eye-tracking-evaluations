/*
FUNCTION_NAME: Unity.Mathematics.uint2x4$$op_BitwiseOr
ENTRY_POINT: 03bc8bf0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03bc8d0c) */
/* WARNING: Removing unreachable block (ram,0x03bc8c5c) */
/* WARNING: Removing unreachable block (ram,0x03bc8d14) */

void Unity_Mathematics_uint2x4__op_BitwiseOr(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  undefined4 *unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined4 in_stack_00000048;
  int in_stack_00000050;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  do {
    uVar3 = FUN_04073094(param_1,0,0);
    if ((uVar3 & 1) != 0) {
      FUN_03bc2564();
      FUN_03bc6898();
    }
    do {
      unaff_w23 = unaff_w23 + 1;
      if (in_stack_00000050 <= unaff_w23) {
        in_stack_00000048 = *unaff_x21;
        Unity_Mathematics_uint2x3__op_Equality(&stack0x00000048);
        FUN_03b5656c(&stack0x00000070,0);
        FUN_02f1fbf0(&stack0x000000f0,*(undefined8 *)StringLiteral_12330);
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar5 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 == 0) goto LAB_03bc8cc0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_03bc8ca8;
      }
      uVar2 = FUN_02f1e6dc(&stack0x00000050,unaff_w23,*unaff_x26);
      uVar1 = FUN_03bc6388(uVar2,*unaff_x21,0);
      *unaff_x21 = uVar1;
    } while ((unaff_x22 & 1) != 0);
    param_1 = FUN_03bc2564();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_03bc8ca8:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03bc8cdc;
    }
  }
LAB_03bc8cc0:
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03bc8cdc:
  (*(code *)*puVar4)();
  return;
}


