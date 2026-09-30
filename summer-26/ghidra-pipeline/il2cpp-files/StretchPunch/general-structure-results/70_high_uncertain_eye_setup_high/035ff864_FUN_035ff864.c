/*
FUNCTION_NAME: FUN_035ff864
ENTRY_POINT: 035ff864
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_035ff864(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_044a90dc & 1) == 0) {
    FUN_01d7d918(StringLiteral_1362);
    FUN_01d7d918(StringLiteral_1893);
    FUN_01d7d918(StringLiteral_1894);
    FUN_01d7d918(StringLiteral_1895);
    FUN_01d7d918(StringLiteral_1896);
    FUN_01d7d918(StringLiteral_1897);
    DAT_044a90dc = 1;
  }
  puVar3 = StringLiteral_1894;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      lVar5 = param_1[4];
      lVar4 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_1895);
      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (lVar4,*(undefined8 *)puVar3);
      if ((lVar4 == 0) ||
         (FUN_02f17d24(lVar4,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)StringLiteral_1893),
         lVar5 == 0)) goto LAB_035ff9fc;
      FUN_0267bf58(lVar5,lVar4,*(undefined8 *)StringLiteral_1897);
    }
    lVar4 = (**(code **)(*param_1 + 0x178))
                      (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(*param_1 + 0x180));
    lVar5 = (**(code **)(*param_1 + 0x178))
                      (param_1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(*param_1 + 0x180));
    if (*(long *)(param_2 + 0x10) != 0) {
      if (param_1[4] == 0) goto LAB_035ff9fc;
      FUN_0267bef8(param_1[4],*(undefined8 *)StringLiteral_1896);
    }
    if ((lVar4 == *(long *)(param_2 + 0x20)) && (lVar5 == *(long *)(param_2 + 0x28))) {
      return param_2;
    }
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(*(long *)StringLiteral_1362 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar4 = FUN_035a98d0(uVar2,uVar1,lVar4,lVar5,0);
    return lVar4;
  }
LAB_035ff9fc:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


