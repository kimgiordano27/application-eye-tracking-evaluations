/*
FUNCTION_NAME: FUN_055840c0
ENTRY_POINT: 055840c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8 FUN_055840c0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_066d1690 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06328948);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_0631e990);
    FUN_02b3c81c(UnityEngine_UIElements_Foldout_var);
    FUN_02b3c81c(System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_TypeInfo);
    FUN_02b3c81c(OVRPlugin_SystemHeadset_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_87_0_TypeInfo);
    DAT_066d1690 = 1;
  }
  *param_2 = 0;
  thunk_FUN_02bb0e9c(param_2,0);
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) < 1)) {
LAB_055841cc:
    if (*(int *)(*(long *)PTR_DAT_0631e990 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_055cd394(param_1,0,param_2,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    plVar3 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
    if (plVar3 == (long *)0x0) {
LAB_055842dc:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (param_1 != 0) goto LAB_05584220;
  }
  else {
    if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    param_1 = FUN_0558123c(param_1);
    if (param_1 == 0) goto LAB_055842dc;
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar2 = FUN_04c0ec4c(param_1,*(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo,4,0),
       iVar2 == -1)) goto LAB_055841cc;
    plVar3 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
    if (plVar3 == (long *)0x0) goto LAB_055842dc;
LAB_05584220:
    lVar5 = thunk_FUN_02b79548(param_1,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar5 == 0) goto LAB_055842e0;
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = param_1;
    thunk_FUN_02bb0e9c(plVar3 + 4,param_1);
    puVar1 = OVRPlugin_OVRP_1_87_0_TypeInfo;
    if ((*(long *)OVRPlugin_OVRP_1_87_0_TypeInfo != 0) &&
       (lVar5 = thunk_FUN_02b79548(*(long *)OVRPlugin_OVRP_1_87_0_TypeInfo,
                                   *(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_055842e0:
      uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar6,0);
    }
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = *(long *)puVar1;
      thunk_FUN_02bb0e9c();
      uVar6 = FUN_0542bdac(*(undefined8 *)
                            System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_TypeInfo
                           ,plVar3,0);
      uVar7 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06328948);
      FUN_04d63e8c(uVar7,uVar6,0);
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


