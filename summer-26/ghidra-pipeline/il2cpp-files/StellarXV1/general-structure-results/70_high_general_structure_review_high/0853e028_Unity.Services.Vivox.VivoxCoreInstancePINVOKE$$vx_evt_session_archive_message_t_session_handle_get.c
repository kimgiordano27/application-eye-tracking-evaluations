/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_session_handle_get
ENTRY_POINT: 0853e028
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_session_handle_get
          (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8(param_1);
  }
  uVar2 = FUN_089ca704();
  if ((uVar2 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x198) != 0) {
      FUN_0844a394(*(long *)(unaff_x20 + 0x198),0);
    }
    if ((*(long *)(unaff_x20 + 0x1f0) == 0) ||
       (plVar3 = *(long **)(*(long *)(unaff_x20 + 0x1f0) + 0x38), plVar3 == (long *)0x0))
    goto LAB_0853e13c;
    uVar4 = (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220));
    if (*(int *)(*(long *)PTR_DAT_09326d38 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_09326d38);
    }
    uVar4 = FUN_0844ccdc(uVar4,0);
    *(undefined8 *)(unaff_x20 + 0x198) = uVar4;
    thunk_FUN_040ec700(unaff_x20 + 0x198);
  }
  puVar1 = PTR_DAT_09324758;
  if (*(long *)(unaff_x20 + 0x198) == 0) {
    if (*(int *)(*(long *)PTR_DAT_09324758 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (DAT_0989d2e9 == '\0') {
      FUN_04077588(PTR_DAT_09324758);
      DAT_0989d2e9 = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar5 = *(long *)puVar1;
    }
    uVar4 = **(undefined8 **)(lVar5 + 0xb8);
  }
  else {
    if (unaff_x19 == 0) {
LAB_0853e13c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar4 = FUN_08470174();
  }
  return uVar4;
}


