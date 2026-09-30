/*
FUNCTION_NAME: FUN_03f9fa44
ENTRY_POINT: 03f9fa44
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_03f9fa44(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_042305b8;
  if ((DAT_04543f80 & 1) == 0) {
    FUN_01c5d288(OVRPlugin_Vector2f___TypeInfo);
    FUN_01c5d288(StringLiteral_14441);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(StringLiteral_14442);
    DAT_04543f80 = 1;
  }
  lVar2 = FUN_03f9f888();
  plVar3 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,1);
  if (plVar3 != (long *)0x0) {
    if ((param_1 != 0) &&
       (lVar4 = thunk_FUN_01c495e4(param_1,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar5,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    plVar3[4] = param_1;
    if (lVar2 != 0) {
      lVar2 = FUN_021fb584(lVar2,*(undefined8 *)StringLiteral_14442,plVar3,
                           *(undefined8 *)OVRPlugin_Vector2f___TypeInfo);
      uVar5 = 0;
      if (lVar2 != 0) {
        uVar5 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_14441);
        FUN_03f9f778(uVar5,lVar2);
      }
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


