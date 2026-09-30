/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodeAcceleration2
ENTRY_POINT: 033ef8c0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetNodeAcceleration2(void)

{
  undefined *puVar1;
  int iVar2;
  bool in_ZR;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int in_w8;
  ulong uVar14;
  int in_w9;
  long in_x10;
  int in_w11;
  int in_w12;
  uint *unaff_x19;
  uint *unaff_x20;
  ulong uVar15;
  long unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  uint in_stack_00000018;
  undefined8 in_stack_00000020;
  uint in_stack_00000028;
  uint uStack000000000000002c;
  uint in_stack_00000030;
  ulong uStack0000000000000038;
  int iStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  
  if (!in_ZR) {
    in_w11 = in_w8;
    in_w12 = in_w9;
  }
  uVar8 = in_w12 + (in_w11 >> 0x1f);
  uStack0000000000000038 = in_x10 << ((ulong)uVar8 & 0x3f);
  _iStack0000000000000040 = CONCAT44(unaff_x19[1],unaff_x19[3]) >> ((ulong)(0x20 - uVar8) & 0x3f);
  uVar5 = unaff_x20[1];
  uVar15 = *(long *)(unaff_x20 + 2) << ((ulong)uVar8 & 0x3f);
  if (uVar5 == 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uStack000000000000002c = FUN_033f1268((ulong)&stack0x00000038 | 4,uVar15);
    uVar7 = FUN_033f1268(&stack0x00000038,uVar15);
    puVar1 = 
    Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
    ;
    _in_stack_00000028 = CONCAT44(uStack000000000000002c,uVar7);
    bVar4 = false;
    do {
      uVar14 = uStack0000000000000038;
      iVar6 = in_stack_00000020._4_4_;
      if (uStack0000000000000038 != 0) {
        if (in_stack_00000020._4_4_ != 0x1c) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar8 = FUN_033f2328(&stack0x00000028,iVar6);
          if (uVar8 != 0) {
            bVar4 = true;
            goto LAB_033efb84;
          }
        }
        if ((long)uVar14 < 0) goto LAB_033efddc;
        uVar14 = uVar14 << 1;
        goto LAB_033efdc8;
      }
      if (-1 < in_stack_00000020._4_4_) {
        uVar11 = _in_stack_00000028;
        uVar15 = _in_stack_00000028;
        if (bVar4) goto FUN_033efe84;
        goto LAB_033efe5c;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar8 = FUN_033946d4(9,-iVar6,0);
LAB_033efb84:
      lVar9 = *unaff_x25;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar9 = *unaff_x25;
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      if (lVar9 == 0) goto LAB_033eff18;
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_033eff1c;
      uVar7 = *(undefined4 *)(lVar9 + (long)(int)uVar8 * 4 + 0x20);
      in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + uVar8;
      iVar6 = FUN_033f1490(&stack0x00000028,uVar7);
      if (iVar6 != 0) goto LAB_033eff20;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f1518(&stack0x00000038,uVar7);
      uVar11 = FUN_033f1268(&stack0x00000038,uVar15);
      uVar14 = uStack0000000000000038;
      iVar6 = in_stack_00000020._4_4_;
      bVar3 = CARRY8(_in_stack_00000028,uVar11 & 0xffffffff);
      _in_stack_00000028 = _in_stack_00000028 + (uVar11 & 0xffffffff);
    } while ((!bVar3) ||
            (bVar3 = in_stack_00000030 != 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1,
            bVar3));
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    in_stack_00000020._4_4_ = FUN_033f21d0(&stack0x00000028,iVar6,uVar14 != 0);
    uVar11 = _in_stack_00000028;
    uVar15 = _in_stack_00000028;
    if (bVar4) goto FUN_033efe84;
  }
  else {
    in_stack_00000010 = uVar15;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      uVar5 = unaff_x20[1];
    }
    uVar8 = (uint)(CONCAT44(uVar5,unaff_x20[3]) >> (0x20 - uVar8 & 0x3f));
    in_stack_00000018 = uVar8;
    _in_stack_00000028 = FUN_033f135c(&stack0x00000038,&stack0x00000010);
    puVar1 = 
    Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
    ;
    _in_stack_00000028 = _in_stack_00000028 & 0xffffffff;
    bVar4 = false;
    do {
      uVar14 = uStack0000000000000038;
      iVar6 = in_stack_00000020._4_4_;
      iVar2 = iStack0000000000000040;
      if (uStack0000000000000038 != 0 || iStack0000000000000040 != 0) {
        uVar11 = _in_stack_00000028;
        if (in_stack_00000020._4_4_ != 0x1c) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar5 = FUN_033f2328(&stack0x00000028,iVar6);
          uVar11 = _in_stack_00000028;
          if (uVar5 != 0) {
            bVar4 = true;
            goto LAB_033ef9b8;
          }
        }
        _in_stack_00000028 = uVar11;
        if (iVar2 < 0) goto LAB_033efddc;
        uVar14 = uVar14 << 1;
        uVar5 = (uint)(CONCAT44(iVar2,uStack0000000000000038._4_4_) >> 0x1f);
        _iStack0000000000000040 = CONCAT44(uStack0000000000000044,uVar5);
        uStack0000000000000038 = uVar14;
        if (uVar8 <= uVar5 && uVar5 != uVar8) goto LAB_033efddc;
        if (uVar5 == uVar8) {
LAB_033efdc8:
          if ((uVar15 < uVar14) ||
             ((uVar11 = _in_stack_00000028, uVar14 == uVar15 && ((_in_stack_00000028 & 1) != 0)))) {
LAB_033efddc:
            iVar6 = in_stack_00000020._4_4_;
            bVar4 = _in_stack_00000028 == 0xffffffffffffffff;
            _in_stack_00000028 = _in_stack_00000028 + 1;
            uVar11 = _in_stack_00000028;
            if ((bVar4) &&
               (bVar4 = in_stack_00000030 == 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1,
               bVar4)) {
              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              in_stack_00000020._4_4_ = FUN_033f21d0(&stack0x00000028,iVar6,1);
              uVar11 = _in_stack_00000028;
            }
          }
        }
        goto FUN_033efe84;
      }
      if (-1 < in_stack_00000020._4_4_) goto LAB_033efe58;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar5 = FUN_033946d4(9,-iVar6,0);
LAB_033ef9b8:
      lVar9 = *unaff_x25;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar9 = *unaff_x25;
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      if (lVar9 == 0) {
LAB_033eff18:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar5) {
LAB_033eff1c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      uVar7 = *(undefined4 *)(lVar9 + (long)(int)uVar5 * 4 + 0x20);
      in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + uVar5;
      iVar6 = FUN_033f1490(&stack0x00000028,uVar7);
      if (iVar6 != 0) {
LAB_033eff20:
        thunk_FUN_01dd295c(StringLiteral_1150);
        uVar12 = thunk_FUN_01de27b8();
        uVar13 = thunk_FUN_01dd295c(StringLiteral_8348);
        FUN_03390704(uVar12,uVar13,0);
        uVar13 = thunk_FUN_01dd295c(StringLiteral_9345);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar12,uVar13);
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar7 = FUN_033f1490(&stack0x00000038,uVar7);
      _iStack0000000000000040 = CONCAT44(uVar7,iStack0000000000000040);
      uVar10 = FUN_033f135c(&stack0x00000038,&stack0x00000010);
      uVar11 = _iStack0000000000000040;
      uVar14 = uStack0000000000000038;
      iVar6 = in_stack_00000020._4_4_;
      bVar3 = CARRY8(_in_stack_00000028,uVar10 & 0xffffffff);
      _in_stack_00000028 = _in_stack_00000028 + (uVar10 & 0xffffffff);
    } while ((!bVar3) ||
            (bVar3 = in_stack_00000030 != 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1,
            bVar3));
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    in_stack_00000020._4_4_ = FUN_033f21d0(&stack0x00000028,iVar6,uVar11 != 0 || uVar14 != 0);
LAB_033efe58:
    uVar11 = _in_stack_00000028;
    uVar15 = _in_stack_00000028;
    if (bVar4) {
FUN_033efe84:
      uVar5 = in_stack_00000030;
      uStack000000000000002c = (uint)(uVar11 >> 0x20);
      uVar8 = uStack000000000000002c;
      in_stack_00000028 = (uint)uVar11;
      in_stack_00000008._4_4_ = in_stack_00000028;
      _in_stack_00000028 = uVar11;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033ff354((long)&stack0x00000008 + 4);
      unaff_x19[2] = in_stack_00000008._4_4_;
      unaff_x19[3] = uVar8;
      unaff_x19[1] = uVar5;
      iVar6 = in_stack_00000020._4_4_;
      goto LAB_033efed0;
    }
  }
LAB_033efe5c:
  iVar6 = in_stack_00000020._4_4_;
  _in_stack_00000028 = uVar15;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  *(ulong *)(unaff_x19 + 2) = uVar15;
  unaff_x19[1] = in_stack_00000030;
LAB_033efed0:
  *unaff_x19 = (*unaff_x20 ^ *unaff_x19) & 0x80000000 | iVar6 << 0x10;
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


