/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodeVelocity2
ENTRY_POINT: 033ef82c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

void OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int in_w8;
  ulong uVar15;
  ulong uVar16;
  int in_w9;
  uint *unaff_x19;
  uint *unaff_x20;
  ulong uVar17;
  int unaff_w22;
  long unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  uint in_stack_00000018;
  undefined8 in_stack_00000020;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  uint in_stack_00000030;
  ulong in_stack_00000038;
  int iStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  
  uVar9 = unaff_x20[3];
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
    if (uVar9 == 0 && in_w9 == 0) goto LAB_033efa80;
  }
  else if (uVar9 == 0 && in_w9 == 0) {
LAB_033efa80:
    uVar9 = unaff_x20[2];
    uVar17 = (ulong)uVar9;
    if (uVar9 == 0) {
      thunk_FUN_01dd295c(StringLiteral_9346);
      uVar13 = thunk_FUN_01de27b8();
      FUN_0337ebbc(uVar13,0);
LAB_033eff50:
      uVar14 = thunk_FUN_01dd295c(StringLiteral_9345);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar13,uVar14);
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    puVar2 = 
    Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
    ;
    uVar15 = *(ulong *)(unaff_x19 + 2);
    uStack0000000000000028 = (uint)uVar15;
    uStack000000000000002c = (uint)(uVar15 >> 0x20);
    if (unaff_x19[1] == 0) {
      in_stack_00000030 = 0;
      if (uVar15 == 0) goto LAB_033efc94;
      uVar16 = 0;
      if (uVar17 != 0) {
        uVar16 = uVar15 / uVar17;
      }
      uVar6 = uStack0000000000000028 - (int)uVar16 * uVar9;
      uStack000000000000002c = (uint)(uVar16 >> 0x20);
      uStack0000000000000028 = (int)uVar16;
    }
    else {
      uVar16 = 0;
      if (uVar17 != 0) {
        uVar16 = CONCAT44(unaff_x19[1],uStack000000000000002c) / uVar17;
      }
      iVar7 = (int)uVar16;
      uVar15 = uVar15 & 0xffffffff | (ulong)(uStack000000000000002c - uVar9 * iVar7) << 0x20;
      in_stack_00000030 = (uint)(uVar16 >> 0x20);
      uStack000000000000002c = iVar7;
      if (uVar15 == 0) {
LAB_033efc94:
        uVar6 = 0;
      }
      else {
        iVar7 = 0;
        if (uVar17 != 0) {
          iVar7 = (int)(uVar15 / uVar17);
        }
        uVar6 = uStack0000000000000028 - uVar9 * iVar7;
        uStack0000000000000028 = iVar7;
      }
    }
    bVar5 = false;
    if (uVar6 == 0) goto LAB_033efcdc;
    while (uVar15 = _uStack0000000000000028, unaff_w22 != 0x1c) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar10 = FUN_033f2328(&stack0x00000028,unaff_w22);
      uVar15 = _uStack0000000000000028;
      if (uVar10 == 0) break;
      bVar5 = true;
      while( true ) {
        lVar11 = *unaff_x25;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar11 = *unaff_x25;
        }
        lVar11 = **(long **)(lVar11 + 0xb8);
        if (lVar11 == 0) goto LAB_033eff18;
        if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_033eff1c;
        uVar15 = (ulong)*(uint *)(lVar11 + (long)(int)uVar10 * 4 + 0x20);
        in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + uVar10;
        iVar7 = FUN_033f1490(&stack0x00000028,uVar15);
        if (iVar7 != 0) goto LAB_033eff20;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar7 = in_stack_00000020._4_4_;
        uVar15 = uVar15 * uVar6;
        uVar16 = 0;
        if (uVar17 != 0) {
          uVar16 = uVar15 / uVar17;
        }
        uVar6 = (int)uVar15 - uVar9 * (int)uVar16;
        bVar4 = CARRY8(_uStack0000000000000028,uVar16 & 0xffffffff);
        _uStack0000000000000028 = _uStack0000000000000028 + (uVar16 & 0xffffffff);
        if ((bVar4) &&
           (bVar4 = 0xfffffffe < in_stack_00000030, in_stack_00000030 = in_stack_00000030 + 1, bVar4
           )) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          bVar4 = uVar6 == 0;
          goto LAB_033efe40;
        }
        unaff_w22 = in_stack_00000020._4_4_;
        if (uVar6 != 0) break;
LAB_033efcdc:
        uVar15 = _uStack0000000000000028;
        if (-1 < unaff_w22) goto joined_r0x033efe80;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar10 = FUN_033946d4(9,-unaff_w22,0);
      }
    }
    uVar10 = uVar6 << 1;
    if (uVar6 <= uVar10) {
      if (uVar10 < uVar9) goto FUN_033efe84;
      if (uVar10 <= uVar9) goto LAB_033efdd4;
    }
    goto LAB_033efddc;
  }
  uVar9 = unaff_x20[1];
  if (uVar9 == 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar9 = unaff_x20[3];
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar6 = uVar9 << 0x10;
  if (0xffff < uVar9) {
    uVar6 = uVar9;
  }
  uVar10 = 0x11;
  if (0xffff < uVar9) {
    uVar10 = 1;
  }
  uVar9 = uVar10 | 8;
  uVar1 = uVar6 << 8;
  if (uVar6 >> 0x18 != 0) {
    uVar9 = uVar10;
    uVar1 = uVar6;
  }
  bVar5 = uVar1 >> 0x1c != 0;
  uVar6 = uVar1 << 4;
  if (bVar5) {
    uVar6 = uVar1;
  }
  uVar10 = uVar9 | 4;
  if (bVar5) {
    uVar10 = uVar9;
  }
  uVar1 = uVar6 << 2;
  uVar9 = uVar10 | 2;
  if (uVar6 >> 0x1e != 0) {
    uVar1 = uVar6;
    uVar9 = uVar10;
  }
  uVar9 = uVar9 + ((int)uVar1 >> 0x1f);
  in_stack_00000038 = *(long *)(unaff_x19 + 2) << ((ulong)uVar9 & 0x3f);
  _iStack0000000000000040 = CONCAT44(unaff_x19[1],unaff_x19[3]) >> ((ulong)(0x20 - uVar9) & 0x3f);
  uVar6 = unaff_x20[1];
  uVar17 = *(long *)(unaff_x20 + 2) << ((ulong)uVar9 & 0x3f);
  if (uVar6 == 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uStack000000000000002c = FUN_033f1268((ulong)&stack0x00000038 | 4,uVar17);
    uVar8 = FUN_033f1268(&stack0x00000038,uVar17);
    puVar2 = 
    Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
    ;
    _uStack0000000000000028 = CONCAT44(uStack000000000000002c,uVar8);
    bVar5 = false;
    do {
      uVar16 = in_stack_00000038;
      iVar7 = in_stack_00000020._4_4_;
      if (in_stack_00000038 != 0) {
        if (in_stack_00000020._4_4_ != 0x1c) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar9 = FUN_033f2328(&stack0x00000028,iVar7);
          if (uVar9 != 0) {
            bVar5 = true;
            goto LAB_033efb84;
          }
        }
        uVar15 = _uStack0000000000000028;
        if ((long)uVar16 < 0) goto LAB_033efddc;
        uVar16 = uVar16 << 1;
        goto LAB_033efdc8;
      }
      unaff_w22 = in_stack_00000020._4_4_;
      uVar15 = _uStack0000000000000028;
      if (-1 < in_stack_00000020._4_4_) goto joined_r0x033efe80;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar9 = FUN_033946d4(9,-iVar7,0);
LAB_033efb84:
      lVar11 = *unaff_x25;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar11 = *unaff_x25;
      }
      lVar11 = **(long **)(lVar11 + 0xb8);
      if (lVar11 == 0) goto LAB_033eff18;
      if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_033eff1c;
      uVar8 = *(undefined4 *)(lVar11 + (long)(int)uVar9 * 4 + 0x20);
      in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + uVar9;
      iVar7 = FUN_033f1490(&stack0x00000028,uVar8);
      if (iVar7 != 0) goto LAB_033eff20;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f1518(&stack0x00000038,uVar8);
      uVar16 = FUN_033f1268(&stack0x00000038,uVar17);
      uVar15 = in_stack_00000038;
      iVar7 = in_stack_00000020._4_4_;
      bVar4 = CARRY8(_uStack0000000000000028,uVar16 & 0xffffffff);
      _uStack0000000000000028 = _uStack0000000000000028 + (uVar16 & 0xffffffff);
    } while ((!bVar4) ||
            (bVar4 = in_stack_00000030 != 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1,
            bVar4));
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    in_stack_00000020._4_4_ = FUN_033f21d0(&stack0x00000028,iVar7,uVar15 != 0);
    unaff_w22 = in_stack_00000020._4_4_;
    uVar15 = _uStack0000000000000028;
  }
  else {
    in_stack_00000010 = uVar17;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      uVar6 = unaff_x20[1];
    }
    uVar9 = (uint)(CONCAT44(uVar6,unaff_x20[3]) >> (0x20 - uVar9 & 0x3f));
    in_stack_00000018 = uVar9;
    _uStack0000000000000028 = FUN_033f135c(&stack0x00000038,&stack0x00000010);
    puVar2 = 
    Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
    ;
    _uStack0000000000000028 = _uStack0000000000000028 & 0xffffffff;
    bVar5 = false;
    do {
      uVar16 = in_stack_00000038;
      iVar7 = in_stack_00000020._4_4_;
      iVar3 = iStack0000000000000040;
      uVar15 = _uStack0000000000000028;
      if (in_stack_00000038 != 0 || iStack0000000000000040 != 0) {
        if (in_stack_00000020._4_4_ != 0x1c) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar6 = FUN_033f2328(&stack0x00000028,iVar7);
          uVar15 = _uStack0000000000000028;
          if (uVar6 != 0) {
            bVar5 = true;
            goto LAB_033ef9b8;
          }
        }
        if (iVar3 < 0) goto LAB_033efddc;
        uVar16 = uVar16 << 1;
        uVar6 = (uint)(CONCAT44(iVar3,in_stack_00000038._4_4_) >> 0x1f);
        _iStack0000000000000040 = CONCAT44(uStack0000000000000044,uVar6);
        in_stack_00000038 = uVar16;
        if (uVar9 < uVar6) goto LAB_033efddc;
        _uStack0000000000000028 = uVar15;
        if (uVar6 == uVar9) goto LAB_033efdc8;
        goto FUN_033efe84;
      }
      unaff_w22 = in_stack_00000020._4_4_;
      if (-1 < in_stack_00000020._4_4_) goto joined_r0x033efe80;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar6 = FUN_033946d4(9,-iVar7,0);
LAB_033ef9b8:
      lVar11 = *unaff_x25;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar11 = *unaff_x25;
      }
      lVar11 = **(long **)(lVar11 + 0xb8);
      if (lVar11 == 0) {
LAB_033eff18:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar6) {
LAB_033eff1c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      uVar8 = *(undefined4 *)(lVar11 + (long)(int)uVar6 * 4 + 0x20);
      in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + uVar6;
      iVar7 = FUN_033f1490(&stack0x00000028,uVar8);
      if (iVar7 != 0) goto LAB_033eff20;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar8 = FUN_033f1490(&stack0x00000038,uVar8);
      _iStack0000000000000040 = CONCAT44(uVar8,iStack0000000000000040);
      uVar12 = FUN_033f135c(&stack0x00000038,&stack0x00000010);
      uVar16 = _iStack0000000000000040;
      uVar15 = in_stack_00000038;
      iVar7 = in_stack_00000020._4_4_;
      bVar4 = CARRY8(_uStack0000000000000028,uVar12 & 0xffffffff);
      _uStack0000000000000028 = _uStack0000000000000028 + (uVar12 & 0xffffffff);
    } while ((!bVar4) ||
            (bVar4 = in_stack_00000030 != 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1,
            bVar4));
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar4 = uVar16 == 0 && uVar15 == 0;
LAB_033efe40:
    in_stack_00000020._4_4_ = FUN_033f21d0(&stack0x00000028,iVar7,!bVar4);
    unaff_w22 = in_stack_00000020._4_4_;
    uVar15 = _uStack0000000000000028;
  }
joined_r0x033efe80:
  if (!bVar5) {
    _uStack0000000000000028 = uVar15;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    *(ulong *)(unaff_x19 + 2) = uVar15;
    unaff_x19[1] = in_stack_00000030;
    goto LAB_033efed0;
  }
  goto FUN_033efe84;
LAB_033eff20:
  thunk_FUN_01dd295c(StringLiteral_1150);
  uVar13 = thunk_FUN_01de27b8();
  uVar14 = thunk_FUN_01dd295c(StringLiteral_8348);
  FUN_03390704(uVar13,uVar14,0);
  goto LAB_033eff50;
LAB_033efdc8:
  uVar15 = _uStack0000000000000028;
  if (uVar17 < uVar16) {
LAB_033efddc:
    iVar7 = in_stack_00000020._4_4_;
    bVar5 = uVar15 == 0xffffffffffffffff;
    _uStack0000000000000028 = uVar15 + 1;
    uVar15 = _uStack0000000000000028;
    if ((bVar5) &&
       (bVar5 = in_stack_00000030 == 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1, bVar5))
    {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      in_stack_00000020._4_4_ = FUN_033f21d0(&stack0x00000028,iVar7,1);
      uVar15 = _uStack0000000000000028;
    }
  }
  else if (uVar16 == uVar17) {
LAB_033efdd4:
    if ((uVar15 & 1) != 0) goto LAB_033efddc;
  }
FUN_033efe84:
  uVar6 = in_stack_00000030;
  uStack000000000000002c = (uint)(uVar15 >> 0x20);
  uVar9 = uStack000000000000002c;
  uStack0000000000000028 = (uint)uVar15;
  in_stack_00000008._4_4_ = uStack0000000000000028;
  _uStack0000000000000028 = uVar15;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033ff354((long)&stack0x00000008 + 4);
  unaff_x19[2] = in_stack_00000008._4_4_;
  unaff_x19[3] = uVar9;
  unaff_x19[1] = uVar6;
  unaff_w22 = in_stack_00000020._4_4_;
LAB_033efed0:
  *unaff_x19 = (*unaff_x20 ^ *unaff_x19) & 0x80000000 | unaff_w22 << 0x10;
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


