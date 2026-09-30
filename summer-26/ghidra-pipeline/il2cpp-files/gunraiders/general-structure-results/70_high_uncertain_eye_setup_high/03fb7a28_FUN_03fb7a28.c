/*
FUNCTION_NAME: FUN_03fb7a28
ENTRY_POINT: 03fb7a28
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_03fb7a28(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_042305b8;
  if ((DAT_04544119 & 1) == 0) {
    FUN_01c5d288(OVRPlugin_Vector2f___TypeInfo);
    FUN_01c5d288(StringLiteral_14736);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(StringLiteral_14772);
    DAT_04544119 = 1;
  }
  lVar2 = FUN_03fb7984();
  plVar3 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,2);
  if ((param_1 == 0) || (plVar3 == (long *)0x0)) goto LAB_03fb7b64;
  lVar8 = *(long *)(param_1 + 0x10);
  if ((lVar8 != 0) &&
     (lVar4 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_03fb7b6c:
    uVar5 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,0);
  }
  uVar7 = *(uint *)(plVar3 + 3);
  if (uVar7 != 0) {
    plVar3[4] = lVar8;
    if (param_2 != 0) {
      lVar8 = *(long *)(param_2 + 0x10);
      if (lVar8 != 0) {
        lVar4 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar4 == 0) goto LAB_03fb7b6c;
        uVar7 = *(uint *)(plVar3 + 3);
      }
      if (uVar7 < 2) goto LAB_03fb7b68;
      plVar3[5] = lVar8;
      puVar1 = StringLiteral_14736;
      if (lVar2 != 0) {
        uVar5 = FUN_021fb584(lVar2,*(undefined8 *)StringLiteral_14772,plVar3,
                             *(undefined8 *)OVRPlugin_Vector2f___TypeInfo);
        uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
        FUN_03fb7864(uVar6,uVar5);
        return uVar6;
      }
    }
LAB_03fb7b64:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
LAB_03fb7b68:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


