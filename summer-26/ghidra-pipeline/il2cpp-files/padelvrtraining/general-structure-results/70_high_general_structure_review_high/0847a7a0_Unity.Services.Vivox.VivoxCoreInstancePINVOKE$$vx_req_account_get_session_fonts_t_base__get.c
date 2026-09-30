/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_get_session_fonts_t_base__get
ENTRY_POINT: 0847a7a0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_base__get
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x27;
  
  uVar2 = FUN_062f9944(param_2,*param_1);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* try { // try from 0847a7ac to 0857a7d7 has its CatchHandler @ 08479cb4 */
  plVar9 = *(long **)(unaff_x20 + 0x38);
  uVar3 = FUN_0847767c();
  uVar10 = *(undefined8 *)(unaff_x19 + 0xc);
  uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927e1f8);
                    /* try { // try from 0847a7d8 to 0857a7e3 has its CatchHandler @ 0847b25c */
                    /* try { // try from 0847a7ec to 0857a7f7 has its CatchHandler @ 0847b200 */
  FUN_054bd94c(uVar4,uVar10,*(undefined8 *)PTR_DAT_0927e3c0,0);
  uVar3 = FUN_04f069f0(uVar3,uVar4,*(undefined8 *)PTR_DAT_0927e310);
  puVar1 = PTR_DAT_0927e318;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* try { // try from 0847a814 to 0857a823 has its CatchHandler @ 0847b218 */
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0927e318) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_account_handle_get
        ;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_0927e318,6);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_account_handle_get
  :
  (*(code *)*puVar5)(plVar9,uVar3,puVar5[1]);
  plVar9 = *(long **)(unaff_x20 + 0x38);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_0847a91c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar1,2);
LAB_0847a91c:
  (*(code *)*puVar5)(plVar9,uVar2,puVar5[1]);
  puVar1 = PTR_DAT_0927df58;
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0xc) = 0;
  thunk_FUN_03d1023c(unaff_x19 + 0xc,0);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_062285f0(unaff_x19 + 2,uVar2,*(undefined8 *)puVar1);
  return;
}


