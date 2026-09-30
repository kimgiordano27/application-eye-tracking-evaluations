/*
FUNCTION_NAME: FUN_075c1468
ENTRY_POINT: 075c1468
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_075c1468(undefined4 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  if ((DAT_0826e769 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86480);
    FUN_0373b518(PTR_DAT_07d8a590);
    FUN_0373b518(OVRPlugin_OVRP_1_39_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_3_0_TypeInfo);
    DAT_0826e769 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar1 = FUN_049cea5c(param_2,*(undefined8 *)OVRPlugin_OVRP_1_39_0_TypeInfo);
  uVar3 = *param_1;
  if (DAT_0826e758 == (code *)0x0) {
    DAT_0826e758 = (code *)FUN_0373b4dc(
                                       "UnityEngine.SceneManagement.Scene::GetRootCountInternal(System.Int32)"
                                       );
  }
  iVar2 = (*DAT_0826e758)(uVar3);
  if (iVar1 < iVar2) {
    uVar3 = *param_1;
    if (DAT_0826e758 == (code *)0x0) {
      DAT_0826e758 = (code *)FUN_0373b4dc(
                                         "UnityEngine.SceneManagement.Scene::GetRootCountInternal(System.Int32)"
                                         );
    }
    uVar3 = (*DAT_0826e758)(uVar3);
    FUN_049cea78(param_2,uVar3,*(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_062658d0(*(undefined8 *)(param_2 + 0x10),0,iVar1,0);
  }
  uVar3 = *param_1;
  if (DAT_0826e740 == (code *)0x0) {
    DAT_0826e740 = (code *)FUN_0373b4dc(
                                       "UnityEngine.SceneManagement.Scene::IsValidInternal(System.Int32)"
                                       );
  }
  uVar4 = (*DAT_0826e740)(uVar3);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_07d86480 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar4 = FUN_07553b7c(0);
    if ((uVar4 & 1) == 0) {
      uVar3 = *param_1;
      if (DAT_0826e748 == (code *)0x0) {
        DAT_0826e748 = (code *)FUN_0373b4dc(
                                           "UnityEngine.SceneManagement.Scene::GetIsLoadedInternal(System.Int32)"
                                           );
      }
      uVar4 = (*DAT_0826e748)(uVar3);
      if ((uVar4 & 1) == 0) {
        thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
        uVar5 = thunk_FUN_037788cc();
        puVar7 = OVRPlugin_OVRP_1_41_0_TypeInfo;
        goto LAB_075c16b0;
      }
    }
    uVar3 = *param_1;
    if (DAT_0826e758 == (code *)0x0) {
      DAT_0826e758 = (code *)FUN_0373b4dc(
                                         "UnityEngine.SceneManagement.Scene::GetRootCountInternal(System.Int32)"
                                         );
    }
    iVar1 = (*DAT_0826e758)(uVar3);
    if (iVar1 != 0) {
      uVar3 = *param_1;
      if (DAT_0826e760 == (code *)0x0) {
        DAT_0826e760 = (code *)FUN_0373b4dc(
                                           "UnityEngine.SceneManagement.Scene::GetRootGameObjectsInternal(System.Int32,System.Object)"
                                           );
      }
                    /* WARNING: Could not recover jumptable at 0x075c165c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0826e760)(uVar3,param_2);
      return;
    }
    return;
  }
  thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
  uVar5 = thunk_FUN_037788cc();
  puVar7 = OVRPlugin_OVRP_1_40_0_TypeInfo;
LAB_075c16b0:
  uVar6 = thunk_FUN_037a15ac(puVar7);
  FUN_061a843c(uVar5,uVar6,0);
  uVar6 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_42_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar5,uVar6);
}


