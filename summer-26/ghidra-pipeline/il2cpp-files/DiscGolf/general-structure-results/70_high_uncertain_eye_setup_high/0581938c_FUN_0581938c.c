/*
FUNCTION_NAME: FUN_0581938c
ENTRY_POINT: 0581938c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0581938c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = OVRManager_TypeInfo;
  puVar1 = PTR_DAT_06a0d9f8;
  if ((DAT_06dc06af & 1) == 0) {
    FUN_02d965b8(OVRMeshRenderer_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d9f8);
    FUN_02d965b8(PTR_DAT_06a0aae0);
    FUN_02d965b8(OVRMixedReality_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0f3e8);
    FUN_02d965b8(OVRManager_TypeInfo);
    DAT_06dc06af = 1;
  }
  FUN_0588c430(param_2,*(undefined8 *)puVar2,0);
  lVar5 = FUN_035a206c(param_1,*(undefined8 *)puVar1);
  puVar3 = OVRMeshRenderer_TypeInfo;
  puVar1 = PTR_DAT_06a0aae0;
  if (lVar5 != 0) {
    iVar4 = FUN_045e4584(lVar5,*(undefined8 *)PTR_DAT_06a0f3e8);
    if (iVar4 != 0) {
      uVar6 = FUN_035a206c(param_2,*(undefined8 *)puVar3);
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar7);
      }
      FUN_05824aa0(uVar6,*(undefined8 *)puVar2);
      FUN_05825494(0,lVar5,uVar6);
      return;
    }
    lVar5 = thunk_FUN_02dd3048(param_2,*(undefined8 *)OVRMixedReality_TypeInfo);
    if (lVar5 == 0) {
      lVar5 = FUN_035a206c(param_2,*(undefined8 *)puVar3);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05824aa0(lVar5,*(undefined8 *)puVar2);
    FUN_05824be8(lVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


