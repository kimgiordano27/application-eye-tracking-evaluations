/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 03c6a9f4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03c6ab8c) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  do {
    param_2 = FUN_02d9a2e0(param_2);
    do {
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == param_2) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03c6aa48;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_03c6aa48:
      (*(code *)*puVar1)(&stack0x00000040);
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      in_stack_00000098 = in_stack_00000058;
      in_stack_00000090 = in_stack_00000050;
      in_stack_000000a8 = in_stack_00000068;
      in_stack_000000a0 = in_stack_00000060;
      in_stack_000000b8 = in_stack_00000078;
      in_stack_000000b0 = in_stack_00000070;
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar3 = *(uint *)(unaff_x21 + 0x18);
      if (uVar3 == *(uint *)(lVar2 + 0x18)) {
        FUN_03c68fc0();
        lVar2 = *(long *)(unaff_x21 + 0x10);
        uVar3 = *(uint *)(unaff_x21 + 0x18);
      }
      *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
      in_stack_00000048 = in_stack_00000088;
      in_stack_00000040 = in_stack_00000080;
      in_stack_00000058 = in_stack_00000098;
      in_stack_00000050 = in_stack_00000090;
      in_stack_00000068 = in_stack_000000a8;
      in_stack_00000060 = in_stack_000000a0;
      in_stack_00000078 = in_stack_000000b8;
      in_stack_00000070 = in_stack_000000b0;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar2 = lVar2 + (long)(int)uVar3 * 0x40;
      *(undefined8 *)(lVar2 + 0x48) = in_stack_000000a8;
      *(undefined8 *)(lVar2 + 0x40) = in_stack_000000a0;
      *(undefined8 *)(lVar2 + 0x58) = in_stack_000000b8;
      *(undefined8 *)(lVar2 + 0x50) = in_stack_000000b0;
      *(undefined8 *)(lVar2 + 0x28) = in_stack_00000088;
      *(undefined8 *)(lVar2 + 0x20) = in_stack_00000080;
      *(undefined8 *)(lVar2 + 0x38) = in_stack_00000098;
      *(undefined8 *)(lVar2 + 0x30) = in_stack_00000090;
      thunk_FUN_02dd37b4(lVar2 + 0x20,0);
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03c6a9d0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_03c6a9d0:
      uVar4 = (*(code *)*puVar1)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar2 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy;
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_03c6ab20;
      }
      param_2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    } while ((*(byte *)(param_2 + 0x135) & 1) != 0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_03c6ab20:
    if (*(long *)(piVar5 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03c6ab54;
    }
  }
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy:
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_03c6ab54:
  (*(code *)*puVar1)();
  return;
}


