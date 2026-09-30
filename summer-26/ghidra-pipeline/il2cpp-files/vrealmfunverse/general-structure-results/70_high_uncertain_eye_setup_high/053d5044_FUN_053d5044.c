/*
FUNCTION_NAME: FUN_053d5044
ENTRY_POINT: 053d5044
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_053d5044(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = OVRPlugin_OVRP_1_17_0_TypeInfo;
  if ((DAT_066d09df & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_OVRP_1_17_0_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06322478);
    FUN_02b3c81c(PTR_DAT_0631e1d8);
    DAT_066d09df = 1;
  }
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
    return **(long **)(*(long *)puVar1 + 0xb8);
  }
  plVar2 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_0631e1d8,8);
  if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)PTR_DAT_06322478);
  }
  lVar3 = FUN_053d52f8();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_053d52e8:
    uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_02bb0e9c(plVar2 + 4,lVar3);
    lVar3 = FUN_053d5400();
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_053d52e8;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar3;
      thunk_FUN_02bb0e9c(plVar2 + 5,lVar3);
      lVar3 = FUN_053d5508();
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_053d52e8;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        thunk_FUN_02bb0e9c(plVar2 + 6,lVar3);
        lVar3 = FUN_053d5610();
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_053d52e8;
        if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
          plVar2[7] = lVar3;
          thunk_FUN_02bb0e9c(plVar2 + 7,lVar3);
          lVar3 = FUN_053d5718();
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_053d52e8;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar3;
            thunk_FUN_02bb0e9c(plVar2 + 8,lVar3);
            lVar3 = FUN_053d5820();
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto LAB_053d52e8;
            if (5 < *(uint *)(plVar2 + 3)) {
              plVar2[9] = lVar3;
              thunk_FUN_02bb0e9c(plVar2 + 9,lVar3);
              lVar3 = FUN_053d5928();
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
              goto LAB_053d52e8;
              if (6 < *(uint *)(plVar2 + 3)) {
                plVar2[10] = lVar3;
                thunk_FUN_02bb0e9c(plVar2 + 10,lVar3);
                lVar3 = FUN_053d5a30();
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                goto LAB_053d52e8;
                if ((*(uint *)(plVar2 + 3) & 0xfffffff8) != 0) {
                  plVar2[0xb] = lVar3;
                  thunk_FUN_02bb0e9c(plVar2 + 0xb,lVar3);
                  **(long **)(*(long *)puVar1 + 0xb8) = (long)plVar2;
                  thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar1 + 0xb8),plVar2);
                  return **(long **)(*(long *)puVar1 + 0xb8);
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


