/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_session_t_is_focused_set
ENTRY_POINT: 084a81d4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_is_focused_set(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  long *plVar11;
  undefined8 in_stack_00000008;
  
  FUN_03d2d2b0();
  FUN_03d2d2b0(PTR_DAT_0927f778);
  FUN_03d2d2b0(PTR_DAT_0927f780);
  FUN_03d2d2b0(PTR_DAT_0927f788);
  FUN_03d2d2b0(PTR_DAT_0927f790);
  *(undefined1 *)(unaff_x20 + 0x161) = 1;
  puVar1 = PTR_StringLiteral_52121_0927f5b0;
  in_stack_00000008 = 0;
  lVar10 = *(long *)(unaff_x19 + 0xc);
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    uVar3 = FUN_06fd8bb8(*(undefined8 *)(unaff_x19 + 8),0);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_03d1e194(PTR_DAT_091adab0);
      uVar4 = thunk_FUN_03d2ef40();
      uVar6 = thunk_FUN_03d1e194(PTR_DAT_09206348);
      uVar7 = thunk_FUN_03d1e194(PTR_DAT_0927f798);
      FUN_070ccd38(uVar4,uVar6,uVar7,0);
      uVar6 = thunk_FUN_03d1e194(PTR_DAT_0927f7a0);
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar4,uVar6);
    }
    if (unaff_x19[10] < 1) {
      thunk_FUN_03d1e194(PTR_DAT_091aa550);
      uVar4 = thunk_FUN_03d2ef40();
      uVar6 = thunk_FUN_03d1e194(PTR_DAT_0927f7a8);
      Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar4,uVar6,0);
      uVar6 = thunk_FUN_03d1e194(PTR_DAT_0927f7a0);
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar4,uVar6);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar4 = FUN_084a7f38(uVar3,*(undefined8 *)(unaff_x19 + 8),unaff_x19[10],
                         *(undefined8 *)(unaff_x19 + 0xe));
    plVar11 = *(long **)(lVar10 + 0x10);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar8 = *plVar11;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091ff708) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_084a82cc;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)PTR_DAT_091ff708,0);
LAB_084a82cc:
    plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
    uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f758);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar8 = *plVar11;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0927f760) {
          lVar8 = lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138;
          goto LAB_084a834c;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    lVar8 = FUN_03d8f370(plVar11,*(long *)PTR_DAT_0927f760,1);
LAB_084a834c:
    FUN_054d4240(uVar6,plVar11,*(undefined8 *)(lVar8 + 8),0);
    uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927f750);
    FUN_084bc100(uVar7,0,0,uVar4,0);
    lVar8 = FUN_0516badc(lVar10,*(undefined8 *)PTR_DAT_0927f790,uVar6,uVar7,
                         *(undefined8 *)PTR_DAT_0927f788);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_stack_00000008 = FUN_0636bf40(lVar8,*(undefined8 *)PTR_DAT_0927f780);
    uVar3 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927f778);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04b8ea84(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  lVar8 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927f770);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (lVar10 != 0) {
    uVar4 = *(undefined8 *)(lVar8 + 0x20);
    FUN_084a760c(lVar10,uVar4);
    *unaff_x19 = -2;
    puVar2 = PTR_DAT_0927f748;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_062285f0(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


