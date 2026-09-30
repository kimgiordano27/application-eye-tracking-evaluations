/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 0566c42c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__GetNodePositionValid(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  
  lVar2 = thunk_FUN_02dd3144(param_1);
  FUN_0634fa84();
  if (lVar2 != 0) {
    uVar3 = FUN_0364c220(lVar2,*(undefined8 *)
                                System_Collections_Generic_List<ExceptionHandler>_TypeInfo);
    lVar4 = *(long *)(unaff_x19 + 0x38);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar6 = *(long *)System_Collections_Generic_List<ExceptionPredicate>_TypeInfo;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar4,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                      );
        }
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


