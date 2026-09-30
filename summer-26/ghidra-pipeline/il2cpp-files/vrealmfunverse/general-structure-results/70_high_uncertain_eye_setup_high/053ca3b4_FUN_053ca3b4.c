/*
FUNCTION_NAME: FUN_053ca3b4
ENTRY_POINT: 053ca3b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int FUN_053ca3b4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((param_2 >> 0x1e & 3) == 0) {
    return (int)param_2 << 1;
  }
  uVar2 = thunk_FUN_02ba3594(PTR_DAT_06313048);
  uVar2 = FUN_02b3c908(uVar2,2);
  puVar1 = PTR_DAT_06312310;
  local_24 = 0;
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_24);
  FUN_0275e13c(uVar2);
  FUN_0275a400(uVar2,uVar3);
  FUN_0275a434(uVar2,0,uVar3);
  local_28 = 0x3fffffff;
  uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                    (*(undefined8 *)(puVar1 + 0x48),&local_28);
  FUN_0275a400(uVar2,uVar3);
  FUN_0275a434(uVar2,1,uVar3);
  uVar3 = thunk_FUN_02ba3594(
                            UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ColumnData_TypeInfo
                            );
  uVar2 = FUN_0540ce80(uVar3,uVar2,0);
  thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
  uVar3 = thunk_FUN_02b79644();
  uVar4 = thunk_FUN_02ba3594(PTR_DAT_0632a090);
  FUN_04cf1968(uVar3,uVar4,uVar2,0);
  uVar2 = FUN_0540c738(uVar3,0);
  uVar3 = thunk_FUN_02ba3594(OVRManager_MrcCameraType_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar2,uVar3);
}


