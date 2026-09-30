/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_session_handle_set
ENTRY_POINT: 0853df90
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_session_handle_set
          (long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_09285bb0;
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 == (long *)0x0) goto LAB_0853e13c;
  uVar3 = (**(code **)(*plVar2 + 0x218))(plVar2,*(undefined8 *)(*plVar2 + 0x220));
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar5);
  }
  uVar4 = FUN_089cc398(uVar3,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x198);
  if ((uVar4 & 1) == 0) {
    if (lVar5 != 0) {
      if ((*(long *)(unaff_x20 + 0x1f0) == 0) ||
         (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x1f0) + 0x38), plVar2 == (long *)0x0))
      goto LAB_0853e13c;
      uVar6 = *(undefined8 *)(lVar5 + 0x20);
      uVar3 = (**(code **)(*plVar2 + 0x218))(plVar2,*(undefined8 *)(*plVar2 + 0x220));
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar5);
      }
      uVar4 = FUN_089ca704(uVar6,uVar3,0);
      if ((uVar4 & 1) == 0)
      goto 
      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_query_id_set;
      if (*(long *)(unaff_x20 + 0x198) != 0) {
        FUN_0844a394(*(long *)(unaff_x20 + 0x198),0);
      }
    }
    if ((*(long *)(unaff_x20 + 0x1f0) == 0) ||
       (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x1f0) + 0x38), plVar2 == (long *)0x0))
    goto LAB_0853e13c;
    uVar3 = (**(code **)(*plVar2 + 0x218))(plVar2,*(undefined8 *)(*plVar2 + 0x220));
    if (*(int *)(*(long *)PTR_DAT_09326d38 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_09326d38);
    }
    uVar3 = FUN_0844ccdc(uVar3,0);
LAB_0853e0b0:
    *(undefined8 *)(unaff_x20 + 0x198) = uVar3;
    thunk_FUN_040ec700(unaff_x20 + 0x198);
  }
  else if (lVar5 != 0) {
    FUN_0844a394(lVar5,0);
    uVar3 = 0;
    goto LAB_0853e0b0;
  }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_query_id_set:
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
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
  }
  else {
    if (unaff_x19 == 0) {
LAB_0853e13c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar3 = FUN_08470174();
  }
  return uVar3;
}


