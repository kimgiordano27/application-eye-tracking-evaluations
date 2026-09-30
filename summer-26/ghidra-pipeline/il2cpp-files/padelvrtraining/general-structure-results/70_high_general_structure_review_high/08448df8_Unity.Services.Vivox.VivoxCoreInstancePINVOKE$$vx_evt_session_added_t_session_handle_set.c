/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_added_t_session_handle_set
ENTRY_POINT: 08448df8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_added_t_session_handle_set(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  
  FUN_03d2d2b0(PTR_DAT_0927ce80);
  FUN_03d2d2b0(PTR_DAT_0927bfd8);
  FUN_03d2d2b0(PTR_StringLiteral_52053_0927bf08);
  FUN_03d2d2b0(PTR_DAT_0927c4f0);
  FUN_03d2d2b0(PTR_DAT_0927c4e0);
  FUN_03d2d2b0(PTR_DAT_091a8590);
  FUN_03d2d2b0(PTR_DAT_0920a970);
  FUN_03d2d2b0(PTR_DAT_091a85a8);
  FUN_03d2d2b0(PTR_StringLiteral_50004_091fb040);
  FUN_03d2d2b0(PTR_DAT_0927ce50);
  FUN_03d2d2b0(PTR_DAT_091b0690);
  FUN_03d2d2b0(PTR_DAT_091ae270);
  FUN_03d2d2b0(PTR_DAT_0927ce68);
  FUN_03d2d2b0(PTR_DAT_0927ce88);
  FUN_03d2d2b0(PTR_DAT_0927ce90);
  FUN_03d2d2b0(PTR_StringLiteral_50857_091fb020);
  FUN_03d2d2b0(PTR_DAT_0927c9c8);
  FUN_03d2d2b0(PTR_DAT_0927c9d0);
  FUN_03d2d2b0(PTR_DAT_0927ca30);
  FUN_03d2d2b0(PTR_DAT_091a1be8);
  FUN_03d2d2b0(PTR_DAT_091f1e68);
  FUN_03d2d2b0(PTR_DAT_091f7d98);
  *(undefined1 *)(unaff_x20 + 0xdd0) = 1;
  puVar2 = PTR_StringLiteral_52053_0927bf08;
  in_stack_00000008 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 10);
    lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0920a970);
    FUN_06b6d004(lVar4,*(undefined8 *)PTR_DAT_0927c4e0);
    uVar13 = *(undefined8 *)PTR_StringLiteral_50857_091fb020;
    if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar13 = FUN_07186ef4(uVar13,0);
    puVar3 = PTR_DAT_0927c4f0;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06b6dddc(lVar4,*(undefined8 *)PTR_DAT_091f7d98,uVar13,*(undefined8 *)PTR_DAT_0927c4f0);
    uVar13 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50004_091fb040,0);
    FUN_06b6dddc(lVar4,*(undefined8 *)PTR_DAT_091f1e68,uVar13,*(undefined8 *)puVar3);
    *(long *)(unaff_x19 + 0xe) = lVar4;
    thunk_FUN_03d1023c(unaff_x19 + 0xe,lVar4);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar12 = *(undefined8 *)(unaff_x19 + 8);
    uVar13 = FUN_084474b4(lVar10);
    lVar4 = FUN_083f2c3c(uVar12,uVar13,0);
    lVar7 = *(long *)(unaff_x19 + 0xc);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar11 = *(long **)(lVar10 + 0x10);
    uVar13 = *(undefined8 *)(lVar7 + 0x10);
    uVar12 = *(undefined8 *)(lVar7 + 0x18);
    uVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a85a8);
    FUN_06b6d004(uVar5,*(undefined8 *)PTR_DAT_091a8590);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar1 = 10;
    if ((*(uint *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x1c);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(10);
    }
    lVar4 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0927ce50) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_084490b8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)PTR_DAT_0927ce50,0);
LAB_084490b8:
    lVar4 = (*(code *)*puVar6)(plVar11,uVar12,uVar13,0,uVar5,uVar1,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_stack_00000008 = FUN_0636bf40(lVar4,*(undefined8 *)PTR_DAT_0927ca30);
    uVar8 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9d0);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04a5a974(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar13 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9c8);
  uVar12 = FUN_050d2b9c(uVar13,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_0927ce68);
  uVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927ce90);
  FUN_0626aa00(uVar5,uVar13,uVar12,*(undefined8 *)PTR_DAT_0927ce88);
  puVar3 = PTR_DAT_0927bfd8;
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_062285f0(unaff_x19 + 2,uVar5,*(undefined8 *)puVar3);
  return;
}


