/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_get_session_fonts_t_account_handle_set
ENTRY_POINT: 0847a81c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_account_handle_set
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *unaff_x25;
  long *unaff_x27;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
                    /* try { // try from 0847a828 to 0857a837 has its CatchHandler @ 0847b1fc */
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 0847a838 to 0857a867 has its CatchHandler @ 0847b28c */
      if (*(long *)(piVar4 + -2) == *unaff_x25) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 6) * 0x10 + 0x138);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_account_handle_get
        ;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370();
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_get_session_fonts_t_account_handle_get
  :
  (*(code *)*puVar1)();
  plVar5 = *(long **)(unaff_x20 + 0x38);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x25) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_0847a91c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370(plVar5,*unaff_x25,2);
LAB_0847a91c:
  (*(code *)*puVar1)(plVar5);
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0xc) = 0;
  thunk_FUN_03d1023c();
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_062285f0(unaff_x19 + 2);
  return;
}


