/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_req_aux_capture_audio_stop_t
ENTRY_POINT: 0847a6a0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_aux_capture_audio_stop_t(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  
  FUN_084776ec();
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* try { // try from 0847a6b4 to 0857a6bb has its CatchHandler @ 0847b284 */
  plVar9 = *(long **)(unaff_x20 + 0x40);
  uVar10 = *(undefined8 *)(*unaff_x21 + 0x10);
  lVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927e3b8);
                    /* try { // try from 0847a6c8 to 0857a6d3 has its CatchHandler @ 0847b280 */
  *(undefined2 *)(lVar2 + 0x10) = 0x101;
  FUN_071bc31c(lVar2,0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar6 = *plVar9;
                    /* try { // try from 0847a6ec to 0857a6fb has its CatchHandler @ 0847b220 */
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0927e3b0) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_0847a750;
      }
      uVar7 = uVar7 - 1;
                    /* try { // try from 0847a710 to 0857a713 has its CatchHandler @ 0847b234 */
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_0927e3b0,2);
LAB_0847a750:
  lVar2 = (*(code *)*puVar3)(plVar9,uVar10,lVar2,puVar3[1]);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  in_stack_00000008 = FUN_0636bf40(lVar2,*(undefined8 *)PTR_DAT_0927e388);
  uVar7 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927e380);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000008;
    thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_04b8e65c(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    uVar10 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927e378);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar9 = *(long **)(unaff_x20 + 0x38);
    uVar4 = FUN_0847767c();
    uVar11 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927e1f8);
    FUN_054bd94c(uVar5,uVar11,*(undefined8 *)PTR_DAT_0927e3c0,0);
    uVar4 = FUN_04f069f0(uVar4,uVar5,*(undefined8 *)PTR_DAT_0927e310);
    puVar1 = PTR_DAT_0927e318;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar2 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0927e318) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 6) * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_account_handle_get
          ;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_0927e318,6);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_account_handle_get
    :
    (*(code *)*puVar3)(plVar9,uVar4,puVar3[1]);
    plVar9 = *(long **)(unaff_x20 + 0x38);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar2 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0847a91c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar1,2);
LAB_0847a91c:
    (*(code *)*puVar3)(plVar9,uVar10,puVar3[1]);
    puVar1 = PTR_DAT_0927df58;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    thunk_FUN_03d1023c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_062285f0(unaff_x19 + 2,uVar10,*(undefined8 *)puVar1);
  }
  return;
}


