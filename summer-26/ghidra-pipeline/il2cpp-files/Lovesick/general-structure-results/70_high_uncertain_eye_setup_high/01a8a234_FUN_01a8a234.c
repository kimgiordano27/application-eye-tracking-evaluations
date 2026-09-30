/*
FUNCTION_NAME: FUN_01a8a234
ENTRY_POINT: 01a8a234
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01a8a234(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_88 [2];
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  int local_44;
  
  if ((DAT_0377cd10 & 1) == 0) {
    thunk_FUN_00d48444(
                      Oculus_Interaction_Interactable<TouchHandGrabInteractor,_TouchHandGrabInteractable>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Data_DataTable_set_PrimaryKey__);
    thunk_FUN_00d48444(StringLiteral_5572);
    thunk_FUN_00d48444(UnityEngine_XR_Management_XRGeneralSettings_TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JValue_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_12_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ee6e0);
    DAT_0377cd10 = 1;
  }
  uStack_68 = 0;
  local_60 = 0;
  local_70 = 0;
  if ((*(long *)(param_1 + 0xd8) == 0) ||
     (lVar7 = FUN_012998a8(*(long *)(param_1 + 0xd8),*(undefined8 *)StringLiteral_5572),
     puVar5 = Method_System_Data_DataTable_set_PrimaryKey__, puVar4 = OVRPlugin_OVRP_1_12_0_TypeInfo
     , puVar3 = UnityEngine_XR_Management_XRGeneralSettings_TypeInfo,
     puVar2 = Newtonsoft_Json_Linq_JValue_TypeInfo,
     puVar1 = 
     Oculus_Interaction_Interactable<TouchHandGrabInteractor,_TouchHandGrabInteractable>_TypeInfo,
     lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01311764(lVar7,local_88,*(undefined8 *)PTR_DAT_033ee6e0);
  uStack_68 = uStack_80;
  local_60 = local_78;
  do {
    uVar8 = FUN_012c2b80(&local_70,*(undefined8 *)puVar2);
    if ((uVar8 & 1) == 0) goto LAB_01a8a38c;
    uVar6 = FUN_00c06fd8(&local_70,*(undefined8 *)puVar4);
    if (*(long *)(param_1 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_88[0] = uVar6;
    FUN_01299bc0(*(long *)(param_1 + 0xd8),local_88,&local_44,*(undefined8 *)puVar5);
  } while (local_44 != param_2);
  if (*(long *)(param_1 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_88[0] = uVar6;
  FUN_0129de0c(*(long *)(param_1 + 0xd8),local_88,*(undefined8 *)puVar1);
LAB_01a8a38c:
  FUN_012c2b7c(&local_70,*(undefined8 *)puVar3);
  return;
}


