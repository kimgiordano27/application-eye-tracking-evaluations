/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_removed_t_uri_set
ENTRY_POINT: 08449b3c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_removed_t_uri_set(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0x4e8));
  FUN_03d2d2b0(PTR_DAT_0927c4f0);
  FUN_03d2d2b0(PTR_DAT_0927c4e0);
  FUN_03d2d2b0(PTR_DAT_0920a970);
  FUN_03d2d2b0(PTR_StringLiteral_49965_0927cec8);
  FUN_03d2d2b0(PTR_StringLiteral_50036_0927ce48);
  FUN_03d2d2b0(PTR_DAT_0927ce50);
  FUN_03d2d2b0(PTR_DAT_091b0690);
  FUN_03d2d2b0(PTR_DAT_091ae270);
  FUN_03d2d2b0(PTR_DAT_0927ced0);
  FUN_03d2d2b0(PTR_DAT_0927ced8);
  FUN_03d2d2b0(PTR_DAT_0927cee0);
  FUN_03d2d2b0(PTR_DAT_0927c9c8);
  FUN_03d2d2b0(PTR_DAT_0927c9d0);
  FUN_03d2d2b0(PTR_DAT_0927ca30);
  FUN_03d2d2b0(PTR_DAT_091a1be8);
  FUN_03d2d2b0(PTR_DAT_091e1bc8);
  FUN_03d2d2b0(PTR_DAT_091a85e8);
  FUN_03d2d2b0(PTR_DAT_091d3930);
  FUN_03d2d2b0(PTR_DAT_091e4e18);
  FUN_03d2d2b0(PTR_DAT_091e6a08);
  FUN_03d2d2b0(PTR_DAT_091d39a0);
  FUN_03d2d2b0(PTR_DAT_091e98b8);
  FUN_03d2d2b0(PTR_DAT_091f1e68);
  FUN_03d2d2b0(PTR_DAT_091f7d98);
  *(undefined1 *)(unaff_x20 + 0xdd4) = 1;
  puVar2 = PTR_StringLiteral_52049_0927bea8;
  in_stack_00000008 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 10);
    lVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0920a970);
    FUN_06b6d004(lVar5,*(undefined8 *)PTR_DAT_0927c4e0);
    uVar13 = *(undefined8 *)PTR_StringLiteral_49965_0927cec8;
    if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar13 = FUN_07186ef4(uVar13,0);
    puVar3 = PTR_DAT_0927c4f0;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06b6dddc(lVar5,*(undefined8 *)PTR_DAT_091f7d98,uVar13,*(undefined8 *)PTR_DAT_0927c4f0);
    uVar13 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50036_0927ce48,0);
    FUN_06b6dddc(lVar5,*(undefined8 *)PTR_DAT_091e1bc8,uVar13,*(undefined8 *)puVar3);
    puVar4 = PTR_StringLiteral_49645_0927c4e8;
    uVar13 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49645_0927c4e8,0);
    FUN_06b6dddc(lVar5,*(undefined8 *)PTR_DAT_091d3930,uVar13,*(undefined8 *)puVar3);
    uVar13 = FUN_07186ef4(*(undefined8 *)puVar4,0);
    FUN_06b6dddc(lVar5,*(undefined8 *)PTR_DAT_091e4e18,uVar13,*(undefined8 *)puVar3);
    uVar13 = FUN_07186ef4(*(undefined8 *)puVar4,0);
    FUN_06b6dddc(lVar5,*(undefined8 *)PTR_DAT_091f1e68,uVar13,*(undefined8 *)puVar3);
    uVar13 = FUN_07186ef4(*(undefined8 *)puVar4,0);
    FUN_06b6dddc(lVar5,*(undefined8 *)PTR_DAT_091e98b8,uVar13,*(undefined8 *)puVar3);
    uVar13 = FUN_07186ef4(*(undefined8 *)puVar4,0);
    FUN_06b6dddc(lVar5,*(undefined8 *)PTR_DAT_091e6a08,uVar13,*(undefined8 *)puVar3);
    uVar13 = FUN_07186ef4(*(undefined8 *)puVar4,0);
    FUN_06b6dddc(lVar5,*(undefined8 *)PTR_DAT_091d39a0,uVar13,*(undefined8 *)puVar3);
    *(long *)(unaff_x19 + 0xe) = lVar5;
    thunk_FUN_03d1023c(unaff_x19 + 0xe,lVar5);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 8);
    uVar13 = FUN_084474b4(lVar10,0);
    lVar5 = FUN_083f2c3c(uVar11,uVar13,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar12 = *(long **)(lVar10 + 0x10);
    uVar13 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_MAX_HTTP_DATA_RESPONSE_SIZE_EXCEEDED_get
                       (*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar5 + 0x10),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar11 = FUN_0842fa3c(*(long *)(unaff_x19 + 0xc),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar6 = FUN_0842fa44(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar10 + 0x18),lVar5,0);
    uVar1 = 10;
    if ((*(uint *)(lVar5 + 0x18) & 0xff) != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x1c);
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(10);
    }
    lVar5 = *plVar12;
    uVar14 = *(undefined8 *)PTR_DAT_091a85e8;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0927ce50) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08449f3c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370(plVar12,*(long *)PTR_DAT_0927ce50,0);
LAB_08449f3c:
    lVar5 = (*(code *)*puVar7)(plVar12,uVar14,uVar13,uVar11,uVar6,uVar1,puVar7[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_stack_00000008 = FUN_0636bf40(lVar5,*(undefined8 *)PTR_DAT_0927ca30);
    uVar8 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9d0);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04a5ad9c(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar13 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9c8);
  uVar11 = FUN_050d2b9c(uVar13,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_0927ced0);
  uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927cee0);
  FUN_0626aa00(uVar6,uVar13,uVar11,*(undefined8 *)PTR_DAT_0927ced8);
  puVar3 = PTR_DAT_0927c050;
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_062285f0(unaff_x19 + 2,uVar6,*(undefined8 *)puVar3);
  return;
}


