/*
FUNCTION_NAME: FUN_07508ad4
ENTRY_POINT: 07508ad4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


int FUN_07508ad4(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((DAT_07ef4ae6 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a00448);
    FUN_03642964(PTR_DAT_07a00450);
    FUN_03642964(PTR_DAT_079f4558);
    FUN_03642964(Method_OVRTaskBuilder<OVRPlugin_Result>_SetResult__);
    FUN_03642964(Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
    FUN_03642964(Method_OVRTaskBuilder<OVRPlugin_Result>_get_Task__);
    FUN_03642964(PTR_DAT_079fb398);
    FUN_03642964(PTR_DAT_079f49e0);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRSceneManager_Metrics>>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
                );
    DAT_07ef4ae6 = 1;
  }
  puVar1 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    iVar3 = *(int *)(lVar6 + 0x68);
    if (iVar3 == 0) {
      if (*(char *)(lVar6 + 0x22) == '\0') {
        bVar2 = true;
      }
      else {
        bVar2 = *(long *)(lVar6 + 0x48) != 0;
      }
      uVar9 = *(undefined8 *)(lVar6 + 0x30);
      lVar6 = *(long *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar6 = *(long *)puVar1;
      }
      puVar7 = *(undefined8 **)(lVar6 + 0xb8);
      lVar10 = puVar7[1];
      uVar8 = *(undefined8 *)
               Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRSceneManager_Metrics>>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
      ;
      if (lVar10 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar11 = *puVar7;
        lVar10 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a00450);
        FUN_04159c38(lVar10,uVar11,
                     *(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetResult__,0);
        plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar4 = lVar10;
        thunk_FUN_036b7ad0(plVar4,lVar10);
      }
      uVar9 = FUN_03cb9310(uVar9,lVar10,*(undefined8 *)PTR_DAT_07a00448);
      uVar9 = FUN_074efb28(uVar9,*(undefined8 *)PTR_DAT_079fb398);
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_07508d10;
      uVar11 = *(undefined8 *)(lVar6 + 0x28);
      if (*(long *)(lVar6 + 0x58) == 0) {
        uVar5 = *(undefined8 *)PTR_DAT_079f49e0;
      }
      else {
        plVar4 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4558,1);
        if ((*(long *)(param_1 + 0x10) == 0) || (plVar4 == (long *)0x0)) goto LAB_07508d10;
        lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x58);
        if ((lVar6 != 0) &&
           (lVar10 = thunk_FUN_0367fd24(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar10 == 0)) {
          uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar9,0);
        }
        if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        plVar4[4] = lVar6;
        thunk_FUN_036b7ad0(plVar4 + 4,lVar6);
        uVar5 = FUN_074eed20(*(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_get_Task__,
                             plVar4);
      }
      FUN_074ef51c(bVar2,uVar8,uVar9,uVar11,uVar5);
      iVar3 = 1;
    }
    return iVar3;
  }
LAB_07508d10:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


