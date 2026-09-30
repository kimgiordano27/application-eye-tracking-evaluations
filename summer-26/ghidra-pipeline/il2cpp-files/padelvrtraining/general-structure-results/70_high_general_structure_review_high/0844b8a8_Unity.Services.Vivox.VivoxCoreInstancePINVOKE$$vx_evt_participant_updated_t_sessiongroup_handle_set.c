/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_updated_t_sessiongroup_handle_set
ENTRY_POINT: 0844b8a8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_set
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xa10));
  FUN_03d2d2b0(PTR_StringLiteral_52131_0927b9b0);
  FUN_03d2d2b0(PTR_DAT_0927c4f0);
  FUN_03d2d2b0(PTR_DAT_091b2580);
  FUN_03d2d2b0(PTR_DAT_0927c4e0);
  FUN_03d2d2b0(PTR_DAT_0920a970);
  FUN_03d2d2b0(PTR_StringLiteral_50004_091fb040);
  FUN_03d2d2b0(PTR_DAT_0927ce50);
  FUN_03d2d2b0(PTR_DAT_091b0690);
  FUN_03d2d2b0(PTR_DAT_091ae270);
  FUN_03d2d2b0(PTR_DAT_0927ce58);
  FUN_03d2d2b0(PTR_DAT_0927c9c8);
  FUN_03d2d2b0(PTR_DAT_0927c9d0);
  FUN_03d2d2b0(PTR_DAT_0927ca30);
  FUN_03d2d2b0(PTR_DAT_091a1be8);
  FUN_03d2d2b0(PTR_DAT_091e8d90);
  FUN_03d2d2b0(PTR_DAT_091b1468);
  FUN_03d2d2b0(PTR_DAT_091f7d98);
  *(undefined1 *)(unaff_x20 + 0xddc) = 1;
  puVar2 = PTR_StringLiteral_52131_0927b9b0;
  in_stack_00000008 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x12);
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 10);
    lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0920a970);
    FUN_06b6d004(lVar4,*(undefined8 *)PTR_DAT_0927c4e0);
    puVar3 = PTR_DAT_0927c4f0;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06b6dddc(lVar4,*(undefined8 *)PTR_DAT_091f7d98,0,*(undefined8 *)PTR_DAT_0927c4f0);
    uVar12 = *(undefined8 *)PTR_StringLiteral_50004_091fb040;
    if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar12 = FUN_07186ef4(uVar12,0);
    FUN_06b6dddc(lVar4,*(undefined8 *)PTR_DAT_091e8d90,uVar12,*(undefined8 *)puVar3);
    *(long *)(unaff_x19 + 0x10) = lVar4;
    thunk_FUN_03d1023c(unaff_x19 + 0x10,lVar4);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 8);
    uVar12 = FUN_084474b4(lVar9,0);
    lVar4 = FUN_083f2c3c(uVar10,uVar12,0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0xc) + 0x20);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06b6f2d8(lVar5,*(undefined8 *)PTR_DAT_091b1468,*(undefined8 *)PTR_DAT_091b2580);
    lVar5 = *(long *)(unaff_x19 + 0xc);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar11 = *(long **)(lVar9 + 0x10);
    uVar1 = 10;
    if ((*(uint *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x1c);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(10);
    }
    lVar4 = *plVar11;
    uVar12 = *(undefined8 *)(lVar5 + 0x10);
    uVar10 = *(undefined8 *)(lVar5 + 0x18);
    uVar14 = *(undefined8 *)(unaff_x19 + 0xe);
    uVar13 = *(undefined8 *)(lVar5 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0927ce50) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0844bb34;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)PTR_DAT_0927ce50,0);
LAB_0844bb34:
    lVar4 = (*(code *)*puVar6)(plVar11,uVar10,uVar12,uVar14,uVar13,uVar1,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_stack_00000008 = FUN_0636bf40(lVar4,*(undefined8 *)PTR_DAT_0927ca30);
    uVar7 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9d0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0x12,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04a5b5ec(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar12 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9c8);
  FUN_0842bd50(uVar12,*(undefined8 *)(unaff_x19 + 0x10),0);
  uVar10 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927ce58);
  FUN_083ffb00(uVar10,uVar12,0);
  puVar3 = PTR_DAT_0927ba10;
  *unaff_x19 = -2;
  unaff_x19[0x10] = 0;
  unaff_x19[0x11] = 0;
  thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_062285f0(unaff_x19 + 2,uVar10,*(undefined8 *)puVar3);
  return;
}


