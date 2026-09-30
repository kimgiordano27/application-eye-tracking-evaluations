/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionTracked
ENTRY_POINT: 0566c3c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetNodePositionTracked(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 in_stack_00000008;
  
  uVar4 = thunk_FUN_06354368();
  puVar3 = System_Collections_Generic_List<Expression>_TypeInfo;
  puVar2 = PTR_DAT_069fb980;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    in_stack_00000008._4_4_ = *(undefined4 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),(long)&stack0x00000008 + 4);
    uVar4 = FUN_0536e0dc(*(undefined8 *)puVar3,uVar4,uVar5,0);
    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_0634fa84(lVar6,uVar4,0);
    if (lVar6 != 0) {
      uVar4 = FUN_0364c220(lVar6,*(undefined8 *)
                                  System_Collections_Generic_List<ExceptionHandler>_TypeInfo);
      lVar7 = *(long *)(unaff_x19 + 0x38);
      if (lVar7 != 0) {
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar9 = *(long *)System_Collections_Generic_List<ExceptionPredicate>_TypeInfo;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
            LeanTween__value();
          }
          else {
            FUN_040101ec(lVar7,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          return lVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


