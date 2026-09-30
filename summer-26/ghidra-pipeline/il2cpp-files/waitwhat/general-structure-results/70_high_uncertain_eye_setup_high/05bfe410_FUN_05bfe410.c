/*
FUNCTION_NAME: FUN_05bfe410
ENTRY_POINT: 05bfe410
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_05bfe410(undefined4 param_1,long param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_071170a8;
                    /* catch() { ... } // from try @ 05bfe408 with catch @ 05bfe420 */
                    /* try { // try from 05bfe424 to 05cfe42b has its CatchHandler @ 05bfe47c */
                    /* try { // try from 05bfe42c to 05cfe44b has its CatchHandler @ 05bfe130 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bfe250 with catch @ 05bfe430
                        */
  if ((DAT_0754eeb3 & 1) == 0) {
    FUN_03188a78(PTR_DAT_071170a8);
    DAT_0754eeb3 = 1;
  }
  local_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (DAT_0754eed6 == '\0') {
    FUN_03188a78(PTR_DAT_071170a8);
    DAT_0754eed6 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar3 = *(long *)puVar1;
  }
  if (*(int *)(*(long *)(lVar3 + 0xb8) + 8) == 0) {
    uVar2 = 2;
    if ((param_4 & 1) != 0) {
      uVar2 = 3;
    }
    if ((param_4 & 1) == 0) {
      if (param_2 == 0) goto OVRPlugin_<>c__<_cctor>b__810_147;
      iVar5 = *(int *)(param_2 + 0x18);
    }
    else {
      if (param_2 == 0) goto OVRPlugin_<>c__<_cctor>b__810_147;
      iVar5 = *(int *)(param_2 + 0x18);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar5 >> 1;
    }
    local_48 = FUN_05856458(param_2,3,0);
    uVar4 = FUN_05856388(&local_48,0);
    if ((param_3 == 0) || (lVar3 = *(long *)(param_3 + 0x18), lVar3 == 0)) {
OVRPlugin_<>c__<_cctor>b__810_147:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar2 = FUN_05bfd828(param_1,uVar4,iVar5,uVar2,param_3 + 0x10,param_3 + 0x14,lVar3,
                         *(undefined4 *)(lVar3 + 0x18),param_3 + 0x20,0,0);
    FUN_0585646c(&local_48,0);
  }
  else {
    uVar2 = 0xfffff768;
  }
  return uVar2;
}


