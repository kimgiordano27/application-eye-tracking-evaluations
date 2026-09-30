/*
FUNCTION_NAME: FUN_05ce74c4
ENTRY_POINT: 05ce74c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_05ce74c4(undefined4 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  puVar1 = Method_System_Data_Common_SByteStorage_Aggregate__;
  if ((DAT_066da38a & 1) == 0) {
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_SceneDebugger_<GetBestPoseFromRaycastDebugger>b__58_0__
                );
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_SceneDebugger_<GetClosestSeatPoseDebugger>b__56_0__);
    FUN_02b3c81c(Method_System_Data_Common_SByteStorage_Aggregate__);
    DAT_066da38a = 1;
  }
  lVar2 = *(long *)puVar1;
  if ((param_2 & 1) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    plVar4 = *(long **)(lVar2 + 0xb8);
  }
  else {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    plVar4 = (long *)(*(long *)(lVar2 + 0xb8) + 8);
  }
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    uVar3 = FUN_04458f24(lVar2,param_1,
                         *(undefined8 *)
                          Method_Meta_XR_MRUtilityKit_SceneDebugger_<GetBestPoseFromRaycastDebugger>b__58_0__
                        );
    if ((uVar3 & 1) != 0) {
      FUN_0445a1d8(lVar2,param_1,
                   *(undefined8 *)
                    Method_Meta_XR_MRUtilityKit_SceneDebugger_<GetClosestSeatPoseDebugger>b__56_0__)
      ;
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


