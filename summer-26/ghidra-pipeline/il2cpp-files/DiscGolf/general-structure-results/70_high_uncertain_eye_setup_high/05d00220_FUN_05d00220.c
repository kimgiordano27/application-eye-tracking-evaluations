/*
FUNCTION_NAME: FUN_05d00220
ENTRY_POINT: 05d00220
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05d00220(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar3 = OVRPlugin_OVRP_1_36_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_102_0_TypeInfo;
  if ((DAT_06dc2e23 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff488);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_02d965b8(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    DAT_06dc2e23 = 1;
  }
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)puVar3;
  LeanTween__value((undefined8 *)(param_1 + 0x60));
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *(undefined4 *)(param_1 + 0x9c) = 100000;
  if (iVar1 == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05ce1d9c(param_1,0);
  puVar2 = PTR_DAT_069ff488;
  if (param_2 != 0) {
    lVar4 = FUN_05c0c424(param_2,0);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar7);
      lVar7 = *(long *)puVar2;
    }
    puVar2 = Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__;
    if (lVar4 == **(long **)(lVar7 + 0xb8)) {
      *(long *)(param_1 + 0xa0) = param_2;
      LeanTween__value((long *)(param_1 + 0xa0),param_2);
      uVar5 = *(undefined8 *)puVar2;
      *(undefined4 *)(param_1 + 0x50) = 1;
      uVar5 = thunk_FUN_02dd3144(uVar5);
      FUN_05ceea6c(uVar5,9,0);
      *(undefined8 *)(param_1 + 0x58) = uVar5;
      LeanTween__value((undefined8 *)(param_1 + 0x58),uVar5);
      return;
    }
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar5 = thunk_FUN_02dd3144();
    uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a1a9f0);
    FUN_05453f78(uVar5,uVar6,0);
    uVar6 = thunk_FUN_02dfd288(Method_System_Collections_Generic_HashSet<RTHandle>_Clear__);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,uVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


