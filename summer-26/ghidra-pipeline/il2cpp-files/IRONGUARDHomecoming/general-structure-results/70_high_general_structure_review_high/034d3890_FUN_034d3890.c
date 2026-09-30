/*
FUNCTION_NAME: FUN_034d3890
ENTRY_POINT: 034d3890
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_034d3890(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((DAT_04832d42 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    DAT_04832d42 = 1;
  }
  if (param_1 != 0) {
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_034d1098(param_1);
    System_Threading_SpinLock__ExitSlowPath();
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
  uVar1 = thunk_FUN_01f117cc();
  uVar2 = thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCode__);
  FUN_034efd20(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AsRef<FixedList64Bytes<byte>>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar1,uVar2);
}


