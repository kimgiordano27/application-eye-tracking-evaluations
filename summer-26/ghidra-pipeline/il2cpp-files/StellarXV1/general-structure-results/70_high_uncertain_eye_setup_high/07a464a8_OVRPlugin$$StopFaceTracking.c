/*
FUNCTION_NAME: OVRPlugin$$StopFaceTracking
ENTRY_POINT: 07a464a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StopFaceTracking(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  if (param_1 != 0) {
    if ((int)unaff_x21[3] != 0) {
                    /* try { // try from 07a464bc to 07b464bf has its CatchHandler @ 07a4683c */
      unaff_x21[4] = unaff_x22;
                    /* try { // try from 07a464c0 to 07b4683f has its CatchHandler @ 07a462a4 */
      thunk_FUN_040ec700();
      lVar2 = thunk_FUN_040b4efc(*unaff_x23);
      FUN_07a46660(lVar2,1);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
      goto LAB_07a46650;
      if ((*(uint *)(unaff_x21 + 3) & 0xfffffffe) != 0) {
        unaff_x21[5] = lVar2;
        thunk_FUN_040ec700(unaff_x21 + 5,lVar2);
        lVar2 = thunk_FUN_040b4efc(*unaff_x23);
        FUN_07a46660(lVar2,2);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
        goto LAB_07a46650;
        if (2 < *(uint *)(unaff_x21 + 3)) {
          unaff_x21[6] = lVar2;
          thunk_FUN_040ec700(unaff_x21 + 6,lVar2);
          lVar2 = thunk_FUN_040b4efc(*unaff_x23);
          FUN_07a46660(lVar2,3);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
          goto LAB_07a46650;
          if ((*(uint *)(unaff_x21 + 3) & 0xfffffffc) != 0) {
            unaff_x21[7] = lVar2;
            thunk_FUN_040ec700(unaff_x21 + 7,lVar2);
            lVar2 = thunk_FUN_040b4efc(*unaff_x23);
            FUN_07a46660(lVar2,4);
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
            goto LAB_07a46650;
            puVar1 = PTR_DAT_092ee590;
            if (4 < *(uint *)(unaff_x21 + 3)) {
              unaff_x21[8] = lVar2;
              thunk_FUN_040ec700(unaff_x21 + 8,lVar2);
              *(long **)(unaff_x20 + 0x30) = unaff_x21;
              thunk_FUN_040ec700();
              uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
              FUN_07a5ccd0(uVar4,0);
              *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
              thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x40),uVar4);
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
LAB_07a46650:
  uVar4 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar4,0);
}


