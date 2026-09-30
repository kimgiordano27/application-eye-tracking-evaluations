/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_aux_capture_audio_stop_t_account_handle_get
ENTRY_POINT: 0847a5a4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_aux_capture_audio_stop_t_account_handle_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  
  FUN_03d2d2b0();
  FUN_03d2d2b0(PTR_DAT_0927e310);
  FUN_03d2d2b0(PTR_DAT_0927e1f8);
                    /* try { // try from 0847a5c8 to 0857a5cf has its CatchHandler @ 0847b0c0 */
  FUN_03d2d2b0(PTR_DAT_0927e318);
  FUN_03d2d2b0(PTR_DAT_0927e3b0);
                    /* try { // try from 0847a5dc to 0857a5e3 has its CatchHandler @ 0847b13c */
  FUN_03d2d2b0(PTR_DAT_0927e3b8);
  FUN_03d2d2b0(PTR_DAT_0927e378);
  FUN_03d2d2b0(PTR_DAT_0927e380);
  FUN_03d2d2b0(PTR_DAT_0927e388);
  FUN_03d2d2b0(PTR_DAT_0927e3c0);
                    /* try { // try from 0847a614 to 0857a617 has its CatchHandler @ 0847b1dc */
                    /* try { // try from 0847a618 to 0857a61f has its CatchHandler @ 0847b138 */
  FUN_03d2d2b0(PTR_DAT_0927e3c8);
  FUN_03d2d2b0(PTR_DAT_0927e3d0);
                    /* try { // try from 0847a630 to 0857a63f has its CatchHandler @ 0847b1d4 */
  *(undefined1 *)(unaff_x20 + 0xfb9) = 1;
  puVar1 = PTR_StringLiteral_52129_0927de18;
  in_stack_00000008 = 0;
  lVar10 = *(long *)(unaff_x19 + 10);
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0xe);
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar3 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927e3c8);
    FUN_071bc31c(lVar3,0);
    plVar13 = (long *)(unaff_x19 + 0xc);
    *plVar13 = lVar3;
    thunk_FUN_03d1023c(plVar13,lVar3);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10) = *(undefined8 *)(unaff_x19 + 8);
    thunk_FUN_03d1023c();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_084776ec(lVar10,*(undefined8 *)PTR_DAT_0927e3d0);
    if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar11 = *(long **)(lVar10 + 0x40);
    uVar12 = *(undefined8 *)(*plVar13 + 0x10);
    lVar3 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927e3b8);
    *(undefined2 *)(lVar3 + 0x10) = 0x101;
    FUN_071bc31c(lVar3,0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0927e3b0) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0847a750;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)PTR_DAT_0927e3b0,2);
LAB_0847a750:
    lVar3 = (*(code *)*puVar4)(plVar11,uVar12,lVar3,puVar4[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_stack_00000008 = FUN_0636bf40(lVar3,*(undefined8 *)PTR_DAT_0927e388);
    uVar8 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927e380);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04b8e65c(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar12 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927e378);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar13 = *(long **)(lVar10 + 0x38);
  uVar5 = FUN_0847767c(lVar10);
  uVar14 = *(undefined8 *)(unaff_x19 + 0xc);
  uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927e1f8);
  FUN_054bd94c(uVar6,uVar14,*(undefined8 *)PTR_DAT_0927e3c0,0);
  uVar5 = FUN_04f069f0(uVar5,uVar6,*(undefined8 *)PTR_DAT_0927e310);
  puVar2 = PTR_DAT_0927e318;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar3 = *plVar13;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0927e318) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar9 + 6) * 0x10 + 0x138);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_account_handle_get
        ;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)PTR_DAT_0927e318,6);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_account_handle_get
  :
  (*(code *)*puVar4)(plVar13,uVar5,puVar4[1]);
  plVar13 = *(long **)(lVar10 + 0x38);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar10 = *plVar13;
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_0847a91c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)puVar2,2);
LAB_0847a91c:
  (*(code *)*puVar4)(plVar13,uVar12,puVar4[1]);
  puVar2 = PTR_DAT_0927df58;
  *unaff_x19 = -2;
  unaff_x19[0xc] = 0;
  unaff_x19[0xd] = 0;
  thunk_FUN_03d1023c(unaff_x19 + 0xc,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_062285f0(unaff_x19 + 2,uVar12,*(undefined8 *)puVar2);
  return;
}


