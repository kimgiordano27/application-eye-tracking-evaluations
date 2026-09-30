/*
FUNCTION_NAME: FUN_06b9c280
ENTRY_POINT: 06b9c280
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06b9c280(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar5 = 
  Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_FastCalculateRadiusOffset_000008E6_PostfixBurstDelegate>_get_Value__
  ;
  if ((DAT_075602b1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2428);
    FUN_03188a78(Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<Type,_Type>_ContainsKey__);
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_FastCalculateRadiusOffset_000008E6_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(PTR_DAT_070f93a8);
    DAT_075602b1 = 1;
  }
  puVar4 = Method_System_Collections_Generic_Dictionary<Type,_Type>_ContainsKey__;
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar7 = *(long *)puVar5;
  }
  iVar1 = *(int *)(*(long *)puVar4 + 0xe4);
  *(undefined4 *)(param_1 + 0x30) = **(undefined4 **)(lVar7 + 0xb8);
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
  }
  if (DAT_0755f93a == '\0') {
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<Type,_Type>_ContainsKey__);
    DAT_0755f93a = '\x01';
  }
  puVar6 = Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__;
  puVar3 = PTR_DAT_070f93a8;
  puVar2 = PTR_DAT_070c2428;
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar7 = *(long *)puVar4;
  }
  *(undefined8 *)(param_1 + 0x38) = **(undefined8 **)(lVar7 + 0xb8);
  FUN_05971910(param_1,0);
  uVar8 = FUN_03188b1c(*(undefined8 *)puVar6,**(undefined4 **)(*(long *)puVar5 + 0xb8));
  lVar7 = *(long *)puVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  uVar8 = FUN_03188b1c(*(undefined8 *)puVar2,**(undefined4 **)(lVar7 + 0xb8));
  lVar7 = *(long *)puVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  uVar8 = FUN_03188b1c(*(undefined8 *)puVar3,(*(int **)(lVar7 + 0xb8))[1] * **(int **)(lVar7 + 0xb8)
                      );
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  FUN_06b9c3f8(param_1);
  return;
}


