/*
FUNCTION_NAME: FUN_05583f14
ENTRY_POINT: 05583f14
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_05583f14(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  
  if ((DAT_066d168f & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631e990);
    FUN_02b3c81c(UnityEngine_UIElements_Foldout_var);
    FUN_02b3c81c(OVRPlugin_SystemHeadset_TypeInfo);
    DAT_066d168f = 1;
  }
  local_18 = 0;
  if ((param_1 != 0) && (0 < *(int *)(param_1 + 0x10))) {
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    param_1 = FUN_0558123c(param_1);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((*(int *)(param_1 + 0x10) == 0) ||
       (iVar2 = FUN_04c0ec4c(param_1,*(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo,4,0),
       iVar2 != -1)) goto LAB_05584000;
  }
  if (*(int *)(*(long *)PTR_DAT_0631e990 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar3 = FUN_055cd394(param_1,0,&local_18,0);
  if ((uVar3 & 1) != 0) {
    return local_18;
  }
LAB_05584000:
  uVar4 = thunk_FUN_02ba3594(PTR_DAT_06313048);
  uVar4 = FUN_02b3c908(uVar4,2);
  FUN_0275e13c();
  FUN_0275a400(uVar4,param_1);
  FUN_0275a434(uVar4,0,param_1);
  puVar1 = OVRPlugin_OVRP_1_87_0_TypeInfo;
  uVar5 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_87_0_TypeInfo);
  FUN_0275a400(uVar4,uVar5);
  uVar5 = thunk_FUN_02ba3594(puVar1);
  FUN_0275a434(uVar4,1,uVar5);
  uVar5 = thunk_FUN_02ba3594(
                            System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_TypeInfo
                            );
  uVar4 = FUN_05580fc0(uVar5,uVar4);
  thunk_FUN_02ba3594(PTR_DAT_06328948);
  uVar5 = thunk_FUN_02b79644();
  FUN_04d63e8c(uVar5,uVar4,0);
  uVar4 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_Dictionary<Guid,_PlayerEditorConnectionEvents_MessageTypeSubscribers>_Add__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar5,uVar4);
}


