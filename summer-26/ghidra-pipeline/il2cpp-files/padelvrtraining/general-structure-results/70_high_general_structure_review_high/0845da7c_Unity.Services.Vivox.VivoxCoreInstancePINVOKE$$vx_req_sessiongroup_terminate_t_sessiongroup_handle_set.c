/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_terminate_t_sessiongroup_handle_set
ENTRY_POINT: 0845da7c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_terminate_t_sessiongroup_handle_set
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int in_w8;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
                    /* try { // try from 0845da80 to 0855dbab has its CatchHandler @ 0845d944 */
    lVar9 = *(long *)(unaff_x19 + 10);
    lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0920a970);
    FUN_06b6d004(lVar4,*(undefined8 *)PTR_DAT_0927c4e0);
    uVar12 = *(undefined8 *)PTR_StringLiteral_50778_0927d1b8;
    if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar12 = FUN_07186ef4(uVar12,0);
    puVar3 = PTR_DAT_0927c4f0;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06b6dddc(lVar4,*(undefined8 *)PTR_DAT_091f7d98,uVar12,*(undefined8 *)PTR_DAT_0927c4f0);
    uVar12 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50037_0927c748,0);
    FUN_06b6dddc(lVar4,*(undefined8 *)PTR_DAT_091e1bc8,uVar12,*(undefined8 *)puVar3);
    puVar2 = PTR_StringLiteral_49645_0927c4e8;
    uVar12 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49645_0927c4e8,0);
    FUN_06b6dddc(lVar4,*(undefined8 *)PTR_DAT_091d3930,uVar12,*(undefined8 *)puVar3);
    uVar12 = FUN_07186ef4(*(undefined8 *)puVar2,0);
    FUN_06b6dddc(lVar4,*(undefined8 *)PTR_DAT_091e4e18,uVar12,*(undefined8 *)puVar3);
    uVar12 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49742_0927d198,0);
    FUN_06b6dddc(lVar4,*(undefined8 *)PTR_DAT_091ec400,uVar12,*(undefined8 *)puVar3);
    uVar12 = FUN_07186ef4(*(undefined8 *)puVar2,0);
    FUN_06b6dddc(lVar4,*(undefined8 *)PTR_DAT_091e98b8,uVar12,*(undefined8 *)puVar3);
    uVar12 = FUN_07186ef4(*(undefined8 *)puVar2,0);
    FUN_06b6dddc(lVar4,*(undefined8 *)PTR_DAT_091e6a08,uVar12,*(undefined8 *)puVar3);
    uVar12 = FUN_07186ef4(*(undefined8 *)puVar2,0);
    FUN_06b6dddc(lVar4,*(undefined8 *)PTR_DAT_091d39a0,uVar12,*(undefined8 *)puVar3);
    *(long *)(unaff_x19 + 0xe) = lVar4;
    thunk_FUN_03d1023c(unaff_x19 + 0xe,lVar4);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 8);
    uVar12 = FUN_0844be1c(lVar9);
    lVar4 = FUN_083f2c3c(uVar10,uVar12,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar11 = *(long **)(lVar9 + 0x10);
    uVar12 = FUN_08446478(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar4 + 0x10),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar10 = FUN_0844648c(*(long *)(unaff_x19 + 0xc),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar5 = FUN_084464a0(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar9 + 0x18),lVar4,0);
    uVar1 = 10;
    if ((*(uint *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x1c);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(10);
    }
    lVar4 = *plVar11;
    uVar13 = *(undefined8 *)PTR_DAT_091a5a20;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0927ce50) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0845dd40;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)PTR_DAT_0927ce50,0);
LAB_0845dd40:
    lVar4 = (*(code *)*puVar6)(plVar11,uVar13,uVar12,uVar10,uVar5,uVar1,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_stack_00000008 = FUN_0636bf40(lVar4,*(undefined8 *)PTR_DAT_0927ca30);
    uVar7 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9d0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04a596c0(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar12 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9c8);
  uVar10 = FUN_050d2b9c(uVar12,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_0927d1a0);
  uVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927d1b0);
  FUN_0626aa00(uVar5,uVar12,uVar10,*(undefined8 *)PTR_DAT_0927d1a8);
  puVar3 = PTR_DAT_0927d190;
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_062285f0(unaff_x19 + 2,uVar5,*(undefined8 *)puVar3);
  return;
}


