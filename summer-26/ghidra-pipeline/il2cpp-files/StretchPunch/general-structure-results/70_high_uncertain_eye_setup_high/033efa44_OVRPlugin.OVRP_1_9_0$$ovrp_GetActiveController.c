/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetActiveController
ENTRY_POINT: 033efa44
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0__ovrp_GetActiveController(void)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *unaff_x19;
  uint *unaff_x20;
  ulong unaff_x21;
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
  
  do {
    uVar7 = in_stack_00000038;
    iVar5 = in_stack_00000020._4_4_;
    bVar3 = in_stack_00000030 == 0xffffffff;
    in_stack_00000030 = in_stack_00000030 + 1;
    if (bVar3) {
      lVar6 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      in_stack_00000020._4_4_ = FUN_033f21d0(&stack0x00000028,iVar5,lVar6 != 0 || uVar7 != 0);
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
      }
      else {
FUN_033efe84:
        uVar4 = in_stack_00000030;
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
        unaff_x19[1] = uVar4;
        iVar5 = in_stack_00000020._4_4_;
      }
      *unaff_x19 = (*unaff_x20 ^ *unaff_x19) & 0x80000000 | iVar5 << 0x10;
      if (*(long *)(unaff_x24 + 0x28) != in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    do {
      uVar2 = uStack0000000000000040;
      uVar10 = in_stack_00000038;
      iVar5 = in_stack_00000020._4_4_;
      uVar7 = _uStack0000000000000028;
      if (in_stack_00000038 != 0 || uStack0000000000000040 != 0) {
        if (in_stack_00000020._4_4_ != 0x1c) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar4 = FUN_033f2328(&stack0x00000028,iVar5);
          uVar7 = _uStack0000000000000028;
          if (uVar4 != 0) {
            unaff_x27 = 1;
            goto LAB_033ef9b8;
          }
        }
        iVar5 = in_stack_00000020._4_4_;
        if (-1 < (int)uVar2) {
          uVar10 = uVar10 * 2;
          uStack0000000000000040 = (uint)(CONCAT44(uVar2,in_stack_00000038._4_4_) >> 0x1f);
          in_stack_00000038 = uVar10;
          if ((uStack0000000000000040 < unaff_w26 || uStack0000000000000040 == unaff_w26) &&
             ((uStack0000000000000040 != unaff_w26 ||
              ((bVar3 = uVar10 - unaff_x21 != 0, uVar10 < unaff_x21 || !bVar3 &&
               ((bVar3 || ((uVar7 & 1) == 0)))))))) goto FUN_033efe84;
        }
        bVar3 = uVar7 == 0xffffffffffffffff;
        _uStack0000000000000028 = uVar7 + 1;
        uVar7 = _uStack0000000000000028;
        if ((bVar3) &&
           (bVar3 = in_stack_00000030 == 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1,
           bVar3)) {
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
      uVar4 = FUN_033946d4(9,-iVar5,0);
LAB_033ef9b8:
      lVar6 = *unaff_x25;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar6 = *unaff_x25;
      }
      lVar6 = **(long **)(lVar6 + 0xb8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      uVar1 = *(undefined4 *)(lVar6 + (long)(int)uVar4 * 4 + 0x20);
      in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + uVar4;
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
      bVar3 = CARRY8(_uStack0000000000000028,uVar7 & 0xffffffff);
      _uStack0000000000000028 = _uStack0000000000000028 + (uVar7 & 0xffffffff);
    } while (!bVar3);
  } while( true );
}


