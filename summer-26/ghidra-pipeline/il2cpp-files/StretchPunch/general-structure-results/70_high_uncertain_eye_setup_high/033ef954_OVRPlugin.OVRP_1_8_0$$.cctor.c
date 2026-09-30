/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$.cctor
ENTRY_POINT: 033ef954
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


void OVRPlugin_OVRP_1_8_0___cctor(void)

{
  undefined4 uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint *unaff_x19;
  uint *unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  ulong unaff_x27;
  long *unaff_x28;
  ulong unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  uint in_stack_00000030;
  ulong in_stack_00000038;
  uint uStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  
  uVar2 = _uStack0000000000000028;
  do {
    _uStack0000000000000028 = uVar2;
    if (unaff_x29 != 0 || unaff_x23 != 0) {
      if (unaff_w22 != 0x1c) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar5 = FUN_033f2328(&stack0x00000028,unaff_w22);
        uVar2 = _uStack0000000000000028;
        if (uVar5 != 0) {
          unaff_x27 = 1;
          goto LAB_033ef9b8;
        }
      }
      iVar6 = in_stack_00000020._4_4_;
      if (-1 < (int)unaff_x23) {
        uVar8 = in_stack_00000038 >> 0x20;
        in_stack_00000038 = unaff_x29 * 2;
        uStack0000000000000040 = (uint)((unaff_x23 << 0x20 | uVar8) >> 0x1f);
        if ((uStack0000000000000040 < unaff_w26 || uStack0000000000000040 == unaff_w26) &&
           ((uStack0000000000000040 != unaff_w26 ||
            ((bVar4 = in_stack_00000038 - unaff_x21 != 0, in_stack_00000038 < unaff_x21 || !bVar4 &&
             ((bVar4 || ((uVar2 & 1) == 0)))))))) goto FUN_033efe84;
      }
      bVar4 = uVar2 == 0xffffffffffffffff;
      _uStack0000000000000028 = uVar2 + 1;
      uVar2 = _uStack0000000000000028;
      if ((bVar4) &&
         (bVar4 = in_stack_00000030 == 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1, bVar4)
         ) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        in_stack_00000020._4_4_ = FUN_033f21d0(&stack0x00000028,iVar6,1);
        uVar2 = _uStack0000000000000028;
      }
      goto FUN_033efe84;
    }
    if (-1 < unaff_w22) goto LAB_033efe58;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar5 = FUN_033946d4(9,-unaff_w22,0);
LAB_033ef9b8:
    lVar7 = *unaff_x25;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar7 = *unaff_x25;
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    uVar1 = *(undefined4 *)(lVar7 + (long)(int)uVar5 * 4 + 0x20);
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + uVar5;
    iVar6 = FUN_033f1490(&stack0x00000028,uVar1);
    if (iVar6 != 0) {
      thunk_FUN_01dd295c(StringLiteral_1150);
      uVar9 = thunk_FUN_01de27b8();
      uVar10 = thunk_FUN_01dd295c(StringLiteral_8348);
      FUN_03390704(uVar9,uVar10,0);
      uVar10 = thunk_FUN_01dd295c(StringLiteral_9345);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar9,uVar10);
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uStack0000000000000044 = FUN_033f1490(&stack0x00000038,uVar1);
    uVar8 = FUN_033f135c(&stack0x00000038,&stack0x00000010);
    uVar2 = in_stack_00000038;
    iVar6 = in_stack_00000020._4_4_;
    bVar4 = CARRY8(_uStack0000000000000028,uVar8 & 0xffffffff);
    _uStack0000000000000028 = _uStack0000000000000028 + (uVar8 & 0xffffffff);
    if ((bVar4) &&
       (bVar4 = in_stack_00000030 == 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1, bVar4))
    {
      lVar7 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      unaff_w22 = FUN_033f21d0(&stack0x00000028,iVar6,lVar7 != 0 || uVar2 != 0);
      in_stack_00000020._4_4_ = unaff_w22;
      uVar2 = _uStack0000000000000028;
LAB_033efe58:
      if ((unaff_x27 & 1) == 0) {
        _uStack0000000000000028 = uVar2;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        *(ulong *)(unaff_x19 + 2) = uVar2;
        unaff_x19[1] = in_stack_00000030;
      }
      else {
FUN_033efe84:
        uVar3 = in_stack_00000030;
        uStack000000000000002c = (uint)(uVar2 >> 0x20);
        uVar5 = uStack000000000000002c;
        uStack0000000000000028 = (uint)uVar2;
        in_stack_00000008._4_4_ = uStack0000000000000028;
        _uStack0000000000000028 = uVar2;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033ff354((long)&stack0x00000008 + 4);
        unaff_x19[2] = in_stack_00000008._4_4_;
        unaff_x19[3] = uVar5;
        unaff_x19[1] = uVar3;
        unaff_w22 = in_stack_00000020._4_4_;
      }
      *unaff_x19 = (*unaff_x20 ^ *unaff_x19) & 0x80000000 | unaff_w22 << 0x10;
      if (*(long *)(unaff_x24 + 0x28) != in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    unaff_x23 = (ulong)uStack0000000000000040;
    unaff_x29 = in_stack_00000038;
    unaff_w22 = in_stack_00000020._4_4_;
    uVar2 = _uStack0000000000000028;
  } while( true );
}


