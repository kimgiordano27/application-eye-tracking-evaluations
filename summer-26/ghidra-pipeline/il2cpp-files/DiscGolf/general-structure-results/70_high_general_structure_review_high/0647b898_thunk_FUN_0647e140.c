/*
FUNCTION_NAME: thunk_FUN_0647e140
ENTRY_POINT: 0647b898
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_4
*/


void thunk_FUN_0647e140(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__2__;
  puVar1 = Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__;
  if ((DAT_06dcd0d4 & 1) == 0) {
    FUN_02d965b8(
                Method_OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_System_Collections_IEnumerator_Reset__
                );
    FUN_02d965b8(
                Method_OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_System_Collections_IEnumerator_Reset__
                );
    FUN_02d965b8(PTR_DAT_06a0d2b0);
    FUN_02d965b8(Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__
                );
    FUN_02d965b8(Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__);
    FUN_02d965b8(Method_OVRSpaceQuery_Options_ToQueryInfo__);
    FUN_02d965b8(Method_OVRSpaceQuery_Options_ToQueryInfo2__);
    FUN_02d965b8(Method_OVRSpaceQuery_Options_ValidateSingleFilter__);
    FUN_02d965b8(Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__2__
                );
    DAT_06dcd0d4 = 1;
  }
  FUN_03c9e354(param_1,*(undefined8 *)puVar1);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_06a0d2b0;
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRSpaceQuery_Options_ToQueryInfo__);
    FUN_048fcdc0(lVar7,uVar8,*(undefined8 *)Method_OVRSpaceQuery_Options_ToQueryInfo2__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar3 = 
  Method_OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_System_Collections_IEnumerator_Reset__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035b70b8(lVar7,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[2];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__
                              );
    FUN_04901ab0(lVar7,uVar8,*(undefined8 *)Method_OVRSpaceQuery_Options_ValidateSingleFilter__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar2 = 
  Method_OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_System_Collections_IEnumerator_Reset__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035babf8(lVar7,*(undefined8 *)puVar2);
  return;
}


