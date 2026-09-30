/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 051c880c
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ShareSpaces(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar8;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0xeb0));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608eb8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06606ca8);
  *(undefined1 *)(unaff_x20 + 0x3e9) = 1;
  puVar3 = PTR_DAT_06608eb8;
  puVar2 = PTR_DAT_06608eb0;
  puVar1 = PTR_DAT_06606ca8;
  if (DAT_06a67148 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67148 = '\x01';
  }
  uVar8 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_065c9850 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(*(long *)PTR_DAT_065c9850 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x18) = uVar8;
  uVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_05177940(uVar4,0);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
  plVar5 = (long *)FUN_02ce7ad4(*(undefined8 *)puVar2,5);
  lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_051c8a14(lVar6,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_02cea798(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_051c8a04:
    uVar4 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar4,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    FUN_051c8a14(lVar6,1);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_02cea798(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_051c8a04;
    if (1 < *(uint *)(plVar5 + 3)) {
      plVar5[5] = lVar6;
      lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
      FUN_051c8a14(lVar6,2);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_02cea798(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_051c8a04;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar6;
        lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
        FUN_051c8a14(lVar6,3);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_02cea798(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_051c8a04;
        if (3 < *(uint *)(plVar5 + 3)) {
          plVar5[7] = lVar6;
          lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
          FUN_051c8a14(lVar6,4);
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_02cea798(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
          goto LAB_051c8a04;
          if (4 < *(uint *)(plVar5 + 3)) {
            plVar5[8] = lVar6;
            *(long **)(unaff_x19 + 0x28) = plVar5;
            FUN_04f7383c();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


