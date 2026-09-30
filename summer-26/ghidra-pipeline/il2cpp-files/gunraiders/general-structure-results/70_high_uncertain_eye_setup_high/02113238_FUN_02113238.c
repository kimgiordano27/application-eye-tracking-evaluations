/*
FUNCTION_NAME: FUN_02113238
ENTRY_POINT: 02113238
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_02113238(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = OVRPlugin_Bone___TypeInfo;
  if ((DAT_0452f708 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042393a8);
    FUN_01c5d288(OVRPlugin_BoneCapsule___TypeInfo);
    FUN_01c5d288(OVRPlugin_Bone___TypeInfo);
    FUN_01c5d288(System_Collections_Hashtable_bucket___TypeInfo);
    DAT_0452f708 = 1;
  }
  lVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_03313b6c(lVar4,0);
  puVar2 = System_Collections_Hashtable_bucket___TypeInfo;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_2;
    puVar3 = OVRPlugin_BoneCapsule___TypeInfo;
    puVar1 = PTR_DAT_042393a8;
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_02112d1c(uVar5,lVar4,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_02112db8(param_1,uVar5,param_3 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


