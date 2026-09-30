/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 07a46028
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetEyeGazesState(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  
  *(undefined8 *)(param_1 + 0x28) = unaff_x21;
  thunk_FUN_040ec700();
  lVar1 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_07a46144(lVar1,2);
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
LAB_07a46134:
    uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar3,0);
  }
  if (2 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20[6] = lVar1;
    thunk_FUN_040ec700(unaff_x20 + 6,lVar1);
                    /* try { // try from 07a46078 to 07b46157 has its CatchHandler @ 07a46078
                       catch() { ... } // from try @ 07a46078 with catch @ 07a46078
                       catch() { ... } // from try @ 07a461a4 with catch @ 07a46078
                       catch() { ... } // from try @ 07a461d8 with catch @ 07a46078
                       catch() { ... } // from try @ 07a46210 with catch @ 07a46078
                       catch() { ... } // from try @ 07a46234 with catch @ 07a46078 */
    lVar1 = thunk_FUN_040b4efc(*unaff_x22);
    FUN_07a46144(lVar1,3);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
    goto LAB_07a46134;
    if ((*(uint *)(unaff_x20 + 3) & 0xfffffffc) != 0) {
      unaff_x20[7] = lVar1;
      thunk_FUN_040ec700(unaff_x20 + 7,lVar1);
      lVar1 = thunk_FUN_040b4efc(*unaff_x22);
      FUN_07a46144(lVar1,4);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
      goto LAB_07a46134;
      if (4 < *(uint *)(unaff_x20 + 3)) {
        unaff_x20[8] = lVar1;
        thunk_FUN_040ec700(unaff_x20 + 8,lVar1);
        *(long **)(unaff_x19 + 0x28) = unaff_x20;
        thunk_FUN_040ec700();
        FUN_076bca34();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


