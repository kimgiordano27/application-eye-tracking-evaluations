/*
FUNCTION_NAME: FUN_033df698
ENTRY_POINT: 033df698
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


long FUN_033df698(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_0483255a & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<float2>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int2>__);
    DAT_0483255a = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = System_Threading_OSSpecificSynchronizationContext__Post
                      (uVar3,*(undefined8 *)
                              Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int2>__
                       ,0);
    uVar1 = *(undefined1 *)(param_1 + 0x18);
    lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<float2>__
                              );
    FUN_035ac8e8(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x10),uVar3);
    *(undefined1 *)(lVar2 + 0x29) = uVar1;
    *(undefined1 *)(lVar2 + 0x28) = 1;
    *(long *)(param_1 + 0x20) = lVar2;
    thunk_FUN_01f51358((long *)(param_1 + 0x20),lVar2);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  return lVar2;
}


