/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 07a463e8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartFaceTracking(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar6;
  undefined8 *unaff_x22;
  long unaff_x24;
  undefined8 *puVar7;
  long unaff_x25;
  undefined8 *puVar8;
  
  puVar1 = PTR_DAT_092f07e0;
  puVar6 = *(undefined8 **)(unaff_x21 + 0x330);
  puVar7 = *(undefined8 **)(unaff_x24 + 0x3a0);
  puVar8 = *(undefined8 **)(unaff_x25 + 0x7d8);
  *(undefined4 *)(param_2 + 0x24) = 0x13;
  *(long *)(unaff_x20 + 0x18) = param_2;
  thunk_FUN_040ec700();
  uVar2 = FUN_04077674(*unaff_x22,3);
  FUN_07593f88(uVar2,*puVar6,0);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x20),uVar2);
  uVar2 = FUN_04077674(*unaff_x22,4);
  FUN_07593f88(uVar2,*puVar7,0);
                    /* try { // try from 07a46458 to 07b4645f has its CatchHandler @ 07a464a0 */
                    /* try { // try from 07a46460 to 07b464bb has its CatchHandler @ 07a462a4 */
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x28),uVar2);
  plVar3 = (long *)FUN_04077674(*puVar8,5);
  lVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_07a46660(lVar4,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a46458 with catch @ 07a464a0
                        */
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_07a46650:
    uVar2 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar2,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_040ec700(plVar3 + 4,lVar4);
    lVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
    FUN_07a46660(lVar4,1);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_07a46650;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      thunk_FUN_040ec700(plVar3 + 5,lVar4);
      lVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
      FUN_07a46660(lVar4,2);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_07a46650;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_040ec700(plVar3 + 6,lVar4);
        lVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
        FUN_07a46660(lVar4,3);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_07a46650;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
          plVar3[7] = lVar4;
          thunk_FUN_040ec700(plVar3 + 7,lVar4);
          lVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
          FUN_07a46660(lVar4,4);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_07a46650;
          puVar1 = PTR_DAT_092ee590;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_040ec700(plVar3 + 8,lVar4);
            *(long *)(unaff_x20 + 0x30) = (long)plVar3;
            thunk_FUN_040ec700((long *)(unaff_x20 + 0x30),plVar3);
            uVar2 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
            FUN_07a5ccd0(uVar2,0);
            *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
            thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x40),uVar2);
            FUN_076bca34();
            *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
            thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x38));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


