/*
FUNCTION_NAME: OVRManager$$OnApplicationQuit
ENTRY_POINT: 05d6ea64
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationQuit(ulong param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(unaff_x21 + 800);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x328);
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b1320);
    thunk_FUN_032e1da0(PTR_DAT_072b1328);
    *(undefined1 *)(unaff_x20 + 0x73b) = 1;
  }
  plVar1 = (long *)FUN_032d5d3c(*puVar5,5);
  lVar2 = thunk_FUN_032a56a0(*puVar6);
  FUN_05d6ec4c(lVar2,0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_05d6ec3c:
    uVar4 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    thunk_FUN_0333a630(plVar1 + 4,lVar2);
    lVar2 = thunk_FUN_032a56a0(*puVar6);
    FUN_05d6ec4c(lVar2,1);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_05d6ec3c;
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = lVar2;
      thunk_FUN_0333a630(plVar1 + 5,lVar2);
      lVar2 = thunk_FUN_032a56a0(*puVar6);
      FUN_05d6ec4c(lVar2,2);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_05d6ec3c;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar2;
        thunk_FUN_0333a630(plVar1 + 6,lVar2);
        lVar2 = thunk_FUN_032a56a0(*puVar6);
        FUN_05d6ec4c(lVar2,3);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto LAB_05d6ec3c;
        if (3 < *(uint *)(plVar1 + 3)) {
          plVar1[7] = lVar2;
          thunk_FUN_0333a630(plVar1 + 7,lVar2);
          lVar2 = thunk_FUN_032a56a0(*puVar6);
          FUN_05d6ec4c(lVar2,4);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
          goto LAB_05d6ec3c;
          if (4 < *(uint *)(plVar1 + 3)) {
            plVar1[8] = lVar2;
            thunk_FUN_0333a630(plVar1 + 8,lVar2);
            *(long *)(param_2 + 0x10) = (long)plVar1;
            thunk_FUN_0333a630((long *)(param_2 + 0x10),plVar1);
            FUN_059660a0(param_2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


