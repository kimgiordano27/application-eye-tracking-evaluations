/*
FUNCTION_NAME: FUN_097a4730
ENTRY_POINT: 097a4730
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_097a4730(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((DAT_0a5479d3 & 1) == 0) {
    FUN_04447ba8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_TypeInfo
                );
    FUN_04447ba8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_SubscribeRequest>>_TypeInfo
                );
    FUN_04447ba8(PTR_DAT_09f285f8);
    FUN_04447ba8(Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<short>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f28670);
    FUN_04447ba8(PTR_DAT_09f28600);
    FUN_04447ba8(Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<int>_TypeInfo);
    FUN_04447ba8(Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<long>_TypeInfo);
    FUN_04447ba8(Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<ushort>_TypeInfo);
    FUN_04447ba8(Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<uint>_TypeInfo);
    FUN_04447ba8(Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<ulong>_TypeInfo);
    FUN_04447ba8(Oculus_Interaction_RandomSampleConsensus_EvaluateModelScore<Vector3>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09fdc368);
    FUN_04447ba8(UnityEngine_UIElements_EventBase<AttachToPanelEvent>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f28678);
    FUN_04447ba8(PTR_DAT_09f28620);
    FUN_04447ba8(PTR_DAT_09fdc370);
    FUN_04447ba8(PTR_DAT_09f28628);
    DAT_0a5479d3 = 1;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  lVar2 = *(long *)(param_1 + 0x28);
  uVar1 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f28620);
  FUN_054b958c(uVar1,param_1,
               *(undefined8 *)
                Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<ushort>_TypeInfo,0);
  if (lVar2 != 0) {
    FUN_04c5a554(lVar2,uVar1,0,*(undefined8 *)PTR_DAT_09f285f8);
    lVar2 = *(long *)(param_1 + 0x28);
    uVar1 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f28628);
    FUN_054b958c(uVar1,param_1,
                 *(undefined8 *)
                  Oculus_Interaction_RandomSampleConsensus_EvaluateModelScore<Vector3>_TypeInfo,0);
    if (lVar2 != 0) {
      FUN_04c5a554(lVar2,uVar1,1,*(undefined8 *)PTR_DAT_09f28600);
      lVar2 = *(long *)(param_1 + 0x28);
      uVar1 = thunk_FUN_0448520c(*(undefined8 *)
                                  UnityEngine_UIElements_EventBase<AttachToPanelEvent>_TypeInfo);
      FUN_054b958c(uVar1,param_1,
                   *(undefined8 *)
                    Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<uint>_TypeInfo,0);
      if (lVar2 != 0) {
        FUN_04c5a554(lVar2,uVar1,0,
                     *(undefined8 *)
                      Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<short>_TypeInfo);
        lVar2 = *(long *)(param_1 + 0x28);
        uVar1 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f28678);
        FUN_054b958c(uVar1,param_1,
                     *(undefined8 *)
                      Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<ulong>_TypeInfo,0);
        if (lVar2 != 0) {
          FUN_04c5a554(lVar2,uVar1,0,*(undefined8 *)PTR_DAT_09f28670);
          lVar2 = *(long *)(param_1 + 0x28);
          uVar1 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fdc370);
          FUN_054b958c(uVar1,param_1,
                       *(undefined8 *)
                        Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<int>_TypeInfo,0);
          if (lVar2 != 0) {
            FUN_04c5a554(lVar2,uVar1,0,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_TypeInfo
                        );
            lVar2 = *(long *)(param_1 + 0x28);
            uVar1 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fdc368);
            FUN_054b958c(uVar1,param_1,
                         *(undefined8 *)
                          Unity_Netcode_NetworkVariableSerialization_EqualsDelegate<long>_TypeInfo,0
                        );
            if (lVar2 != 0) {
              FUN_04c5a554(lVar2,uVar1,0,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_SubscribeRequest>>_TypeInfo
                          );
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


