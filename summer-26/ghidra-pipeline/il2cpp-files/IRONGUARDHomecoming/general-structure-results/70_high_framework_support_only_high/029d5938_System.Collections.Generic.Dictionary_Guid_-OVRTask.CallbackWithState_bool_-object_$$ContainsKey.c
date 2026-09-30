/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-OVRTask.CallbackWithState<bool,-object>>$$ContainsKey
ENTRY_POINT: 029d5938
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x029d59f4) */
/* WARNING: Removing unreachable block (ram,0x029d5a44) */

void System_Collections_Generic_Dictionary<Guid,_OVRTask_CallbackWithState<bool,_object>>__ContainsKey
               (undefined8 param_1,undefined1 param_2 [16])

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  int unaff_w26;
  int unaff_w27;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  uStack0000000000000028 = param_2._8_8_;
  uStack0000000000000020 = param_2._0_8_;
  uStack0000000000000030 = param_1;
LAB_029d5940:
  do {
    uStack0000000000000008 = uStack0000000000000028;
    uStack0000000000000000 = uStack0000000000000020;
    uStack0000000000000010 = uStack0000000000000030;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar4 = unaff_x23 + (long)(int)unaff_w20 * (long)unaff_w26;
    unaff_w20 = unaff_w20 + 1;
    *(undefined8 *)(lVar4 + 0x30) = uStack0000000000000030;
    *(undefined8 *)(lVar4 + 0x28) = uStack0000000000000028;
    *(undefined8 *)(lVar4 + 0x20) = uStack0000000000000020;
    lVar4 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_029d57d8;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d57d8:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_029d59e8;
      lVar4 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 == 0) goto LAB_029d59c0;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_029d585c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d585c:
    (*(code *)*puVar1)(&stack0x00000020);
    in_stack_00000048 = uStack0000000000000028;
    in_stack_00000040 = uStack0000000000000020;
    in_stack_00000050 = uStack0000000000000030;
    if (unaff_x23 == 0) {
      lVar4 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      unaff_x23 = FUN_01f08890(lVar4,4);
    }
    else {
      if (unaff_w20 != *(uint *)(unaff_x23 + 0x18)) goto LAB_029d5940;
      if ((int)(unaff_w20 + unaff_w27) < 0) {
        FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910();
      }
      lVar4 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar4 = FUN_01f08890(lVar4,unaff_w20 * 2);
      FUN_0358d498(unaff_x23,0,lVar4,0,unaff_w20,0);
      unaff_x23 = lVar4;
    }
    uStack0000000000000028 = in_stack_00000048;
    uStack0000000000000020 = in_stack_00000040;
    uStack0000000000000030 = in_stack_00000050;
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_029d59dc;
    }
  }
LAB_029d59c0:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d59dc:
  (*(code *)*puVar1)();
LAB_029d59e8:
  *unaff_x19 = unaff_x23;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = unaff_w20;
  return;
}


