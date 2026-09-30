/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_sessiongroup_handle_set
ENTRY_POINT: 0855ca34
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


bool Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_sessiongroup_handle_set
               (void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_0932e940);
  FUN_04077588(PTR_DAT_0932e948);
  FUN_04077588(PTR_DAT_0932e950);
  *(undefined1 *)(unaff_x23 + 0xa95) = 1;
  lVar5 = *unaff_x25;
  in_stack_00000018 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar5 = *unaff_x25;
  }
  iVar1 = **(int **)(lVar5 + 0xb8);
  iVar2 = (*(int **)(lVar5 + 0xb8))[2];
  if (iVar1 < iVar2) {
    uVar4 = FUN_0855f53c();
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      uVar6 = FUN_06e24db8(*(long *)(unaff_x21 + 0x10),uVar4,&stack0x00000018,
                           *(undefined8 *)PTR_DAT_0932e908);
      if ((uVar6 & 1) == 0) {
        lVar5 = *unaff_x25;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar5 = *unaff_x25;
        }
        uVar3 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 8);
        lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932e948);
        FUN_06518df4(lVar5,uVar3,*(undefined8 *)PTR_DAT_0932e940);
        in_stack_00000018 = lVar5;
        if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_0855cbcc;
        FUN_06e232dc(*(long *)(unaff_x21 + 0x10),uVar4,lVar5,*(undefined8 *)PTR_DAT_0932e930);
      }
      lVar5 = in_stack_00000018;
      if (unaff_x20 != 0) {
        uVar4 = FUN_0844a2d8();
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        FUN_068b9aa4(&stack0x00000008);
        if (lVar5 != 0) {
          FUN_06518f1c(lVar5,uVar4,in_stack_00000008,in_stack_00000010,
                       *(undefined8 *)PTR_DAT_0932e938);
          lVar5 = *unaff_x25;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar5 = *unaff_x25;
          }
          **(int **)(lVar5 + 0xb8) = **(int **)(lVar5 + 0xb8) + 1;
          goto LAB_0855cba8;
        }
      }
    }
LAB_0855cbcc:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
LAB_0855cba8:
  return iVar1 < iVar2;
}


