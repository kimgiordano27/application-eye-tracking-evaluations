/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SerializeInternal
ENTRY_POINT: 0325f64c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonSerializer__SerializeInternal
               (long param_1,long param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar2;
  
  if (param_2 == 0) {
    uVar3 = thunk_FUN_01c273e8(System_Net_TimerThread_TimerQueue_TypeInfo);
    uVar3 = FUN_03313b64(uVar3,0);
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar4 = thunk_FUN_01c496e0();
    uVar1 = thunk_FUN_01c273e8(PTR_DAT_0422fa88);
    FUN_03247d68(uVar4,uVar1,uVar3,0);
  }
  else {
    if (param_3 < 0) {
      uVar3 = thunk_FUN_01c273e8(OVR_OpenVR_IVRApplications_TypeInfo);
      uVar3 = FUN_03313b64(uVar3,0);
      thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
      uVar4 = thunk_FUN_01c496e0();
      puVar2 = PTR_DAT_04238118;
    }
    else {
      if (-1 < param_4) {
        if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
          if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0325f68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(**(long **)(param_1 + 0x10) + 0x348))();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_0325d978();
        }
        uVar3 = thunk_FUN_01c273e8(OVR_OpenVR_IVRChaperoneSetup_TypeInfo);
        uVar3 = FUN_03313b64(uVar3,0);
        thunk_FUN_01c273e8(PTR_DAT_04231770);
        uVar4 = thunk_FUN_01c496e0();
        FUN_032467a0(uVar4,uVar3,0);
        goto LAB_0325f7a0;
      }
      uVar3 = thunk_FUN_01c273e8(OVR_OpenVR_IVRApplications_TypeInfo);
      uVar3 = FUN_03313b64(uVar3,0);
      thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
      uVar4 = thunk_FUN_01c496e0();
      puVar2 = UnityEngine_ResourceManagement_IUpdateReceiver_TypeInfo;
    }
    uVar1 = thunk_FUN_01c273e8(puVar2);
    FUN_03243400(uVar4,uVar1,uVar3,0);
  }
LAB_0325f7a0:
  uVar3 = thunk_FUN_01c273e8(
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<bool>_WaitForCompletion__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar4,uVar3);
}


