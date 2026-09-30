/*
FUNCTION_NAME: FUN_033df788
ENTRY_POINT: 033df788
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_033df788(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_0483255b & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<float2>__);
    DAT_0483255b = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int4>__
                              );
    FUN_034efd20(uVar4,uVar3,0);
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetEqual<UHull,_UEvent,_Tessellator_TestHullEventE>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = System_Threading_OSSpecificSynchronizationContext__Post(uVar4,param_2,0);
  if (((param_3 & 1) == 0) && (uVar1 = FUN_034d1720(uVar4,0), (uVar1 & 1) == 0)) {
    return 0;
  }
  lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<float2>__
                            );
  FUN_035ac8e8(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x10),uVar4);
  *(undefined2 *)(lVar2 + 0x28) = 1;
  return lVar2;
}


