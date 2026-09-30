/*
FUNCTION_NAME: FUN_04edb3b4
ENTRY_POINT: 04edb3b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04edb3b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_066c95aa & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063136e0);
    FUN_02b3c81c(PTR_DAT_06322dd8);
    FUN_02b3c81c(
                UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_XRHandSubsystemPlayerLoopRunnerUpdateSystem_var
                );
    FUN_02b3c81c(OVRPlugin_Qpl_Annotation_Builder_var);
    FUN_02b3c81c(System_Action<ChangeEvent<bool>>_TypeInfo);
    DAT_066c95aa = 1;
  }
  puVar2 = OVRPlugin_Qpl_Annotation_Builder_var;
  puVar1 = PTR_DAT_06322dd8;
  if (*(char *)(param_1 + 0x41) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_04edb530(param_1);
  }
  lVar6 = *(long *)(param_1 + 0x30);
  uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_03fbdb0c(uVar3,param_1,*(undefined8 *)puVar2,0);
  if (lVar6 != 0) {
    FUN_04af04cc(lVar6,uVar3,*(undefined8 *)System_Action<ChangeEvent<bool>>_TypeInfo);
    puVar2 = 
    UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_XRHandSubsystemPlayerLoopRunnerUpdateSystem_var
    ;
    puVar1 = PTR_DAT_063136e0;
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(lVar6 + 0x1f8);
      uVar3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063136e0);
      FUN_03fbbd20(uVar3,param_1,*(undefined8 *)puVar2,0);
      lVar4 = FUN_04dc11c8(uVar7,uVar3,0);
      if (lVar4 != 0) {
        uVar3 = *(undefined8 *)puVar1;
        lVar5 = thunk_FUN_02b79548(lVar4,uVar3);
        if (lVar5 != 0) {
          uVar3 = *(undefined8 *)puVar1;
          *(long *)(lVar6 + 0x1f8) = lVar5;
          lVar5 = thunk_FUN_02b79548(lVar4,uVar3);
          if (lVar5 != 0) goto LAB_04edb518;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar4,uVar3);
      }
      lVar5 = 0;
      *(undefined8 *)(lVar6 + 0x1f8) = 0;
LAB_04edb518:
      thunk_FUN_02bb0e9c(lVar6 + 0x1f8,lVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


