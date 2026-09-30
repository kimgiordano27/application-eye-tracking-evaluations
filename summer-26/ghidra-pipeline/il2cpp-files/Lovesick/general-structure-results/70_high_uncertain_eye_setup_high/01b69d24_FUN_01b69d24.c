/*
FUNCTION_NAME: FUN_01b69d24
ENTRY_POINT: 01b69d24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_01b69d24(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = 
  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
  ;
  if ((DAT_0377e48d & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_OVRPlugin_<>c__DisplayClass526_0_<GetVirtualKeyboardModelAnimationStates>b__0__
                      );
    thunk_FUN_00d48444(StringLiteral_796);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    DAT_0377e48d = 1;
  }
  local_48 = 0;
  *param_3 = 0;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar3 != 0) {
    local_40 = param_1;
    uStack_38 = param_2;
    uVar4 = FUN_0129eff4(lVar3,&local_40,&local_48,*(undefined8 *)StringLiteral_796);
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      if (local_48 == 0) goto LAB_01b69e04;
      uVar2 = FUN_010c3738(local_48,param_3,
                           *(undefined8 *)
                            Method_OVRPlugin_<>c__DisplayClass526_0_<GetVirtualKeyboardModelAnimationStates>b__0__
                          );
    }
    return uVar2 & 1;
  }
LAB_01b69e04:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


