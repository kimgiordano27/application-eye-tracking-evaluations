/*
FUNCTION_NAME: FUN_034d003c
ENTRY_POINT: 034d003c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034d003c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 < 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                              );
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    FUN_034f3578(uVar4,uVar5,uVar3,0);
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    FUN_034cf27c(param_1);
    FUN_034cf2ec(param_1);
    if (param_2 <= *(long *)(param_1 + 0x40)) {
      lVar1 = thunk_FUN_01ec9a64(param_1 + 0x48,0);
      lVar2 = thunk_FUN_01ec9a64(param_1 + 0x38,0);
      if (lVar2 < param_2) {
        FUN_03596934(lVar2 + *(long *)(param_1 + 0x30),param_2 - lVar2,0);
      }
      thunk_FUN_01ec99d8(param_1 + 0x38,param_2,0);
      if (param_2 < lVar1) {
        thunk_FUN_01ec99d8(param_1 + 0x48,param_2,0);
        return;
      }
      return;
    }
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_System_UnitySerializationHolder_GetObjectData__);
    FUN_034c6a10(uVar4,uVar5);
  }
  else {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_System_IO_UnmanagedMemoryStream_EnsureWriteable__);
    FUN_0356663c(uVar4,uVar5,0);
  }
  uVar5 = thunk_FUN_01efb3a4(Method_System_IO_UnmanagedMemoryStream_WriteAsync__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar5);
}


