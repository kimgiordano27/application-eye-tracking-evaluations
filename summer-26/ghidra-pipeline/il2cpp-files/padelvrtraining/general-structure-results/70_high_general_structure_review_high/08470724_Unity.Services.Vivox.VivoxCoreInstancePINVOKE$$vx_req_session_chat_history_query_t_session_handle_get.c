/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_session_handle_get
ENTRY_POINT: 08470724
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x084708b8) */

undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_session_handle_get
          (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_x9;
  int *piVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 in_stack_00000008;
  
  if (in_x9 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_08470764;
      }
      in_x9 = in_x9 + -1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_08470764:
  (*(code *)*puVar2)();
  if (*(int *)(*(long *)PTR_DAT_091a1650 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar3 = FUN_07157b90();
  *(undefined8 *)(unaff_x21 + 0x18) = uVar3;
  lVar5 = *(long *)(unaff_x20 + 0x60);
  lVar1 = lVar5 + 1;
  *(long *)(unaff_x20 + 0x60) = lVar1;
  *(long *)(unaff_x21 + 0x20) = lVar5;
  if (lVar1 < 1) {
    *(undefined8 *)(unaff_x20 + 0x60) = 1;
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    FUN_05d2c4c8();
    if (*(long *)(unaff_x20 + 0x50) != 0) {
      FUN_06ad5354(*(long *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x21 + 0x20));
      uVar3 = *(undefined8 *)(unaff_x21 + 0x20);
      if (in_stack_00000008._4_1_ != '\0') {
        thunk_FUN_03d180a8();
      }
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


