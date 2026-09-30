/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 07a45f58
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__get_eyeTrackingSupported(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(*(undefined8 **)(param_1 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(param_1 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x18) = uVar5;
  uVar1 = thunk_FUN_040b4efc();
  FUN_079f2d18(uVar1,0);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x20),uVar1);
  plVar2 = (long *)FUN_04077674(*unaff_x21,5);
  lVar3 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_07a46144(lVar3,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_07a46134:
    uVar1 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar1,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_040ec700(plVar2 + 4,lVar3);
    lVar3 = thunk_FUN_040b4efc(*unaff_x22);
    FUN_07a46144(lVar3,1);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_07a46134;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar3;
      thunk_FUN_040ec700(plVar2 + 5,lVar3);
      lVar3 = thunk_FUN_040b4efc(*unaff_x22);
      FUN_07a46144(lVar3,2);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_07a46134;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        thunk_FUN_040ec700(plVar2 + 6,lVar3);
        lVar3 = thunk_FUN_040b4efc(*unaff_x22);
        FUN_07a46144(lVar3,3);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_07a46134;
        if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
          plVar2[7] = lVar3;
          thunk_FUN_040ec700(plVar2 + 7,lVar3);
          lVar3 = thunk_FUN_040b4efc(*unaff_x22);
          FUN_07a46144(lVar3,4);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_07a46134;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar3;
            thunk_FUN_040ec700(plVar2 + 8,lVar3);
            *(long *)(unaff_x19 + 0x28) = (long)plVar2;
            thunk_FUN_040ec700((long *)(unaff_x19 + 0x28),plVar2);
            FUN_076bca34();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


