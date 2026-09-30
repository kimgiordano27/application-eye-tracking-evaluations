/*
FUNCTION_NAME: OVRPlugin.OVRP_1_10_0$$.cctor
ENTRY_POINT: 033efd20
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_10_0___cctor(long param_1)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  ulong uVar8;
  uint uVar9;
  ulong unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  ulong unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  uint in_stack_00000030;
  long in_stack_00000048;
  
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    uVar8 = (ulong)*(uint *)(param_1 + (long)(int)unaff_w21 * 4 + 0x20);
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + unaff_w21;
    iVar4 = FUN_033f1490(&stack0x00000028,uVar8);
    if (iVar4 != 0) {
      thunk_FUN_01dd295c(StringLiteral_1150);
      uVar6 = thunk_FUN_01de27b8();
      uVar7 = thunk_FUN_01dd295c(StringLiteral_8348);
      FUN_03390704(uVar6,uVar7,0);
      uVar7 = thunk_FUN_01dd295c(StringLiteral_9345);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar6,uVar7);
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    iVar4 = in_stack_00000020._4_4_;
    uVar8 = uVar8 * unaff_w26;
    uVar2 = 0;
    if (unaff_x23 != 0) {
      uVar2 = uVar8 / unaff_x23;
    }
    uVar9 = (uint)unaff_x23;
    unaff_w26 = (int)uVar8 - uVar9 * (int)uVar2;
    bVar3 = CARRY8(_uStack0000000000000028,uVar2 & 0xffffffff);
    _uStack0000000000000028 = _uStack0000000000000028 + (uVar2 & 0xffffffff);
    if ((bVar3) &&
       (bVar3 = 0xfffffffe < in_stack_00000030, in_stack_00000030 = in_stack_00000030 + 1, bVar3))
    break;
    uVar8 = _uStack0000000000000028;
    if (unaff_w26 != 0) {
      if (in_stack_00000020._4_4_ != 0x1c) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        unaff_w21 = FUN_033f2328(&stack0x00000028,iVar4);
        uVar8 = _uStack0000000000000028;
        if (unaff_w21 != 0) {
          unaff_x27 = 1;
          goto LAB_033efd04;
        }
      }
      iVar4 = in_stack_00000020._4_4_;
      uVar1 = unaff_w26 * 2;
      if ((((uVar1 < unaff_w26) || ((uVar9 <= uVar1 && ((uVar9 < uVar1 || ((uVar8 & 1) != 0)))))) &&
          (bVar3 = uVar8 == 0xffffffffffffffff, _uStack0000000000000028 = uVar8 + 1,
          uVar8 = _uStack0000000000000028, bVar3)) &&
         (bVar3 = in_stack_00000030 == 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1, bVar3)
         ) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        in_stack_00000020._4_4_ = FUN_033f21d0(&stack0x00000028,iVar4,1);
        uVar8 = _uStack0000000000000028;
      }
      goto FUN_033efe84;
    }
    if (-1 < in_stack_00000020._4_4_) goto LAB_033efe58;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    unaff_w21 = FUN_033946d4(9,-iVar4,0);
LAB_033efd04:
    lVar5 = *unaff_x25;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x25;
    }
    param_1 = **(long **)(lVar5 + 0xb8);
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  in_stack_00000020._4_4_ = FUN_033f21d0(&stack0x00000028,iVar4,unaff_w26 != 0);
  uVar8 = _uStack0000000000000028;
LAB_033efe58:
  iVar4 = in_stack_00000020._4_4_;
  if ((unaff_x27 & 1) == 0) {
    _uStack0000000000000028 = uVar8;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    *(ulong *)(unaff_x19 + 2) = uVar8;
    unaff_x19[1] = in_stack_00000030;
    goto LAB_033efed0;
  }
FUN_033efe84:
  uVar1 = in_stack_00000030;
  uStack000000000000002c = (uint)(uVar8 >> 0x20);
  uVar9 = uStack000000000000002c;
  uStack0000000000000028 = (uint)uVar8;
  in_stack_00000008._4_4_ = uStack0000000000000028;
  _uStack0000000000000028 = uVar8;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033ff354((long)&stack0x00000008 + 4);
  unaff_x19[2] = in_stack_00000008._4_4_;
  unaff_x19[3] = uVar9;
  unaff_x19[1] = uVar1;
  iVar4 = in_stack_00000020._4_4_;
LAB_033efed0:
  *unaff_x19 = (*unaff_x20 ^ *unaff_x19) & 0x80000000 | iVar4 << 0x10;
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


