/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_get_session_fonts_t_base__set
ENTRY_POINT: 0847a71c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_base__set
               (void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  
  puVar2 = (undefined8 *)FUN_03d8f370();
                    /* try { // try from 0847a724 to 0857a733 has its CatchHandler @ 0847b27c */
                    /* try { // try from 0847a754 to 0857a75f has its CatchHandler @ 0847b274 */
  lVar3 = (*(code *)*puVar2)();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  in_stack_00000008 = FUN_0636bf40(lVar3,*(undefined8 *)PTR_DAT_0927e388);
                    /* try { // try from 0847a788 to 0857a797 has its CatchHandler @ 0847b294 */
  uVar4 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927e380);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000008;
    thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_04b8e65c(unaff_x19 + 2,&stack0x00000008);
  }
  else {
                    /* try { // try from 0847a79c to 0857a7ab has its CatchHandler @ 0847b260 */
    uVar5 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927e378);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    plVar9 = *(long **)(unaff_x20 + 0x38);
    uVar6 = FUN_0847767c();
    uVar10 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927e1f8);
    FUN_054bd94c(uVar7,uVar10,*(undefined8 *)PTR_DAT_0927e3c0,0);
    uVar6 = FUN_04f069f0(uVar6,uVar7,*(undefined8 *)PTR_DAT_0927e310);
    puVar1 = PTR_DAT_0927e318;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar3 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0927e318) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar8 + 6) * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_account_handle_get
          ;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_0927e318,6);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_account_handle_get
    :
    (*(code *)*puVar2)(plVar9,uVar6,puVar2[1]);
    plVar9 = *(long **)(unaff_x20 + 0x38);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar3 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0847a91c;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar1,2);
LAB_0847a91c:
    (*(code *)*puVar2)(plVar9,uVar5,puVar2[1]);
    puVar1 = PTR_DAT_0927df58;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    thunk_FUN_03d1023c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_062285f0(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
  }
  return;
}


