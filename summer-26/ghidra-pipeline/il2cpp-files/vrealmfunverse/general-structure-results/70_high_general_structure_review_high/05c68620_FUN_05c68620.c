/*
FUNCTION_NAME: FUN_05c68620
ENTRY_POINT: 05c68620
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure
*/


undefined4 FUN_05c68620(long param_1)

{
  long lVar1;
  undefined8 local_28;
  
  if ((DAT_066d7dc3 & 1) == 0) {
    FUN_02b3c81c(
                Method_Unity_XR_OpenXR_Features_PICOSupport_PassthroughLayerFeature_OnPostRenderCallBack__
                );
    FUN_02b3c81c(Method_Pico_Platform_Task<PlatformInitializeResult>__ctor__);
    DAT_066d7dc3 = 1;
  }
  local_28 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_05ca2828(param_1,0);
    }
    if (*(int *)(*(long *)Method_Pico_Platform_Task<PlatformInitializeResult>__ctor__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d7e70 == (code *)0x0) {
      DAT_066d7e70 = (code *)FUN_02b3c7e0(
                                         "UnityEngine.Texture::get_texelSize_Injected(System.IntPtr,UnityEngine.Vector2&)"
                                         );
    }
    (*DAT_066d7e70)(lVar1,&local_28);
    return (undefined4)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


