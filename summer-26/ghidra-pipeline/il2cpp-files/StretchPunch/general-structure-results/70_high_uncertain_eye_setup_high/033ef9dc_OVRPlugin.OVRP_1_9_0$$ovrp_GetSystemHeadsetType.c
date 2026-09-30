/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetSystemHeadsetType
ENTRY_POINT: 033ef9dc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0__ovrp_GetSystemHeadsetType(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint in_w9;
  uint *unaff_x19;
  uint *unaff_x20;
  ulong unaff_x21;
  uint unaff_w22;
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
  ulong in_stack_00000038;
  uint uStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  
  while( true ) {
    if (in_w9 <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    uVar1 = *(undefined4 *)(param_1 + (long)(int)unaff_w22 * 4 + 0x20);
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + unaff_w22;
    iVar5 = FUN_033f1490(&stack0x00000028,uVar1);
    if (iVar5 != 0) {
      thunk_FUN_01dd295c(StringLiteral_1150);
      uVar8 = thunk_FUN_01de27b8();
      uVar9 = thunk_FUN_01dd295c(StringLiteral_8348);
      FUN_03390704(uVar8,uVar9,0);
      uVar9 = thunk_FUN_01dd295c(StringLiteral_9345);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar8,uVar9);
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uStack0000000000000044 = FUN_033f1490(&stack0x00000038,uVar1);
    uVar7 = FUN_033f135c(&stack0x00000038,&stack0x00000010);
    uVar2 = uStack0000000000000040;
    uVar10 = in_stack_00000038;
    iVar5 = in_stack_00000020._4_4_;
    bVar4 = CARRY8(_uStack0000000000000028,uVar7 & 0xffffffff);
    _uStack0000000000000028 = _uStack0000000000000028 + (uVar7 & 0xffffffff);
    if ((bVar4) &&
       (bVar4 = in_stack_00000030 == 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1, bVar4))
    break;
    uVar7 = _uStack0000000000000028;
    if (in_stack_00000038 != 0 || uStack0000000000000040 != 0) {
      if (in_stack_00000020._4_4_ != 0x1c) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        unaff_w22 = FUN_033f2328(&stack0x00000028,iVar5);
        uVar7 = _uStack0000000000000028;
        if (unaff_w22 != 0) {
          unaff_x27 = 1;
          goto LAB_033ef9b8;
        }
      }
      iVar5 = in_stack_00000020._4_4_;
      if (-1 < (int)uVar2) {
        uVar10 = uVar10 * 2;
        uStack0000000000000040 = (uint)(CONCAT44(uVar2,in_stack_00000038._4_4_) >> 0x1f);
        in_stack_00000038 = uVar10;
        if ((uStack0000000000000040 <= unaff_w26) &&
           ((uStack0000000000000040 != unaff_w26 ||
            ((bVar4 = uVar10 - unaff_x21 != 0, uVar10 < unaff_x21 || !bVar4 &&
             ((bVar4 || ((uVar7 & 1) == 0)))))))) goto FUN_033efe84;
      }
      bVar4 = uVar7 == 0xffffffffffffffff;
      _uStack0000000000000028 = uVar7 + 1;
      uVar7 = _uStack0000000000000028;
      if ((bVar4) &&
         (bVar4 = in_stack_00000030 == 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1, bVar4)
         ) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        in_stack_00000020._4_4_ = FUN_033f21d0(&stack0x00000028,iVar5,1);
        uVar7 = _uStack0000000000000028;
      }
      goto FUN_033efe84;
    }
    if (-1 < in_stack_00000020._4_4_) goto LAB_033efe58;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    unaff_w22 = FUN_033946d4(9,-iVar5,0);
LAB_033ef9b8:
    lVar6 = *unaff_x25;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar6 = *unaff_x25;
    }
    param_1 = **(long **)(lVar6 + 0xb8);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    in_w9 = *(uint *)(param_1 + 0x18);
  }
  lVar6 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  in_stack_00000020._4_4_ = FUN_033f21d0(&stack0x00000028,iVar5,lVar6 != 0 || uVar10 != 0);
  uVar7 = _uStack0000000000000028;
LAB_033efe58:
  iVar5 = in_stack_00000020._4_4_;
  if ((unaff_x27 & 1) == 0) {
    _uStack0000000000000028 = uVar7;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    *(ulong *)(unaff_x19 + 2) = uVar7;
    unaff_x19[1] = in_stack_00000030;
    goto LAB_033efed0;
  }
FUN_033efe84:
  uVar3 = in_stack_00000030;
  uStack000000000000002c = (uint)(uVar7 >> 0x20);
  uVar2 = uStack000000000000002c;
  uStack0000000000000028 = (uint)uVar7;
  in_stack_00000008._4_4_ = uStack0000000000000028;
  _uStack0000000000000028 = uVar7;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033ff354((long)&stack0x00000008 + 4);
  unaff_x19[2] = in_stack_00000008._4_4_;
  unaff_x19[3] = uVar2;
  unaff_x19[1] = uVar3;
  iVar5 = in_stack_00000020._4_4_;
LAB_033efed0:
  *unaff_x19 = (*unaff_x20 ^ *unaff_x19) & 0x80000000 | iVar5 << 0x10;
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


