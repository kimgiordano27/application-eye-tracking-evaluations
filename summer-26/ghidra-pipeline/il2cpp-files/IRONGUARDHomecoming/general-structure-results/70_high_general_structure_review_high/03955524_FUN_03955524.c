/*
FUNCTION_NAME: FUN_03955524
ENTRY_POINT: 03955524
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_03955524(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_048383d3 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList_RemoveAt<IntPtr>__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                      );
    DAT_048383d3 = 1;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar1 = FUN_034d30b4(param_1,0);
  if (lVar1 != 0) {
    uVar2 = FUN_03410770(lVar1,*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_UnsafeList_RemoveAt<IntPtr>__
                         ,*(undefined8 *)
                           Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                         ,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


