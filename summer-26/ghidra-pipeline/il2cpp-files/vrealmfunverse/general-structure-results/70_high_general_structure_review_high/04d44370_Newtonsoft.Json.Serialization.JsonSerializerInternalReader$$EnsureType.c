/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 04d44370
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d44af0) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  int *unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 *in_stack_00000030;
  long *in_stack_00000038;
  int in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  int iStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined6 uStack0000000000000088;
  undefined8 in_stack_00000090;
  ulong in_stack_00000098;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0x478));
  FUN_02b3c81c(PTR_DAT_0632ac38);
  FUN_02b3c81c(PTR_DAT_06332480);
  FUN_02b3c81c(PTR_DAT_063320c0);
  FUN_02b3c81c(PTR_DAT_06332508);
  *(undefined1 *)(unaff_x20 + 0x6a0) = 1;
  iStack000000000000007c = *unaff_x19;
  in_stack_00000070 = *(long *)(unaff_x19 + 0xc);
  in_stack_00000068 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000050 = 0;
  in_stack_00000048 = 0;
  if (iStack000000000000007c == 0) {
    _in_stack_00000060 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    iStack000000000000007c = -1;
    *unaff_x19 = -1;
LAB_04d44460:
    FUN_04caa4cc(&stack0x00000060,0);
    auVar12 = _in_stack_00000060;
  }
  else {
    auVar12 = ZEXT816(0);
    if (iStack000000000000007c - 4U < 0xfffffffd) {
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      _in_stack_00000060 = FUN_04def550(*(long *)(unaff_x19 + 10),0,0);
      uVar7 = FUN_04caa4b4(&stack0x00000060,0);
      if ((uVar7 & 1) == 0) {
        iStack000000000000007c = 0;
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000060;
        thunk_FUN_02bb0e9c(unaff_x19 + 0x16,0);
        FUN_02e5f0b4(unaff_x19 + 2,&stack0x00000060);
        return;
      }
      goto LAB_04d44460;
    }
  }
  lVar8 = in_stack_00000070;
  in_stack_00000030 = (undefined1 *)&stack0x0000007c;
  in_stack_00000038 = &stack0x00000070;
  in_stack_00000028 = 0;
  if (iStack000000000000007c == 1) {
    _in_stack_00000060 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    iStack000000000000007c = -1;
    *unaff_x19 = -1;
LAB_04d444e8:
    FUN_04caa4cc(&stack0x00000060,0);
LAB_04d444f4:
    iVar2 = FUN_039d8c80(unaff_x19 + 0xe,*(undefined8 *)PTR_DAT_06332480);
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (iVar2 < *(int *)(in_stack_00000070 + 0x38)) {
      FUN_04d40cb0();
      if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      plVar9 = *(long **)(in_stack_00000070 + 0x28);
      lVar8 = *(long *)(in_stack_00000070 + 0x30);
      uVar5 = *(uint *)(in_stack_00000070 + 0x38);
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      if (lVar8 == 0) {
        if (uVar5 != 0) {
          FUN_04d9bcc4(0);
        }
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
      }
      else {
        if (*(uint *)(lVar8 + 0x18) < uVar5) {
          FUN_04d9bcc4(0);
        }
        in_stack_00000018 = lVar8;
        thunk_FUN_02bb0e9c(&stack0x00000018,lVar8);
        in_stack_00000020 = (ulong)uVar5 << 0x20;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      auVar12 = (**(code **)(*plVar9 + 0x2d8))
                          (plVar9,in_stack_00000018,in_stack_00000020,
                           *(undefined8 *)(unaff_x19 + 0x14),*(undefined8 *)(*plVar9 + 0x2e0));
      in_stack_00000080 = 0;
      _uStack0000000000000088 = 0;
      lVar8 = *(long *)PTR_DAT_06332508;
      if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      in_stack_00000080 = auVar12._0_8_;
      thunk_FUN_02bb0e9c(&stack0x00000080,auVar12._0_8_);
      uVar10 = in_stack_00000080;
      uVar7 = _uStack0000000000000088 >> 0x30;
      uStack0000000000000088 = auVar12._8_6_;
      _uStack0000000000000088 = CONCAT26((short)uVar7,uStack0000000000000088) & 0xff00ffffffffffff;
      uVar7 = _uStack0000000000000088;
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      in_stack_00000098 = uVar7;
      in_stack_00000090 = uVar10;
      thunk_FUN_02bb0e9c(&stack0x00000090,0);
      uVar7 = in_stack_00000098;
      uVar10 = in_stack_00000090;
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_063324f0 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      in_stack_00000090 = uVar10;
      in_stack_00000098 = uVar7;
      thunk_FUN_02bb0e9c(&stack0x00000090,0);
      in_stack_00000058 = in_stack_00000098;
      in_stack_00000050 = in_stack_00000090;
      lVar8 = *(long *)(*(long *)PTR_DAT_06332500 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02b76218();
      }
      uVar7 = FUN_0416d51c(&stack0x00000050,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x10));
      if ((uVar7 & 1) != 0) {
LAB_04d44670:
        lVar8 = *(long *)(*(long *)PTR_DAT_063324f8 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02b76218();
        }
        uVar3 = FUN_0416d648(&stack0x00000050,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20));
        lVar8 = in_stack_00000070;
        puVar1 = PTR_DAT_063320c0;
        if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        *(undefined4 *)(in_stack_00000070 + 0x40) = uVar3;
        auVar12 = FUN_039db9d4(unaff_x19 + 0xe,*(undefined8 *)puVar1);
        iVar4 = FUN_04d41508(lVar8,auVar12._0_8_,auVar12._8_8_);
        iVar2 = unaff_x19[0x12];
        goto LAB_04d4488c;
      }
      iStack000000000000007c = 3;
      *unaff_x19 = 3;
      *(ulong *)(unaff_x19 + 0x1e) = in_stack_00000058;
      *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000050;
      thunk_FUN_02bb0e9c(unaff_x19 + 0x1c,0);
      FUN_02e5f024(unaff_x19 + 2,&stack0x00000050);
    }
    else {
      unaff_x19[0x1a] = unaff_x19[0x12];
      plVar9 = *(long **)(in_stack_00000070 + 0x28);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      auVar12 = (**(code **)(*plVar9 + 0x2d8))
                          (plVar9,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 0x10)
                           ,*(undefined8 *)(unaff_x19 + 0x14),*(undefined8 *)(*plVar9 + 0x2e0));
      in_stack_00000080 = 0;
      _uStack0000000000000088 = 0;
      lVar8 = *(long *)PTR_DAT_06332508;
      if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      in_stack_00000080 = auVar12._0_8_;
      thunk_FUN_02bb0e9c(&stack0x00000080,auVar12._0_8_);
      uVar10 = in_stack_00000080;
      uVar7 = _uStack0000000000000088 >> 0x30;
      uStack0000000000000088 = auVar12._8_6_;
      _uStack0000000000000088 = CONCAT26((short)uVar7,uStack0000000000000088) & 0xff00ffffffffffff;
      uVar7 = _uStack0000000000000088;
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      in_stack_00000098 = uVar7;
      in_stack_00000090 = uVar10;
      thunk_FUN_02bb0e9c(&stack0x00000090,0);
      uVar7 = in_stack_00000098;
      uVar10 = in_stack_00000090;
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_063324f0 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      in_stack_00000090 = uVar10;
      in_stack_00000098 = uVar7;
      thunk_FUN_02bb0e9c(&stack0x00000090,0);
      in_stack_00000058 = in_stack_00000098;
      in_stack_00000050 = in_stack_00000090;
      lVar8 = *(long *)(*(long *)PTR_DAT_06332500 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02b76218();
      }
      uVar7 = FUN_0416d51c(&stack0x00000050,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x10));
      auVar12 = _in_stack_00000060;
      if ((uVar7 & 1) != 0) goto LAB_04d44858;
      iStack000000000000007c = 2;
      *unaff_x19 = 2;
      *(ulong *)(unaff_x19 + 0x1e) = in_stack_00000058;
      *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000050;
      thunk_FUN_02bb0e9c(unaff_x19 + 0x1c,0);
      FUN_02e5f024(unaff_x19 + 2,&stack0x00000050);
    }
LAB_04d44a24:
    iVar2 = 0;
    iVar4 = 5;
  }
  else {
    if (iStack000000000000007c == 2) {
      in_stack_00000058 = *(ulong *)(unaff_x19 + 0x1e);
      in_stack_00000050 = *(undefined8 *)(unaff_x19 + 0x1c);
      unaff_x19[0x1c] = 0;
      unaff_x19[0x1d] = 0;
      unaff_x19[0x1e] = 0;
      unaff_x19[0x1f] = 0;
      iStack000000000000007c = -1;
      *unaff_x19 = -1;
LAB_04d44858:
      lVar8 = *(long *)(*(long *)PTR_DAT_063324f8 + 0x20);
      _in_stack_00000060 = auVar12;
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02b76218();
      }
      iVar4 = FUN_0416d648(&stack0x00000050,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20));
      iVar2 = unaff_x19[0x1a];
LAB_04d4488c:
      iVar2 = iVar2 + iVar4;
    }
    else {
      _in_stack_00000060 = auVar12;
      if (iStack000000000000007c == 3) {
        in_stack_00000058 = *(ulong *)(unaff_x19 + 0x1e);
        in_stack_00000050 = *(undefined8 *)(unaff_x19 + 0x1c);
        unaff_x19[0x1c] = 0;
        unaff_x19[0x1d] = 0;
        unaff_x19[0x1e] = 0;
        unaff_x19[0x1f] = 0;
        iStack000000000000007c = -1;
        *unaff_x19 = -1;
        goto LAB_04d44670;
      }
      auVar12 = FUN_039db9d4(unaff_x19 + 0xe,*(undefined8 *)PTR_DAT_063320c0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar5 = FUN_04d41508(lVar8,auVar12._0_8_,auVar12._8_8_);
      uVar6 = FUN_039d8c80(unaff_x19 + 0xe,*(undefined8 *)PTR_DAT_06332480);
      if (uVar5 != uVar6) {
        if (0 < (int)uVar5) {
          uVar6 = unaff_x19[0x11];
          lVar8 = *(long *)PTR_DAT_06332478;
          if ((uVar6 & 0x7fffffff) < uVar5) {
            FUN_04d9bd3c(0x18,0);
          }
          uVar10 = *(undefined8 *)(unaff_x19 + 0xe);
          iVar2 = unaff_x19[0x10];
          in_stack_00000090 = 0;
          in_stack_00000098 = 0;
          if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
            FUN_02b76218();
          }
          in_stack_00000090 = uVar10;
          thunk_FUN_02bb0e9c(&stack0x00000090,uVar10);
          in_stack_00000098 = CONCAT44(uVar6 - uVar5,iVar2 + uVar5);
          *(ulong *)(unaff_x19 + 0x10) = in_stack_00000098;
          *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000090;
          thunk_FUN_02bb0e9c(unaff_x19 + 0xe,0);
          unaff_x19[0x12] = unaff_x19[0x12] + uVar5;
        }
        if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        *(undefined4 *)(in_stack_00000070 + 0x3c) = 0;
        *(undefined4 *)(in_stack_00000070 + 0x40) = 0;
        if (*(int *)(in_stack_00000070 + 0x44) < 1) goto LAB_04d444f4;
        lVar8 = FUN_04d413ac(in_stack_00000070,*(undefined8 *)(unaff_x19 + 0x14));
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        auVar12 = FUN_04def550(lVar8,0,0);
        _in_stack_00000060 = auVar12;
        uVar7 = FUN_04caa4b4(&stack0x00000060,0);
        if ((uVar7 & 1) != 0) goto LAB_04d444e8;
        iStack000000000000007c = 1;
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000060;
        thunk_FUN_02bb0e9c(unaff_x19 + 0x16,0);
        FUN_02e5f0b4(unaff_x19 + 2,&stack0x00000060);
        goto LAB_04d44a24;
      }
      iVar2 = unaff_x19[0x12] + uVar5;
    }
    iVar4 = 0xb;
  }
  if (-1 < iStack000000000000007c) {
LAB_04d44a58:
    puVar1 = PTR_DAT_063324e8;
    if (iVar4 == 0xb) {
      *unaff_x19 = -2;
      FUN_03a36904(unaff_x19 + 2,iVar2,*(undefined8 *)puVar1);
    }
    else if (iVar4 == 0) {
      uVar11 = *(undefined8 *)(&stack0x00000040 + (long)(in_stack_00000048 + -1) * 8);
      *unaff_x19 = -2;
      uVar10 = thunk_FUN_02ba3594(PTR_DAT_06332510);
      FUN_03a369a0(unaff_x19 + 2,uVar11,uVar10);
    }
    return;
  }
  if (*in_stack_00000038 != 0) {
    lVar8 = FUN_04d40734();
    if (lVar8 != 0) {
      FUN_04de299c(lVar8,0);
      goto LAB_04d44a58;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


