/*
FUNCTION_NAME: FUN_074fb340
ENTRY_POINT: 074fb340
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_074fb340(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__;
  if ((DAT_07ef4a24 & 1) == 0) {
    FUN_03642964(PTR_DAT_079fd158);
    FUN_03642964(Method_System_Nullable<OVRPlugin_Posef>_get_Value__);
    FUN_03642964(Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
    DAT_07ef4a24 = 1;
  }
  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar3,0);
  puVar2 = Method_System_Nullable<OVRPlugin_Posef>_get_Value__;
  puVar1 = PTR_DAT_079fd158;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    thunk_FUN_036b7ad0((long *)(lVar3 + 0x10),param_1);
    *(undefined8 *)(lVar3 + 0x18) = param_2;
    thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x18),param_2);
    FUN_074fb278(*(undefined8 *)(param_1 + 0x30));
    FUN_074fabd4(*(undefined8 *)(param_1 + 0x30));
    uVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
    FUN_04159c38(uVar4,lVar3,*(undefined8 *)puVar2,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
      *puVar5 = uVar4;
      thunk_FUN_036b7ad0(puVar5,uVar4);
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


