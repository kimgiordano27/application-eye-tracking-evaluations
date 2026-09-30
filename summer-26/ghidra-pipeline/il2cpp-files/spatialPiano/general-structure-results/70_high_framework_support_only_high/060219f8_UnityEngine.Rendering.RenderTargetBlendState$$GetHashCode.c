/*
FUNCTION_NAME: UnityEngine.Rendering.RenderTargetBlendState$$GetHashCode
ENTRY_POINT: 060219f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
UnityEngine_Rendering_RenderTargetBlendState__GetHashCode(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if ((*(byte *)(unaff_x20 + 0x3d2) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(Method_Unity_Jobs_IJobExtensions_Schedule<OVRScenePlane_GetBoundaryLengthJob>__);
    FUN_02f08768(Method_OVRTask_Builder_ToTask<List<OVRAnchor>,_OVRAnchor_FetchResult>__);
    FUN_02f08768(Method_OVRTask_Builder_ToTask<Guid,_OVRColocationSession_Result>__);
    FUN_02f08768(Method_OVRTask_Builder_ToTask<ulong,_OVRPlugin_Result>__);
    *(undefined1 *)(unaff_x20 + 0x3d2) = 1;
  }
  uVar1 = FUN_060fb038(0);
  if (param_2 != (long *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x1c8))(param_2,0,*(undefined8 *)(*param_2 + 0x1d0));
    if (lVar2 != 0) {
      if ((*(int *)(lVar2 + 0x18) < 1) ||
         (uVar3 = FUN_03a6ec50(lVar2,uVar1,
                               *(undefined8 *)
                                Method_OVRTask_Builder_ToTask<List<OVRAnchor>,_OVRAnchor_FetchResult>__
                              ), (uVar3 & 1) != 0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = thunk_FUN_060f6130(param_2,0);
        in_stack_00000008 =
             *(undefined8 *)
              Method_Unity_Jobs_IJobExtensions_Schedule<OVRScenePlane_GetBoundaryLengthJob>__;
        in_stack_00000010 = 0xffffffffffffffff;
        in_stack_00000018 = uVar1;
        uVar5 = FUN_0510aa48(&stack0x00000008,0);
        uVar4 = FUN_04f70018(*(undefined8 *)Method_OVRTask_Builder_ToTask<ulong,_OVRPlugin_Result>__
                             ,uVar4,uVar5,0);
        if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f48);
        }
        FUN_060a6338(uVar4,0);
        uVar4 = 0;
      }
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


