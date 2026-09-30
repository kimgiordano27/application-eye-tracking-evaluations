/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 04d44914
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d44af0) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *unaff_x19;
  undefined8 uVar10;
  int unaff_w21;
  undefined1 auVar11 [16];
  long in_stack_00000018;
  long in_stack_00000020;
  long *in_stack_00000038;
  int in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined6 uStack0000000000000088;
  undefined8 in_stack_00000090;
  ulong in_stack_00000098;
  
  thunk_FUN_02bb0e9c();
  unaff_x19[0x12] = unaff_x19[0x12] + unaff_w21;
  if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined4 *)(in_stack_00000070 + 0x3c) = 0;
  *(undefined4 *)(in_stack_00000070 + 0x40) = 0;
  if (*(int *)(in_stack_00000070 + 0x44) < 1) {
LAB_04d444f4:
    iVar3 = FUN_039d8c80(unaff_x19 + 0xe,*(undefined8 *)PTR_DAT_06332480);
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (iVar3 < *(int *)(in_stack_00000070 + 0x38)) {
      FUN_04d40cb0();
      if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      plVar6 = *(long **)(in_stack_00000070 + 0x28);
      lVar7 = *(long *)(in_stack_00000070 + 0x30);
      uVar1 = *(uint *)(in_stack_00000070 + 0x38);
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      if (lVar7 == 0) {
        if (uVar1 != 0) {
          FUN_04d9bcc4(0);
        }
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
      }
      else {
        if (*(uint *)(lVar7 + 0x18) < uVar1) {
          FUN_04d9bcc4(0);
        }
        in_stack_00000018 = lVar7;
        thunk_FUN_02bb0e9c(&stack0x00000018,lVar7);
        in_stack_00000020 = (ulong)uVar1 << 0x20;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      auVar11 = (**(code **)(*plVar6 + 0x2d8))
                          (plVar6,in_stack_00000018,in_stack_00000020,
                           *(undefined8 *)(unaff_x19 + 0x14),*(undefined8 *)(*plVar6 + 0x2e0));
      in_stack_00000080 = 0;
      _uStack0000000000000088 = 0;
      lVar7 = *(long *)PTR_DAT_06332508;
      if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      in_stack_00000080 = auVar11._0_8_;
      thunk_FUN_02bb0e9c(&stack0x00000080,auVar11._0_8_);
      uVar9 = in_stack_00000080;
      uVar8 = _uStack0000000000000088 >> 0x30;
      uStack0000000000000088 = auVar11._8_6_;
      _uStack0000000000000088 = CONCAT26((short)uVar8,uStack0000000000000088) & 0xff00ffffffffffff;
      uVar8 = _uStack0000000000000088;
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      in_stack_00000098 = uVar8;
      in_stack_00000090 = uVar9;
      thunk_FUN_02bb0e9c(&stack0x00000090,0);
      uVar8 = in_stack_00000098;
      uVar9 = in_stack_00000090;
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_063324f0 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      in_stack_00000090 = uVar9;
      in_stack_00000098 = uVar8;
      thunk_FUN_02bb0e9c(&stack0x00000090,0);
      in_stack_00000058 = in_stack_00000098;
      in_stack_00000050 = in_stack_00000090;
      lVar7 = *(long *)(*(long *)PTR_DAT_06332500 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02b76218();
      }
      uVar8 = FUN_0416d51c(&stack0x00000050,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
      if ((uVar8 & 1) != 0) {
        lVar7 = *(long *)(*(long *)PTR_DAT_063324f8 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02b76218();
        }
        uVar4 = FUN_0416d648(&stack0x00000050,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
        lVar7 = in_stack_00000070;
        puVar2 = PTR_DAT_063320c0;
        if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        *(undefined4 *)(in_stack_00000070 + 0x40) = uVar4;
        auVar11 = FUN_039db9d4(unaff_x19 + 0xe,*(undefined8 *)puVar2);
        iVar5 = FUN_04d41508(lVar7,auVar11._0_8_,auVar11._8_8_);
        iVar3 = unaff_x19[0x12];
LAB_04d4488c:
        iVar3 = iVar3 + iVar5;
        iVar5 = 0xb;
        goto LAB_04d44a30;
      }
      in_stack_00000078._4_4_ = 3;
      *unaff_x19 = 3;
      *(ulong *)(unaff_x19 + 0x1e) = in_stack_00000058;
      *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000050;
      thunk_FUN_02bb0e9c(unaff_x19 + 0x1c,0);
      FUN_02e5f024(unaff_x19 + 2,&stack0x00000050);
    }
    else {
      unaff_x19[0x1a] = unaff_x19[0x12];
      plVar6 = *(long **)(in_stack_00000070 + 0x28);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      auVar11 = (**(code **)(*plVar6 + 0x2d8))
                          (plVar6,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)(unaff_x19 + 0x10)
                           ,*(undefined8 *)(unaff_x19 + 0x14),*(undefined8 *)(*plVar6 + 0x2e0));
      in_stack_00000080 = 0;
      _uStack0000000000000088 = 0;
      lVar7 = *(long *)PTR_DAT_06332508;
      if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      in_stack_00000080 = auVar11._0_8_;
      thunk_FUN_02bb0e9c(&stack0x00000080,auVar11._0_8_);
      uVar9 = in_stack_00000080;
      uVar8 = _uStack0000000000000088 >> 0x30;
      uStack0000000000000088 = auVar11._8_6_;
      _uStack0000000000000088 = CONCAT26((short)uVar8,uStack0000000000000088) & 0xff00ffffffffffff;
      uVar8 = _uStack0000000000000088;
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      in_stack_00000098 = uVar8;
      in_stack_00000090 = uVar9;
      thunk_FUN_02bb0e9c(&stack0x00000090,0);
      uVar8 = in_stack_00000098;
      uVar9 = in_stack_00000090;
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_063324f0 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      in_stack_00000090 = uVar9;
      in_stack_00000098 = uVar8;
      thunk_FUN_02bb0e9c(&stack0x00000090,0);
      in_stack_00000058 = in_stack_00000098;
      in_stack_00000050 = in_stack_00000090;
      lVar7 = *(long *)(*(long *)PTR_DAT_06332500 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02b76218();
      }
      uVar8 = FUN_0416d51c(&stack0x00000050,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
      if ((uVar8 & 1) != 0) {
        lVar7 = *(long *)(*(long *)PTR_DAT_063324f8 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02b76218();
        }
        iVar5 = FUN_0416d648(&stack0x00000050,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
        iVar3 = unaff_x19[0x1a];
        goto LAB_04d4488c;
      }
      in_stack_00000078._4_4_ = 2;
      *unaff_x19 = 2;
      *(ulong *)(unaff_x19 + 0x1e) = in_stack_00000058;
      *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000050;
      thunk_FUN_02bb0e9c(unaff_x19 + 0x1c,0);
      FUN_02e5f024(unaff_x19 + 2,&stack0x00000050);
    }
  }
  else {
    lVar7 = FUN_04d413ac(in_stack_00000070,*(undefined8 *)(unaff_x19 + 0x14));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    _in_stack_00000060 = FUN_04def550(lVar7,0,0);
    uVar8 = FUN_04caa4b4(&stack0x00000060,0);
    if ((uVar8 & 1) != 0) {
      FUN_04caa4cc(&stack0x00000060,0);
      goto LAB_04d444f4;
    }
    in_stack_00000078._4_4_ = 1;
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000060;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x16,0);
    FUN_02e5f0b4(unaff_x19 + 2,&stack0x00000060);
  }
  iVar3 = 0;
  iVar5 = 5;
LAB_04d44a30:
  if (in_stack_00000078._4_4_ < 0) {
    if ((*in_stack_00000038 == 0) || (lVar7 = FUN_04d40734(), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_04de299c(lVar7,0);
  }
  puVar2 = PTR_DAT_063324e8;
  if (iVar5 == 0xb) {
    *unaff_x19 = 0xfffffffe;
    FUN_03a36904(unaff_x19 + 2,iVar3,*(undefined8 *)puVar2);
  }
  else if (iVar5 == 0) {
    uVar10 = *(undefined8 *)(&stack0x00000040 + (long)(in_stack_00000048 + -1) * 8);
    *unaff_x19 = 0xfffffffe;
    uVar9 = thunk_FUN_02ba3594(PTR_DAT_06332510);
    FUN_03a369a0(unaff_x19 + 2,uVar10,uVar9);
  }
  return;
}


