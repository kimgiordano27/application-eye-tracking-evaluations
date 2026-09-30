/*
FUNCTION_NAME: FUN_034d0f5c
ENTRY_POINT: 034d0f5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 FUN_034d0f5c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_04832d32 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_LowLevel_Unsafe_UnsafeAppendBuffer_Add<int>__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    DAT_04832d32 = 1;
  }
  puVar1 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeAppendBuffer_Add<int>__;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCode__);
    FUN_034efd20(uVar3,uVar2,0);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar2 = FUN_034d1098(param_1);
      FUN_034d1100();
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_034d2afc();
      FUN_034d2b70(uVar3,uVar2,0,0,0);
      return uVar3;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeAppendBuffer_Add<DrawingData_ProcessedBuilderData_CapturedState>__
                              );
    uVar4 = thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCode__);
    FUN_034efd98(uVar3,uVar2,uVar4,0);
  }
  uVar2 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_UnsafeAppendBuffer_CheckAlignment__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar2);
}


