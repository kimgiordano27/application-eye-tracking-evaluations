/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodePose2
ENTRY_POINT: 033ef798
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

void OVRPlugin_OVRP_1_8_0__ovrp_GetNodePose2(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  uint uStack000000000000000c;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  int iStack0000000000000024;
  uint in_stack_00000028;
  uint uStack000000000000002c;
  uint in_stack_00000030;
  undefined4 uStack0000000000000034;
  ulong in_stack_00000038;
  int iStack0000000000000040;
  undefined4 uStack0000000000000044;
  long lStack0000000000000048;
  
  puVar4 = StringLiteral_9323;
  lVar2 = tpidr_el0;
  lStack0000000000000048 = *(long *)(lVar2 + 0x28);
  if ((DAT_044a6b81 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9323);
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
                );
    DAT_044a6b81 = 1;
  }
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  in_stack_00000038 = 0;
  _iStack0000000000000040 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  uStack000000000000000c = 0;
  iVar19 = (int)((*param_1 - *param_2) * 0x100) >> 0x18;
  iVar8 = *(int *)(*(long *)puVar4 + 0xe0);
  iStack0000000000000024 = iVar19;
  if (iVar8 == 0) {
    thunk_FUN_01dc4f30();
    iVar8 = *(int *)(*(long *)puVar4 + 0xe0);
  }
  uVar10 = param_2[1];
  uVar7 = param_2[3];
  if (iVar8 == 0) {
    thunk_FUN_01dc4f30();
    if (uVar7 == 0 && uVar10 == 0) goto LAB_033efa80;
  }
  else if (uVar7 == 0 && uVar10 == 0) {
LAB_033efa80:
    uVar10 = param_2[2];
    uVar18 = (ulong)uVar10;
    if (uVar10 == 0) {
      thunk_FUN_01dd295c(StringLiteral_9346);
      uVar14 = thunk_FUN_01de27b8();
      FUN_0337ebbc(uVar14,0);
LAB_033eff50:
      uVar15 = thunk_FUN_01dd295c(StringLiteral_9345);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar14,uVar15);
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    puVar3 = 
    Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
    ;
    uVar16 = *(ulong *)(param_1 + 2);
    in_stack_00000028 = (uint)uVar16;
    uStack000000000000002c = (uint)(uVar16 >> 0x20);
    if (param_1[1] == 0) {
      in_stack_00000030 = 0;
      if (uVar16 == 0) goto LAB_033efc94;
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = uVar16 / uVar18;
      }
      uVar7 = in_stack_00000028 - (int)uVar17 * uVar10;
      uStack000000000000002c = (uint)(uVar17 >> 0x20);
      in_stack_00000028 = (int)uVar17;
    }
    else {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = CONCAT44(param_1[1],uStack000000000000002c) / uVar18;
      }
      iVar8 = (int)uVar17;
      uVar16 = uVar16 & 0xffffffff | (ulong)(uStack000000000000002c - uVar10 * iVar8) << 0x20;
      in_stack_00000030 = (uint)(uVar17 >> 0x20);
      uStack000000000000002c = iVar8;
      if (uVar16 == 0) {
LAB_033efc94:
        uVar7 = 0;
      }
      else {
        iVar8 = 0;
        if (uVar18 != 0) {
          iVar8 = (int)(uVar16 / uVar18);
        }
        uVar7 = in_stack_00000028 - uVar10 * iVar8;
        in_stack_00000028 = iVar8;
      }
    }
    bVar6 = false;
    if (uVar7 == 0) goto LAB_033efcdc;
    while (uVar16 = _in_stack_00000028, iVar19 != 0x1c) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar11 = FUN_033f2328(&stack0x00000028,iVar19);
      uVar16 = _in_stack_00000028;
      if (uVar11 == 0) break;
      bVar6 = true;
      while( true ) {
        lVar12 = *(long *)puVar4;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar12 = *(long *)puVar4;
        }
        lVar12 = **(long **)(lVar12 + 0xb8);
        if (lVar12 == 0) goto LAB_033eff18;
        if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_033eff1c;
        uVar16 = (ulong)*(uint *)(lVar12 + (long)(int)uVar11 * 4 + 0x20);
        iStack0000000000000024 = iStack0000000000000024 + uVar11;
        iVar8 = FUN_033f1490(&stack0x00000028,uVar16);
        if (iVar8 != 0) goto LAB_033eff20;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar8 = iStack0000000000000024;
        uVar16 = uVar16 * uVar7;
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = uVar16 / uVar18;
        }
        uVar7 = (int)uVar16 - uVar10 * (int)uVar17;
        bVar5 = CARRY8(_in_stack_00000028,uVar17 & 0xffffffff);
        _in_stack_00000028 = _in_stack_00000028 + (uVar17 & 0xffffffff);
        if ((bVar5) &&
           (bVar5 = 0xfffffffe < in_stack_00000030, in_stack_00000030 = in_stack_00000030 + 1, bVar5
           )) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          bVar5 = uVar7 == 0;
          goto LAB_033efe40;
        }
        iVar19 = iStack0000000000000024;
        if (uVar7 != 0) break;
LAB_033efcdc:
        uVar16 = _in_stack_00000028;
        if (-1 < iVar19) goto joined_r0x033efe80;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar11 = FUN_033946d4(9,-iVar19,0);
      }
    }
    uVar11 = uVar7 << 1;
    if (uVar7 <= uVar11) {
      if (uVar11 < uVar10) goto FUN_033efe84;
      if (uVar11 <= uVar10) goto LAB_033efdd4;
    }
    goto LAB_033efddc;
  }
  uVar10 = param_2[1];
  if (uVar10 == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar10 = param_2[3];
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar7 = uVar10 << 0x10;
  if (0xffff < uVar10) {
    uVar7 = uVar10;
  }
  uVar11 = 0x11;
  if (0xffff < uVar10) {
    uVar11 = 1;
  }
  uVar10 = uVar11 | 8;
  uVar1 = uVar7 << 8;
  if (uVar7 >> 0x18 != 0) {
    uVar10 = uVar11;
    uVar1 = uVar7;
  }
  bVar6 = uVar1 >> 0x1c != 0;
  uVar7 = uVar1 << 4;
  if (bVar6) {
    uVar7 = uVar1;
  }
  uVar11 = uVar10 | 4;
  if (bVar6) {
    uVar11 = uVar10;
  }
  uVar1 = uVar7 << 2;
  uVar10 = uVar11 | 2;
  if (uVar7 >> 0x1e != 0) {
    uVar1 = uVar7;
    uVar10 = uVar11;
  }
  uVar10 = uVar10 + ((int)uVar1 >> 0x1f);
  in_stack_00000038 = *(long *)(param_1 + 2) << ((ulong)uVar10 & 0x3f);
  _iStack0000000000000040 = CONCAT44(param_1[1],param_1[3]) >> ((ulong)(0x20 - uVar10) & 0x3f);
  uVar7 = param_2[1];
  uVar18 = *(long *)(param_2 + 2) << ((ulong)uVar10 & 0x3f);
  if (uVar7 == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uStack000000000000002c = FUN_033f1268((ulong)&stack0x00000038 | 4,uVar18);
    uVar9 = FUN_033f1268(&stack0x00000038,uVar18);
    puVar3 = 
    Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
    ;
    _in_stack_00000028 = CONCAT44(uStack000000000000002c,uVar9);
    bVar6 = false;
    do {
      uVar17 = in_stack_00000038;
      iVar8 = iStack0000000000000024;
      if (in_stack_00000038 != 0) {
        if (iStack0000000000000024 != 0x1c) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar10 = FUN_033f2328(&stack0x00000028,iVar8);
          if (uVar10 != 0) {
            bVar6 = true;
            goto LAB_033efb84;
          }
        }
        uVar16 = _in_stack_00000028;
        if ((long)uVar17 < 0) goto LAB_033efddc;
        uVar17 = uVar17 << 1;
        goto LAB_033efdc8;
      }
      iVar19 = iStack0000000000000024;
      uVar16 = _in_stack_00000028;
      if (-1 < iStack0000000000000024) goto joined_r0x033efe80;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar10 = FUN_033946d4(9,-iVar8,0);
LAB_033efb84:
      lVar12 = *(long *)puVar4;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar12 = *(long *)puVar4;
      }
      lVar12 = **(long **)(lVar12 + 0xb8);
      if (lVar12 == 0) goto LAB_033eff18;
      if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_033eff1c;
      uVar9 = *(undefined4 *)(lVar12 + (long)(int)uVar10 * 4 + 0x20);
      iStack0000000000000024 = iStack0000000000000024 + uVar10;
      iVar8 = FUN_033f1490(&stack0x00000028,uVar9);
      if (iVar8 != 0) goto LAB_033eff20;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f1518(&stack0x00000038,uVar9);
      uVar17 = FUN_033f1268(&stack0x00000038,uVar18);
      uVar16 = in_stack_00000038;
      iVar8 = iStack0000000000000024;
      bVar5 = CARRY8(_in_stack_00000028,uVar17 & 0xffffffff);
      _in_stack_00000028 = _in_stack_00000028 + (uVar17 & 0xffffffff);
    } while ((!bVar5) ||
            (bVar5 = in_stack_00000030 != 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1,
            bVar5));
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    iStack0000000000000024 = FUN_033f21d0(&stack0x00000028,iVar8,uVar16 != 0);
    iVar19 = iStack0000000000000024;
    uVar16 = _in_stack_00000028;
  }
  else {
    in_stack_00000010 = uVar18;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      uVar7 = param_2[1];
    }
    uVar10 = (uint)(CONCAT44(uVar7,param_2[3]) >> (0x20 - uVar10 & 0x3f));
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,uVar10);
    _in_stack_00000028 = FUN_033f135c(&stack0x00000038,&stack0x00000010);
    puVar3 = 
    Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
    ;
    _in_stack_00000028 = _in_stack_00000028 & 0xffffffff;
    bVar6 = false;
    do {
      uVar17 = in_stack_00000038;
      iVar8 = iStack0000000000000024;
      iVar19 = iStack0000000000000040;
      uVar16 = _in_stack_00000028;
      if (in_stack_00000038 != 0 || iStack0000000000000040 != 0) {
        if (iStack0000000000000024 != 0x1c) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar7 = FUN_033f2328(&stack0x00000028,iVar8);
          uVar16 = _in_stack_00000028;
          if (uVar7 != 0) {
            bVar6 = true;
            goto LAB_033ef9b8;
          }
        }
        if (iVar19 < 0) goto LAB_033efddc;
        uVar17 = uVar17 << 1;
        uVar7 = (uint)(CONCAT44(iVar19,in_stack_00000038._4_4_) >> 0x1f);
        _iStack0000000000000040 = CONCAT44(uStack0000000000000044,uVar7);
        in_stack_00000038 = uVar17;
        if (uVar10 < uVar7) goto LAB_033efddc;
        _in_stack_00000028 = uVar16;
        if (uVar7 == uVar10) goto LAB_033efdc8;
        goto FUN_033efe84;
      }
      iVar19 = iStack0000000000000024;
      if (-1 < iStack0000000000000024) goto joined_r0x033efe80;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar7 = FUN_033946d4(9,-iVar8,0);
LAB_033ef9b8:
      lVar12 = *(long *)puVar4;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar12 = *(long *)puVar4;
      }
      lVar12 = **(long **)(lVar12 + 0xb8);
      if (lVar12 == 0) {
LAB_033eff18:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar7) {
LAB_033eff1c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      uVar9 = *(undefined4 *)(lVar12 + (long)(int)uVar7 * 4 + 0x20);
      iStack0000000000000024 = iStack0000000000000024 + uVar7;
      iVar8 = FUN_033f1490(&stack0x00000028,uVar9);
      if (iVar8 != 0) goto LAB_033eff20;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar9 = FUN_033f1490(&stack0x00000038,uVar9);
      _iStack0000000000000040 = CONCAT44(uVar9,iStack0000000000000040);
      uVar13 = FUN_033f135c(&stack0x00000038,&stack0x00000010);
      uVar17 = _iStack0000000000000040;
      uVar16 = in_stack_00000038;
      iVar8 = iStack0000000000000024;
      bVar5 = CARRY8(_in_stack_00000028,uVar13 & 0xffffffff);
      _in_stack_00000028 = _in_stack_00000028 + (uVar13 & 0xffffffff);
    } while ((!bVar5) ||
            (bVar5 = in_stack_00000030 != 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1,
            bVar5));
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar5 = uVar17 == 0 && uVar16 == 0;
LAB_033efe40:
    iStack0000000000000024 = FUN_033f21d0(&stack0x00000028,iVar8,!bVar5);
    iVar19 = iStack0000000000000024;
    uVar16 = _in_stack_00000028;
  }
joined_r0x033efe80:
  if (!bVar6) {
    _in_stack_00000028 = uVar16;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    *(ulong *)(param_1 + 2) = uVar16;
    param_1[1] = in_stack_00000030;
    goto LAB_033efed0;
  }
FUN_033efe84:
  uVar7 = in_stack_00000030;
  uStack000000000000002c = (uint)(uVar16 >> 0x20);
  uVar10 = uStack000000000000002c;
  in_stack_00000028 = (uint)uVar16;
  uStack000000000000000c = in_stack_00000028;
  _in_stack_00000028 = uVar16;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033ff354(&stack0x0000000c);
  param_1[2] = uStack000000000000000c;
  param_1[3] = uVar10;
  param_1[1] = uVar7;
  iVar19 = iStack0000000000000024;
LAB_033efed0:
  *param_1 = (*param_2 ^ *param_1) & 0x80000000 | iVar19 << 0x10;
  if (*(long *)(lVar2 + 0x28) != lStack0000000000000048) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_033eff20:
  thunk_FUN_01dd295c(StringLiteral_1150);
  uVar14 = thunk_FUN_01de27b8();
  uVar15 = thunk_FUN_01dd295c(StringLiteral_8348);
  FUN_03390704(uVar14,uVar15,0);
  goto LAB_033eff50;
LAB_033efdc8:
  uVar16 = _in_stack_00000028;
  if (uVar18 < uVar17) {
LAB_033efddc:
    iVar8 = iStack0000000000000024;
    bVar6 = uVar16 == 0xffffffffffffffff;
    _in_stack_00000028 = uVar16 + 1;
    uVar16 = _in_stack_00000028;
    if ((bVar6) &&
       (bVar6 = in_stack_00000030 == 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1, bVar6))
    {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iStack0000000000000024 = FUN_033f21d0(&stack0x00000028,iVar8,1);
      uVar16 = _in_stack_00000028;
    }
  }
  else if (uVar17 == uVar18) {
LAB_033efdd4:
    if ((uVar16 & 1) != 0) goto LAB_033efddc;
  }
  goto FUN_033efe84;
}


