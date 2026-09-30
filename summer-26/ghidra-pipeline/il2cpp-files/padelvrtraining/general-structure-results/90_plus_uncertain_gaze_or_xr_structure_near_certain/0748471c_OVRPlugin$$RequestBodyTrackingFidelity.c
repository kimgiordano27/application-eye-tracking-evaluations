/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 0748471c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBodyTrackingFidelity(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_092237a0;
  puVar1 = PTR_DAT_09223798;
  if ((DAT_09845a4b & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09223798);
    FUN_03d2d2b0(PTR_DAT_092237a0);
    DAT_09845a4b = 1;
  }
  plVar3 = (long *)FUN_03d2d394(*(undefined8 *)puVar1,5);
  lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
  FUN_07484918(lVar4,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_03d2ee44(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_07484908:
    uVar6 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_03d1023c(plVar3 + 4,lVar4);
    lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
    FUN_07484918(lVar4,1);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03d2ee44(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_07484908;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_03d1023c(plVar3 + 5,lVar4);
      lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
      FUN_07484918(lVar4,2);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_03d2ee44(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_07484908;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_03d1023c(plVar3 + 6,lVar4);
        lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
        FUN_07484918(lVar4,3);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_03d2ee44(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_07484908;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_03d1023c(plVar3 + 7,lVar4);
          lVar4 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
          FUN_07484918(lVar4,4);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_03d2ee44(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_07484908;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_03d1023c(plVar3 + 8,lVar4);
            *(long *)(param_1 + 0x10) = (long)plVar3;
            thunk_FUN_03d1023c((long *)(param_1 + 0x10),plVar3);
            FUN_071bc31c(param_1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


