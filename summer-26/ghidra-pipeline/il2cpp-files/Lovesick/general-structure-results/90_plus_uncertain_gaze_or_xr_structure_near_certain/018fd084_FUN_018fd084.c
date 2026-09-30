/*
FUNCTION_NAME: FUN_018fd084
ENTRY_POINT: 018fd084
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;strong_file_logging_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_018fd084(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if ((DAT_03779f32 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Resources_LoadAll<STMJitterData>__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_Page_DataSet<ushort>_SendUpdates__);
    thunk_FUN_00d48444(StringLiteral_13747);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextWriter_<DoWriteValueAsync>d__99>__
                      );
    thunk_FUN_00d48444(Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>__ctor__);
    thunk_FUN_00d48444(StringLiteral_645);
    DAT_03779f32 = 1;
  }
  puVar3 = StringLiteral_13747;
  puVar2 = StringLiteral_645;
  puVar1 = Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>__ctor__;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_013593d0(*(long *)(param_1 + 0x30),param_2,param_3,*(undefined8 *)StringLiteral_13747);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_00bf3248(uVar4,param_2,param_3,*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0x50) != 0) {
      FUN_013593d0(*(long *)(param_1 + 0x50),param_2,param_3,*(undefined8 *)puVar3);
      if (*(long *)(param_1 + 0x58) != 0) {
        FUN_013593d0(*(long *)(param_1 + 0x58),param_2,param_3,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextWriter_<DoWriteValueAsync>d__99>__
                    );
        if (*(long *)(param_1 + 0x60) != 0) {
          FUN_013593d0(*(long *)(param_1 + 0x60),param_2,param_3,
                       *(undefined8 *)Method_UnityEngine_Resources_LoadAll<STMJitterData>__);
          puVar1 = Method_UnityEngine_UIElements_UIR_Page_DataSet<ushort>_SendUpdates__;
          if (*(long *)(param_1 + 0x68) != 0) {
            FUN_013593d0(*(long *)(param_1 + 0x68),param_2 << 1,param_3 << 1,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_UIR_Page_DataSet<ushort>_SendUpdates__);
            if (*(long *)(param_1 + 0x68) != 0) {
              FUN_013593d0(*(long *)(param_1 + 0x68),param_2 << 1 | 1,param_3 << 1 | 1,
                           *(undefined8 *)puVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


