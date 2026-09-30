/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_sessiongroup_handle_get
ENTRY_POINT: 0855cacc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


bool Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_sessiongroup_handle_get
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int in_w8;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  long *unaff_x25;
  int unaff_w26;
  int unaff_w27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_040d65a8();
    param_1 = *unaff_x25;
  }
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 8);
  lVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e948);
  FUN_06518df4(lVar2,uVar1,*(undefined8 *)PTR_DAT_0932e940);
  in_stack_00000018 = lVar2;
  if ((*(long *)(unaff_x21 + 0x10) != 0) &&
     (FUN_06e232dc(*(long *)(unaff_x21 + 0x10),unaff_w22,lVar2,*(undefined8 *)PTR_DAT_0932e930),
     lVar2 = in_stack_00000018, unaff_x20 != 0)) {
    uVar1 = FUN_0844a2d8();
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    FUN_068b9aa4(&stack0x00000008);
    if (lVar2 != 0) {
      FUN_06518f1c(lVar2,uVar1,in_stack_00000008,in_stack_00000010,*(undefined8 *)PTR_DAT_0932e938);
      lVar2 = *unaff_x25;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar2 = *unaff_x25;
      }
      **(int **)(lVar2 + 0xb8) = **(int **)(lVar2 + 0xb8) + 1;
      return unaff_w26 < unaff_w27;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


