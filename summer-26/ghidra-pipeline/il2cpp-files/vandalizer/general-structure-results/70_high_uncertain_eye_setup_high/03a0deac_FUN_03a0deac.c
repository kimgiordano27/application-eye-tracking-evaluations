/*
FUNCTION_NAME: FUN_03a0deac
ENTRY_POINT: 03a0deac
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_03a0deac(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_5 + 0x38);
  if (lVar1 == 0) {
    FUN_0322bf50(param_5);
    lVar1 = *(long *)(param_5 + 0x38);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if ((*(byte *)(*(long *)(lVar1 + 0x10) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  lVar1 = thunk_FUN_0322f148();
  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__get_Length
            (lVar1,uVar2,param_2,param_3,param_4 & 1,
             *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x18));
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = param_1;
    thunk_FUN_0329bf60((long *)(lVar1 + 0x18),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


