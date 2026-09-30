/*
FUNCTION_NAME: FUN_053ce86c
ENTRY_POINT: 053ce86c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_053ce86c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_066d09be & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(OVRPlugin_OVRP_0_5_0_TypeInfo);
    DAT_066d09be = 1;
  }
  plVar4 = (long *)(param_1 + 0x48);
  *plVar4 = param_2;
  thunk_FUN_02bb0e9c(plVar4,param_2);
  if ((*plVar4 == 0) || (*(char *)(param_1 + 0x21) == '\0')) {
    return;
  }
  plVar1 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
  if ((*(long *)(param_1 + 0x28) != 0) && (plVar1 != (long *)0x0)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
    if ((lVar5 != 0) &&
       (lVar2 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_053cea4c:
      uVar3 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar3,0);
    }
    if ((int)plVar1[3] != 0) {
      plVar1[4] = lVar5;
      thunk_FUN_02bb0e9c(plVar1 + 4,lVar5);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_053cea44;
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
      if ((lVar5 != 0) &&
         (lVar2 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
      goto LAB_053cea4c;
      if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
        plVar1[5] = lVar5;
        thunk_FUN_02bb0e9c(plVar1 + 5,lVar5);
        if ((*plVar4 == 0) || (lVar5 = FUN_053d699c(*plVar4,0), lVar5 == 0)) goto LAB_053cea44;
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((lVar5 != 0) &&
           (lVar2 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
        goto LAB_053cea4c;
        if (2 < *(uint *)(plVar1 + 3)) {
          plVar1[6] = lVar5;
          thunk_FUN_02bb0e9c(plVar1 + 6,lVar5);
          if ((*plVar4 == 0) || (lVar5 = FUN_053d699c(*plVar4,0), lVar5 == 0)) goto LAB_053cea44;
          lVar5 = *(long *)(lVar5 + 0x18);
          if ((lVar5 != 0) &&
             (lVar2 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
          goto LAB_053cea4c;
          if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
            plVar1[7] = lVar5;
            thunk_FUN_02bb0e9c(plVar1 + 7,lVar5);
            uVar3 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_0_5_0_TypeInfo,plVar1,0);
            FUN_053e3650(param_1,uVar3,0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_053cea44:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


