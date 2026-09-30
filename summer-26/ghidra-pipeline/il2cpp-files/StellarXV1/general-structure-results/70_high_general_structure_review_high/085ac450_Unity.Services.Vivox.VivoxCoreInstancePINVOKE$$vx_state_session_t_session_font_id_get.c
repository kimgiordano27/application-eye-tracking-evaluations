/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_session_t_session_font_id_get
ENTRY_POINT: 085ac450
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_session_font_id_get
               (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  long *unaff_x22;
  long unaff_x24;
  byte bVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  undefined4 uStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  undefined4 uStack00000000000001e0;
  undefined4 uStack00000000000001e4;
  
  uVar8 = FUN_05286644(param_2,*param_1);
  auVar15 = FUN_08518b68();
  uVar4 = FUN_08518c60();
  if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0858a07c(auVar15._0_8_,auVar15._8_8_,uVar4,uVar8,&stack0x000001d8,0);
  if ((unaff_x24 == 0) || (uVar9 = FUN_084ee4e4(), (uVar9 & 1) == 0)) {
    bVar13 = 2;
  }
  else {
    bVar13 = 0;
  }
  bVar2 = *(byte *)(unaff_x20 + 0x1ac);
  uVar5 = FUN_08518c60();
  uVar14 = uStack00000000000001e0;
  uVar4 = uStack00000000000001d8;
  if (*(long *)(unaff_x19 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0xc0) + 0x48);
  uVar6 = FUN_08518cf0();
  if (*(int *)(*(long *)PTR_DAT_0932eef0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_085abdb0(uVar4,uStack00000000000001dc,uVar14,uStack00000000000001e4,uVar5,uVar8,
               bVar13 | bVar2 ^ 1,uVar6 & 1);
  if (in_stack_00000018._4_4_ == 0) {
    uVar9 = FUN_0898c104(0);
    if (((uVar9 & 1) == 0) || (uVar9 = FUN_085189dc(), (uVar9 & 1) == 0)) {
      uVar9 = FUN_085189dc();
      if ((uVar9 & 1) == 0) {
        iVar7 = (uint)*(byte *)(unaff_x20 + 0x18c) << 1;
      }
      else {
        iVar7 = 2;
      }
      if (*(long *)(unaff_x20 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar9 = FUN_083e3844(*(long *)(unaff_x20 + 0x1a0),0);
      iVar1 = 0;
      if ((uVar9 & 1) == 0) {
        iVar1 = iVar7;
      }
      puVar11 = (undefined8 *)FUN_0858b7d0();
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      in_stack_000000e8 = *(undefined8 *)(in_stack_00000010 + 0x30);
      in_stack_000000e0 = *(undefined8 *)(in_stack_00000010 + 0x28);
      uVar8 = *puVar11;
      in_stack_000000f8 = *(undefined8 *)(in_stack_00000010 + 0x40);
      in_stack_000000f0 = *(undefined8 *)(in_stack_00000010 + 0x38);
      _uStack0000000000000100 = *(undefined8 *)(in_stack_00000010 + 0x48);
      if (*(int *)(*(long *)PTR_DAT_092b79b8 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)PTR_DAT_092b79b8);
      }
      in_stack_00000040 = _uStack0000000000000100;
      in_stack_00000028 = in_stack_000000e8;
      in_stack_00000020 = in_stack_000000e0;
      in_stack_00000038 = in_stack_000000f8;
      in_stack_00000030 = in_stack_000000f0;
      FUN_0845cdc8(0,0,0,0,uVar8,&stack0x00000020,iVar1,0,0,0);
      puVar11 = (undefined8 *)FUN_0858b7d0();
      puVar3 = PTR_DAT_093247c0;
      uVar8 = *puVar11;
      if (*(int *)(*(long *)PTR_DAT_093247c0 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)PTR_DAT_093247c0);
      }
      if (DAT_0989d7e8 == '\0') {
        FUN_04077588(PTR_DAT_093247c0);
        DAT_0989d7e8 = '\x01';
      }
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar10 = *(long *)puVar3;
      }
      if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      puVar11 = (undefined8 *)(**(long **)(lVar10 + 0xb8) + 0x10);
      *puVar11 = uVar8;
      thunk_FUN_040ec700(puVar11,uVar8);
      uVar8 = *(undefined8 *)(unaff_x19 + 0xc0);
      lVar10 = *unaff_x22;
      uVar12 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_0932eef0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_085acb28(uVar12,uVar8,lVar10,in_stack_00000010);
      if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_0850cd8c(*(long *)(unaff_x20 + 0x1d8),in_stack_00000010,in_stack_00000010,0);
    }
    else {
      FUN_089ea1dc(&stack0x000000e0,2,0);
      in_stack_000000d0 = _uStack0000000000000100;
      in_stack_000000b8 = in_stack_000000e8;
      in_stack_000000b0 = in_stack_000000e0;
      in_stack_000000c8 = in_stack_000000f8;
      in_stack_000000c0 = in_stack_000000f0;
      FUN_089f5d6c();
      lVar10 = *unaff_x22;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      in_stack_00000058 = *(undefined8 *)(in_stack_00000010 + 0x30);
      in_stack_00000050 = *(undefined8 *)(in_stack_00000010 + 0x28);
      in_stack_00000068 = *(undefined8 *)(in_stack_00000010 + 0x40);
      in_stack_00000060 = *(undefined8 *)(in_stack_00000010 + 0x38);
      in_stack_00000070 = *(undefined8 *)(in_stack_00000010 + 0x48);
      in_stack_00000088 = *(undefined8 *)(lVar10 + 0x30);
      in_stack_00000080 = *(undefined8 *)(lVar10 + 0x28);
      in_stack_00000098 = *(undefined8 *)(lVar10 + 0x40);
      in_stack_00000090 = *(undefined8 *)(lVar10 + 0x38);
      in_stack_000000a0 = *(undefined8 *)(lVar10 + 0x48);
      FUN_089fbb60();
    }
  }
  else {
    if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = *(long *)(*unaff_x22 + 0x18);
    if ((lVar10 == 0) || (iVar7 = FUN_089a4668(lVar10,0), iVar7 != 1)) {
      if (*(long *)(unaff_x19 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
    else if (*(long *)(unaff_x19 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = *unaff_x22;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(char *)(lVar10 + 0xa8) == '\0') {
      if (DAT_09885629 == '\0') {
        FUN_04077588(PTR_DAT_09286e28);
        DAT_09885629 = '\x01';
      }
      uVar4 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_09286e28 + 0xb8) + 8);
      uVar14 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_09286e28 + 0xb8) + 0xc);
    }
    else {
      FUN_0844a0b8(&stack0x000000e0,lVar10,0);
      if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar4 = uStack0000000000000100;
      FUN_0844a0b8(&stack0x000000e0,*unaff_x22,0);
      uVar14 = uStack0000000000000104;
    }
    if (*(long *)(unaff_x19 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(*(long *)PTR_DAT_09326db8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_084582f8(uVar4,uVar14,0,0);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = *(long *)(unaff_x20 + 0x1d8);
    puVar11 = (undefined8 *)FUN_084ee4cc();
    uVar8 = *puVar11;
    puVar11 = (undefined8 *)FUN_084ee4d4();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0850cd8c(lVar10,uVar8,*puVar11,0);
  }
  FUN_0840a284(&stack0x000001ec,0);
  return;
}


