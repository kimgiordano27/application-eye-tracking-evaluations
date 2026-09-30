/*
FUNCTION_NAME: OVRManager$$IsOpenXRLoaderActive
ENTRY_POINT: 04f4dc70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsOpenXRLoaderActive(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  undefined8 uVar4;
  
  if ((*(byte *)(unaff_x21 + 0xa13) & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_Dictionary<Stabbable,_int>_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0xa13) = 1;
  }
  lVar2 = FUN_04dc11c8(*(undefined8 *)(param_1 + 0x170),param_2,0);
  puVar1 = System_Collections_Generic_Dictionary<Stabbable,_int>_TypeInfo;
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)System_Collections_Generic_Dictionary<Stabbable,_int>_TypeInfo;
    lVar3 = thunk_FUN_02b79548(lVar2,uVar4);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)puVar1;
      *(long *)(param_1 + 0x170) = lVar3;
      lVar3 = thunk_FUN_02b79548(lVar2,uVar4);
      if (lVar3 != 0) goto LAB_04f4dcf4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(lVar2,uVar4);
  }
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
LAB_04f4dcf4:
  thunk_FUN_02bb0e9c(param_1 + 0x170,lVar3);
  return;
}


