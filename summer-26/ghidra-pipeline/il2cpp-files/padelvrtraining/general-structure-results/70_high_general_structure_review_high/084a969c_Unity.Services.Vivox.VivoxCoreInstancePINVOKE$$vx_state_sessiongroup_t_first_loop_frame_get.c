/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_first_loop_frame_get
ENTRY_POINT: 084a969c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_first_loop_frame_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  
  FUN_03d2d2b0(PTR_DAT_091ff708);
  FUN_03d2d2b0(PTR_DAT_0927f768);
  FUN_03d2d2b0(PTR_DAT_0927f770);
  FUN_03d2d2b0(PTR_DAT_0927f778);
  FUN_03d2d2b0(PTR_DAT_0927f780);
  FUN_03d2d2b0(PTR_DAT_0927f888);
  FUN_03d2d2b0(PTR_DAT_0927f890);
  *(undefined1 *)(unaff_x20 + 0x169) = 1;
  puVar1 = PTR_StringLiteral_52121_0927f5b0;
  in_stack_00000008 = 0;
  lVar9 = *(long *)(unaff_x19 + 10);
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    uVar3 = FUN_06fd8bb8(*(undefined8 *)(unaff_x19 + 8),0);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_03d1e194(PTR_DAT_091adab0);
      uVar5 = thunk_FUN_03d2ef40();
      uVar6 = thunk_FUN_03d1e194(PTR_DAT_0927f7e8);
      uVar11 = thunk_FUN_03d1e194(PTR_DAT_0927f798);
      FUN_070ccd38(uVar5,uVar6,uVar11,0);
      uVar6 = thunk_FUN_03d1e194(PTR_DAT_0927f898);
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar5,uVar6);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar10 = *(long **)(lVar9 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar7 = *plVar10;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091ff708) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_084a9798;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(plVar10,*(long *)PTR_DAT_091ff708,0);
LAB_084a9798:
    plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
    uVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f878);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar7 = *plVar10;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0927f760) {
          lVar7 = lVar7 + (long)(*piVar8 + 6) * 0x10 + 0x138;
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_last_loop_frame_played_set
          ;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    lVar7 = FUN_03d8f370(plVar10,*(long *)PTR_DAT_0927f760,6);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_last_loop_frame_played_set:
    FUN_054d4240(uVar5,plVar10,*(undefined8 *)(lVar7 + 8),0);
    uVar11 = *(undefined8 *)(unaff_x19 + 8);
    uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f880);
    FUN_084beb58(uVar6,uVar11,0,0,0,0);
    lVar7 = FUN_0516badc(lVar9,*(undefined8 *)PTR_DAT_0927f890,uVar5,uVar6,
                         *(undefined8 *)PTR_DAT_0927f888);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_stack_00000008 = FUN_0636bf40(lVar7,*(undefined8 *)PTR_DAT_0927f780);
    uVar3 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927f778);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04b8f0c0(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  lVar7 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927f770);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (lVar9 != 0) {
    FUN_084a760c(lVar9,*(undefined8 *)(lVar7 + 0x20));
    uVar5 = *(undefined8 *)(lVar7 + 0x20);
    *unaff_x19 = -2;
    puVar2 = PTR_DAT_0927f748;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_062285f0(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


