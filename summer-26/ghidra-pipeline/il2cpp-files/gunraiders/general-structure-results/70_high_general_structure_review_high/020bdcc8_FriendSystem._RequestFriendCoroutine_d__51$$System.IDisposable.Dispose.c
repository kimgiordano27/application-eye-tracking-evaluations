/*
FUNCTION_NAME: FriendSystem.<RequestFriendCoroutine>d__51$$System.IDisposable.Dispose
ENTRY_POINT: 020bdcc8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


uint FriendSystem_<RequestFriendCoroutine>d__51__System_IDisposable_Dispose(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int in_w9;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  long *unaff_x23;
  uint unaff_w24;
  uint unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  
  do {
    if (in_w9 == 0) {
      thunk_FUN_01c1d1e8(param_1);
    }
    uVar2 = FUN_03da9ffc(unaff_d8,unaff_d9,unaff_d10,unaff_d11,unaff_d12,unaff_d13,&stack0x00000040,
                         unaff_w22,0);
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_03d468ac(unaff_x21,0);
      uVar3 = FUN_02037b18(uVar3,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x26);
      }
      uVar2 = FUN_03d4f3bc(uVar3,0,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = FUN_03d468ac(unaff_x21,0);
        uVar3 = FUN_02037cc4(uVar3,0);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x26);
        }
        uVar1 = FUN_03d4f3bc(uVar3,0,0);
        unaff_w24 = unaff_w24 | uVar1;
      }
      else {
        uVar2 = FUN_02037dd0(uVar3,*(undefined8 *)(unaff_x19 + 0x40),0);
        if ((uVar2 & 1) == 0) {
          lVar4 = *(long *)(unaff_x19 + 0x40);
          if (lVar4 == 0) {
LAB_020bde9c:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar5 = *(long *)(lVar4 + 0x10);
          lVar6 = *unaff_x27;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_020bde9c;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          }
          else {
            FUN_02d5004c(lVar4,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          lVar4 = *(long *)(unaff_x19 + 0x48);
          if (lVar4 == 0) goto LAB_020bde9c;
          in_stack_00000078 = in_stack_00000048;
          in_stack_00000070 = in_stack_00000040;
          in_stack_00000080 = in_stack_00000050;
          uStack0000000000000094 = uStack0000000000000064;
          lVar6 = *unaff_x28;
          in_stack_00000088 = uStack0000000000000058;
          uStack0000000000000090 = uStack0000000000000060;
          lVar5 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_020bde9c;
          uVar1 = *(uint *)(lVar4 + 0x18);
          unaff_d9 = in_stack_00000050;
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            lVar5 = lVar5 + (int)uVar1 * unaff_x29;
            *(undefined8 *)(lVar5 + 0x44) = uStack0000000000000064;
            *(ulong *)(lVar5 + 0x3c) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
            *(undefined8 *)(lVar5 + 0x28) = in_stack_00000048;
            *(undefined8 *)(lVar5 + 0x20) = in_stack_00000040;
            *(ulong *)(lVar5 + 0x38) = CONCAT44(uStack000000000000005c,uStack0000000000000058);
            *(undefined8 *)(lVar5 + 0x30) = in_stack_00000050;
            unaff_d10 = in_stack_00000040;
          }
          else {
            unaff_d10 = CONCAT44(uStack0000000000000060,uStack000000000000005c);
            in_stack_000000a8 = in_stack_00000048;
            in_stack_000000a0 = in_stack_00000040;
            in_stack_000000b8 = uStack0000000000000058;
            in_stack_000000b0 = in_stack_00000050;
            uStack00000000000000c4 = uStack0000000000000064;
            uStack00000000000000c0 = uStack0000000000000060;
            FUN_02d881e4(lVar4,&stack0x000000a0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    unaff_w25 = unaff_w25 + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w25) {
      return unaff_w24 & 1;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    unaff_x21 = *(long *)(unaff_x20 + (long)(int)unaff_w25 * 8 + 0x20);
    lVar4 = FUN_03d468ac();
    if (((lVar4 == 0) || (unaff_d8 = FUN_03d554d8(lVar4,0), unaff_x21 == 0)) ||
       (unaff_d12 = unaff_d9, unaff_d13 = unaff_d10, lVar4 = FUN_03d468ac(unaff_x21,0), lVar4 == 0))
    goto LAB_020bde9c;
    unaff_d11 = FUN_03d554d8(lVar4,0);
    unaff_w22 = FUN_03d4a6ac(*(undefined4 *)(unaff_x19 + 0xb4),0);
    param_1 = *unaff_x23;
    in_w9 = *(int *)(param_1 + 0xe0);
  } while( true );
}


